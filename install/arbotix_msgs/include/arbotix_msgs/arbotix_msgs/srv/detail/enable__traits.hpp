// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arbotix_msgs:srv/Enable.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__ENABLE__TRAITS_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__ENABLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arbotix_msgs/srv/detail/enable__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arbotix_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Enable_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Enable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Enable_Request & msg, bool use_flow_style = false)
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
  const arbotix_msgs::srv::Enable_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arbotix_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arbotix_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arbotix_msgs::srv::Enable_Request & msg)
{
  return arbotix_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arbotix_msgs::srv::Enable_Request>()
{
  return "arbotix_msgs::srv::Enable_Request";
}

template<>
inline const char * name<arbotix_msgs::srv::Enable_Request>()
{
  return "arbotix_msgs/srv/Enable_Request";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::Enable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arbotix_msgs::srv::Enable_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arbotix_msgs::srv::Enable_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arbotix_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Enable_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Enable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Enable_Response & msg, bool use_flow_style = false)
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
  const arbotix_msgs::srv::Enable_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arbotix_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arbotix_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arbotix_msgs::srv::Enable_Response & msg)
{
  return arbotix_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arbotix_msgs::srv::Enable_Response>()
{
  return "arbotix_msgs::srv::Enable_Response";
}

template<>
inline const char * name<arbotix_msgs::srv::Enable_Response>()
{
  return "arbotix_msgs/srv/Enable_Response";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::Enable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arbotix_msgs::srv::Enable_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arbotix_msgs::srv::Enable_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arbotix_msgs::srv::Enable>()
{
  return "arbotix_msgs::srv::Enable";
}

template<>
inline const char * name<arbotix_msgs::srv::Enable>()
{
  return "arbotix_msgs/srv/Enable";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::Enable>
  : std::integral_constant<
    bool,
    has_fixed_size<arbotix_msgs::srv::Enable_Request>::value &&
    has_fixed_size<arbotix_msgs::srv::Enable_Response>::value
  >
{
};

template<>
struct has_bounded_size<arbotix_msgs::srv::Enable>
  : std::integral_constant<
    bool,
    has_bounded_size<arbotix_msgs::srv::Enable_Request>::value &&
    has_bounded_size<arbotix_msgs::srv::Enable_Response>::value
  >
{
};

template<>
struct is_service<arbotix_msgs::srv::Enable>
  : std::true_type
{
};

template<>
struct is_service_request<arbotix_msgs::srv::Enable_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arbotix_msgs::srv::Enable_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARBOTIX_MSGS__SRV__DETAIL__ENABLE__TRAITS_HPP_
