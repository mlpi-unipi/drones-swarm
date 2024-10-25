// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/position_setpoint_triplet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `previous`
// Member `current`
// Member `next`
#include "px4_msgs/msg/detail/position_setpoint__functions.h"

bool
px4_msgs__msg__PositionSetpointTriplet__init(px4_msgs__msg__PositionSetpointTriplet * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // previous
  if (!px4_msgs__msg__PositionSetpoint__init(&msg->previous)) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
    return false;
  }
  // current
  if (!px4_msgs__msg__PositionSetpoint__init(&msg->current)) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
    return false;
  }
  // next
  if (!px4_msgs__msg__PositionSetpoint__init(&msg->next)) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
    return false;
  }
  return true;
}

void
px4_msgs__msg__PositionSetpointTriplet__fini(px4_msgs__msg__PositionSetpointTriplet * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // previous
  px4_msgs__msg__PositionSetpoint__fini(&msg->previous);
  // current
  px4_msgs__msg__PositionSetpoint__fini(&msg->current);
  // next
  px4_msgs__msg__PositionSetpoint__fini(&msg->next);
}

bool
px4_msgs__msg__PositionSetpointTriplet__are_equal(const px4_msgs__msg__PositionSetpointTriplet * lhs, const px4_msgs__msg__PositionSetpointTriplet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // previous
  if (!px4_msgs__msg__PositionSetpoint__are_equal(
      &(lhs->previous), &(rhs->previous)))
  {
    return false;
  }
  // current
  if (!px4_msgs__msg__PositionSetpoint__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  // next
  if (!px4_msgs__msg__PositionSetpoint__are_equal(
      &(lhs->next), &(rhs->next)))
  {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__PositionSetpointTriplet__copy(
  const px4_msgs__msg__PositionSetpointTriplet * input,
  px4_msgs__msg__PositionSetpointTriplet * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // previous
  if (!px4_msgs__msg__PositionSetpoint__copy(
      &(input->previous), &(output->previous)))
  {
    return false;
  }
  // current
  if (!px4_msgs__msg__PositionSetpoint__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  // next
  if (!px4_msgs__msg__PositionSetpoint__copy(
      &(input->next), &(output->next)))
  {
    return false;
  }
  return true;
}

px4_msgs__msg__PositionSetpointTriplet *
px4_msgs__msg__PositionSetpointTriplet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionSetpointTriplet * msg = (px4_msgs__msg__PositionSetpointTriplet *)allocator.allocate(sizeof(px4_msgs__msg__PositionSetpointTriplet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__PositionSetpointTriplet));
  bool success = px4_msgs__msg__PositionSetpointTriplet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__PositionSetpointTriplet__destroy(px4_msgs__msg__PositionSetpointTriplet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__PositionSetpointTriplet__Sequence__init(px4_msgs__msg__PositionSetpointTriplet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionSetpointTriplet * data = NULL;

  if (size) {
    data = (px4_msgs__msg__PositionSetpointTriplet *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__PositionSetpointTriplet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__PositionSetpointTriplet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__PositionSetpointTriplet__fini(&data[i - 1]);
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
px4_msgs__msg__PositionSetpointTriplet__Sequence__fini(px4_msgs__msg__PositionSetpointTriplet__Sequence * array)
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
      px4_msgs__msg__PositionSetpointTriplet__fini(&array->data[i]);
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

px4_msgs__msg__PositionSetpointTriplet__Sequence *
px4_msgs__msg__PositionSetpointTriplet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PositionSetpointTriplet__Sequence * array = (px4_msgs__msg__PositionSetpointTriplet__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__PositionSetpointTriplet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__PositionSetpointTriplet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__PositionSetpointTriplet__Sequence__destroy(px4_msgs__msg__PositionSetpointTriplet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__PositionSetpointTriplet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__PositionSetpointTriplet__Sequence__are_equal(const px4_msgs__msg__PositionSetpointTriplet__Sequence * lhs, const px4_msgs__msg__PositionSetpointTriplet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__PositionSetpointTriplet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__PositionSetpointTriplet__Sequence__copy(
  const px4_msgs__msg__PositionSetpointTriplet__Sequence * input,
  px4_msgs__msg__PositionSetpointTriplet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__PositionSetpointTriplet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__PositionSetpointTriplet * data =
      (px4_msgs__msg__PositionSetpointTriplet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__PositionSetpointTriplet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__PositionSetpointTriplet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__PositionSetpointTriplet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
