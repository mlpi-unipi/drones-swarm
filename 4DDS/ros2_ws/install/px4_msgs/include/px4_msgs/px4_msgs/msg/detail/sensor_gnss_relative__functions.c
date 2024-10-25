// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_gnss_relative__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__SensorGnssRelative__init(px4_msgs__msg__SensorGnssRelative * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // device_id
  // time_utc_usec
  // reference_station_id
  // position
  // position_accuracy
  // heading
  // heading_accuracy
  // position_length
  // accuracy_length
  // gnss_fix_ok
  // differential_solution
  // relative_position_valid
  // carrier_solution_floating
  // carrier_solution_fixed
  // moving_base_mode
  // reference_position_miss
  // reference_observations_miss
  // heading_valid
  // relative_position_normalized
  return true;
}

void
px4_msgs__msg__SensorGnssRelative__fini(px4_msgs__msg__SensorGnssRelative * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // device_id
  // time_utc_usec
  // reference_station_id
  // position
  // position_accuracy
  // heading
  // heading_accuracy
  // position_length
  // accuracy_length
  // gnss_fix_ok
  // differential_solution
  // relative_position_valid
  // carrier_solution_floating
  // carrier_solution_fixed
  // moving_base_mode
  // reference_position_miss
  // reference_observations_miss
  // heading_valid
  // relative_position_normalized
}

bool
px4_msgs__msg__SensorGnssRelative__are_equal(const px4_msgs__msg__SensorGnssRelative * lhs, const px4_msgs__msg__SensorGnssRelative * rhs)
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
  // time_utc_usec
  if (lhs->time_utc_usec != rhs->time_utc_usec) {
    return false;
  }
  // reference_station_id
  if (lhs->reference_station_id != rhs->reference_station_id) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // position_accuracy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position_accuracy[i] != rhs->position_accuracy[i]) {
      return false;
    }
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_accuracy
  if (lhs->heading_accuracy != rhs->heading_accuracy) {
    return false;
  }
  // position_length
  if (lhs->position_length != rhs->position_length) {
    return false;
  }
  // accuracy_length
  if (lhs->accuracy_length != rhs->accuracy_length) {
    return false;
  }
  // gnss_fix_ok
  if (lhs->gnss_fix_ok != rhs->gnss_fix_ok) {
    return false;
  }
  // differential_solution
  if (lhs->differential_solution != rhs->differential_solution) {
    return false;
  }
  // relative_position_valid
  if (lhs->relative_position_valid != rhs->relative_position_valid) {
    return false;
  }
  // carrier_solution_floating
  if (lhs->carrier_solution_floating != rhs->carrier_solution_floating) {
    return false;
  }
  // carrier_solution_fixed
  if (lhs->carrier_solution_fixed != rhs->carrier_solution_fixed) {
    return false;
  }
  // moving_base_mode
  if (lhs->moving_base_mode != rhs->moving_base_mode) {
    return false;
  }
  // reference_position_miss
  if (lhs->reference_position_miss != rhs->reference_position_miss) {
    return false;
  }
  // reference_observations_miss
  if (lhs->reference_observations_miss != rhs->reference_observations_miss) {
    return false;
  }
  // heading_valid
  if (lhs->heading_valid != rhs->heading_valid) {
    return false;
  }
  // relative_position_normalized
  if (lhs->relative_position_normalized != rhs->relative_position_normalized) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SensorGnssRelative__copy(
  const px4_msgs__msg__SensorGnssRelative * input,
  px4_msgs__msg__SensorGnssRelative * output)
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
  // time_utc_usec
  output->time_utc_usec = input->time_utc_usec;
  // reference_station_id
  output->reference_station_id = input->reference_station_id;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // position_accuracy
  for (size_t i = 0; i < 3; ++i) {
    output->position_accuracy[i] = input->position_accuracy[i];
  }
  // heading
  output->heading = input->heading;
  // heading_accuracy
  output->heading_accuracy = input->heading_accuracy;
  // position_length
  output->position_length = input->position_length;
  // accuracy_length
  output->accuracy_length = input->accuracy_length;
  // gnss_fix_ok
  output->gnss_fix_ok = input->gnss_fix_ok;
  // differential_solution
  output->differential_solution = input->differential_solution;
  // relative_position_valid
  output->relative_position_valid = input->relative_position_valid;
  // carrier_solution_floating
  output->carrier_solution_floating = input->carrier_solution_floating;
  // carrier_solution_fixed
  output->carrier_solution_fixed = input->carrier_solution_fixed;
  // moving_base_mode
  output->moving_base_mode = input->moving_base_mode;
  // reference_position_miss
  output->reference_position_miss = input->reference_position_miss;
  // reference_observations_miss
  output->reference_observations_miss = input->reference_observations_miss;
  // heading_valid
  output->heading_valid = input->heading_valid;
  // relative_position_normalized
  output->relative_position_normalized = input->relative_position_normalized;
  return true;
}

px4_msgs__msg__SensorGnssRelative *
px4_msgs__msg__SensorGnssRelative__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorGnssRelative * msg = (px4_msgs__msg__SensorGnssRelative *)allocator.allocate(sizeof(px4_msgs__msg__SensorGnssRelative), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SensorGnssRelative));
  bool success = px4_msgs__msg__SensorGnssRelative__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SensorGnssRelative__destroy(px4_msgs__msg__SensorGnssRelative * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__SensorGnssRelative__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__SensorGnssRelative__Sequence__init(px4_msgs__msg__SensorGnssRelative__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorGnssRelative * data = NULL;

  if (size) {
    data = (px4_msgs__msg__SensorGnssRelative *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__SensorGnssRelative), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SensorGnssRelative__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SensorGnssRelative__fini(&data[i - 1]);
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
px4_msgs__msg__SensorGnssRelative__Sequence__fini(px4_msgs__msg__SensorGnssRelative__Sequence * array)
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
      px4_msgs__msg__SensorGnssRelative__fini(&array->data[i]);
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

px4_msgs__msg__SensorGnssRelative__Sequence *
px4_msgs__msg__SensorGnssRelative__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorGnssRelative__Sequence * array = (px4_msgs__msg__SensorGnssRelative__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__SensorGnssRelative__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SensorGnssRelative__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SensorGnssRelative__Sequence__destroy(px4_msgs__msg__SensorGnssRelative__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__SensorGnssRelative__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__SensorGnssRelative__Sequence__are_equal(const px4_msgs__msg__SensorGnssRelative__Sequence * lhs, const px4_msgs__msg__SensorGnssRelative__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SensorGnssRelative__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SensorGnssRelative__Sequence__copy(
  const px4_msgs__msg__SensorGnssRelative__Sequence * input,
  px4_msgs__msg__SensorGnssRelative__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SensorGnssRelative);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__SensorGnssRelative * data =
      (px4_msgs__msg__SensorGnssRelative *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SensorGnssRelative__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SensorGnssRelative__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__SensorGnssRelative__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
