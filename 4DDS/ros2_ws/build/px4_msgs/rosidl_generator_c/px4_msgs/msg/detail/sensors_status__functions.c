// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensors_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__SensorsStatus__init(px4_msgs__msg__SensorsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // device_id_primary
  // device_ids
  // inconsistency
  // healthy
  // priority
  // enabled
  // external
  return true;
}

void
px4_msgs__msg__SensorsStatus__fini(px4_msgs__msg__SensorsStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // device_id_primary
  // device_ids
  // inconsistency
  // healthy
  // priority
  // enabled
  // external
}

bool
px4_msgs__msg__SensorsStatus__are_equal(const px4_msgs__msg__SensorsStatus * lhs, const px4_msgs__msg__SensorsStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // device_id_primary
  if (lhs->device_id_primary != rhs->device_id_primary) {
    return false;
  }
  // device_ids
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->device_ids[i] != rhs->device_ids[i]) {
      return false;
    }
  }
  // inconsistency
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->inconsistency[i] != rhs->inconsistency[i]) {
      return false;
    }
  }
  // healthy
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->healthy[i] != rhs->healthy[i]) {
      return false;
    }
  }
  // priority
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->priority[i] != rhs->priority[i]) {
      return false;
    }
  }
  // enabled
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->enabled[i] != rhs->enabled[i]) {
      return false;
    }
  }
  // external
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->external[i] != rhs->external[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SensorsStatus__copy(
  const px4_msgs__msg__SensorsStatus * input,
  px4_msgs__msg__SensorsStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // device_id_primary
  output->device_id_primary = input->device_id_primary;
  // device_ids
  for (size_t i = 0; i < 4; ++i) {
    output->device_ids[i] = input->device_ids[i];
  }
  // inconsistency
  for (size_t i = 0; i < 4; ++i) {
    output->inconsistency[i] = input->inconsistency[i];
  }
  // healthy
  for (size_t i = 0; i < 4; ++i) {
    output->healthy[i] = input->healthy[i];
  }
  // priority
  for (size_t i = 0; i < 4; ++i) {
    output->priority[i] = input->priority[i];
  }
  // enabled
  for (size_t i = 0; i < 4; ++i) {
    output->enabled[i] = input->enabled[i];
  }
  // external
  for (size_t i = 0; i < 4; ++i) {
    output->external[i] = input->external[i];
  }
  return true;
}

px4_msgs__msg__SensorsStatus *
px4_msgs__msg__SensorsStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorsStatus * msg = (px4_msgs__msg__SensorsStatus *)allocator.allocate(sizeof(px4_msgs__msg__SensorsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SensorsStatus));
  bool success = px4_msgs__msg__SensorsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SensorsStatus__destroy(px4_msgs__msg__SensorsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__SensorsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__SensorsStatus__Sequence__init(px4_msgs__msg__SensorsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorsStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__SensorsStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__SensorsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SensorsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SensorsStatus__fini(&data[i - 1]);
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
px4_msgs__msg__SensorsStatus__Sequence__fini(px4_msgs__msg__SensorsStatus__Sequence * array)
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
      px4_msgs__msg__SensorsStatus__fini(&array->data[i]);
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

px4_msgs__msg__SensorsStatus__Sequence *
px4_msgs__msg__SensorsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorsStatus__Sequence * array = (px4_msgs__msg__SensorsStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__SensorsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SensorsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SensorsStatus__Sequence__destroy(px4_msgs__msg__SensorsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__SensorsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__SensorsStatus__Sequence__are_equal(const px4_msgs__msg__SensorsStatus__Sequence * lhs, const px4_msgs__msg__SensorsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SensorsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SensorsStatus__Sequence__copy(
  const px4_msgs__msg__SensorsStatus__Sequence * input,
  px4_msgs__msg__SensorsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SensorsStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__SensorsStatus * data =
      (px4_msgs__msg__SensorsStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SensorsStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SensorsStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__SensorsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
