// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/follow_target_estimator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FollowTargetEstimator__init(px4_msgs__msg__FollowTargetEstimator * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // last_filter_reset_timestamp
  // valid
  // stale
  // lat_est
  // lon_est
  // alt_est
  // pos_est
  // vel_est
  // acc_est
  // prediction_count
  // fusion_count
  return true;
}

void
px4_msgs__msg__FollowTargetEstimator__fini(px4_msgs__msg__FollowTargetEstimator * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // last_filter_reset_timestamp
  // valid
  // stale
  // lat_est
  // lon_est
  // alt_est
  // pos_est
  // vel_est
  // acc_est
  // prediction_count
  // fusion_count
}

bool
px4_msgs__msg__FollowTargetEstimator__are_equal(const px4_msgs__msg__FollowTargetEstimator * lhs, const px4_msgs__msg__FollowTargetEstimator * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // last_filter_reset_timestamp
  if (lhs->last_filter_reset_timestamp != rhs->last_filter_reset_timestamp) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // stale
  if (lhs->stale != rhs->stale) {
    return false;
  }
  // lat_est
  if (lhs->lat_est != rhs->lat_est) {
    return false;
  }
  // lon_est
  if (lhs->lon_est != rhs->lon_est) {
    return false;
  }
  // alt_est
  if (lhs->alt_est != rhs->alt_est) {
    return false;
  }
  // pos_est
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pos_est[i] != rhs->pos_est[i]) {
      return false;
    }
  }
  // vel_est
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel_est[i] != rhs->vel_est[i]) {
      return false;
    }
  }
  // acc_est
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acc_est[i] != rhs->acc_est[i]) {
      return false;
    }
  }
  // prediction_count
  if (lhs->prediction_count != rhs->prediction_count) {
    return false;
  }
  // fusion_count
  if (lhs->fusion_count != rhs->fusion_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__FollowTargetEstimator__copy(
  const px4_msgs__msg__FollowTargetEstimator * input,
  px4_msgs__msg__FollowTargetEstimator * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // last_filter_reset_timestamp
  output->last_filter_reset_timestamp = input->last_filter_reset_timestamp;
  // valid
  output->valid = input->valid;
  // stale
  output->stale = input->stale;
  // lat_est
  output->lat_est = input->lat_est;
  // lon_est
  output->lon_est = input->lon_est;
  // alt_est
  output->alt_est = input->alt_est;
  // pos_est
  for (size_t i = 0; i < 3; ++i) {
    output->pos_est[i] = input->pos_est[i];
  }
  // vel_est
  for (size_t i = 0; i < 3; ++i) {
    output->vel_est[i] = input->vel_est[i];
  }
  // acc_est
  for (size_t i = 0; i < 3; ++i) {
    output->acc_est[i] = input->acc_est[i];
  }
  // prediction_count
  output->prediction_count = input->prediction_count;
  // fusion_count
  output->fusion_count = input->fusion_count;
  return true;
}

px4_msgs__msg__FollowTargetEstimator *
px4_msgs__msg__FollowTargetEstimator__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FollowTargetEstimator * msg = (px4_msgs__msg__FollowTargetEstimator *)allocator.allocate(sizeof(px4_msgs__msg__FollowTargetEstimator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FollowTargetEstimator));
  bool success = px4_msgs__msg__FollowTargetEstimator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FollowTargetEstimator__destroy(px4_msgs__msg__FollowTargetEstimator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FollowTargetEstimator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FollowTargetEstimator__Sequence__init(px4_msgs__msg__FollowTargetEstimator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FollowTargetEstimator * data = NULL;

  if (size) {
    data = (px4_msgs__msg__FollowTargetEstimator *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FollowTargetEstimator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FollowTargetEstimator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FollowTargetEstimator__fini(&data[i - 1]);
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
px4_msgs__msg__FollowTargetEstimator__Sequence__fini(px4_msgs__msg__FollowTargetEstimator__Sequence * array)
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
      px4_msgs__msg__FollowTargetEstimator__fini(&array->data[i]);
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

px4_msgs__msg__FollowTargetEstimator__Sequence *
px4_msgs__msg__FollowTargetEstimator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FollowTargetEstimator__Sequence * array = (px4_msgs__msg__FollowTargetEstimator__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FollowTargetEstimator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FollowTargetEstimator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FollowTargetEstimator__Sequence__destroy(px4_msgs__msg__FollowTargetEstimator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FollowTargetEstimator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FollowTargetEstimator__Sequence__are_equal(const px4_msgs__msg__FollowTargetEstimator__Sequence * lhs, const px4_msgs__msg__FollowTargetEstimator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FollowTargetEstimator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FollowTargetEstimator__Sequence__copy(
  const px4_msgs__msg__FollowTargetEstimator__Sequence * input,
  px4_msgs__msg__FollowTargetEstimator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FollowTargetEstimator);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FollowTargetEstimator * data =
      (px4_msgs__msg__FollowTargetEstimator *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FollowTargetEstimator__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FollowTargetEstimator__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FollowTargetEstimator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
