// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/ekf2_timestamps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__Ekf2Timestamps__init(px4_msgs__msg__Ekf2Timestamps * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // airspeed_timestamp_rel
  // distance_sensor_timestamp_rel
  // optical_flow_timestamp_rel
  // vehicle_air_data_timestamp_rel
  // vehicle_magnetometer_timestamp_rel
  // visual_odometry_timestamp_rel
  return true;
}

void
px4_msgs__msg__Ekf2Timestamps__fini(px4_msgs__msg__Ekf2Timestamps * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // airspeed_timestamp_rel
  // distance_sensor_timestamp_rel
  // optical_flow_timestamp_rel
  // vehicle_air_data_timestamp_rel
  // vehicle_magnetometer_timestamp_rel
  // visual_odometry_timestamp_rel
}

bool
px4_msgs__msg__Ekf2Timestamps__are_equal(const px4_msgs__msg__Ekf2Timestamps * lhs, const px4_msgs__msg__Ekf2Timestamps * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // airspeed_timestamp_rel
  if (lhs->airspeed_timestamp_rel != rhs->airspeed_timestamp_rel) {
    return false;
  }
  // distance_sensor_timestamp_rel
  if (lhs->distance_sensor_timestamp_rel != rhs->distance_sensor_timestamp_rel) {
    return false;
  }
  // optical_flow_timestamp_rel
  if (lhs->optical_flow_timestamp_rel != rhs->optical_flow_timestamp_rel) {
    return false;
  }
  // vehicle_air_data_timestamp_rel
  if (lhs->vehicle_air_data_timestamp_rel != rhs->vehicle_air_data_timestamp_rel) {
    return false;
  }
  // vehicle_magnetometer_timestamp_rel
  if (lhs->vehicle_magnetometer_timestamp_rel != rhs->vehicle_magnetometer_timestamp_rel) {
    return false;
  }
  // visual_odometry_timestamp_rel
  if (lhs->visual_odometry_timestamp_rel != rhs->visual_odometry_timestamp_rel) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__Ekf2Timestamps__copy(
  const px4_msgs__msg__Ekf2Timestamps * input,
  px4_msgs__msg__Ekf2Timestamps * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // airspeed_timestamp_rel
  output->airspeed_timestamp_rel = input->airspeed_timestamp_rel;
  // distance_sensor_timestamp_rel
  output->distance_sensor_timestamp_rel = input->distance_sensor_timestamp_rel;
  // optical_flow_timestamp_rel
  output->optical_flow_timestamp_rel = input->optical_flow_timestamp_rel;
  // vehicle_air_data_timestamp_rel
  output->vehicle_air_data_timestamp_rel = input->vehicle_air_data_timestamp_rel;
  // vehicle_magnetometer_timestamp_rel
  output->vehicle_magnetometer_timestamp_rel = input->vehicle_magnetometer_timestamp_rel;
  // visual_odometry_timestamp_rel
  output->visual_odometry_timestamp_rel = input->visual_odometry_timestamp_rel;
  return true;
}

px4_msgs__msg__Ekf2Timestamps *
px4_msgs__msg__Ekf2Timestamps__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Ekf2Timestamps * msg = (px4_msgs__msg__Ekf2Timestamps *)allocator.allocate(sizeof(px4_msgs__msg__Ekf2Timestamps), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Ekf2Timestamps));
  bool success = px4_msgs__msg__Ekf2Timestamps__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Ekf2Timestamps__destroy(px4_msgs__msg__Ekf2Timestamps * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__Ekf2Timestamps__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__Ekf2Timestamps__Sequence__init(px4_msgs__msg__Ekf2Timestamps__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Ekf2Timestamps * data = NULL;

  if (size) {
    data = (px4_msgs__msg__Ekf2Timestamps *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__Ekf2Timestamps), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Ekf2Timestamps__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Ekf2Timestamps__fini(&data[i - 1]);
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
px4_msgs__msg__Ekf2Timestamps__Sequence__fini(px4_msgs__msg__Ekf2Timestamps__Sequence * array)
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
      px4_msgs__msg__Ekf2Timestamps__fini(&array->data[i]);
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

px4_msgs__msg__Ekf2Timestamps__Sequence *
px4_msgs__msg__Ekf2Timestamps__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Ekf2Timestamps__Sequence * array = (px4_msgs__msg__Ekf2Timestamps__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__Ekf2Timestamps__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Ekf2Timestamps__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Ekf2Timestamps__Sequence__destroy(px4_msgs__msg__Ekf2Timestamps__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__Ekf2Timestamps__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__Ekf2Timestamps__Sequence__are_equal(const px4_msgs__msg__Ekf2Timestamps__Sequence * lhs, const px4_msgs__msg__Ekf2Timestamps__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__Ekf2Timestamps__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Ekf2Timestamps__Sequence__copy(
  const px4_msgs__msg__Ekf2Timestamps__Sequence * input,
  px4_msgs__msg__Ekf2Timestamps__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__Ekf2Timestamps);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__Ekf2Timestamps * data =
      (px4_msgs__msg__Ekf2Timestamps *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__Ekf2Timestamps__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__Ekf2Timestamps__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__Ekf2Timestamps__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
