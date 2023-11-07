// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arbotix_msgs:msg/Analog.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__MSG__DETAIL__ANALOG__STRUCT_H_
#define ARBOTIX_MSGS__MSG__DETAIL__ANALOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Analog in the package arbotix_msgs.
/**
  * Reading from a single analog IO pin.
 */
typedef struct arbotix_msgs__msg__Analog
{
  std_msgs__msg__Header header;
  uint16_t value;
} arbotix_msgs__msg__Analog;

// Struct for a sequence of arbotix_msgs__msg__Analog.
typedef struct arbotix_msgs__msg__Analog__Sequence
{
  arbotix_msgs__msg__Analog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__msg__Analog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARBOTIX_MSGS__MSG__DETAIL__ANALOG__STRUCT_H_
