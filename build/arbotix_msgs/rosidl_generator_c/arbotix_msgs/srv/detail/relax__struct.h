// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arbotix_msgs:srv/Relax.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__RELAX__STRUCT_H_
#define ARBOTIX_MSGS__SRV__DETAIL__RELAX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Relax in the package arbotix_msgs.
typedef struct arbotix_msgs__srv__Relax_Request
{
  uint8_t structure_needs_at_least_one_member;
} arbotix_msgs__srv__Relax_Request;

// Struct for a sequence of arbotix_msgs__srv__Relax_Request.
typedef struct arbotix_msgs__srv__Relax_Request__Sequence
{
  arbotix_msgs__srv__Relax_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__srv__Relax_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Relax in the package arbotix_msgs.
typedef struct arbotix_msgs__srv__Relax_Response
{
  uint8_t structure_needs_at_least_one_member;
} arbotix_msgs__srv__Relax_Response;

// Struct for a sequence of arbotix_msgs__srv__Relax_Response.
typedef struct arbotix_msgs__srv__Relax_Response__Sequence
{
  arbotix_msgs__srv__Relax_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__srv__Relax_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARBOTIX_MSGS__SRV__DETAIL__RELAX__STRUCT_H_
