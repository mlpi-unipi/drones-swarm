// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/gimbal_device_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__GimbalDeviceInformation__init(px4_msgs__msg__GimbalDeviceInformation * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // vendor_name
  // model_name
  // custom_name
  // firmware_version
  // hardware_version
  // uid
  // cap_flags
  // custom_cap_flags
  // roll_min
  // roll_max
  // pitch_min
  // pitch_max
  // yaw_min
  // yaw_max
  // gimbal_device_compid
  return true;
}

void
px4_msgs__msg__GimbalDeviceInformation__fini(px4_msgs__msg__GimbalDeviceInformation * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // vendor_name
  // model_name
  // custom_name
  // firmware_version
  // hardware_version
  // uid
  // cap_flags
  // custom_cap_flags
  // roll_min
  // roll_max
  // pitch_min
  // pitch_max
  // yaw_min
  // yaw_max
  // gimbal_device_compid
}

bool
px4_msgs__msg__GimbalDeviceInformation__are_equal(const px4_msgs__msg__GimbalDeviceInformation * lhs, const px4_msgs__msg__GimbalDeviceInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // vendor_name
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->vendor_name[i] != rhs->vendor_name[i]) {
      return false;
    }
  }
  // model_name
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->model_name[i] != rhs->model_name[i]) {
      return false;
    }
  }
  // custom_name
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->custom_name[i] != rhs->custom_name[i]) {
      return false;
    }
  }
  // firmware_version
  if (lhs->firmware_version != rhs->firmware_version) {
    return false;
  }
  // hardware_version
  if (lhs->hardware_version != rhs->hardware_version) {
    return false;
  }
  // uid
  if (lhs->uid != rhs->uid) {
    return false;
  }
  // cap_flags
  if (lhs->cap_flags != rhs->cap_flags) {
    return false;
  }
  // custom_cap_flags
  if (lhs->custom_cap_flags != rhs->custom_cap_flags) {
    return false;
  }
  // roll_min
  if (lhs->roll_min != rhs->roll_min) {
    return false;
  }
  // roll_max
  if (lhs->roll_max != rhs->roll_max) {
    return false;
  }
  // pitch_min
  if (lhs->pitch_min != rhs->pitch_min) {
    return false;
  }
  // pitch_max
  if (lhs->pitch_max != rhs->pitch_max) {
    return false;
  }
  // yaw_min
  if (lhs->yaw_min != rhs->yaw_min) {
    return false;
  }
  // yaw_max
  if (lhs->yaw_max != rhs->yaw_max) {
    return false;
  }
  // gimbal_device_compid
  if (lhs->gimbal_device_compid != rhs->gimbal_device_compid) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__GimbalDeviceInformation__copy(
  const px4_msgs__msg__GimbalDeviceInformation * input,
  px4_msgs__msg__GimbalDeviceInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // vendor_name
  for (size_t i = 0; i < 32; ++i) {
    output->vendor_name[i] = input->vendor_name[i];
  }
  // model_name
  for (size_t i = 0; i < 32; ++i) {
    output->model_name[i] = input->model_name[i];
  }
  // custom_name
  for (size_t i = 0; i < 32; ++i) {
    output->custom_name[i] = input->custom_name[i];
  }
  // firmware_version
  output->firmware_version = input->firmware_version;
  // hardware_version
  output->hardware_version = input->hardware_version;
  // uid
  output->uid = input->uid;
  // cap_flags
  output->cap_flags = input->cap_flags;
  // custom_cap_flags
  output->custom_cap_flags = input->custom_cap_flags;
  // roll_min
  output->roll_min = input->roll_min;
  // roll_max
  output->roll_max = input->roll_max;
  // pitch_min
  output->pitch_min = input->pitch_min;
  // pitch_max
  output->pitch_max = input->pitch_max;
  // yaw_min
  output->yaw_min = input->yaw_min;
  // yaw_max
  output->yaw_max = input->yaw_max;
  // gimbal_device_compid
  output->gimbal_device_compid = input->gimbal_device_compid;
  return true;
}

px4_msgs__msg__GimbalDeviceInformation *
px4_msgs__msg__GimbalDeviceInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GimbalDeviceInformation * msg = (px4_msgs__msg__GimbalDeviceInformation *)allocator.allocate(sizeof(px4_msgs__msg__GimbalDeviceInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GimbalDeviceInformation));
  bool success = px4_msgs__msg__GimbalDeviceInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GimbalDeviceInformation__destroy(px4_msgs__msg__GimbalDeviceInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__GimbalDeviceInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__GimbalDeviceInformation__Sequence__init(px4_msgs__msg__GimbalDeviceInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GimbalDeviceInformation * data = NULL;

  if (size) {
    data = (px4_msgs__msg__GimbalDeviceInformation *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__GimbalDeviceInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GimbalDeviceInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GimbalDeviceInformation__fini(&data[i - 1]);
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
px4_msgs__msg__GimbalDeviceInformation__Sequence__fini(px4_msgs__msg__GimbalDeviceInformation__Sequence * array)
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
      px4_msgs__msg__GimbalDeviceInformation__fini(&array->data[i]);
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

px4_msgs__msg__GimbalDeviceInformation__Sequence *
px4_msgs__msg__GimbalDeviceInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GimbalDeviceInformation__Sequence * array = (px4_msgs__msg__GimbalDeviceInformation__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__GimbalDeviceInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GimbalDeviceInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GimbalDeviceInformation__Sequence__destroy(px4_msgs__msg__GimbalDeviceInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__GimbalDeviceInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__GimbalDeviceInformation__Sequence__are_equal(const px4_msgs__msg__GimbalDeviceInformation__Sequence * lhs, const px4_msgs__msg__GimbalDeviceInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GimbalDeviceInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GimbalDeviceInformation__Sequence__copy(
  const px4_msgs__msg__GimbalDeviceInformation__Sequence * input,
  px4_msgs__msg__GimbalDeviceInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GimbalDeviceInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__GimbalDeviceInformation * data =
      (px4_msgs__msg__GimbalDeviceInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GimbalDeviceInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GimbalDeviceInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__GimbalDeviceInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
