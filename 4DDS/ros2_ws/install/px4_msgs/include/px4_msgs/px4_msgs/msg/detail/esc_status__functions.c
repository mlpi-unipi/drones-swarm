// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EscStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/esc_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `esc`
#include "px4_msgs/msg/detail/esc_report__functions.h"

bool
px4_msgs__msg__EscStatus__init(px4_msgs__msg__EscStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // counter
  // esc_count
  // esc_connectiontype
  // esc_online_flags
  // esc_armed_flags
  // esc
  for (size_t i = 0; i < 8; ++i) {
    if (!px4_msgs__msg__EscReport__init(&msg->esc[i])) {
      px4_msgs__msg__EscStatus__fini(msg);
      return false;
    }
  }
  return true;
}

void
px4_msgs__msg__EscStatus__fini(px4_msgs__msg__EscStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // counter
  // esc_count
  // esc_connectiontype
  // esc_online_flags
  // esc_armed_flags
  // esc
  for (size_t i = 0; i < 8; ++i) {
    px4_msgs__msg__EscReport__fini(&msg->esc[i]);
  }
}

bool
px4_msgs__msg__EscStatus__are_equal(const px4_msgs__msg__EscStatus * lhs, const px4_msgs__msg__EscStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // esc_count
  if (lhs->esc_count != rhs->esc_count) {
    return false;
  }
  // esc_connectiontype
  if (lhs->esc_connectiontype != rhs->esc_connectiontype) {
    return false;
  }
  // esc_online_flags
  if (lhs->esc_online_flags != rhs->esc_online_flags) {
    return false;
  }
  // esc_armed_flags
  if (lhs->esc_armed_flags != rhs->esc_armed_flags) {
    return false;
  }
  // esc
  for (size_t i = 0; i < 8; ++i) {
    if (!px4_msgs__msg__EscReport__are_equal(
        &(lhs->esc[i]), &(rhs->esc[i])))
    {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EscStatus__copy(
  const px4_msgs__msg__EscStatus * input,
  px4_msgs__msg__EscStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // counter
  output->counter = input->counter;
  // esc_count
  output->esc_count = input->esc_count;
  // esc_connectiontype
  output->esc_connectiontype = input->esc_connectiontype;
  // esc_online_flags
  output->esc_online_flags = input->esc_online_flags;
  // esc_armed_flags
  output->esc_armed_flags = input->esc_armed_flags;
  // esc
  for (size_t i = 0; i < 8; ++i) {
    if (!px4_msgs__msg__EscReport__copy(
        &(input->esc[i]), &(output->esc[i])))
    {
      return false;
    }
  }
  return true;
}

px4_msgs__msg__EscStatus *
px4_msgs__msg__EscStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EscStatus * msg = (px4_msgs__msg__EscStatus *)allocator.allocate(sizeof(px4_msgs__msg__EscStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EscStatus));
  bool success = px4_msgs__msg__EscStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EscStatus__destroy(px4_msgs__msg__EscStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EscStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EscStatus__Sequence__init(px4_msgs__msg__EscStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EscStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EscStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EscStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EscStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EscStatus__fini(&data[i - 1]);
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
px4_msgs__msg__EscStatus__Sequence__fini(px4_msgs__msg__EscStatus__Sequence * array)
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
      px4_msgs__msg__EscStatus__fini(&array->data[i]);
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

px4_msgs__msg__EscStatus__Sequence *
px4_msgs__msg__EscStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EscStatus__Sequence * array = (px4_msgs__msg__EscStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EscStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EscStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EscStatus__Sequence__destroy(px4_msgs__msg__EscStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EscStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EscStatus__Sequence__are_equal(const px4_msgs__msg__EscStatus__Sequence * lhs, const px4_msgs__msg__EscStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EscStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EscStatus__Sequence__copy(
  const px4_msgs__msg__EscStatus__Sequence * input,
  px4_msgs__msg__EscStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EscStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EscStatus * data =
      (px4_msgs__msg__EscStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EscStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EscStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EscStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
