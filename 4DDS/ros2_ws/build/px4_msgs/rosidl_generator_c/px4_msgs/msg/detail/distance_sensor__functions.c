// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/DistanceSensor.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/distance_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__DistanceSensor__init(px4_msgs__msg__DistanceSensor * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // device_id
  // min_distance
  // max_distance
  // current_distance
  // variance
  // signal_quality
  // type
  // h_fov
  // v_fov
  // q
  // orientation
  return true;
}

void
px4_msgs__msg__DistanceSensor__fini(px4_msgs__msg__DistanceSensor * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // device_id
  // min_distance
  // max_distance
  // current_distance
  // variance
  // signal_quality
  // type
  // h_fov
  // v_fov
  // q
  // orientation
}

bool
px4_msgs__msg__DistanceSensor__are_equal(const px4_msgs__msg__DistanceSensor * lhs, const px4_msgs__msg__DistanceSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // min_distance
  if (lhs->min_distance != rhs->min_distance) {
    return false;
  }
  // max_distance
  if (lhs->max_distance != rhs->max_distance) {
    return false;
  }
  // current_distance
  if (lhs->current_distance != rhs->current_distance) {
    return false;
  }
  // variance
  if (lhs->variance != rhs->variance) {
    return false;
  }
  // signal_quality
  if (lhs->signal_quality != rhs->signal_quality) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // h_fov
  if (lhs->h_fov != rhs->h_fov) {
    return false;
  }
  // v_fov
  if (lhs->v_fov != rhs->v_fov) {
    return false;
  }
  // q
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__DistanceSensor__copy(
  const px4_msgs__msg__DistanceSensor * input,
  px4_msgs__msg__DistanceSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // device_id
  output->device_id = input->device_id;
  // min_distance
  output->min_distance = input->min_distance;
  // max_distance
  output->max_distance = input->max_distance;
  // current_distance
  output->current_distance = input->current_distance;
  // variance
  output->variance = input->variance;
  // signal_quality
  output->signal_quality = input->signal_quality;
  // type
  output->type = input->type;
  // h_fov
  output->h_fov = input->h_fov;
  // v_fov
  output->v_fov = input->v_fov;
  // q
  for (size_t i = 0; i < 4; ++i) {
    output->q[i] = input->q[i];
  }
  // orientation
  output->orientation = input->orientation;
  return true;
}

px4_msgs__msg__DistanceSensor *
px4_msgs__msg__DistanceSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DistanceSensor * msg = (px4_msgs__msg__DistanceSensor *)allocator.allocate(sizeof(px4_msgs__msg__DistanceSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__DistanceSensor));
  bool success = px4_msgs__msg__DistanceSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__DistanceSensor__destroy(px4_msgs__msg__DistanceSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__DistanceSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__DistanceSensor__Sequence__init(px4_msgs__msg__DistanceSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DistanceSensor * data = NULL;

  if (size) {
    data = (px4_msgs__msg__DistanceSensor *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__DistanceSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__DistanceSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__DistanceSensor__fini(&data[i - 1]);
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
px4_msgs__msg__DistanceSensor__Sequence__fini(px4_msgs__msg__DistanceSensor__Sequence * array)
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
      px4_msgs__msg__DistanceSensor__fini(&array->data[i]);
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

px4_msgs__msg__DistanceSensor__Sequence *
px4_msgs__msg__DistanceSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__DistanceSensor__Sequence * array = (px4_msgs__msg__DistanceSensor__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__DistanceSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__DistanceSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__DistanceSensor__Sequence__destroy(px4_msgs__msg__DistanceSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__DistanceSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__DistanceSensor__Sequence__are_equal(const px4_msgs__msg__DistanceSensor__Sequence * lhs, const px4_msgs__msg__DistanceSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__DistanceSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__DistanceSensor__Sequence__copy(
  const px4_msgs__msg__DistanceSensor__Sequence * input,
  px4_msgs__msg__DistanceSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__DistanceSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__DistanceSensor * data =
      (px4_msgs__msg__DistanceSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__DistanceSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__DistanceSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__DistanceSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
