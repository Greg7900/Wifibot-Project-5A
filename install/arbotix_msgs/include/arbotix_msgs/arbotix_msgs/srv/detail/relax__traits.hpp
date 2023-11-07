// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arbotix_msgs:srv/Relax.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__RELAX__TRAITS_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__RELAX__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arbotix_msgs/srv/detail/relax__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arbotix_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Relax_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Relax_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Relax_Request & msg, bool use_flow_style = false)
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
  const arbotix_msgs::srv::Relax_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arbotix_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arbotix_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arbotix_msgs::srv::Relax_Request & msg)
{
  return arbotix_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arbotix_msgs::srv::Relax_Request>()
{
  return "arbotix_msgs::srv::Relax_Request";
}

template<>
inline const char * name<arbotix_msgs::srv::Relax_Request>()
{
  return "arbotix_msgs/srv/Relax_Request";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::Relax_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arbotix_msgs::srv::Relax_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arbotix_msgs::srv::Relax_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arbotix_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Relax_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Relax_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Relax_Response & msg, bool use_flow_style = false)
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
  const arbotix_msgs::srv::Relax_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arbotix_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arbotix_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const arbotix_msgs::srv::Relax_Response & msg)
{
  return arbotix_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arbotix_msgs::srv::Relax_Response>()
{
  return "arbotix_msgs::srv::Relax_Response";
}

template<>
inline const char * name<arbotix_msgs::srv::Relax_Response>()
{
  return "arbotix_msgs/srv/Relax_Response";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::Relax_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arbotix_msgs::srv::Relax_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arbotix_msgs::srv::Relax_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arbotix_msgs::srv::Relax>()
{
  return "arbotix_msgs::srv::Relax";
}

template<>
inline const char * name<arbotix_msgs::srv::Relax>()
{
  return "arbotix_msgs/srv/Relax";
}

template<>
struct has_fixed_size<arbotix_msgs::srv::Relax>
  : std::integral_constant<
    bool,
    has_fixed_size<arbotix_msgs::srv::Relax_Request>::value &&
    has_fixed_size<arbotix_msgs::srv::Relax_Response>::value
  >
{
};

template<>
struct has_bounded_size<arbotix_msgs::srv::Relax>
  : std::integral_constant<
    bool,
    has_bounded_size<arbotix_msgs::srv::Relax_Request>::value &&
    has_bounded_size<arbotix_msgs::srv::Relax_Response>::value
  >
{
};

template<>
struct is_service<arbotix_msgs::srv::Relax>
  : std::true_type
{
};

template<>
struct is_service_request<arbotix_msgs::srv::Relax_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arbotix_msgs::srv::Relax_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARBOTIX_MSGS__SRV__DETAIL__RELAX__TRAITS_HPP_
