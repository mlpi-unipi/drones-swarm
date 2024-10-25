// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/control_allocator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__ControlAllocatorStatus__init(px4_msgs__msg__ControlAllocatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // torque_setpoint_achieved
  // unallocated_torque
  // thrust_setpoint_achieved
  // unallocated_thrust
  // actuator_saturation
  // handled_motor_failure_mask
  return true;
}

void
px4_msgs__msg__ControlAllocatorStatus__fini(px4_msgs__msg__ControlAllocatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // torque_setpoint_achieved
  // unallocated_torque
  // thrust_setpoint_achieved
  // unallocated_thrust
  // actuator_saturation
  // handled_motor_failure_mask
}

bool
px4_msgs__msg__ControlAllocatorStatus__are_equal(const px4_msgs__msg__ControlAllocatorStatus * lhs, const px4_msgs__msg__ControlAllocatorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // torque_setpoint_achieved
  if (lhs->torque_setpoint_achieved != rhs->torque_setpoint_achieved) {
    return false;
  }
  // unallocated_torque
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->unallocated_torque[i] != rhs->unallocated_torque[i]) {
      return false;
    }
  }
  // thrust_setpoint_achieved
  if (lhs->thrust_setpoint_achieved != rhs->thrust_setpoint_achieved) {
    return false;
  }
  // unallocated_thrust
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->unallocated_thrust[i] != rhs->unallocated_thrust[i]) {
      return false;
    }
  }
  // actuator_saturation
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->actuator_saturation[i] != rhs->actuator_saturation[i]) {
      return false;
    }
  }
  // handled_motor_failure_mask
  if (lhs->handled_motor_failure_mask != rhs->handled_motor_failure_mask) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__ControlAllocatorStatus__copy(
  const px4_msgs__msg__ControlAllocatorStatus * input,
  px4_msgs__msg__ControlAllocatorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // torque_setpoint_achieved
  output->torque_setpoint_achieved = input->torque_setpoint_achieved;
  // unallocated_torque
  for (size_t i = 0; i < 3; ++i) {
    output->unallocated_torque[i] = input->unallocated_torque[i];
  }
  // thrust_setpoint_achieved
  output->thrust_setpoint_achieved = input->thrust_setpoint_achieved;
  // unallocated_thrust
  for (size_t i = 0; i < 3; ++i) {
    output->unallocated_thrust[i] = input->unallocated_thrust[i];
  }
  // actuator_saturation
  for (size_t i = 0; i < 16; ++i) {
    output->actuator_saturation[i] = input->actuator_saturation[i];
  }
  // handled_motor_failure_mask
  output->handled_motor_failure_mask = input->handled_motor_failure_mask;
  return true;
}

px4_msgs__msg__ControlAllocatorStatus *
px4_msgs__msg__ControlAllocatorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ControlAllocatorStatus * msg = (px4_msgs__msg__ControlAllocatorStatus *)allocator.allocate(sizeof(px4_msgs__msg__ControlAllocatorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__ControlAllocatorStatus));
  bool success = px4_msgs__msg__ControlAllocatorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__ControlAllocatorStatus__destroy(px4_msgs__msg__ControlAllocatorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__ControlAllocatorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__ControlAllocatorStatus__Sequence__init(px4_msgs__msg__ControlAllocatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ControlAllocatorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__ControlAllocatorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__ControlAllocatorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__ControlAllocatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__ControlAllocatorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__ControlAllocatorStatus__Sequence__fini(px4_msgs__msg__ControlAllocatorStatus__Sequence * array)
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
      px4_msgs__msg__ControlAllocatorStatus__fini(&array->data[i]);
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

px4_msgs__msg__ControlAllocatorStatus__Sequence *
px4_msgs__msg__ControlAllocatorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ControlAllocatorStatus__Sequence * array = (px4_msgs__msg__ControlAllocatorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__ControlAllocatorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__ControlAllocatorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__ControlAllocatorStatus__Sequence__destroy(px4_msgs__msg__ControlAllocatorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__ControlAllocatorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__ControlAllocatorStatus__Sequence__are_equal(const px4_msgs__msg__ControlAllocatorStatus__Sequence * lhs, const px4_msgs__msg__ControlAllocatorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__ControlAllocatorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__ControlAllocatorStatus__Sequence__copy(
  const px4_msgs__msg__ControlAllocatorStatus__Sequence * input,
  px4_msgs__msg__ControlAllocatorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__ControlAllocatorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__ControlAllocatorStatus * data =
      (px4_msgs__msg__ControlAllocatorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__ControlAllocatorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__ControlAllocatorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__ControlAllocatorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
