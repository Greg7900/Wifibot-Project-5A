// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wifibot_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WIFIBOT_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define WIFIBOT_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wifibot_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__wifibot_msgs__msg__Status __declspec(deprecated)
#endif

namespace wifibot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0.0;
      this->current = 0.0;
      this->adc1 = 0l;
      this->adc2 = 0l;
      this->adc3 = 0l;
      this->adc4 = 0l;
      this->speed_front_left = 0.0;
      this->speed_front_right = 0.0;
      this->odometry_left = 0.0;
      this->odometry_right = 0.0;
      this->version = 0l;
      this->relay1 = 0;
      this->relay2 = 0;
      this->relay3 = 0;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0.0;
      this->current = 0.0;
      this->adc1 = 0l;
      this->adc2 = 0l;
      this->adc3 = 0l;
      this->adc4 = 0l;
      this->speed_front_left = 0.0;
      this->speed_front_right = 0.0;
      this->odometry_left = 0.0;
      this->odometry_right = 0.0;
      this->version = 0l;
      this->relay1 = 0;
      this->relay2 = 0;
      this->relay3 = 0;
    }
  }

  // field types and members
  using _battery_level_type =
    double;
  _battery_level_type battery_level;
  using _current_type =
    double;
  _current_type current;
  using _adc1_type =
    int32_t;
  _adc1_type adc1;
  using _adc2_type =
    int32_t;
  _adc2_type adc2;
  using _adc3_type =
    int32_t;
  _adc3_type adc3;
  using _adc4_type =
    int32_t;
  _adc4_type adc4;
  using _speed_front_left_type =
    double;
  _speed_front_left_type speed_front_left;
  using _speed_front_right_type =
    double;
  _speed_front_right_type speed_front_right;
  using _odometry_left_type =
    double;
  _odometry_left_type odometry_left;
  using _odometry_right_type =
    double;
  _odometry_right_type odometry_right;
  using _version_type =
    int32_t;
  _version_type version;
  using _relay1_type =
    int8_t;
  _relay1_type relay1;
  using _relay2_type =
    int8_t;
  _relay2_type relay2;
  using _relay3_type =
    int8_t;
  _relay3_type relay3;

  // setters for named parameter idiom
  Type & set__battery_level(
    const double & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__current(
    const double & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__adc1(
    const int32_t & _arg)
  {
    this->adc1 = _arg;
    return *this;
  }
  Type & set__adc2(
    const int32_t & _arg)
  {
    this->adc2 = _arg;
    return *this;
  }
  Type & set__adc3(
    const int32_t & _arg)
  {
    this->adc3 = _arg;
    return *this;
  }
  Type & set__adc4(
    const int32_t & _arg)
  {
    this->adc4 = _arg;
    return *this;
  }
  Type & set__speed_front_left(
    const double & _arg)
  {
    this->speed_front_left = _arg;
    return *this;
  }
  Type & set__speed_front_right(
    const double & _arg)
  {
    this->speed_front_right = _arg;
    return *this;
  }
  Type & set__odometry_left(
    const double & _arg)
  {
    this->odometry_left = _arg;
    return *this;
  }
  Type & set__odometry_right(
    const double & _arg)
  {
    this->odometry_right = _arg;
    return *this;
  }
  Type & set__version(
    const int32_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__relay1(
    const int8_t & _arg)
  {
    this->relay1 = _arg;
    return *this;
  }
  Type & set__relay2(
    const int8_t & _arg)
  {
    this->relay2 = _arg;
    return *this;
  }
  Type & set__relay3(
    const int8_t & _arg)
  {
    this->relay3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wifibot_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const wifibot_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wifibot_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wifibot_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wifibot_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wifibot_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wifibot_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wifibot_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wifibot_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wifibot_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wifibot_msgs__msg__Status
    std::shared_ptr<wifibot_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wifibot_msgs__msg__Status
    std::shared_ptr<wifibot_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->adc1 != other.adc1) {
      return false;
    }
    if (this->adc2 != other.adc2) {
      return false;
    }
    if (this->adc3 != other.adc3) {
      return false;
    }
    if (this->adc4 != other.adc4) {
      return false;
    }
    if (this->speed_front_left != other.speed_front_left) {
      return false;
    }
    if (this->speed_front_right != other.speed_front_right) {
      return false;
    }
    if (this->odometry_left != other.odometry_left) {
      return false;
    }
    if (this->odometry_right != other.odometry_right) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->relay1 != other.relay1) {
      return false;
    }
    if (this->relay2 != other.relay2) {
      return false;
    }
    if (this->relay3 != other.relay3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  wifibot_msgs::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wifibot_msgs

#endif  // WIFIBOT_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
