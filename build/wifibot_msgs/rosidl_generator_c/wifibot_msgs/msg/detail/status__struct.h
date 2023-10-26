// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wifibot_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef WIFIBOT_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define WIFIBOT_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Status in the package wifibot_msgs.
typedef struct wifibot_msgs__msg__Status
{
  double battery_level;
  double current;
  int32_t adc1;
  int32_t adc2;
  int32_t adc3;
  int32_t adc4;
  double speed_front_left;
  double speed_front_right;
  double odometry_left;
  double odometry_right;
  int32_t version;
  int8_t relay1;
  int8_t relay2;
  int8_t relay3;
} wifibot_msgs__msg__Status;

// Struct for a sequence of wifibot_msgs__msg__Status.
typedef struct wifibot_msgs__msg__Status__Sequence
{
  wifibot_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wifibot_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIFIBOT_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
