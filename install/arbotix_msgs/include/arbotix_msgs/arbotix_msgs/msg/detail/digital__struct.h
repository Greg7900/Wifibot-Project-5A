// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arbotix_msgs:msg/Digital.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__STRUCT_H_
#define ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOW'.
/**
  * value of pin
 */
enum
{
  arbotix_msgs__msg__Digital__LOW = 0
};

/// Constant 'HIGH'.
enum
{
  arbotix_msgs__msg__Digital__HIGH = 255
};

/// Constant 'INPUT'.
/**
  * direction of pin
 */
enum
{
  arbotix_msgs__msg__Digital__INPUT = 0
};

/// Constant 'OUTPUT'.
enum
{
  arbotix_msgs__msg__Digital__OUTPUT = 255
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Digital in the package arbotix_msgs.
/**
  * Reading or command to a single digital IO pin.
 */
typedef struct arbotix_msgs__msg__Digital
{
  std_msgs__msg__Header header;
  uint8_t value;
  uint8_t direction;
} arbotix_msgs__msg__Digital;

// Struct for a sequence of arbotix_msgs__msg__Digital.
typedef struct arbotix_msgs__msg__Digital__Sequence
{
  arbotix_msgs__msg__Digital * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__msg__Digital__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARBOTIX_MSGS__MSG__DETAIL__DIGITAL__STRUCT_H_
