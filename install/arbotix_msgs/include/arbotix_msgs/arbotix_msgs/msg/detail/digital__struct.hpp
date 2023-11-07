// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arbotix_msgs:msg/Digital.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__STRUCT_HPP_
#define ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__msg__Digital __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__msg__Digital __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Digital_
{
  using Type = Digital_<ContainerAllocator>;

  explicit Digital_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->direction = 0;
    }
  }

  explicit Digital_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
      this->direction = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _value_type =
    uint8_t;
  _value_type value;
  using _direction_type =
    uint8_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOW =
    0u;
  static constexpr uint8_t HIGH =
    255u;
  static constexpr uint8_t INPUT =
    0u;
  static constexpr uint8_t OUTPUT =
    255u;

  // pointer types
  using RawPtr =
    arbotix_msgs::msg::Digital_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::msg::Digital_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::msg::Digital_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::msg::Digital_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__msg__Digital
    std::shared_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__msg__Digital
    std::shared_ptr<arbotix_msgs::msg::Digital_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Digital_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const Digital_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Digital_

// alias to use template instance with default allocator
using Digital =
  arbotix_msgs::msg::Digital_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Digital_<ContainerAllocator>::LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Digital_<ContainerAllocator>::HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Digital_<ContainerAllocator>::INPUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Digital_<ContainerAllocator>::OUTPUT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__STRUCT_HPP_
