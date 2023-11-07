// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arbotix_msgs:srv/Enable.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__ENABLE__STRUCT_HPP_
#define ARBOTIX_MSGS__SRV__DETAIL__ENABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__srv__Enable_Request __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__srv__Enable_Request __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Enable_Request_
{
  using Type = Enable_Request_<ContainerAllocator>;

  explicit Enable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  explicit Enable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arbotix_msgs::srv::Enable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::srv::Enable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::Enable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::Enable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__srv__Enable_Request
    std::shared_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__srv__Enable_Request
    std::shared_ptr<arbotix_msgs::srv::Enable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Enable_Request_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const Enable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Enable_Request_

// alias to use template instance with default allocator
using Enable_Request =
  arbotix_msgs::srv::Enable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arbotix_msgs


#ifndef _WIN32
# define DEPRECATED__arbotix_msgs__srv__Enable_Response __attribute__((deprecated))
#else
# define DEPRECATED__arbotix_msgs__srv__Enable_Response __declspec(deprecated)
#endif

namespace arbotix_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Enable_Response_
{
  using Type = Enable_Response_<ContainerAllocator>;

  explicit Enable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = false;
    }
  }

  explicit Enable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = false;
    }
  }

  // field types and members
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arbotix_msgs::srv::Enable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arbotix_msgs::srv::Enable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::Enable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arbotix_msgs::srv::Enable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arbotix_msgs__srv__Enable_Response
    std::shared_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arbotix_msgs__srv__Enable_Response
    std::shared_ptr<arbotix_msgs::srv::Enable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Enable_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Enable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Enable_Response_

// alias to use template instance with default allocator
using Enable_Response =
  arbotix_msgs::srv::Enable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arbotix_msgs

namespace arbotix_msgs
{

namespace srv
{

struct Enable
{
  using Request = arbotix_msgs::srv::Enable_Request;
  using Response = arbotix_msgs::srv::Enable_Response;
};

}  // namespace srv

}  // namespace arbotix_msgs

#endif  // ARBOTIX_MSGS__SRV__DETAIL__ENABLE__STRUCT_HPP_
