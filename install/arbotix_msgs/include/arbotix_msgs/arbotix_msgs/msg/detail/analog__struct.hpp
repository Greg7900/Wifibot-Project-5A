// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arbotix_msgs:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__MSG__DETAIL__ANALOG__STRUCT_HPP_
#define ARBOTIX_MSGS__MSG__DETAIL__ANALOG__STRUCT_HPP_

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
# define DEPRECATED__arbotix_msgs__msg__Analog __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__msg__Analog __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Analog_
{
  using Type = Analog_<ContainerAllocator>;

  explicit Analog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit Analog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _value_type =
    uint16_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__value(
    const uint16_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arbotix_msgs::msg::Analog_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::msg::Analog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::msg::Analog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::msg::Analog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__msg__Analog
    std::shared_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__msg__Analog
    std::shared_ptr<arbotix_msgs::msg::Analog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Analog_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Analog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Analog_

// alias to use template instance with default allocator
using Analog =
  arbotix_msgs::msg::Analog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__MSG__DETAIL__ANALOG__STRUCT_HPP_
