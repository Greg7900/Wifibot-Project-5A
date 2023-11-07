// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arbotix_msgs:srv/Enable.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__ENABLE__STRUCT_H_
#define ARBOTIX_MSGS__SRV__DETAIL__ENABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Enable in the package arbotix_msgs.
typedef struct arbotix_msgs__srv__Enable_Request
{
  bool enable;
} arbotix_msgs__srv__Enable_Request;

// Struct for a sequence of arbotix_msgs__srv__Enable_Request.
typedef struct arbotix_msgs__srv__Enable_Request__Sequence
{
  arbotix_msgs__srv__Enable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__srv__Enable_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Enable in the package arbotix_msgs.
typedef struct arbotix_msgs__srv__Enable_Response
{
  bool state;
} arbotix_msgs__srv__Enable_Response;

// Struct for a sequence of arbotix_msgs__srv__Enable_Response.
typedef struct arbotix_msgs__srv__Enable_Response__Sequence
{
  arbotix_msgs__srv__Enable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__srv__Enable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARBOTIX_MSGS__SRV__DETAIL__ENABLE__STRUCT_H_
