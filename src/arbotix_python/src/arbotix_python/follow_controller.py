#!/usr/bin/env python3

"""
  follow_controller.py - controller for a kinematic chain
  Copyright (c) 2011 Vanadium Labs LLC.  All right reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
      * Neither the name of Vanadium Labs LLC nor the names of its 
        contributors may be used to endorse or promote products derived 
        from this software without specific prior written permission.
  
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL VANADIUM LABS BE LIABLE FOR ANY DIRECT, INDIRECT,
  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
  OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
"""

import rclpy, actionlib

from control_msgs.msg import FollowJointTrajectoryAction
from trajectory_msgs.msg import JointTrajectory
from diagnostic_msgs.msg import *

from arbotix_python.ax12 import *
from arbotix_python.controllers import *

class FollowController(Controller):
    """ A controller for joint chains, exposing a FollowJointTrajectory action. """

    def __init__(self, device, name):
        Controller.__init__(self, device, name)
        self.interpolating = 0

        # parameters: rates and joints
        self.rate = rclpy.declare_parameter('~controllers/'+name+'/rate',50.0)
        self.joints = rclpy.declare_parameter('~controllers/'+name+'/joints')
        self.index = rclpy.declare_parameter('~controllers/'+name+'/index', len(device.controllers))
        for joint in self.joints:
            self.device.joints[joint].controller = self

        # action server
        name = rclpy.declare_parameter('~controllers/'+name+'/action_name','follow_joint_trajectory')
        self.server = actionlib.SimpleActionServer(name, FollowJointTrajectoryAction, execute_cb=self.actionCb, auto_start=False)

        # good old trajectory
        rclpy.create_subscription(JointTrajectory,self.name+'/command',  self.commandCb)
        self.executing = False

        rclpy.get_logger().info("Started FollowController ("+self.name+"). Joints: " + str(self.joints) + " on C" + str(self.index))

    def startup(self):
        self.server.start()

    def actionCb(self, goal):
        rclpy.get_logger().info(self.name + ": Action goal recieved.")
        traj = goal.trajectory

        if set(self.joints) != set(traj.joint_names):
            for j in self.joints:
                if j not in traj.joint_names:
                    msg = "Trajectory joint names does not match action controlled joints." + str(traj.joint_names)
                    rclpy.get_logger().error(msg)
                    self.server.set_aborted(text=msg)
                    return
            rclpy.get_logger().warn("Extra joints in trajectory")

        if not traj.points:
            msg = "Trajectory empy."
            rclpy.get_logger().error(msg)
            self.server.set_aborted(text=msg)
            return

        try:
            indexes = [traj.joint_names.index(joint) for joint in self.joints]
        except ValueError as val:
            msg = "Trajectory invalid."
            rclpy.get_logger().error(msg)
            self.server.set_aborted(text=msg)
            return

        retval = self.executeTrajectory(traj) # retval: 1: successful, 0: canceled, -1: failed
        if retval == 1:   
            self.server.set_succeeded()
            rclpy.get_logger().info(self.name + ": Done.")
        elif retval == 0:
            self.server.set_preempted(text="Goal canceled.")     
            rclpy.get_logger().info(self.name + ": Goal canceled.")
        else:
            self.server.set_aborted(text="Execution failed.")
            rclpy.get_logger().info(self.name + ": Execution failed.")
 
    
    def commandCb(self, msg):
        # don't execute if executing an action
        if self.server.is_active():
            rclpy.get_logger().info(self.name+": Received trajectory, but action is active")
            return
        self.executing = True
        self.executeTrajectory(msg)
        self.executing = False    

    def executeTrajectory(self, traj):
        rclpy.get_logger().info("Executing trajectory")
        rclpy.get_logger().debug(traj)
        # carry out trajectory
        try:
            indexes = [traj.joint_names.index(joint) for joint in self.joints]
        except ValueError as val:
            rclpy.get_logger().error("Invalid joint in trajectory.")
            return -1

        # get starting timestamp, MoveIt uses 0, need to fill in
        start = traj.header.stamp
        if start.secs == 0 and start.nsecs == 0:
            start = rclpy.Time.now()

        r = rclpy.Rate(self.rate)
        last = [ self.device.joints[joint].position for joint in self.joints ]
        for point in traj.points:
            while rclpy.Time.now() + rclpy.Duration(0.01) < start:
                if self.server.is_preempt_requested():
                    return 0
                rclpy.sleep(0.01)
            desired = [ point.positions[k] for k in indexes ]
            endtime = start + point.time_from_start
            while rclpy.Time.now() + rclpy.Duration(0.01) < endtime:
                # check that preempt has not been requested by the client
                if self.server.is_preempt_requested():
                    return 0

                err = [ (d-c) for d,c in zip(desired,last) ]
                velocity = [ abs(x / (self.rate * (endtime - rclpy.Time.now()).to_sec())) for x in err ]
                rclpy.get_logger().debug(err)
                for i in range(len(self.joints)):
                    if err[i] > 0.001 or err[i] < -0.001:
                        cmd = err[i] 
                        top = velocity[i]
                        if cmd > top:
                            cmd = top
                        elif cmd < -top:
                            cmd = -top
                        last[i] += cmd
                        self.device.joints[self.joints[i]].setControlOutput(last[i])
                    else:
                        velocity[i] = 0
                r.sleep()
        return 1

    def active(self):
        """ Is controller overriding servo internal control? """
        return self.server.is_active() or self.executing

    def getDiagnostics(self):
        """ Get a diagnostics status. """
        msg = DiagnosticStatus()
        msg.name = self.name
        msg.level = DiagnosticStatus.OK
        msg.message = "OK"
        if self.active():
            msg.values.append(KeyValue("State", "Active"))
        else:
            msg.values.append(KeyValue("State", "Not Active"))
        return msg

