// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arbotix_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arbotix_msgs/srv/detail/set_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arbotix_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeed_Request_speed
{
public:
  Init_SetSpeed_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arbotix_msgs::srv::SetSpeed_Request speed(::arbotix_msgs::srv::SetSpeed_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arbotix_msgs::srv::SetSpeed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::srv::SetSpeed_Request>()
{
  return arbotix_msgs::srv::builder::Init_SetSpeed_Request_speed();
}

}  // namespace arbotix_msgs


namespace arbotix_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::srv::SetSpeed_Response>()
{
  return ::arbotix_msgs::srv::SetSpeed_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__SRV__DETAIL__SET_SPEED__BUILDER_HPP_
