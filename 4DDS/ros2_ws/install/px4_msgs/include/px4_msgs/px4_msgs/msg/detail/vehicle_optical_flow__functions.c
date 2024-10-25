// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleOpticalFlow.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_optical_flow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleOpticalFlow__init(px4_msgs__msg__VehicleOpticalFlow * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // device_id
  // pixel_flow
  // delta_angle
  // distance_m
  // integration_timespan_us
  // quality
  // max_flow_rate
  // min_ground_distance
  // max_ground_distance
  return true;
}

void
px4_msgs__msg__VehicleOpticalFlow__fini(px4_msgs__msg__VehicleOpticalFlow * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // device_id
  // pixel_flow
  // delta_angle
  // distance_m
  // integration_timespan_us
  // quality
  // max_flow_rate
  // min_ground_distance
  // max_ground_distance
}

bool
px4_msgs__msg__VehicleOpticalFlow__are_equal(const px4_msgs__msg__VehicleOpticalFlow * lhs, const px4_msgs__msg__VehicleOpticalFlow * rhs)
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
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // pixel_flow
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->pixel_flow[i] != rhs->pixel_flow[i]) {
      return false;
    }
  }
  // delta_angle
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->delta_angle[i] != rhs->delta_angle[i]) {
      return false;
    }
  }
  // distance_m
  if (lhs->distance_m != rhs->distance_m) {
    return false;
  }
  // integration_timespan_us
  if (lhs->integration_timespan_us != rhs->integration_timespan_us) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // max_flow_rate
  if (lhs->max_flow_rate != rhs->max_flow_rate) {
    return false;
  }
  // min_ground_distance
  if (lhs->min_ground_distance != rhs->min_ground_distance) {
    return false;
  }
  // max_ground_distance
  if (lhs->max_ground_distance != rhs->max_ground_distance) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleOpticalFlow__copy(
  const px4_msgs__msg__VehicleOpticalFlow * input,
  px4_msgs__msg__VehicleOpticalFlow * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // device_id
  output->device_id = input->device_id;
  // pixel_flow
  for (size_t i = 0; i < 2; ++i) {
    output->pixel_flow[i] = input->pixel_flow[i];
  }
  // delta_angle
  for (size_t i = 0; i < 3; ++i) {
    output->delta_angle[i] = input->delta_angle[i];
  }
  // distance_m
  output->distance_m = input->distance_m;
  // integration_timespan_us
  output->integration_timespan_us = input->integration_timespan_us;
  // quality
  output->quality = input->quality;
  // max_flow_rate
  output->max_flow_rate = input->max_flow_rate;
  // min_ground_distance
  output->min_ground_distance = input->min_ground_distance;
  // max_ground_distance
  output->max_ground_distance = input->max_ground_distance;
  return true;
}

px4_msgs__msg__VehicleOpticalFlow *
px4_msgs__msg__VehicleOpticalFlow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleOpticalFlow * msg = (px4_msgs__msg__VehicleOpticalFlow *)allocator.allocate(sizeof(px4_msgs__msg__VehicleOpticalFlow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleOpticalFlow));
  bool success = px4_msgs__msg__VehicleOpticalFlow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleOpticalFlow__destroy(px4_msgs__msg__VehicleOpticalFlow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleOpticalFlow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleOpticalFlow__Sequence__init(px4_msgs__msg__VehicleOpticalFlow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleOpticalFlow * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleOpticalFlow *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleOpticalFlow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleOpticalFlow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleOpticalFlow__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleOpticalFlow__Sequence__fini(px4_msgs__msg__VehicleOpticalFlow__Sequence * array)
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
      px4_msgs__msg__VehicleOpticalFlow__fini(&array->data[i]);
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

px4_msgs__msg__VehicleOpticalFlow__Sequence *
px4_msgs__msg__VehicleOpticalFlow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleOpticalFlow__Sequence * array = (px4_msgs__msg__VehicleOpticalFlow__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleOpticalFlow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleOpticalFlow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleOpticalFlow__Sequence__destroy(px4_msgs__msg__VehicleOpticalFlow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleOpticalFlow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleOpticalFlow__Sequence__are_equal(const px4_msgs__msg__VehicleOpticalFlow__Sequence * lhs, const px4_msgs__msg__VehicleOpticalFlow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleOpticalFlow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleOpticalFlow__Sequence__copy(
  const px4_msgs__msg__VehicleOpticalFlow__Sequence * input,
  px4_msgs__msg__VehicleOpticalFlow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleOpticalFlow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleOpticalFlow * data =
      (px4_msgs__msg__VehicleOpticalFlow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleOpticalFlow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleOpticalFlow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleOpticalFlow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
