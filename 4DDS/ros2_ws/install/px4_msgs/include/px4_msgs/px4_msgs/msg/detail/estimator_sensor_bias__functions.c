// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_sensor_bias__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorSensorBias__init(px4_msgs__msg__EstimatorSensorBias * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // gyro_device_id
  // gyro_bias
  // gyro_bias_limit
  // gyro_bias_variance
  // gyro_bias_valid
  // gyro_bias_stable
  // accel_device_id
  // accel_bias
  // accel_bias_limit
  // accel_bias_variance
  // accel_bias_valid
  // accel_bias_stable
  // mag_device_id
  // mag_bias
  // mag_bias_limit
  // mag_bias_variance
  // mag_bias_valid
  // mag_bias_stable
  return true;
}

void
px4_msgs__msg__EstimatorSensorBias__fini(px4_msgs__msg__EstimatorSensorBias * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // gyro_device_id
  // gyro_bias
  // gyro_bias_limit
  // gyro_bias_variance
  // gyro_bias_valid
  // gyro_bias_stable
  // accel_device_id
  // accel_bias
  // accel_bias_limit
  // accel_bias_variance
  // accel_bias_valid
  // accel_bias_stable
  // mag_device_id
  // mag_bias
  // mag_bias_limit
  // mag_bias_variance
  // mag_bias_valid
  // mag_bias_stable
}

bool
px4_msgs__msg__EstimatorSensorBias__are_equal(const px4_msgs__msg__EstimatorSensorBias * lhs, const px4_msgs__msg__EstimatorSensorBias * rhs)
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
  // gyro_device_id
  if (lhs->gyro_device_id != rhs->gyro_device_id) {
    return false;
  }
  // gyro_bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_bias[i] != rhs->gyro_bias[i]) {
      return false;
    }
  }
  // gyro_bias_limit
  if (lhs->gyro_bias_limit != rhs->gyro_bias_limit) {
    return false;
  }
  // gyro_bias_variance
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyro_bias_variance[i] != rhs->gyro_bias_variance[i]) {
      return false;
    }
  }
  // gyro_bias_valid
  if (lhs->gyro_bias_valid != rhs->gyro_bias_valid) {
    return false;
  }
  // gyro_bias_stable
  if (lhs->gyro_bias_stable != rhs->gyro_bias_stable) {
    return false;
  }
  // accel_device_id
  if (lhs->accel_device_id != rhs->accel_device_id) {
    return false;
  }
  // accel_bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_bias[i] != rhs->accel_bias[i]) {
      return false;
    }
  }
  // accel_bias_limit
  if (lhs->accel_bias_limit != rhs->accel_bias_limit) {
    return false;
  }
  // accel_bias_variance
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accel_bias_variance[i] != rhs->accel_bias_variance[i]) {
      return false;
    }
  }
  // accel_bias_valid
  if (lhs->accel_bias_valid != rhs->accel_bias_valid) {
    return false;
  }
  // accel_bias_stable
  if (lhs->accel_bias_stable != rhs->accel_bias_stable) {
    return false;
  }
  // mag_device_id
  if (lhs->mag_device_id != rhs->mag_device_id) {
    return false;
  }
  // mag_bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_bias[i] != rhs->mag_bias[i]) {
      return false;
    }
  }
  // mag_bias_limit
  if (lhs->mag_bias_limit != rhs->mag_bias_limit) {
    return false;
  }
  // mag_bias_variance
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_bias_variance[i] != rhs->mag_bias_variance[i]) {
      return false;
    }
  }
  // mag_bias_valid
  if (lhs->mag_bias_valid != rhs->mag_bias_valid) {
    return false;
  }
  // mag_bias_stable
  if (lhs->mag_bias_stable != rhs->mag_bias_stable) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorSensorBias__copy(
  const px4_msgs__msg__EstimatorSensorBias * input,
  px4_msgs__msg__EstimatorSensorBias * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // gyro_device_id
  output->gyro_device_id = input->gyro_device_id;
  // gyro_bias
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_bias[i] = input->gyro_bias[i];
  }
  // gyro_bias_limit
  output->gyro_bias_limit = input->gyro_bias_limit;
  // gyro_bias_variance
  for (size_t i = 0; i < 3; ++i) {
    output->gyro_bias_variance[i] = input->gyro_bias_variance[i];
  }
  // gyro_bias_valid
  output->gyro_bias_valid = input->gyro_bias_valid;
  // gyro_bias_stable
  output->gyro_bias_stable = input->gyro_bias_stable;
  // accel_device_id
  output->accel_device_id = input->accel_device_id;
  // accel_bias
  for (size_t i = 0; i < 3; ++i) {
    output->accel_bias[i] = input->accel_bias[i];
  }
  // accel_bias_limit
  output->accel_bias_limit = input->accel_bias_limit;
  // accel_bias_variance
  for (size_t i = 0; i < 3; ++i) {
    output->accel_bias_variance[i] = input->accel_bias_variance[i];
  }
  // accel_bias_valid
  output->accel_bias_valid = input->accel_bias_valid;
  // accel_bias_stable
  output->accel_bias_stable = input->accel_bias_stable;
  // mag_device_id
  output->mag_device_id = input->mag_device_id;
  // mag_bias
  for (size_t i = 0; i < 3; ++i) {
    output->mag_bias[i] = input->mag_bias[i];
  }
  // mag_bias_limit
  output->mag_bias_limit = input->mag_bias_limit;
  // mag_bias_variance
  for (size_t i = 0; i < 3; ++i) {
    output->mag_bias_variance[i] = input->mag_bias_variance[i];
  }
  // mag_bias_valid
  output->mag_bias_valid = input->mag_bias_valid;
  // mag_bias_stable
  output->mag_bias_stable = input->mag_bias_stable;
  return true;
}

px4_msgs__msg__EstimatorSensorBias *
px4_msgs__msg__EstimatorSensorBias__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorSensorBias * msg = (px4_msgs__msg__EstimatorSensorBias *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorSensorBias), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorSensorBias));
  bool success = px4_msgs__msg__EstimatorSensorBias__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorSensorBias__destroy(px4_msgs__msg__EstimatorSensorBias * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorSensorBias__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorSensorBias__Sequence__init(px4_msgs__msg__EstimatorSensorBias__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorSensorBias * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorSensorBias *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorSensorBias), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorSensorBias__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorSensorBias__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorSensorBias__Sequence__fini(px4_msgs__msg__EstimatorSensorBias__Sequence * array)
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
      px4_msgs__msg__EstimatorSensorBias__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorSensorBias__Sequence *
px4_msgs__msg__EstimatorSensorBias__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorSensorBias__Sequence * array = (px4_msgs__msg__EstimatorSensorBias__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorSensorBias__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorSensorBias__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorSensorBias__Sequence__destroy(px4_msgs__msg__EstimatorSensorBias__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorSensorBias__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorSensorBias__Sequence__are_equal(const px4_msgs__msg__EstimatorSensorBias__Sequence * lhs, const px4_msgs__msg__EstimatorSensorBias__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorSensorBias__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorSensorBias__Sequence__copy(
  const px4_msgs__msg__EstimatorSensorBias__Sequence * input,
  px4_msgs__msg__EstimatorSensorBias__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorSensorBias);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EstimatorSensorBias * data =
      (px4_msgs__msg__EstimatorSensorBias *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorSensorBias__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorSensorBias__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorSensorBias__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
