// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arbotix_msgs:msg/Digital.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__BUILDER_HPP_
#define ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arbotix_msgs/msg/detail/digital__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arbotix_msgs
{

namespace msg
{

namespace builder
{

class Init_Digital_direction
{
public:
  explicit Init_Digital_direction(::arbotix_msgs::msg::Digital & msg)
  : msg_(msg)
  {}
  ::arbotix_msgs::msg::Digital direction(::arbotix_msgs::msg::Digital::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arbotix_msgs::msg::Digital msg_;
};

class Init_Digital_value
{
public:
  explicit Init_Digital_value(::arbotix_msgs::msg::Digital & msg)
  : msg_(msg)
  {}
  Init_Digital_direction value(::arbotix_msgs::msg::Digital::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Digital_direction(msg_);
  }

private:
  ::arbotix_msgs::msg::Digital msg_;
};

class Init_Digital_header
{
public:
  Init_Digital_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Digital_value header(::arbotix_msgs::msg::Digital::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Digital_value(msg_);
  }

private:
  ::arbotix_msgs::msg::Digital msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::msg::Digital>()
{
  return arbotix_msgs::msg::builder::Init_Digital_header();
}

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__BUILDER_HPP_
