// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/TrajectoryBezier.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/trajectory_bezier__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__TrajectoryBezier__init(px4_msgs__msg__TrajectoryBezier * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // position
  // yaw
  // delta
  return true;
}

void
px4_msgs__msg__TrajectoryBezier__fini(px4_msgs__msg__TrajectoryBezier * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // position
  // yaw
  // delta
}

bool
px4_msgs__msg__TrajectoryBezier__are_equal(const px4_msgs__msg__TrajectoryBezier * lhs, const px4_msgs__msg__TrajectoryBezier * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // delta
  if (lhs->delta != rhs->delta) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__TrajectoryBezier__copy(
  const px4_msgs__msg__TrajectoryBezier * input,
  px4_msgs__msg__TrajectoryBezier * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // yaw
  output->yaw = input->yaw;
  // delta
  output->delta = input->delta;
  return true;
}

px4_msgs__msg__TrajectoryBezier *
px4_msgs__msg__TrajectoryBezier__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TrajectoryBezier * msg = (px4_msgs__msg__TrajectoryBezier *)allocator.allocate(sizeof(px4_msgs__msg__TrajectoryBezier), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__TrajectoryBezier));
  bool success = px4_msgs__msg__TrajectoryBezier__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__TrajectoryBezier__destroy(px4_msgs__msg__TrajectoryBezier * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__TrajectoryBezier__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__TrajectoryBezier__Sequence__init(px4_msgs__msg__TrajectoryBezier__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TrajectoryBezier * data = NULL;

  if (size) {
    data = (px4_msgs__msg__TrajectoryBezier *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__TrajectoryBezier), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__TrajectoryBezier__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__TrajectoryBezier__fini(&data[i - 1]);
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
px4_msgs__msg__TrajectoryBezier__Sequence__fini(px4_msgs__msg__TrajectoryBezier__Sequence * array)
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
      px4_msgs__msg__TrajectoryBezier__fini(&array->data[i]);
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

px4_msgs__msg__TrajectoryBezier__Sequence *
px4_msgs__msg__TrajectoryBezier__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TrajectoryBezier__Sequence * array = (px4_msgs__msg__TrajectoryBezier__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__TrajectoryBezier__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__TrajectoryBezier__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__TrajectoryBezier__Sequence__destroy(px4_msgs__msg__TrajectoryBezier__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__TrajectoryBezier__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__TrajectoryBezier__Sequence__are_equal(const px4_msgs__msg__TrajectoryBezier__Sequence * lhs, const px4_msgs__msg__TrajectoryBezier__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__TrajectoryBezier__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__TrajectoryBezier__Sequence__copy(
  const px4_msgs__msg__TrajectoryBezier__Sequence * input,
  px4_msgs__msg__TrajectoryBezier__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__TrajectoryBezier);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__TrajectoryBezier * data =
      (px4_msgs__msg__TrajectoryBezier *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__TrajectoryBezier__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__TrajectoryBezier__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__TrajectoryBezier__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
