// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wifibot_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WIFIBOT_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define WIFIBOT_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wifibot_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wifibot_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_relay3
{
public:
  explicit Init_Status_relay3(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::wifibot_msgs::msg::Status relay3(::wifibot_msgs::msg::Status::_relay3_type arg)
  {
    msg_.relay3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_relay2
{
public:
  explicit Init_Status_relay2(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_relay3 relay2(::wifibot_msgs::msg::Status::_relay2_type arg)
  {
    msg_.relay2 = std::move(arg);
    return Init_Status_relay3(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_relay1
{
public:
  explicit Init_Status_relay1(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_relay2 relay1(::wifibot_msgs::msg::Status::_relay1_type arg)
  {
    msg_.relay1 = std::move(arg);
    return Init_Status_relay2(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_version
{
public:
  explicit Init_Status_version(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_relay1 version(::wifibot_msgs::msg::Status::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_Status_relay1(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_odometry_right
{
public:
  explicit Init_Status_odometry_right(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_version odometry_right(::wifibot_msgs::msg::Status::_odometry_right_type arg)
  {
    msg_.odometry_right = std::move(arg);
    return Init_Status_version(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_odometry_left
{
public:
  explicit Init_Status_odometry_left(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_odometry_right odometry_left(::wifibot_msgs::msg::Status::_odometry_left_type arg)
  {
    msg_.odometry_left = std::move(arg);
    return Init_Status_odometry_right(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_speed_front_right
{
public:
  explicit Init_Status_speed_front_right(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_odometry_left speed_front_right(::wifibot_msgs::msg::Status::_speed_front_right_type arg)
  {
    msg_.speed_front_right = std::move(arg);
    return Init_Status_odometry_left(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_speed_front_left
{
public:
  explicit Init_Status_speed_front_left(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_speed_front_right speed_front_left(::wifibot_msgs::msg::Status::_speed_front_left_type arg)
  {
    msg_.speed_front_left = std::move(arg);
    return Init_Status_speed_front_right(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_adc4
{
public:
  explicit Init_Status_adc4(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_speed_front_left adc4(::wifibot_msgs::msg::Status::_adc4_type arg)
  {
    msg_.adc4 = std::move(arg);
    return Init_Status_speed_front_left(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_adc3
{
public:
  explicit Init_Status_adc3(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_adc4 adc3(::wifibot_msgs::msg::Status::_adc3_type arg)
  {
    msg_.adc3 = std::move(arg);
    return Init_Status_adc4(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_adc2
{
public:
  explicit Init_Status_adc2(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_adc3 adc2(::wifibot_msgs::msg::Status::_adc2_type arg)
  {
    msg_.adc2 = std::move(arg);
    return Init_Status_adc3(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_adc1
{
public:
  explicit Init_Status_adc1(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_adc2 adc1(::wifibot_msgs::msg::Status::_adc1_type arg)
  {
    msg_.adc1 = std::move(arg);
    return Init_Status_adc2(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_current
{
public:
  explicit Init_Status_current(::wifibot_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_adc1 current(::wifibot_msgs::msg::Status::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_Status_adc1(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

class Init_Status_battery_level
{
public:
  Init_Status_battery_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_current battery_level(::wifibot_msgs::msg::Status::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_Status_current(msg_);
  }

private:
  ::wifibot_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wifibot_msgs::msg::Status>()
{
  return wifibot_msgs::msg::builder::Init_Status_battery_level();
}

}  // namespace wifibot_msgs

#endif  // WIFIBOT_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
