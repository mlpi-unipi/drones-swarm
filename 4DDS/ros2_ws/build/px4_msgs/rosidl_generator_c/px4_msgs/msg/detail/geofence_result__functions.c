// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GeofenceResult.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/geofence_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__GeofenceResult__init(px4_msgs__msg__GeofenceResult * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // geofence_max_dist_triggered
  // geofence_max_alt_triggered
  // geofence_custom_fence_triggered
  // geofence_action
  return true;
}

void
px4_msgs__msg__GeofenceResult__fini(px4_msgs__msg__GeofenceResult * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // geofence_max_dist_triggered
  // geofence_max_alt_triggered
  // geofence_custom_fence_triggered
  // geofence_action
}

bool
px4_msgs__msg__GeofenceResult__are_equal(const px4_msgs__msg__GeofenceResult * lhs, const px4_msgs__msg__GeofenceResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // geofence_max_dist_triggered
  if (lhs->geofence_max_dist_triggered != rhs->geofence_max_dist_triggered) {
    return false;
  }
  // geofence_max_alt_triggered
  if (lhs->geofence_max_alt_triggered != rhs->geofence_max_alt_triggered) {
    return false;
  }
  // geofence_custom_fence_triggered
  if (lhs->geofence_custom_fence_triggered != rhs->geofence_custom_fence_triggered) {
    return false;
  }
  // geofence_action
  if (lhs->geofence_action != rhs->geofence_action) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__GeofenceResult__copy(
  const px4_msgs__msg__GeofenceResult * input,
  px4_msgs__msg__GeofenceResult * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // geofence_max_dist_triggered
  output->geofence_max_dist_triggered = input->geofence_max_dist_triggered;
  // geofence_max_alt_triggered
  output->geofence_max_alt_triggered = input->geofence_max_alt_triggered;
  // geofence_custom_fence_triggered
  output->geofence_custom_fence_triggered = input->geofence_custom_fence_triggered;
  // geofence_action
  output->geofence_action = input->geofence_action;
  return true;
}

px4_msgs__msg__GeofenceResult *
px4_msgs__msg__GeofenceResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GeofenceResult * msg = (px4_msgs__msg__GeofenceResult *)allocator.allocate(sizeof(px4_msgs__msg__GeofenceResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GeofenceResult));
  bool success = px4_msgs__msg__GeofenceResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GeofenceResult__destroy(px4_msgs__msg__GeofenceResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__GeofenceResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__GeofenceResult__Sequence__init(px4_msgs__msg__GeofenceResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GeofenceResult * data = NULL;

  if (size) {
    data = (px4_msgs__msg__GeofenceResult *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__GeofenceResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GeofenceResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GeofenceResult__fini(&data[i - 1]);
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
px4_msgs__msg__GeofenceResult__Sequence__fini(px4_msgs__msg__GeofenceResult__Sequence * array)
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
      px4_msgs__msg__GeofenceResult__fini(&array->data[i]);
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

px4_msgs__msg__GeofenceResult__Sequence *
px4_msgs__msg__GeofenceResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GeofenceResult__Sequence * array = (px4_msgs__msg__GeofenceResult__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__GeofenceResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GeofenceResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GeofenceResult__Sequence__destroy(px4_msgs__msg__GeofenceResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__GeofenceResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__GeofenceResult__Sequence__are_equal(const px4_msgs__msg__GeofenceResult__Sequence * lhs, const px4_msgs__msg__GeofenceResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GeofenceResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GeofenceResult__Sequence__copy(
  const px4_msgs__msg__GeofenceResult__Sequence * input,
  px4_msgs__msg__GeofenceResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GeofenceResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__GeofenceResult * data =
      (px4_msgs__msg__GeofenceResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GeofenceResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GeofenceResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__GeofenceResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
