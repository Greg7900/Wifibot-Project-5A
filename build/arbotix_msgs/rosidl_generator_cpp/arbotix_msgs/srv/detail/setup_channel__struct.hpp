// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arbotix_msgs:srv/SetupChannel.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__STRUCT_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__srv__SetupChannel_Request __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__srv__SetupChannel_Request __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetupChannel_Request_
{
  using Type = SetupChannel_Request_<ContainerAllocator>;

  explicit SetupChannel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->pin = 0;
      this->value = 0;
      this->rate = 0;
    }
  }

  explicit SetupChannel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->pin = 0;
      this->value = 0;
      this->rate = 0;
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _pin_type =
    uint8_t;
  _pin_type pin;
  using _value_type =
    uint8_t;
  _value_type value;
  using _rate_type =
    uint8_t;
  _rate_type rate;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__pin(
    const uint8_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__value(
    const uint8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__rate(
    const uint8_t & _arg)
  {
    this->rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__srv__SetupChannel_Request
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__srv__SetupChannel_Request
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetupChannel_Request_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->pin != other.pin) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetupChannel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetupChannel_Request_

// alias to use template instance with default allocator
using SetupChannel_Request =
  arbotix_msgs::srv::SetupChannel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arbotix_msgs


#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__srv__SetupChannel_Response __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__srv__SetupChannel_Response __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetupChannel_Response_
{
  using Type = SetupChannel_Response_<ContainerAllocator>;

  explicit SetupChannel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetupChannel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__srv__SetupChannel_Response
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__srv__SetupChannel_Response
    std::shared_ptr<arbotix_msgs::srv::SetupChannel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetupChannel_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetupChannel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetupChannel_Response_

// alias to use template instance with default allocator
using SetupChannel_Response =
  arbotix_msgs::srv::SetupChannel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arbotix_msgs

namespace arbotix_msgs
{

namespace srv
{

struct SetupChannel
{
  using Request = arbotix_msgs::srv::SetupChannel_Request;
  using Response = arbotix_msgs::srv::SetupChannel_Response;
};

}  // namespace srv

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__STRUCT_HPP_
