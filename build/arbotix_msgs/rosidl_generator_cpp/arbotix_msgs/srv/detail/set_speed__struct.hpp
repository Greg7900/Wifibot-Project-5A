// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arbotix_msgs:srv/SetSpeed.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__srv__SetSpeed_Request __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__srv__SetSpeed_Request __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSpeed_Request_
{
  using Type = SetSpeed_Request_<ContainerAllocator>;

  explicit SetSpeed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  explicit SetSpeed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  // field types and members
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__srv__SetSpeed_Request
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__srv__SetSpeed_Request
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSpeed_Request_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSpeed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSpeed_Request_

// alias to use template instance with default allocator
using SetSpeed_Request =
  arbotix_msgs::srv::SetSpeed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arbotix_msgs


#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__srv__SetSpeed_Response __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__srv__SetSpeed_Response __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetSpeed_Response_
{
  using Type = SetSpeed_Response_<ContainerAllocator>;

  explicit SetSpeed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetSpeed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__srv__SetSpeed_Response
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__srv__SetSpeed_Response
    std::shared_ptr<arbotix_msgs::srv::SetSpeed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetSpeed_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetSpeed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetSpeed_Response_

// alias to use template instance with default allocator
using SetSpeed_Response =
  arbotix_msgs::srv::SetSpeed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arbotix_msgs

namespace arbotix_msgs
{

namespace srv
{

struct SetSpeed
{
  using Request = arbotix_msgs::srv::SetSpeed_Request;
  using Response = arbotix_msgs::srv::SetSpeed_Response;
};

}  // namespace srv

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__SRV__DETAIL__SET_SPEED__STRUCT_HPP_