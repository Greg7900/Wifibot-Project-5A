// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arbotix_msgs:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__MSG__DETAIL__ANALOG__BUILDER_HPP_
#define ARBOTIX_MSGS__MSG__DETAIL__ANALOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arbotix_msgs/msg/detail/analog__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arbotix_msgs
{

namespace msg
{

namespace builder
{

class Init_Analog_value
{
public:
  explicit Init_Analog_value(::arbotix_msgs::msg::Analog & msg)
  : msg_(msg)
  {}
  ::arbotix_msgs::msg::Analog value(::arbotix_msgs::msg::Analog::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arbotix_msgs::msg::Analog msg_;
};

class Init_Analog_header
{
public:
  Init_Analog_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Analog_value header(::arbotix_msgs::msg::Analog::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Analog_value(msg_);
  }

private:
  ::arbotix_msgs::msg::Analog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::msg::Analog>()
{
  return arbotix_msgs::msg::builder::Init_Analog_header();
}

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__MSG__DETAIL__ANALOG__BUILDER_HPP_
