// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arbotix_msgs:msg/Analog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arbotix_msgs/msg/detail/analog__rosidl_typesupport_introspection_c.h"
#include "arbotix_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arbotix_msgs/msg/detail/analog__functions.h"
#include "arbotix_msgs/msg/detail/analog__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arbotix_msgs__msg__Analog__init(message_memory);
}

void arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_fini_function(void * message_memory)
{
  arbotix_msgs__msg__Analog__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arbotix_msgs__msg__Analog, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arbotix_msgs__msg__Analog, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_members = {
  "arbotix_msgs__msg",  // message namespace
  "Analog",  // message name
  2,  // number of fields
  sizeof(arbotix_msgs__msg__Analog),
  arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_member_array,  // message members
  arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_init_function,  // function to initialize message memory (memory has to be allocated)
  arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_type_support_handle = {
  0,
  &arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arbotix_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, msg, Analog)() {
  arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_type_support_handle.typesupport_identifier) {
    arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arbotix_msgs__msg__Analog__rosidl_typesupport_introspection_c__Analog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
