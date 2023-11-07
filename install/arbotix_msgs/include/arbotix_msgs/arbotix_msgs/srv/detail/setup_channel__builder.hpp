// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arbotix_msgs:srv/SetupChannel.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__BUILDER_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arbotix_msgs/srv/detail/setup_channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arbotix_msgs
{

namespace srv
{

namespace builder
{

class Init_SetupChannel_Request_rate
{
public:
  explicit Init_SetupChannel_Request_rate(::arbotix_msgs::srv::SetupChannel_Request & msg)
  : msg_(msg)
  {}
  ::arbotix_msgs::srv::SetupChannel_Request rate(::arbotix_msgs::srv::SetupChannel_Request::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arbotix_msgs::srv::SetupChannel_Request msg_;
};

class Init_SetupChannel_Request_value
{
public:
  explicit Init_SetupChannel_Request_value(::arbotix_msgs::srv::SetupChannel_Request & msg)
  : msg_(msg)
  {}
  Init_SetupChannel_Request_rate value(::arbotix_msgs::srv::SetupChannel_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_SetupChannel_Request_rate(msg_);
  }

private:
  ::arbotix_msgs::srv::SetupChannel_Request msg_;
};

class Init_SetupChannel_Request_pin
{
public:
  explicit Init_SetupChannel_Request_pin(::arbotix_msgs::srv::SetupChannel_Request & msg)
  : msg_(msg)
  {}
  Init_SetupChannel_Request_value pin(::arbotix_msgs::srv::SetupChannel_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_SetupChannel_Request_value(msg_);
  }

private:
  ::arbotix_msgs::srv::SetupChannel_Request msg_;
};

class Init_SetupChannel_Request_topic_name
{
public:
  Init_SetupChannel_Request_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetupChannel_Request_pin topic_name(::arbotix_msgs::srv::SetupChannel_Request::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_SetupChannel_Request_pin(msg_);
  }

private:
  ::arbotix_msgs::srv::SetupChannel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arbotix_msgs::srv::SetupChannel_Request>()
{
  return arbotix_msgs::srv::builder::Init_SetupChannel_Request_topic_name();
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
auto build<::arbotix_msgs::srv::SetupChannel_Response>()
{
  return ::arbotix_msgs::srv::SetupChannel_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__BUILDER_HPP_
