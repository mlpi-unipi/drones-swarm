// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/position_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__PositionSetpoint__init(px4_msgs__msg__PositionSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // valid
  // type
  // vx
  // vy
  // vz
  // lat
  // lon
  // alt
  // yaw
  // loiter_radius
  // loiter_minor_radius
  // loiter_direction_counter_clockwise
  // loiter_orientation
  // loiter_pattern
  // acceptance_radius
  // cruising_speed
  // gliding_enabled
  // cruising_throttle
  return true;
}

void
px4_msgs__msg__PositionSetpoint__fini(px4_msgs__msg__PositionSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // valid
  // type
  // vx
  // vy
  // vz
  // lat
  // lon
  // alt
  // yaw
  // loiter_radius
  // loiter_minor_radius
  // loiter_direction_counter_clockwise
  // loiter_orientation
  // loiter_pattern
  // acceptance_radius
  // cruising_speed
  // gliding_enabled
  // cruising_throttle
}

bool
px4_msgs__msg__PositionSetpoint__are_equal(const px4_msgs__msg__PositionSetpoint * lhs, const px4_msgs__msg__PositionSetpoint * rhs)
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
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // loiter_radius
  if (lhs->loiter_radius != rhs->loiter_radius) {
    return false;
  }
  // loiter_minor_radius
  if (lhs->loiter_minor_radius != rhs->loiter_minor_radius) {
    return false;
  }
  // loiter_direction_counter_clockwise
  if (lhs->loiter_direction_counter_clockwise != rhs->loiter_direction_counter_clockwise) {
    return false;
  }
  // loiter_orientation
  if (lhs->loiter_orientation != rhs->loiter_orientation) {
    return false;
  }
  // loiter_pattern
  if (lhs->loiter_pattern != rhs->loiter_pattern) {
    return false;
  }
  // acceptance_radius
  if (lhs->acceptance_radius != rhs->acceptance_radius) {
    return false;
  }
  // cruising_speed
  if (lhs->cruising_speed != rhs->cruising_speed) {
    return false;
  }
  // gliding_enabled
  if (lhs->gliding_enabled != rhs->gliding_enabled) {
    return false;
  }
  // cruising_throttle
  if (lhs->cruising_throttle != rhs->cruising_throttle) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__PositionSetpoint__copy(
  const px4_msgs__msg__PositionSetpoint * input,
  px4_msgs__msg__PositionSetpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // valid
  output->valid = input->valid;
  // type
  output->type = input->type;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  // yaw
  output->yaw = input->yaw;
  // loiter_radius
  output->loiter_radius = input->loiter_radius;
  // loiter_minor_radius
  output->loiter_minor_radius = input->loiter_minor_radius;
  // loiter_direction_counter_clockwise
  output->loiter_direction_counter_clockwise = input->loiter_direction_counter_clockwise;
  // loiter_orientation
  output->loiter_orientation = input->loiter_orientation;
  // loiter_pattern
  output->loiter_pattern = input->loiter_pattern;
  // acceptance_radius
  output->acceptance_radius = input->acceptance_radius;
  // cruising_speed
  output->cruising_speed = input->cruising_speed;
  // gliding_enabled
  output->gliding_enabled = input->gliding_enabled;
  // cruising_throttle
  output->cruising_throttle = input->cruising_throttle;
  return true;
}

px4_msgs__msg__PositionSetpoint *
px4_msgs__msg__PositionSetpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionSetpoint * msg = (px4_msgs__msg__PositionSetpoint *)allocator.allocate(sizeof(px4_msgs__msg__PositionSetpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__PositionSetpoint));
  bool success = px4_msgs__msg__PositionSetpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__PositionSetpoint__destroy(px4_msgs__msg__PositionSetpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__PositionSetpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__PositionSetpoint__Sequence__init(px4_msgs__msg__PositionSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionSetpoint * data = NULL;

  if (size) {
    data = (px4_msgs__msg__PositionSetpoint *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__PositionSetpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__PositionSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__PositionSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__PositionSetpoint__Sequence__fini(px4_msgs__msg__PositionSetpoint__Sequence * array)
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
      px4_msgs__msg__PositionSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__PositionSetpoint__Sequence *
px4_msgs__msg__PositionSetpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionSetpoint__Sequence * array = (px4_msgs__msg__PositionSetpoint__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__PositionSetpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__PositionSetpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__PositionSetpoint__Sequence__destroy(px4_msgs__msg__PositionSetpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__PositionSetpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__PositionSetpoint__Sequence__are_equal(const px4_msgs__msg__PositionSetpoint__Sequence * lhs, const px4_msgs__msg__PositionSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__PositionSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__PositionSetpoint__Sequence__copy(
  const px4_msgs__msg__PositionSetpoint__Sequence * input,
  px4_msgs__msg__PositionSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__PositionSetpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__PositionSetpoint * data =
      (px4_msgs__msg__PositionSetpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__PositionSetpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__PositionSetpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__PositionSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
