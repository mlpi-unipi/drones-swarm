// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_correction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__SensorCorrection__init(px4_msgs__msg__SensorCorrection * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // accel_device_ids
  // accel_temperature
  // accel_offset_0
  // accel_offset_1
  // accel_offset_2
  // accel_offset_3
  // gyro_device_ids
  // gyro_temperature
  // gyro_offset_0
  // gyro_offset_1
  // gyro_offset_2
  // gyro_offset_3
  // mag_device_ids
  // mag_temperature
  // mag_offset_0
  // mag_offset_1
  // mag_offset_2
  // mag_offset_3
  // baro_device_ids
  // baro_temperature
  // baro_offset_0
  // baro_offset_1
  // baro_offset_2
  // baro_offset_3
  return true;
}

void
px4_msgs__msg__SensorCorrection__fini(px4_msgs__msg__SensorCorrection * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // accel_device_ids
  // accel_temperature
  // accel_offset_0
  // accel_offset_1
  // accel_offset_2
  // accel_offset_3
  // gyro_device_ids
  // gyro_temperature
  // gyro_offset_0
  // gyro_offset_1
  // gyro_offset_2
  // gyro_offset_3
  // mag_device_ids
  // mag_temperature
  // mag_offset_0
  // mag_offset_1
  // mag_offset_2
  // mag_offset_3
  // baro_device_ids
  // baro_temperature
  // baro_offset_0
  // baro_offset_1
  // baro_offset_2
  // baro_offset_3
}

bool
px4_msgs__msg__SensorCorrection__are_equal(const px4_msgs__msg__SensorCorrection * lhs, const px4_msgs__msg__SensorCorrection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // accel_device_ids
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->accel_device_ids[i] != rhs->accel_device_ids[i]) {
      return false;
    }
  }
  // accel_temperature
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->accel_temperature[i] != rhs->accel_temperature[i]) {
      return false;
    }
  }
  // accel_offset_0
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_offset_0[i] != rhs->accel_offset_0[i]) {
      return false;
    }
  }
  // accel_offset_1
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_offset_1[i] != rhs->accel_offset_1[i]) {
      return false;
    }
  }
  // accel_offset_2
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_offset_2[i] != rhs->accel_offset_2[i]) {
      return false;
    }
  }
  // accel_offset_3
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_offset_3[i] != rhs->accel_offset_3[i]) {
      return false;
    }
  }
  // gyro_device_ids
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->gyro_device_ids[i] != rhs->gyro_device_ids[i]) {
      return false;
    }
  }
  // gyro_temperature
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->gyro_temperature[i] != rhs->gyro_temperature[i]) {
      return false;
    }
  }
  // gyro_offset_0
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_offset_0[i] != rhs->gyro_offset_0[i]) {
      return false;
    }
  }
  // gyro_offset_1
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_offset_1[i] != rhs->gyro_offset_1[i]) {
      return false;
    }
  }
  // gyro_offset_2
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_offset_2[i] != rhs->gyro_offset_2[i]) {
      return false;
    }
  }
  // gyro_offset_3
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_offset_3[i] != rhs->gyro_offset_3[i]) {
      return false;
    }
  }
  // mag_device_ids
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->mag_device_ids[i] != rhs->mag_device_ids[i]) {
      return false;
    }
  }
  // mag_temperature
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->mag_temperature[i] != rhs->mag_temperature[i]) {
      return false;
    }
  }
  // mag_offset_0
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_offset_0[i] != rhs->mag_offset_0[i]) {
      return false;
    }
  }
  // mag_offset_1
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_offset_1[i] != rhs->mag_offset_1[i]) {
      return false;
    }
  }
  // mag_offset_2
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_offset_2[i] != rhs->mag_offset_2[i]) {
      return false;
    }
  }
  // mag_offset_3
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_offset_3[i] != rhs->mag_offset_3[i]) {
      return false;
    }
  }
  // baro_device_ids
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->baro_device_ids[i] != rhs->baro_device_ids[i]) {
      return false;
    }
  }
  // baro_temperature
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->baro_temperature[i] != rhs->baro_temperature[i]) {
      return false;
    }
  }
  // baro_offset_0
  if (lhs->baro_offset_0 != rhs->baro_offset_0) {
    return false;
  }
  // baro_offset_1
  if (lhs->baro_offset_1 != rhs->baro_offset_1) {
    return false;
  }
  // baro_offset_2
  if (lhs->baro_offset_2 != rhs->baro_offset_2) {
    return false;
  }
  // baro_offset_3
  if (lhs->baro_offset_3 != rhs->baro_offset_3) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SensorCorrection__copy(
  const px4_msgs__msg__SensorCorrection * input,
  px4_msgs__msg__SensorCorrection * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // accel_device_ids
  for (size_t i = 0; i < 4; ++i) {
    output->accel_device_ids[i] = input->accel_device_ids[i];
  }
  // accel_temperature
  for (size_t i = 0; i < 4; ++i) {
    output->accel_temperature[i] = input->accel_temperature[i];
  }
  // accel_offset_0
  for (size_t i = 0; i < 3; ++i) {
    output->accel_offset_0[i] = input->accel_offset_0[i];
  }
  // accel_offset_1
  for (size_t i = 0; i < 3; ++i) {
    output->accel_offset_1[i] = input->accel_offset_1[i];
  }
  // accel_offset_2
  for (size_t i = 0; i < 3; ++i) {
    output->accel_offset_2[i] = input->accel_offset_2[i];
  }
  // accel_offset_3
  for (size_t i = 0; i < 3; ++i) {
    output->accel_offset_3[i] = input->accel_offset_3[i];
  }
  // gyro_device_ids
  for (size_t i = 0; i < 4; ++i) {
    output->gyro_device_ids[i] = input->gyro_device_ids[i];
  }
  // gyro_temperature
  for (size_t i = 0; i < 4; ++i) {
    output->gyro_temperature[i] = input->gyro_temperature[i];
  }
  // gyro_offset_0
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_offset_0[i] = input->gyro_offset_0[i];
  }
  // gyro_offset_1
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_offset_1[i] = input->gyro_offset_1[i];
  }
  // gyro_offset_2
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_offset_2[i] = input->gyro_offset_2[i];
  }
  // gyro_offset_3
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_offset_3[i] = input->gyro_offset_3[i];
  }
  // mag_device_ids
  for (size_t i = 0; i < 4; ++i) {
    output->mag_device_ids[i] = input->mag_device_ids[i];
  }
  // mag_temperature
  for (size_t i = 0; i < 4; ++i) {
    output->mag_temperature[i] = input->mag_temperature[i];
  }
  // mag_offset_0
  for (size_t i = 0; i < 3; ++i) {
    output->mag_offset_0[i] = input->mag_offset_0[i];
  }
  // mag_offset_1
  for (size_t i = 0; i < 3; ++i) {
    output->mag_offset_1[i] = input->mag_offset_1[i];
  }
  // mag_offset_2
  for (size_t i = 0; i < 3; ++i) {
    output->mag_offset_2[i] = input->mag_offset_2[i];
  }
  // mag_offset_3
  for (size_t i = 0; i < 3; ++i) {
    output->mag_offset_3[i] = input->mag_offset_3[i];
  }
  // baro_device_ids
  for (size_t i = 0; i < 4; ++i) {
    output->baro_device_ids[i] = input->baro_device_ids[i];
  }
  // baro_temperature
  for (size_t i = 0; i < 4; ++i) {
    output->baro_temperature[i] = input->baro_temperature[i];
  }
  // baro_offset_0
  output->baro_offset_0 = input->baro_offset_0;
  // baro_offset_1
  output->baro_offset_1 = input->baro_offset_1;
  // baro_offset_2
  output->baro_offset_2 = input->baro_offset_2;
  // baro_offset_3
  output->baro_offset_3 = input->baro_offset_3;
  return true;
}

px4_msgs__msg__SensorCorrection *
px4_msgs__msg__SensorCorrection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorCorrection * msg = (px4_msgs__msg__SensorCorrection *)allocator.allocate(sizeof(px4_msgs__msg__SensorCorrection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SensorCorrection));
  bool success = px4_msgs__msg__SensorCorrection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SensorCorrection__destroy(px4_msgs__msg__SensorCorrection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__SensorCorrection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__SensorCorrection__Sequence__init(px4_msgs__msg__SensorCorrection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorCorrection * data = NULL;

  if (size) {
    data = (px4_msgs__msg__SensorCorrection *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__SensorCorrection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SensorCorrection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SensorCorrection__fini(&data[i - 1]);
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
px4_msgs__msg__SensorCorrection__Sequence__fini(px4_msgs__msg__SensorCorrection__Sequence * array)
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
      px4_msgs__msg__SensorCorrection__fini(&array->data[i]);
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

px4_msgs__msg__SensorCorrection__Sequence *
px4_msgs__msg__SensorCorrection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorCorrection__Sequence * array = (px4_msgs__msg__SensorCorrection__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__SensorCorrection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SensorCorrection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SensorCorrection__Sequence__destroy(px4_msgs__msg__SensorCorrection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__SensorCorrection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__SensorCorrection__Sequence__are_equal(const px4_msgs__msg__SensorCorrection__Sequence * lhs, const px4_msgs__msg__SensorCorrection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SensorCorrection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SensorCorrection__Sequence__copy(
  const px4_msgs__msg__SensorCorrection__Sequence * input,
  px4_msgs__msg__SensorCorrection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SensorCorrection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__SensorCorrection * data =
      (px4_msgs__msg__SensorCorrection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SensorCorrection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SensorCorrection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__SensorCorrection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
