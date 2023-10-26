// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wifibot_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WIFIBOT_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define WIFIBOT_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wifibot_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wifibot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: adc1
  {
    out << "adc1: ";
    rosidl_generator_traits::value_to_yaml(msg.adc1, out);
    out << ", ";
  }

  // member: adc2
  {
    out << "adc2: ";
    rosidl_generator_traits::value_to_yaml(msg.adc2, out);
    out << ", ";
  }

  // member: adc3
  {
    out << "adc3: ";
    rosidl_generator_traits::value_to_yaml(msg.adc3, out);
    out << ", ";
  }

  // member: adc4
  {
    out << "adc4: ";
    rosidl_generator_traits::value_to_yaml(msg.adc4, out);
    out << ", ";
  }

  // member: speed_front_left
  {
    out << "speed_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_left, out);
    out << ", ";
  }

  // member: speed_front_right
  {
    out << "speed_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_right, out);
    out << ", ";
  }

  // member: odometry_left
  {
    out << "odometry_left: ";
    rosidl_generator_traits::value_to_yaml(msg.odometry_left, out);
    out << ", ";
  }

  // member: odometry_right
  {
    out << "odometry_right: ";
    rosidl_generator_traits::value_to_yaml(msg.odometry_right, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: relay1
  {
    out << "relay1: ";
    rosidl_generator_traits::value_to_yaml(msg.relay1, out);
    out << ", ";
  }

  // member: relay2
  {
    out << "relay2: ";
    rosidl_generator_traits::value_to_yaml(msg.relay2, out);
    out << ", ";
  }

  // member: relay3
  {
    out << "relay3: ";
    rosidl_generator_traits::value_to_yaml(msg.relay3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: adc1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adc1: ";
    rosidl_generator_traits::value_to_yaml(msg.adc1, out);
    out << "\n";
  }

  // member: adc2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adc2: ";
    rosidl_generator_traits::value_to_yaml(msg.adc2, out);
    out << "\n";
  }

  // member: adc3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adc3: ";
    rosidl_generator_traits::value_to_yaml(msg.adc3, out);
    out << "\n";
  }

  // member: adc4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adc4: ";
    rosidl_generator_traits::value_to_yaml(msg.adc4, out);
    out << "\n";
  }

  // member: speed_front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_left, out);
    out << "\n";
  }

  // member: speed_front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_front_right, out);
    out << "\n";
  }

  // member: odometry_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometry_left: ";
    rosidl_generator_traits::value_to_yaml(msg.odometry_left, out);
    out << "\n";
  }

  // member: odometry_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odometry_right: ";
    rosidl_generator_traits::value_to_yaml(msg.odometry_right, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: relay1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay1: ";
    rosidl_generator_traits::value_to_yaml(msg.relay1, out);
    out << "\n";
  }

  // member: relay2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay2: ";
    rosidl_generator_traits::value_to_yaml(msg.relay2, out);
    out << "\n";
  }

  // member: relay3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relay3: ";
    rosidl_generator_traits::value_to_yaml(msg.relay3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wifibot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wifibot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wifibot_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  wifibot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wifibot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wifibot_msgs::msg::Status & msg)
{
  return wifibot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wifibot_msgs::msg::Status>()
{
  return "wifibot_msgs::msg::Status";
}

template<>
inline const char * name<wifibot_msgs::msg::Status>()
{
  return "wifibot_msgs/msg/Status";
}

template<>
struct has_fixed_size<wifibot_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wifibot_msgs::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wifibot_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIFIBOT_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
