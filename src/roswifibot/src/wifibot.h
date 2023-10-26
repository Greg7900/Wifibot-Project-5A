#ifndef SERVER_WIFIBOT_H
#define SERVER_WIFIBOT_H

#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/int8.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/string.hpp>

#include "wifibot_msgs/msg/status.hpp"

typedef struct _sposition
{
  double x;
  double y;
  double th;
} position;

class Wifibot : public rclcpp::Node
{
public:

  Wifibot();
  ~Wifibot();
  void update();


private:
  void velocityCallback(const geometry_msgs::msg::Twist & vel);
  void computeOdometry(double dleft, double dright);
  double getSpeedLinear(double speedLeft, double speedRight);
  double getSpeedAngular(double speedLeft, double speedRight);

  
  auto createQuaternionMsgFromYaw(double yaw)
  {
    tf2::Quaternion q;
    q.setRPY(0, 0, yaw);
    return tf2::toMsg(q);
  }
  
  //rclcpp::Node _nh, _nh_private;
  std::shared_ptr<tf2_ros::TransformBroadcaster> _odomBroadcast;
  geometry_msgs::msg::TransformStamped _odomTf;
  
  wifibot::Driver *_pDriver;

  rclcpp::Publisher<wifibot_msgs::msg::Status>::SharedPtr _pubStatus;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr _pubOdometry;
  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr _pubRobotBatteryVoltage, _pubComputerBatteryVoltage;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr _pubIsCharging;
  rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr _subSpeeds;

  rclcpp::Time _timeCurrent;
  rclcpp::Time _timeLast;

  std::string _frameBase;
  std::string _frameOdom;
  position _position;

  double _odometryLeftLast;
  double _odometryRightLast;
  double _entrax;
  bool _updated;
  double _speedLeft;
  double _speedRight;
  double _batteryMinVoltage, _batteryMaxVoltage;
};

#endif
