#!/usr/bin/env python3

"""
  max_sonar.py - convert analog stream into range measurements
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

import rclpy

from sensor_msgs.msg import Range
from arbotix_msgs.msg import Analog
from arbotix_msgs.srv import SetupChannel, SetupChannelRequest

from arbotix_python.sensors import *

class max_sonar:
    def __init__(self):
        rclpy.init(None)
        node=rclpy.create_node("max_sonar")
        
        self.sensor = maxSonar() 

        # start channel broadcast using SetupAnalogIn
        node.wait_for_service('arbotix/SetupAnalogIn')
        analog_srv = node.create_client(SetupChannel,'arbotix/SetupAnalogIn') 
        
        req = SetupChannelRequest()
        req.topic_name = node.declare_parameter("~name")
        req.pin = node.declare_parameter("~pin")
        req.rate = int(node.declare_parameter("~rate",10))
        analog_srv(req)

        # setup a range message to use
        self.msg = Range()
        self.msg.radiation_type = self.sensor.radiation_type
        self.msg.field_of_view = self.sensor.field_of_view
        self.msg.min_range = self.sensor.min_range
        self.msg.max_range = self.sensor.max_range

        # publish/subscribe
        self.pub = node.create_publisher(Range,"sonar_range",  queue_size=5)
        node.create_subscription(Analog,"arbotix/"+req.topic_name,  self.readingCb)

        rclpy.spin(node)
        
    def readingCb(self, msg):
        # convert msg.value into range.range
        self.msg.header.stamp = rclpy.Time.now()
        self.msg.range = self.sensor.convert(msg.value<<2)
        self.pub.publish(self.msg)

if __name__=="__main__":
    max_sonar()

