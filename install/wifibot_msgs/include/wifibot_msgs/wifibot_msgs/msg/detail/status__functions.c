// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wifibot_msgs:msg/Status.idl
// generated code does not contain a copyright notice
#include "wifibot_msgs/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wifibot_msgs__msg__Status__init(wifibot_msgs__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // battery_level
  // current
  // adc1
  // adc2
  // adc3
  // adc4
  // speed_front_left
  // speed_front_right
  // odometry_left
  // odometry_right
  // version
  // relay1
  // relay2
  // relay3
  return true;
}

void
wifibot_msgs__msg__Status__fini(wifibot_msgs__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // battery_level
  // current
  // adc1
  // adc2
  // adc3
  // adc4
  // speed_front_left
  // speed_front_right
  // odometry_left
  // odometry_right
  // version
  // relay1
  // relay2
  // relay3
}

bool
wifibot_msgs__msg__Status__are_equal(const wifibot_msgs__msg__Status * lhs, const wifibot_msgs__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // adc1
  if (lhs->adc1 != rhs->adc1) {
    return false;
  }
  // adc2
  if (lhs->adc2 != rhs->adc2) {
    return false;
  }
  // adc3
  if (lhs->adc3 != rhs->adc3) {
    return false;
  }
  // adc4
  if (lhs->adc4 != rhs->adc4) {
    return false;
  }
  // speed_front_left
  if (lhs->speed_front_left != rhs->speed_front_left) {
    return false;
  }
  // speed_front_right
  if (lhs->speed_front_right != rhs->speed_front_right) {
    return false;
  }
  // odometry_left
  if (lhs->odometry_left != rhs->odometry_left) {
    return false;
  }
  // odometry_right
  if (lhs->odometry_right != rhs->odometry_right) {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // relay1
  if (lhs->relay1 != rhs->relay1) {
    return false;
  }
  // relay2
  if (lhs->relay2 != rhs->relay2) {
    return false;
  }
  // relay3
  if (lhs->relay3 != rhs->relay3) {
    return false;
  }
  return true;
}

bool
wifibot_msgs__msg__Status__copy(
  const wifibot_msgs__msg__Status * input,
  wifibot_msgs__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  // current
  output->current = input->current;
  // adc1
  output->adc1 = input->adc1;
  // adc2
  output->adc2 = input->adc2;
  // adc3
  output->adc3 = input->adc3;
  // adc4
  output->adc4 = input->adc4;
  // speed_front_left
  output->speed_front_left = input->speed_front_left;
  // speed_front_right
  output->speed_front_right = input->speed_front_right;
  // odometry_left
  output->odometry_left = input->odometry_left;
  // odometry_right
  output->odometry_right = input->odometry_right;
  // version
  output->version = input->version;
  // relay1
  output->relay1 = input->relay1;
  // relay2
  output->relay2 = input->relay2;
  // relay3
  output->relay3 = input->relay3;
  return true;
}

wifibot_msgs__msg__Status *
wifibot_msgs__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifibot_msgs__msg__Status * msg = (wifibot_msgs__msg__Status *)allocator.allocate(sizeof(wifibot_msgs__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wifibot_msgs__msg__Status));
  bool success = wifibot_msgs__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wifibot_msgs__msg__Status__destroy(wifibot_msgs__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wifibot_msgs__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wifibot_msgs__msg__Status__Sequence__init(wifibot_msgs__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifibot_msgs__msg__Status * data = NULL;

  if (size) {
    data = (wifibot_msgs__msg__Status *)allocator.zero_allocate(size, sizeof(wifibot_msgs__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wifibot_msgs__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wifibot_msgs__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wifibot_msgs__msg__Status__Sequence__fini(wifibot_msgs__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wifibot_msgs__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wifibot_msgs__msg__Status__Sequence *
wifibot_msgs__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifibot_msgs__msg__Status__Sequence * array = (wifibot_msgs__msg__Status__Sequence *)allocator.allocate(sizeof(wifibot_msgs__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wifibot_msgs__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wifibot_msgs__msg__Status__Sequence__destroy(wifibot_msgs__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wifibot_msgs__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wifibot_msgs__msg__Status__Sequence__are_equal(const wifibot_msgs__msg__Status__Sequence * lhs, const wifibot_msgs__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wifibot_msgs__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wifibot_msgs__msg__Status__Sequence__copy(
  const wifibot_msgs__msg__Status__Sequence * input,
  wifibot_msgs__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wifibot_msgs__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wifibot_msgs__msg__Status * data =
      (wifibot_msgs__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wifibot_msgs__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wifibot_msgs__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wifibot_msgs__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
