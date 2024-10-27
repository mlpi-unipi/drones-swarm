// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/CanInterfaceStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/can_interface_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__CanInterfaceStatus__init(px4_msgs__msg__CanInterfaceStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // interface
  // io_errors
  // frames_tx
  // frames_rx
  return true;
}

void
px4_msgs__msg__CanInterfaceStatus__fini(px4_msgs__msg__CanInterfaceStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // interface
  // io_errors
  // frames_tx
  // frames_rx
}

bool
px4_msgs__msg__CanInterfaceStatus__are_equal(const px4_msgs__msg__CanInterfaceStatus * lhs, const px4_msgs__msg__CanInterfaceStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // interface
  if (lhs->interface != rhs->interface) {
    return false;
  }
  // io_errors
  if (lhs->io_errors != rhs->io_errors) {
    return false;
  }
  // frames_tx
  if (lhs->frames_tx != rhs->frames_tx) {
    return false;
  }
  // frames_rx
  if (lhs->frames_rx != rhs->frames_rx) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__CanInterfaceStatus__copy(
  const px4_msgs__msg__CanInterfaceStatus * input,
  px4_msgs__msg__CanInterfaceStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // interface
  output->interface = input->interface;
  // io_errors
  output->io_errors = input->io_errors;
  // frames_tx
  output->frames_tx = input->frames_tx;
  // frames_rx
  output->frames_rx = input->frames_rx;
  return true;
}

px4_msgs__msg__CanInterfaceStatus *
px4_msgs__msg__CanInterfaceStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CanInterfaceStatus * msg = (px4_msgs__msg__CanInterfaceStatus *)allocator.allocate(sizeof(px4_msgs__msg__CanInterfaceStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__CanInterfaceStatus));
  bool success = px4_msgs__msg__CanInterfaceStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__CanInterfaceStatus__destroy(px4_msgs__msg__CanInterfaceStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__CanInterfaceStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__CanInterfaceStatus__Sequence__init(px4_msgs__msg__CanInterfaceStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CanInterfaceStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__CanInterfaceStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__CanInterfaceStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__CanInterfaceStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__CanInterfaceStatus__fini(&data[i - 1]);
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
px4_msgs__msg__CanInterfaceStatus__Sequence__fini(px4_msgs__msg__CanInterfaceStatus__Sequence * array)
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
      px4_msgs__msg__CanInterfaceStatus__fini(&array->data[i]);
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

px4_msgs__msg__CanInterfaceStatus__Sequence *
px4_msgs__msg__CanInterfaceStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CanInterfaceStatus__Sequence * array = (px4_msgs__msg__CanInterfaceStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__CanInterfaceStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__CanInterfaceStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__CanInterfaceStatus__Sequence__destroy(px4_msgs__msg__CanInterfaceStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__CanInterfaceStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__CanInterfaceStatus__Sequence__are_equal(const px4_msgs__msg__CanInterfaceStatus__Sequence * lhs, const px4_msgs__msg__CanInterfaceStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__CanInterfaceStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__CanInterfaceStatus__Sequence__copy(
  const px4_msgs__msg__CanInterfaceStatus__Sequence * input,
  px4_msgs__msg__CanInterfaceStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__CanInterfaceStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__CanInterfaceStatus * data =
      (px4_msgs__msg__CanInterfaceStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__CanInterfaceStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__CanInterfaceStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__CanInterfaceStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
