// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arbotix_msgs:srv/SetupChannel.idl
// generated code does not contain a copyright notice

#ifndef ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__STRUCT_H_
#define ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetupChannel in the package arbotix_msgs.
typedef struct arbotix_msgs__srv__SetupChannel_Request
{
  rosidl_runtime_c__String topic_name;
  uint8_t pin;
  uint8_t value;
  uint8_t rate;
} arbotix_msgs__srv__SetupChannel_Request;

// Struct for a sequence of arbotix_msgs__srv__SetupChannel_Request.
typedef struct arbotix_msgs__srv__SetupChannel_Request__Sequence
{
  arbotix_msgs__srv__SetupChannel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__srv__SetupChannel_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetupChannel in the package arbotix_msgs.
typedef struct arbotix_msgs__srv__SetupChannel_Response
{
  uint8_t structure_needs_at_least_one_member;
} arbotix_msgs__srv__SetupChannel_Response;

// Struct for a sequence of arbotix_msgs__srv__SetupChannel_Response.
typedef struct arbotix_msgs__srv__SetupChannel_Response__Sequence
{
  arbotix_msgs__srv__SetupChannel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arbotix_msgs__srv__SetupChannel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARBOTIX_MSGS__SRV__DETAIL__SETUP_CHANNEL__STRUCT_H_
