// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/PositionControllerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/position_controller_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__PositionControllerStatus__init(px4_msgs__msg__PositionControllerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // nav_roll
  // nav_pitch
  // nav_bearing
  // target_bearing
  // xtrack_error
  // wp_dist
  // acceptance_radius
  // yaw_acceptance
  // altitude_acceptance
  // type
  return true;
}

void
px4_msgs__msg__PositionControllerStatus__fini(px4_msgs__msg__PositionControllerStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // nav_roll
  // nav_pitch
  // nav_bearing
  // target_bearing
  // xtrack_error
  // wp_dist
  // acceptance_radius
  // yaw_acceptance
  // altitude_acceptance
  // type
}

bool
px4_msgs__msg__PositionControllerStatus__are_equal(const px4_msgs__msg__PositionControllerStatus * lhs, const px4_msgs__msg__PositionControllerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // nav_roll
  if (lhs->nav_roll != rhs->nav_roll) {
    return false;
  }
  // nav_pitch
  if (lhs->nav_pitch != rhs->nav_pitch) {
    return false;
  }
  // nav_bearing
  if (lhs->nav_bearing != rhs->nav_bearing) {
    return false;
  }
  // target_bearing
  if (lhs->target_bearing != rhs->target_bearing) {
    return false;
  }
  // xtrack_error
  if (lhs->xtrack_error != rhs->xtrack_error) {
    return false;
  }
  // wp_dist
  if (lhs->wp_dist != rhs->wp_dist) {
    return false;
  }
  // acceptance_radius
  if (lhs->acceptance_radius != rhs->acceptance_radius) {
    return false;
  }
  // yaw_acceptance
  if (lhs->yaw_acceptance != rhs->yaw_acceptance) {
    return false;
  }
  // altitude_acceptance
  if (lhs->altitude_acceptance != rhs->altitude_acceptance) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__PositionControllerStatus__copy(
  const px4_msgs__msg__PositionControllerStatus * input,
  px4_msgs__msg__PositionControllerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // nav_roll
  output->nav_roll = input->nav_roll;
  // nav_pitch
  output->nav_pitch = input->nav_pitch;
  // nav_bearing
  output->nav_bearing = input->nav_bearing;
  // target_bearing
  output->target_bearing = input->target_bearing;
  // xtrack_error
  output->xtrack_error = input->xtrack_error;
  // wp_dist
  output->wp_dist = input->wp_dist;
  // acceptance_radius
  output->acceptance_radius = input->acceptance_radius;
  // yaw_acceptance
  output->yaw_acceptance = input->yaw_acceptance;
  // altitude_acceptance
  output->altitude_acceptance = input->altitude_acceptance;
  // type
  output->type = input->type;
  return true;
}

px4_msgs__msg__PositionControllerStatus *
px4_msgs__msg__PositionControllerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionControllerStatus * msg = (px4_msgs__msg__PositionControllerStatus *)allocator.allocate(sizeof(px4_msgs__msg__PositionControllerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__PositionControllerStatus));
  bool success = px4_msgs__msg__PositionControllerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__PositionControllerStatus__destroy(px4_msgs__msg__PositionControllerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__PositionControllerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__PositionControllerStatus__Sequence__init(px4_msgs__msg__PositionControllerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionControllerStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__PositionControllerStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__PositionControllerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__PositionControllerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__PositionControllerStatus__fini(&data[i - 1]);
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
px4_msgs__msg__PositionControllerStatus__Sequence__fini(px4_msgs__msg__PositionControllerStatus__Sequence * array)
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
      px4_msgs__msg__PositionControllerStatus__fini(&array->data[i]);
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

px4_msgs__msg__PositionControllerStatus__Sequence *
px4_msgs__msg__PositionControllerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionControllerStatus__Sequence * array = (px4_msgs__msg__PositionControllerStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__PositionControllerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__PositionControllerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__PositionControllerStatus__Sequence__destroy(px4_msgs__msg__PositionControllerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__PositionControllerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__PositionControllerStatus__Sequence__are_equal(const px4_msgs__msg__PositionControllerStatus__Sequence * lhs, const px4_msgs__msg__PositionControllerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__PositionControllerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__PositionControllerStatus__Sequence__copy(
  const px4_msgs__msg__PositionControllerStatus__Sequence * input,
  px4_msgs__msg__PositionControllerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__PositionControllerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__PositionControllerStatus * data =
      (px4_msgs__msg__PositionControllerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__PositionControllerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__PositionControllerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__PositionControllerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
