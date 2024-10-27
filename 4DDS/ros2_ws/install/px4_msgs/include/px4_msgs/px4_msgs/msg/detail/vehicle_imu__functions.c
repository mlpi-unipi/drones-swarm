// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleImu.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleImu__init(px4_msgs__msg__VehicleImu * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // accel_device_id
  // gyro_device_id
  // delta_angle
  // delta_velocity
  // delta_angle_dt
  // delta_velocity_dt
  // delta_angle_clipping
  // delta_velocity_clipping
  // accel_calibration_count
  // gyro_calibration_count
  return true;
}

void
px4_msgs__msg__VehicleImu__fini(px4_msgs__msg__VehicleImu * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // accel_device_id
  // gyro_device_id
  // delta_angle
  // delta_velocity
  // delta_angle_dt
  // delta_velocity_dt
  // delta_angle_clipping
  // delta_velocity_clipping
  // accel_calibration_count
  // gyro_calibration_count
}

bool
px4_msgs__msg__VehicleImu__are_equal(const px4_msgs__msg__VehicleImu * lhs, const px4_msgs__msg__VehicleImu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // accel_device_id
  if (lhs->accel_device_id != rhs->accel_device_id) {
    return false;
  }
  // gyro_device_id
  if (lhs->gyro_device_id != rhs->gyro_device_id) {
    return false;
  }
  // delta_angle
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->delta_angle[i] != rhs->delta_angle[i]) {
      return false;
    }
  }
  // delta_velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->delta_velocity[i] != rhs->delta_velocity[i]) {
      return false;
    }
  }
  // delta_angle_dt
  if (lhs->delta_angle_dt != rhs->delta_angle_dt) {
    return false;
  }
  // delta_velocity_dt
  if (lhs->delta_velocity_dt != rhs->delta_velocity_dt) {
    return false;
  }
  // delta_angle_clipping
  if (lhs->delta_angle_clipping != rhs->delta_angle_clipping) {
    return false;
  }
  // delta_velocity_clipping
  if (lhs->delta_velocity_clipping != rhs->delta_velocity_clipping) {
    return false;
  }
  // accel_calibration_count
  if (lhs->accel_calibration_count != rhs->accel_calibration_count) {
    return false;
  }
  // gyro_calibration_count
  if (lhs->gyro_calibration_count != rhs->gyro_calibration_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleImu__copy(
  const px4_msgs__msg__VehicleImu * input,
  px4_msgs__msg__VehicleImu * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // accel_device_id
  output->accel_device_id = input->accel_device_id;
  // gyro_device_id
  output->gyro_device_id = input->gyro_device_id;
  // delta_angle
  for (size_t i = 0; i < 3; ++i) {
    output->delta_angle[i] = input->delta_angle[i];
  }
  // delta_velocity
  for (size_t i = 0; i < 3; ++i) {
    output->delta_velocity[i] = input->delta_velocity[i];
  }
  // delta_angle_dt
  output->delta_angle_dt = input->delta_angle_dt;
  // delta_velocity_dt
  output->delta_velocity_dt = input->delta_velocity_dt;
  // delta_angle_clipping
  output->delta_angle_clipping = input->delta_angle_clipping;
  // delta_velocity_clipping
  output->delta_velocity_clipping = input->delta_velocity_clipping;
  // accel_calibration_count
  output->accel_calibration_count = input->accel_calibration_count;
  // gyro_calibration_count
  output->gyro_calibration_count = input->gyro_calibration_count;
  return true;
}

px4_msgs__msg__VehicleImu *
px4_msgs__msg__VehicleImu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleImu * msg = (px4_msgs__msg__VehicleImu *)allocator.allocate(sizeof(px4_msgs__msg__VehicleImu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleImu));
  bool success = px4_msgs__msg__VehicleImu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleImu__destroy(px4_msgs__msg__VehicleImu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleImu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleImu__Sequence__init(px4_msgs__msg__VehicleImu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleImu * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleImu *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleImu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleImu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleImu__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleImu__Sequence__fini(px4_msgs__msg__VehicleImu__Sequence * array)
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
      px4_msgs__msg__VehicleImu__fini(&array->data[i]);
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

px4_msgs__msg__VehicleImu__Sequence *
px4_msgs__msg__VehicleImu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleImu__Sequence * array = (px4_msgs__msg__VehicleImu__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleImu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleImu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleImu__Sequence__destroy(px4_msgs__msg__VehicleImu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleImu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleImu__Sequence__are_equal(const px4_msgs__msg__VehicleImu__Sequence * lhs, const px4_msgs__msg__VehicleImu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleImu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleImu__Sequence__copy(
  const px4_msgs__msg__VehicleImu__Sequence * input,
  px4_msgs__msg__VehicleImu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleImu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleImu * data =
      (px4_msgs__msg__VehicleImu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleImu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleImu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleImu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
