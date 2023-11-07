// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arbotix_msgs:srv/Enable.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__ENABLE__BUILDER_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__ENABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arbotix_msgs/srv/detail/enable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arbotix_msgs
{

namespace srv
{

namespace builder
{

class Init_Enable_Request_enable
{
public:
  Init_Enable_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arbotix_msgs::srv::Enable_Request enable(::arbotix_msgs::srv::Enable_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arbotix_msgs::srv::Enable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::srv::Enable_Request>()
{
  return arbotix_msgs::srv::builder::Init_Enable_Request_enable();
}

}  // namespace arbotix_msgs


namespace arbotix_msgs
{

namespace srv
{

namespace builder
{

class Init_Enable_Response_state
{
public:
  Init_Enable_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arbotix_msgs::srv::Enable_Response state(::arbotix_msgs::srv::Enable_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arbotix_msgs::srv::Enable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::srv::Enable_Response>()
{
  return arbotix_msgs::srv::builder::Init_Enable_Response_state();
}

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__SRV__DETAIL__ENABLE__BUILDER_HPP_
