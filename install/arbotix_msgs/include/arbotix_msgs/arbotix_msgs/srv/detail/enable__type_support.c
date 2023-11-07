// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arbotix_msgs:srv/Enable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arbotix_msgs/srv/detail/enable__rosidl_typesupport_introspection_c.h"
#include "arbotix_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arbotix_msgs/srv/detail/enable__functions.h"
#include "arbotix_msgs/srv/detail/enable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arbotix_msgs__srv__Enable_Request__init(message_memory);
}

void arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_fini_function(void * message_memory)
{
  arbotix_msgs__srv__Enable_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_member_array[1] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arbotix_msgs__srv__Enable_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_members = {
  "arbotix_msgs__srv",  // message namespace
  "Enable_Request",  // message name
  1,  // number of fields
  sizeof(arbotix_msgs__srv__Enable_Request),
  arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_member_array,  // message members
  arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle = {
  0,
  &arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arbotix_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable_Request)() {
  if (!arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle.typesupport_identifier) {
    arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arbotix_msgs__srv__Enable_Request__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arbotix_msgs/srv/detail/enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arbotix_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arbotix_msgs/srv/detail/enable__functions.h"
// already included above
// #include "arbotix_msgs/srv/detail/enable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arbotix_msgs__srv__Enable_Response__init(message_memory);
}

void arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_fini_function(void * message_memory)
{
  arbotix_msgs__srv__Enable_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arbotix_msgs__srv__Enable_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_members = {
  "arbotix_msgs__srv",  // message namespace
  "Enable_Response",  // message name
  1,  // number of fields
  sizeof(arbotix_msgs__srv__Enable_Response),
  arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_member_array,  // message members
  arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle = {
  0,
  &arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arbotix_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable_Response)() {
  if (!arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle.typesupport_identifier) {
    arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arbotix_msgs__srv__Enable_Response__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arbotix_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arbotix_msgs/srv/detail/enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_members = {
  "arbotix_msgs__srv",  // service namespace
  "Enable",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_Request_message_type_support_handle,
  NULL  // response message
  // arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_Response_message_type_support_handle
};

static rosidl_service_type_support_t arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle = {
  0,
  &arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arbotix_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable)() {
  if (!arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle.typesupport_identifier) {
    arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arbotix_msgs, srv, Enable_Response)()->data;
  }

  return &arbotix_msgs__srv__detail__enable__rosidl_typesupport_introspection_c__Enable_service_type_support_handle;
}
