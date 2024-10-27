// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RtlTimeEstimate.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rtl_time_estimate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RtlTimeEstimate__init(px4_msgs__msg__RtlTimeEstimate * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // valid
  // time_estimate
  // safe_time_estimate
  return true;
}

void
px4_msgs__msg__RtlTimeEstimate__fini(px4_msgs__msg__RtlTimeEstimate * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // valid
  // time_estimate
  // safe_time_estimate
}

bool
px4_msgs__msg__RtlTimeEstimate__are_equal(const px4_msgs__msg__RtlTimeEstimate * lhs, const px4_msgs__msg__RtlTimeEstimate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // time_estimate
  if (lhs->time_estimate != rhs->time_estimate) {
    return false;
  }
  // safe_time_estimate
  if (lhs->safe_time_estimate != rhs->safe_time_estimate) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RtlTimeEstimate__copy(
  const px4_msgs__msg__RtlTimeEstimate * input,
  px4_msgs__msg__RtlTimeEstimate * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // valid
  output->valid = input->valid;
  // time_estimate
  output->time_estimate = input->time_estimate;
  // safe_time_estimate
  output->safe_time_estimate = input->safe_time_estimate;
  return true;
}

px4_msgs__msg__RtlTimeEstimate *
px4_msgs__msg__RtlTimeEstimate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RtlTimeEstimate * msg = (px4_msgs__msg__RtlTimeEstimate *)allocator.allocate(sizeof(px4_msgs__msg__RtlTimeEstimate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RtlTimeEstimate));
  bool success = px4_msgs__msg__RtlTimeEstimate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RtlTimeEstimate__destroy(px4_msgs__msg__RtlTimeEstimate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RtlTimeEstimate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RtlTimeEstimate__Sequence__init(px4_msgs__msg__RtlTimeEstimate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RtlTimeEstimate * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RtlTimeEstimate *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RtlTimeEstimate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RtlTimeEstimate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RtlTimeEstimate__fini(&data[i - 1]);
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
px4_msgs__msg__RtlTimeEstimate__Sequence__fini(px4_msgs__msg__RtlTimeEstimate__Sequence * array)
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
      px4_msgs__msg__RtlTimeEstimate__fini(&array->data[i]);
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

px4_msgs__msg__RtlTimeEstimate__Sequence *
px4_msgs__msg__RtlTimeEstimate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RtlTimeEstimate__Sequence * array = (px4_msgs__msg__RtlTimeEstimate__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RtlTimeEstimate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RtlTimeEstimate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RtlTimeEstimate__Sequence__destroy(px4_msgs__msg__RtlTimeEstimate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RtlTimeEstimate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RtlTimeEstimate__Sequence__are_equal(const px4_msgs__msg__RtlTimeEstimate__Sequence * lhs, const px4_msgs__msg__RtlTimeEstimate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RtlTimeEstimate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RtlTimeEstimate__Sequence__copy(
  const px4_msgs__msg__RtlTimeEstimate__Sequence * input,
  px4_msgs__msg__RtlTimeEstimate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RtlTimeEstimate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RtlTimeEstimate * data =
      (px4_msgs__msg__RtlTimeEstimate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RtlTimeEstimate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RtlTimeEstimate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RtlTimeEstimate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
