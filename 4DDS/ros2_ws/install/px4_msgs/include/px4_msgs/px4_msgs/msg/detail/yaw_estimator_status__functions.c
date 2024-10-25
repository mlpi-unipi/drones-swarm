// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/yaw_estimator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__YawEstimatorStatus__init(px4_msgs__msg__YawEstimatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // yaw_composite
  // yaw_variance
  // yaw_composite_valid
  // yaw
  // innov_vn
  // innov_ve
  // weight
  return true;
}

void
px4_msgs__msg__YawEstimatorStatus__fini(px4_msgs__msg__YawEstimatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // yaw_composite
  // yaw_variance
  // yaw_composite_valid
  // yaw
  // innov_vn
  // innov_ve
  // weight
}

bool
px4_msgs__msg__YawEstimatorStatus__are_equal(const px4_msgs__msg__YawEstimatorStatus * lhs, const px4_msgs__msg__YawEstimatorStatus * rhs)
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
  // yaw_composite
  if (lhs->yaw_composite != rhs->yaw_composite) {
    return false;
  }
  // yaw_variance
  if (lhs->yaw_variance != rhs->yaw_variance) {
    return false;
  }
  // yaw_composite_valid
  if (lhs->yaw_composite_valid != rhs->yaw_composite_valid) {
    return false;
  }
  // yaw
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->yaw[i] != rhs->yaw[i]) {
      return false;
    }
  }
  // innov_vn
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->innov_vn[i] != rhs->innov_vn[i]) {
      return false;
    }
  }
  // innov_ve
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->innov_ve[i] != rhs->innov_ve[i]) {
      return false;
    }
  }
  // weight
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->weight[i] != rhs->weight[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__YawEstimatorStatus__copy(
  const px4_msgs__msg__YawEstimatorStatus * input,
  px4_msgs__msg__YawEstimatorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // yaw_composite
  output->yaw_composite = input->yaw_composite;
  // yaw_variance
  output->yaw_variance = input->yaw_variance;
  // yaw_composite_valid
  output->yaw_composite_valid = input->yaw_composite_valid;
  // yaw
  for (size_t i = 0; i < 5; ++i) {
    output->yaw[i] = input->yaw[i];
  }
  // innov_vn
  for (size_t i = 0; i < 5; ++i) {
    output->innov_vn[i] = input->innov_vn[i];
  }
  // innov_ve
  for (size_t i = 0; i < 5; ++i) {
    output->innov_ve[i] = input->innov_ve[i];
  }
  // weight
  for (size_t i = 0; i < 5; ++i) {
    output->weight[i] = input->weight[i];
  }
  return true;
}

px4_msgs__msg__YawEstimatorStatus *
px4_msgs__msg__YawEstimatorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__YawEstimatorStatus * msg = (px4_msgs__msg__YawEstimatorStatus *)allocator.allocate(sizeof(px4_msgs__msg__YawEstimatorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__YawEstimatorStatus));
  bool success = px4_msgs__msg__YawEstimatorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__YawEstimatorStatus__destroy(px4_msgs__msg__YawEstimatorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__YawEstimatorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__YawEstimatorStatus__Sequence__init(px4_msgs__msg__YawEstimatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__YawEstimatorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__YawEstimatorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__YawEstimatorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__YawEstimatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__YawEstimatorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__YawEstimatorStatus__Sequence__fini(px4_msgs__msg__YawEstimatorStatus__Sequence * array)
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
      px4_msgs__msg__YawEstimatorStatus__fini(&array->data[i]);
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

px4_msgs__msg__YawEstimatorStatus__Sequence *
px4_msgs__msg__YawEstimatorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__YawEstimatorStatus__Sequence * array = (px4_msgs__msg__YawEstimatorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__YawEstimatorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__YawEstimatorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__YawEstimatorStatus__Sequence__destroy(px4_msgs__msg__YawEstimatorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__YawEstimatorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__YawEstimatorStatus__Sequence__are_equal(const px4_msgs__msg__YawEstimatorStatus__Sequence * lhs, const px4_msgs__msg__YawEstimatorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__YawEstimatorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__YawEstimatorStatus__Sequence__copy(
  const px4_msgs__msg__YawEstimatorStatus__Sequence * input,
  px4_msgs__msg__YawEstimatorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__YawEstimatorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__YawEstimatorStatus * data =
      (px4_msgs__msg__YawEstimatorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__YawEstimatorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__YawEstimatorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__YawEstimatorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
