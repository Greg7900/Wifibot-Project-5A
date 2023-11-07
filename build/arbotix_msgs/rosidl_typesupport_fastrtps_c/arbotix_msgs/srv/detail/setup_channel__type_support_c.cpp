// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arbotix_msgs:srv/SetupChannel.idl
// generated code does not contain a copyright notice
#include "arbotix_msgs/srv/detail/setup_channel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arbotix_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arbotix_msgs/srv/detail/setup_channel__struct.h"
#include "arbotix_msgs/srv/detail/setup_channel__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // topic_name
#include "rosidl_runtime_c/string_functions.h"  // topic_name

// forward declare type support functions


using _SetupChannel_Request__ros_msg_type = arbotix_msgs__srv__SetupChannel_Request;

static bool _SetupChannel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetupChannel_Request__ros_msg_type * ros_message = static_cast<const _SetupChannel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_name
  {
    const rosidl_runtime_c__String * str = &ros_message->topic_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pin
  {
    cdr << ros_message->pin;
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  // Field name: rate
  {
    cdr << ros_message->rate;
  }

  return true;
}

static bool _SetupChannel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetupChannel_Request__ros_msg_type * ros_message = static_cast<_SetupChannel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic_name.data) {
      rosidl_runtime_c__String__init(&ros_message->topic_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic_name'\n");
      return false;
    }
  }

  // Field name: pin
  {
    cdr >> ros_message->pin;
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  // Field name: rate
  {
    cdr >> ros_message->rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arbotix_msgs
size_t get_serialized_size_arbotix_msgs__srv__SetupChannel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetupChannel_Request__ros_msg_type * ros_message = static_cast<const _SetupChannel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic_name.size + 1);
  // field.name pin
  {
    size_t item_size = sizeof(ros_message->pin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rate
  {
    size_t item_size = sizeof(ros_message->rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetupChannel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arbotix_msgs__srv__SetupChannel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arbotix_msgs
size_t max_serialized_size_arbotix_msgs__srv__SetupChannel_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: topic_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetupChannel_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arbotix_msgs__srv__SetupChannel_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetupChannel_Request = {
  "arbotix_msgs::srv",
  "SetupChannel_Request",
  _SetupChannel_Request__cdr_serialize,
  _SetupChannel_Request__cdr_deserialize,
  _SetupChannel_Request__get_serialized_size,
  _SetupChannel_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetupChannel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetupChannel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arbotix_msgs, srv, SetupChannel_Request)() {
  return &_SetupChannel_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "arbotix_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "arbotix_msgs/srv/detail/setup_channel__struct.h"
// already included above
// #include "arbotix_msgs/srv/detail/setup_channel__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetupChannel_Response__ros_msg_type = arbotix_msgs__srv__SetupChannel_Response;

static bool _SetupChannel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetupChannel_Response__ros_msg_type * ros_message = static_cast<const _SetupChannel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SetupChannel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetupChannel_Response__ros_msg_type * ros_message = static_cast<_SetupChannel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arbotix_msgs
size_t get_serialized_size_arbotix_msgs__srv__SetupChannel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetupChannel_Response__ros_msg_type * ros_message = static_cast<const _SetupChannel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetupChannel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arbotix_msgs__srv__SetupChannel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arbotix_msgs
size_t max_serialized_size_arbotix_msgs__srv__SetupChannel_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetupChannel_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arbotix_msgs__srv__SetupChannel_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetupChannel_Response = {
  "arbotix_msgs::srv",
  "SetupChannel_Response",
  _SetupChannel_Response__cdr_serialize,
  _SetupChannel_Response__cdr_deserialize,
  _SetupChannel_Response__get_serialized_size,
  _SetupChannel_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetupChannel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetupChannel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arbotix_msgs, srv, SetupChannel_Response)() {
  return &_SetupChannel_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "arbotix_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arbotix_msgs/srv/setup_channel.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetupChannel__callbacks = {
  "arbotix_msgs::srv",
  "SetupChannel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arbotix_msgs, srv, SetupChannel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arbotix_msgs, srv, SetupChannel_Response)(),
};

static rosidl_service_type_support_t SetupChannel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetupChannel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arbotix_msgs, srv, SetupChannel)() {
  return &SetupChannel__handle;
}

#if defined(__cplusplus)
}
#endif
