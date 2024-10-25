// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failure_detector_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FailureDetectorStatus__init(px4_msgs__msg__FailureDetectorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // fd_roll
  // fd_pitch
  // fd_alt
  // fd_ext
  // fd_arm_escs
  // fd_battery
  // fd_imbalanced_prop
  // fd_motor
  // imbalanced_prop_metric
  // motor_failure_mask
  return true;
}

void
px4_msgs__msg__FailureDetectorStatus__fini(px4_msgs__msg__FailureDetectorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // fd_roll
  // fd_pitch
  // fd_alt
  // fd_ext
  // fd_arm_escs
  // fd_battery
  // fd_imbalanced_prop
  // fd_motor
  // imbalanced_prop_metric
  // motor_failure_mask
}

bool
px4_msgs__msg__FailureDetectorStatus__are_equal(const px4_msgs__msg__FailureDetectorStatus * lhs, const px4_msgs__msg__FailureDetectorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // fd_roll
  if (lhs->fd_roll != rhs->fd_roll) {
    return false;
  }
  // fd_pitch
  if (lhs->fd_pitch != rhs->fd_pitch) {
    return false;
  }
  // fd_alt
  if (lhs->fd_alt != rhs->fd_alt) {
    return false;
  }
  // fd_ext
  if (lhs->fd_ext != rhs->fd_ext) {
    return false;
  }
  // fd_arm_escs
  if (lhs->fd_arm_escs != rhs->fd_arm_escs) {
    return false;
  }
  // fd_battery
  if (lhs->fd_battery != rhs->fd_battery) {
    return false;
  }
  // fd_imbalanced_prop
  if (lhs->fd_imbalanced_prop != rhs->fd_imbalanced_prop) {
    return false;
  }
  // fd_motor
  if (lhs->fd_motor != rhs->fd_motor) {
    return false;
  }
  // imbalanced_prop_metric
  if (lhs->imbalanced_prop_metric != rhs->imbalanced_prop_metric) {
    return false;
  }
  // motor_failure_mask
  if (lhs->motor_failure_mask != rhs->motor_failure_mask) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__FailureDetectorStatus__copy(
  const px4_msgs__msg__FailureDetectorStatus * input,
  px4_msgs__msg__FailureDetectorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // fd_roll
  output->fd_roll = input->fd_roll;
  // fd_pitch
  output->fd_pitch = input->fd_pitch;
  // fd_alt
  output->fd_alt = input->fd_alt;
  // fd_ext
  output->fd_ext = input->fd_ext;
  // fd_arm_escs
  output->fd_arm_escs = input->fd_arm_escs;
  // fd_battery
  output->fd_battery = input->fd_battery;
  // fd_imbalanced_prop
  output->fd_imbalanced_prop = input->fd_imbalanced_prop;
  // fd_motor
  output->fd_motor = input->fd_motor;
  // imbalanced_prop_metric
  output->imbalanced_prop_metric = input->imbalanced_prop_metric;
  // motor_failure_mask
  output->motor_failure_mask = input->motor_failure_mask;
  return true;
}

px4_msgs__msg__FailureDetectorStatus *
px4_msgs__msg__FailureDetectorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailureDetectorStatus * msg = (px4_msgs__msg__FailureDetectorStatus *)allocator.allocate(sizeof(px4_msgs__msg__FailureDetectorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FailureDetectorStatus));
  bool success = px4_msgs__msg__FailureDetectorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FailureDetectorStatus__destroy(px4_msgs__msg__FailureDetectorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FailureDetectorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FailureDetectorStatus__Sequence__init(px4_msgs__msg__FailureDetectorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailureDetectorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__FailureDetectorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FailureDetectorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FailureDetectorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FailureDetectorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__FailureDetectorStatus__Sequence__fini(px4_msgs__msg__FailureDetectorStatus__Sequence * array)
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
      px4_msgs__msg__FailureDetectorStatus__fini(&array->data[i]);
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

px4_msgs__msg__FailureDetectorStatus__Sequence *
px4_msgs__msg__FailureDetectorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailureDetectorStatus__Sequence * array = (px4_msgs__msg__FailureDetectorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FailureDetectorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FailureDetectorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FailureDetectorStatus__Sequence__destroy(px4_msgs__msg__FailureDetectorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FailureDetectorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FailureDetectorStatus__Sequence__are_equal(const px4_msgs__msg__FailureDetectorStatus__Sequence * lhs, const px4_msgs__msg__FailureDetectorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FailureDetectorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FailureDetectorStatus__Sequence__copy(
  const px4_msgs__msg__FailureDetectorStatus__Sequence * input,
  px4_msgs__msg__FailureDetectorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FailureDetectorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FailureDetectorStatus * data =
      (px4_msgs__msg__FailureDetectorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FailureDetectorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FailureDetectorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FailureDetectorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
