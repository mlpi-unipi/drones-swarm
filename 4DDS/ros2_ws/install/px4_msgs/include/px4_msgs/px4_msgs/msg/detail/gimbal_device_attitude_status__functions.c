// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GimbalDeviceAttitudeStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_device_attitude_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__GimbalDeviceAttitudeStatus__init(px4_msgs__msg__GimbalDeviceAttitudeStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // target_system
  // target_component
  // device_flags
  // q
  // angular_velocity_x
  // angular_velocity_y
  // angular_velocity_z
  // failure_flags
  // received_from_mavlink
  return true;
}

void
px4_msgs__msg__GimbalDeviceAttitudeStatus__fini(px4_msgs__msg__GimbalDeviceAttitudeStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // target_system
  // target_component
  // device_flags
  // q
  // angular_velocity_x
  // angular_velocity_y
  // angular_velocity_z
  // failure_flags
  // received_from_mavlink
}

bool
px4_msgs__msg__GimbalDeviceAttitudeStatus__are_equal(const px4_msgs__msg__GimbalDeviceAttitudeStatus * lhs, const px4_msgs__msg__GimbalDeviceAttitudeStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // target_system
  if (lhs->target_system != rhs->target_system) {
    return false;
  }
  // target_component
  if (lhs->target_component != rhs->target_component) {
    return false;
  }
  // device_flags
  if (lhs->device_flags != rhs->device_flags) {
    return false;
  }
  // q
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // angular_velocity_x
  if (lhs->angular_velocity_x != rhs->angular_velocity_x) {
    return false;
  }
  // angular_velocity_y
  if (lhs->angular_velocity_y != rhs->angular_velocity_y) {
    return false;
  }
  // angular_velocity_z
  if (lhs->angular_velocity_z != rhs->angular_velocity_z) {
    return false;
  }
  // failure_flags
  if (lhs->failure_flags != rhs->failure_flags) {
    return false;
  }
  // received_from_mavlink
  if (lhs->received_from_mavlink != rhs->received_from_mavlink) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__GimbalDeviceAttitudeStatus__copy(
  const px4_msgs__msg__GimbalDeviceAttitudeStatus * input,
  px4_msgs__msg__GimbalDeviceAttitudeStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // target_system
  output->target_system = input->target_system;
  // target_component
  output->target_component = input->target_component;
  // device_flags
  output->device_flags = input->device_flags;
  // q
  for (size_t i = 0; i < 4; ++i) {
    output->q[i] = input->q[i];
  }
  // angular_velocity_x
  output->angular_velocity_x = input->angular_velocity_x;
  // angular_velocity_y
  output->angular_velocity_y = input->angular_velocity_y;
  // angular_velocity_z
  output->angular_velocity_z = input->angular_velocity_z;
  // failure_flags
  output->failure_flags = input->failure_flags;
  // received_from_mavlink
  output->received_from_mavlink = input->received_from_mavlink;
  return true;
}

px4_msgs__msg__GimbalDeviceAttitudeStatus *
px4_msgs__msg__GimbalDeviceAttitudeStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GimbalDeviceAttitudeStatus * msg = (px4_msgs__msg__GimbalDeviceAttitudeStatus *)allocator.allocate(sizeof(px4_msgs__msg__GimbalDeviceAttitudeStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GimbalDeviceAttitudeStatus));
  bool success = px4_msgs__msg__GimbalDeviceAttitudeStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GimbalDeviceAttitudeStatus__destroy(px4_msgs__msg__GimbalDeviceAttitudeStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__GimbalDeviceAttitudeStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__init(px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GimbalDeviceAttitudeStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__GimbalDeviceAttitudeStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__GimbalDeviceAttitudeStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GimbalDeviceAttitudeStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GimbalDeviceAttitudeStatus__fini(&data[i - 1]);
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
px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__fini(px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * array)
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
      px4_msgs__msg__GimbalDeviceAttitudeStatus__fini(&array->data[i]);
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

px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence *
px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * array = (px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__destroy(px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__are_equal(const px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * lhs, const px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GimbalDeviceAttitudeStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence__copy(
  const px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * input,
  px4_msgs__msg__GimbalDeviceAttitudeStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GimbalDeviceAttitudeStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__GimbalDeviceAttitudeStatus * data =
      (px4_msgs__msg__GimbalDeviceAttitudeStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GimbalDeviceAttitudeStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GimbalDeviceAttitudeStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__GimbalDeviceAttitudeStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
