// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arbotix_msgs:srv/SetupChannel.idl
// generated code does not contain a copyright notice
#include "arbotix_msgs/srv/detail/setup_channel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `topic_name`
#include "rosidl_runtime_c/string_functions.h"

bool
arbotix_msgs__srv__SetupChannel_Request__init(arbotix_msgs__srv__SetupChannel_Request * msg)
{
  if (!msg) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    arbotix_msgs__srv__SetupChannel_Request__fini(msg);
    return false;
  }
  // pin
  // value
  // rate
  return true;
}

void
arbotix_msgs__srv__SetupChannel_Request__fini(arbotix_msgs__srv__SetupChannel_Request * msg)
{
  if (!msg) {
    return;
  }
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
  // pin
  // value
  // rate
}

bool
arbotix_msgs__srv__SetupChannel_Request__are_equal(const arbotix_msgs__srv__SetupChannel_Request * lhs, const arbotix_msgs__srv__SetupChannel_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  // pin
  if (lhs->pin != rhs->pin) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // rate
  if (lhs->rate != rhs->rate) {
    return false;
  }
  return true;
}

bool
arbotix_msgs__srv__SetupChannel_Request__copy(
  const arbotix_msgs__srv__SetupChannel_Request * input,
  arbotix_msgs__srv__SetupChannel_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  // pin
  output->pin = input->pin;
  // value
  output->value = input->value;
  // rate
  output->rate = input->rate;
  return true;
}

arbotix_msgs__srv__SetupChannel_Request *
arbotix_msgs__srv__SetupChannel_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__srv__SetupChannel_Request * msg = (arbotix_msgs__srv__SetupChannel_Request *)allocator.allocate(sizeof(arbotix_msgs__srv__SetupChannel_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arbotix_msgs__srv__SetupChannel_Request));
  bool success = arbotix_msgs__srv__SetupChannel_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arbotix_msgs__srv__SetupChannel_Request__destroy(arbotix_msgs__srv__SetupChannel_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arbotix_msgs__srv__SetupChannel_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arbotix_msgs__srv__SetupChannel_Request__Sequence__init(arbotix_msgs__srv__SetupChannel_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__srv__SetupChannel_Request * data = NULL;

  if (size) {
    data = (arbotix_msgs__srv__SetupChannel_Request *)allocator.zero_allocate(size, sizeof(arbotix_msgs__srv__SetupChannel_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arbotix_msgs__srv__SetupChannel_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arbotix_msgs__srv__SetupChannel_Request__fini(&data[i - 1]);
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
arbotix_msgs__srv__SetupChannel_Request__Sequence__fini(arbotix_msgs__srv__SetupChannel_Request__Sequence * array)
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
      arbotix_msgs__srv__SetupChannel_Request__fini(&array->data[i]);
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

arbotix_msgs__srv__SetupChannel_Request__Sequence *
arbotix_msgs__srv__SetupChannel_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__srv__SetupChannel_Request__Sequence * array = (arbotix_msgs__srv__SetupChannel_Request__Sequence *)allocator.allocate(sizeof(arbotix_msgs__srv__SetupChannel_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arbotix_msgs__srv__SetupChannel_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arbotix_msgs__srv__SetupChannel_Request__Sequence__destroy(arbotix_msgs__srv__SetupChannel_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arbotix_msgs__srv__SetupChannel_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arbotix_msgs__srv__SetupChannel_Request__Sequence__are_equal(const arbotix_msgs__srv__SetupChannel_Request__Sequence * lhs, const arbotix_msgs__srv__SetupChannel_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arbotix_msgs__srv__SetupChannel_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arbotix_msgs__srv__SetupChannel_Request__Sequence__copy(
  const arbotix_msgs__srv__SetupChannel_Request__Sequence * input,
  arbotix_msgs__srv__SetupChannel_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arbotix_msgs__srv__SetupChannel_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arbotix_msgs__srv__SetupChannel_Request * data =
      (arbotix_msgs__srv__SetupChannel_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arbotix_msgs__srv__SetupChannel_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arbotix_msgs__srv__SetupChannel_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arbotix_msgs__srv__SetupChannel_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arbotix_msgs__srv__SetupChannel_Response__init(arbotix_msgs__srv__SetupChannel_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
arbotix_msgs__srv__SetupChannel_Response__fini(arbotix_msgs__srv__SetupChannel_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
arbotix_msgs__srv__SetupChannel_Response__are_equal(const arbotix_msgs__srv__SetupChannel_Response * lhs, const arbotix_msgs__srv__SetupChannel_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
arbotix_msgs__srv__SetupChannel_Response__copy(
  const arbotix_msgs__srv__SetupChannel_Response * input,
  arbotix_msgs__srv__SetupChannel_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

arbotix_msgs__srv__SetupChannel_Response *
arbotix_msgs__srv__SetupChannel_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__srv__SetupChannel_Response * msg = (arbotix_msgs__srv__SetupChannel_Response *)allocator.allocate(sizeof(arbotix_msgs__srv__SetupChannel_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arbotix_msgs__srv__SetupChannel_Response));
  bool success = arbotix_msgs__srv__SetupChannel_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arbotix_msgs__srv__SetupChannel_Response__destroy(arbotix_msgs__srv__SetupChannel_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arbotix_msgs__srv__SetupChannel_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arbotix_msgs__srv__SetupChannel_Response__Sequence__init(arbotix_msgs__srv__SetupChannel_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__srv__SetupChannel_Response * data = NULL;

  if (size) {
    data = (arbotix_msgs__srv__SetupChannel_Response *)allocator.zero_allocate(size, sizeof(arbotix_msgs__srv__SetupChannel_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arbotix_msgs__srv__SetupChannel_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arbotix_msgs__srv__SetupChannel_Response__fini(&data[i - 1]);
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
arbotix_msgs__srv__SetupChannel_Response__Sequence__fini(arbotix_msgs__srv__SetupChannel_Response__Sequence * array)
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
      arbotix_msgs__srv__SetupChannel_Response__fini(&array->data[i]);
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

arbotix_msgs__srv__SetupChannel_Response__Sequence *
arbotix_msgs__srv__SetupChannel_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arbotix_msgs__srv__SetupChannel_Response__Sequence * array = (arbotix_msgs__srv__SetupChannel_Response__Sequence *)allocator.allocate(sizeof(arbotix_msgs__srv__SetupChannel_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arbotix_msgs__srv__SetupChannel_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arbotix_msgs__srv__SetupChannel_Response__Sequence__destroy(arbotix_msgs__srv__SetupChannel_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arbotix_msgs__srv__SetupChannel_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arbotix_msgs__srv__SetupChannel_Response__Sequence__are_equal(const arbotix_msgs__srv__SetupChannel_Response__Sequence * lhs, const arbotix_msgs__srv__SetupChannel_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arbotix_msgs__srv__SetupChannel_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arbotix_msgs__srv__SetupChannel_Response__Sequence__copy(
  const arbotix_msgs__srv__SetupChannel_Response__Sequence * input,
  arbotix_msgs__srv__SetupChannel_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arbotix_msgs__srv__SetupChannel_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arbotix_msgs__srv__SetupChannel_Response * data =
      (arbotix_msgs__srv__SetupChannel_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arbotix_msgs__srv__SetupChannel_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arbotix_msgs__srv__SetupChannel_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arbotix_msgs__srv__SetupChannel_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}