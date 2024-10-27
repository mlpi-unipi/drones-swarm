// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_imu_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleImuStatus__init(px4_msgs__msg__VehicleImuStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // accel_device_id
  // gyro_device_id
  // accel_clipping
  // gyro_clipping
  // accel_error_count
  // gyro_error_count
  // accel_rate_hz
  // gyro_rate_hz
  // accel_raw_rate_hz
  // gyro_raw_rate_hz
  // accel_vibration_metric
  // gyro_vibration_metric
  // delta_angle_coning_metric
  // mean_accel
  // mean_gyro
  // var_accel
  // var_gyro
  // temperature_accel
  // temperature_gyro
  return true;
}

void
px4_msgs__msg__VehicleImuStatus__fini(px4_msgs__msg__VehicleImuStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // accel_device_id
  // gyro_device_id
  // accel_clipping
  // gyro_clipping
  // accel_error_count
  // gyro_error_count
  // accel_rate_hz
  // gyro_rate_hz
  // accel_raw_rate_hz
  // gyro_raw_rate_hz
  // accel_vibration_metric
  // gyro_vibration_metric
  // delta_angle_coning_metric
  // mean_accel
  // mean_gyro
  // var_accel
  // var_gyro
  // temperature_accel
  // temperature_gyro
}

bool
px4_msgs__msg__VehicleImuStatus__are_equal(const px4_msgs__msg__VehicleImuStatus * lhs, const px4_msgs__msg__VehicleImuStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
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
  // accel_clipping
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_clipping[i] != rhs->accel_clipping[i]) {
      return false;
    }
  }
  // gyro_clipping
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_clipping[i] != rhs->gyro_clipping[i]) {
      return false;
    }
  }
  // accel_error_count
  if (lhs->accel_error_count != rhs->accel_error_count) {
    return false;
  }
  // gyro_error_count
  if (lhs->gyro_error_count != rhs->gyro_error_count) {
    return false;
  }
  // accel_rate_hz
  if (lhs->accel_rate_hz != rhs->accel_rate_hz) {
    return false;
  }
  // gyro_rate_hz
  if (lhs->gyro_rate_hz != rhs->gyro_rate_hz) {
    return false;
  }
  // accel_raw_rate_hz
  if (lhs->accel_raw_rate_hz != rhs->accel_raw_rate_hz) {
    return false;
  }
  // gyro_raw_rate_hz
  if (lhs->gyro_raw_rate_hz != rhs->gyro_raw_rate_hz) {
    return false;
  }
  // accel_vibration_metric
  if (lhs->accel_vibration_metric != rhs->accel_vibration_metric) {
    return false;
  }
  // gyro_vibration_metric
  if (lhs->gyro_vibration_metric != rhs->gyro_vibration_metric) {
    return false;
  }
  // delta_angle_coning_metric
  if (lhs->delta_angle_coning_metric != rhs->delta_angle_coning_metric) {
    return false;
  }
  // mean_accel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mean_accel[i] != rhs->mean_accel[i]) {
      return false;
    }
  }
  // mean_gyro
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mean_gyro[i] != rhs->mean_gyro[i]) {
      return false;
    }
  }
  // var_accel
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->var_accel[i] != rhs->var_accel[i]) {
      return false;
    }
  }
  // var_gyro
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->var_gyro[i] != rhs->var_gyro[i]) {
      return false;
    }
  }
  // temperature_accel
  if (lhs->temperature_accel != rhs->temperature_accel) {
    return false;
  }
  // temperature_gyro
  if (lhs->temperature_gyro != rhs->temperature_gyro) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleImuStatus__copy(
  const px4_msgs__msg__VehicleImuStatus * input,
  px4_msgs__msg__VehicleImuStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // accel_device_id
  output->accel_device_id = input->accel_device_id;
  // gyro_device_id
  output->gyro_device_id = input->gyro_device_id;
  // accel_clipping
  for (size_t i = 0; i < 3; ++i) {
    output->accel_clipping[i] = input->accel_clipping[i];
  }
  // gyro_clipping
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_clipping[i] = input->gyro_clipping[i];
  }
  // accel_error_count
  output->accel_error_count = input->accel_error_count;
  // gyro_error_count
  output->gyro_error_count = input->gyro_error_count;
  // accel_rate_hz
  output->accel_rate_hz = input->accel_rate_hz;
  // gyro_rate_hz
  output->gyro_rate_hz = input->gyro_rate_hz;
  // accel_raw_rate_hz
  output->accel_raw_rate_hz = input->accel_raw_rate_hz;
  // gyro_raw_rate_hz
  output->gyro_raw_rate_hz = input->gyro_raw_rate_hz;
  // accel_vibration_metric
  output->accel_vibration_metric = input->accel_vibration_metric;
  // gyro_vibration_metric
  output->gyro_vibration_metric = input->gyro_vibration_metric;
  // delta_angle_coning_metric
  output->delta_angle_coning_metric = input->delta_angle_coning_metric;
  // mean_accel
  for (size_t i = 0; i < 3; ++i) {
    output->mean_accel[i] = input->mean_accel[i];
  }
  // mean_gyro
  for (size_t i = 0; i < 3; ++i) {
    output->mean_gyro[i] = input->mean_gyro[i];
  }
  // var_accel
  for (size_t i = 0; i < 3; ++i) {
    output->var_accel[i] = input->var_accel[i];
  }
  // var_gyro
  for (size_t i = 0; i < 3; ++i) {
    output->var_gyro[i] = input->var_gyro[i];
  }
  // temperature_accel
  output->temperature_accel = input->temperature_accel;
  // temperature_gyro
  output->temperature_gyro = input->temperature_gyro;
  return true;
}

px4_msgs__msg__VehicleImuStatus *
px4_msgs__msg__VehicleImuStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleImuStatus * msg = (px4_msgs__msg__VehicleImuStatus *)allocator.allocate(sizeof(px4_msgs__msg__VehicleImuStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleImuStatus));
  bool success = px4_msgs__msg__VehicleImuStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleImuStatus__destroy(px4_msgs__msg__VehicleImuStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleImuStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleImuStatus__Sequence__init(px4_msgs__msg__VehicleImuStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleImuStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleImuStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleImuStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleImuStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleImuStatus__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleImuStatus__Sequence__fini(px4_msgs__msg__VehicleImuStatus__Sequence * array)
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
      px4_msgs__msg__VehicleImuStatus__fini(&array->data[i]);
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

px4_msgs__msg__VehicleImuStatus__Sequence *
px4_msgs__msg__VehicleImuStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleImuStatus__Sequence * array = (px4_msgs__msg__VehicleImuStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleImuStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleImuStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleImuStatus__Sequence__destroy(px4_msgs__msg__VehicleImuStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleImuStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleImuStatus__Sequence__are_equal(const px4_msgs__msg__VehicleImuStatus__Sequence * lhs, const px4_msgs__msg__VehicleImuStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleImuStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleImuStatus__Sequence__copy(
  const px4_msgs__msg__VehicleImuStatus__Sequence * input,
  px4_msgs__msg__VehicleImuStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleImuStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleImuStatus * data =
      (px4_msgs__msg__VehicleImuStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleImuStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleImuStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleImuStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
