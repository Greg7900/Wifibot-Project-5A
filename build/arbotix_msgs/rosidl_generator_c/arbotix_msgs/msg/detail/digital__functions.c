// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arbotix_msgs:msg/Digital.idl
// generated code does not contain a copyright notice
#include "arbotix_msgs/msg/detail/digital__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
arbotix_msgs__msg__Digital__init(arbotix_msgs__msg__Digital * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    arbotix_msgs__msg__Digital__fini(msg);
    return false;
  }
  // value
  // direction
  return true;
}

void
arbotix_msgs__msg__Digital__fini(arbotix_msgs__msg__Digital * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // value
  // direction
}

bool
arbotix_msgs__msg__Digital__are_equal(const arbotix_msgs__msg__Digital * lhs, const arbotix_msgs__msg__Digital * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
arbotix_msgs__msg__Digital__copy(
  const arbotix_msgs__msg__Digital * input,
  arbotix_msgs__msg__Digital * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // direction
  output->direction = input->direction;
  return true;
}

arbotix_msgs__msg__Digital *
arbotix_msgs__msg__Digital__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__msg__Digital * msg = (arbotix_msgs__msg__Digital *)allocator.allocate(sizeof(arbotix_msgs__msg__Digital), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arbotix_msgs__msg__Digital));
  bool success = arbotix_msgs__msg__Digital__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arbotix_msgs__msg__Digital__destroy(arbotix_msgs__msg__Digital * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arbotix_msgs__msg__Digital__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arbotix_msgs__msg__Digital__Sequence__init(arbotix_msgs__msg__Digital__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__msg__Digital * data = NULL;

  if (size) {
    data = (arbotix_msgs__msg__Digital *)allocator.zero_allocate(size, sizeof(arbotix_msgs__msg__Digital), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arbotix_msgs__msg__Digital__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arbotix_msgs__msg__Digital__fini(&data[i - 1]);
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
arbotix_msgs__msg__Digital__Sequence__fini(arbotix_msgs__msg__Digital__Sequence * array)
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
      arbotix_msgs__msg__Digital__fini(&array->data[i]);
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

arbotix_msgs__msg__Digital__Sequence *
arbotix_msgs__msg__Digital__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__msg__Digital__Sequence * array = (arbotix_msgs__msg__Digital__Sequence *)allocator.allocate(sizeof(arbotix_msgs__msg__Digital__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arbotix_msgs__msg__Digital__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arbotix_msgs__msg__Digital__Sequence__destroy(arbotix_msgs__msg__Digital__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arbotix_msgs__msg__Digital__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arbotix_msgs__msg__Digital__Sequence__are_equal(const arbotix_msgs__msg__Digital__Sequence * lhs, const arbotix_msgs__msg__Digital__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arbotix_msgs__msg__Digital__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arbotix_msgs__msg__Digital__Sequence__copy(
  const arbotix_msgs__msg__Digital__Sequence * input,
  arbotix_msgs__msg__Digital__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arbotix_msgs__msg__Digital);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arbotix_msgs__msg__Digital * data =
      (arbotix_msgs__msg__Digital *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arbotix_msgs__msg__Digital__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arbotix_msgs__msg__Digital__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arbotix_msgs__msg__Digital__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
