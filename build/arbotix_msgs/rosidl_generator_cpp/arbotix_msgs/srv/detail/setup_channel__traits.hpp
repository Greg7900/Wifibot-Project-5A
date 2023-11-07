// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arbotix_msgs:srv/SetupChannel.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__TRAITS_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arbotix_msgs/srv/detail/setup_channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arbotix_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetupChannel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: rate
  {
    out << "rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetupChannel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetupChannel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arbotix_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arbotix_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arbotix_msgs::srv::SetupChannel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arbotix_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arbotix_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arbotix_msgs::srv::SetupChannel_Request & msg)
{
  return arbotix_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arbotix_msgs::srv::SetupChannel_Request>()
{
  return "arbotix_msgs::srv::SetupChannel_Request";
}

template<>
inline const char * name<arbotix_msgs::srv::SetupChannel_Request>()
{
  return "arbotix_msgs/srv/SetupChannel_Request";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::SetupChannel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arbotix_msgs::srv::SetupChannel_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arbotix_msgs::srv::SetupChannel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arbotix_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetupChannel_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetupChannel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetupChannel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arbotix_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arbotix_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arbotix_msgs::srv::SetupChannel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arbotix_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arbotix_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arbotix_msgs::srv::SetupChannel_Response & msg)
{
  return arbotix_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arbotix_msgs::srv::SetupChannel_Response>()
{
  return "arbotix_msgs::srv::SetupChannel_Response";
}

template<>
inline const char * name<arbotix_msgs::srv::SetupChannel_Response>()
{
  return "arbotix_msgs/srv/SetupChannel_Response";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::SetupChannel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arbotix_msgs::srv::SetupChannel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arbotix_msgs::srv::SetupChannel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arbotix_msgs::srv::SetupChannel>()
{
  return "arbotix_msgs::srv::SetupChannel";
}

template<>
inline const char * name<arbotix_msgs::srv::SetupChannel>()
{
  return "arbotix_msgs/srv/SetupChannel";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::SetupChannel>
  : std::integral_constant<
    bool,
    has_fixed_size<arbotix_msgs::srv::SetupChannel_Request>::value &&
    has_fixed_size<arbotix_msgs::srv::SetupChannel_Response>::value
  >
{
};

template<>
struct has_bounded_size<arbotix_msgs::srv::SetupChannel>
  : std::integral_constant<
    bool,
    has_bounded_size<arbotix_msgs::srv::SetupChannel_Request>::value &&
    has_bounded_size<arbotix_msgs::srv::SetupChannel_Response>::value
  >
{
};

template<>
struct is_service<arbotix_msgs::srv::SetupChannel>
  : std::true_type
{
};

template<>
struct is_service_request<arbotix_msgs::srv::SetupChannel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arbotix_msgs::srv::SetupChannel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__TRAITS_HPP_
