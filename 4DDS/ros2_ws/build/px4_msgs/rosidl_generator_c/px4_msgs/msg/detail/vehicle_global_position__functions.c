// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleGlobalPosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_global_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleGlobalPosition__init(px4_msgs__msg__VehicleGlobalPosition * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // lat
  // lon
  // alt
  // alt_ellipsoid
  // delta_alt
  // lat_lon_reset_counter
  // alt_reset_counter
  // eph
  // epv
  // terrain_alt
  // terrain_alt_valid
  // dead_reckoning
  return true;
}

void
px4_msgs__msg__VehicleGlobalPosition__fini(px4_msgs__msg__VehicleGlobalPosition * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // lat
  // lon
  // alt
  // alt_ellipsoid
  // delta_alt
  // lat_lon_reset_counter
  // alt_reset_counter
  // eph
  // epv
  // terrain_alt
  // terrain_alt_valid
  // dead_reckoning
}

bool
px4_msgs__msg__VehicleGlobalPosition__are_equal(const px4_msgs__msg__VehicleGlobalPosition * lhs, const px4_msgs__msg__VehicleGlobalPosition * rhs)
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
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // alt_ellipsoid
  if (lhs->alt_ellipsoid != rhs->alt_ellipsoid) {
    return false;
  }
  // delta_alt
  if (lhs->delta_alt != rhs->delta_alt) {
    return false;
  }
  // lat_lon_reset_counter
  if (lhs->lat_lon_reset_counter != rhs->lat_lon_reset_counter) {
    return false;
  }
  // alt_reset_counter
  if (lhs->alt_reset_counter != rhs->alt_reset_counter) {
    return false;
  }
  // eph
  if (lhs->eph != rhs->eph) {
    return false;
  }
  // epv
  if (lhs->epv != rhs->epv) {
    return false;
  }
  // terrain_alt
  if (lhs->terrain_alt != rhs->terrain_alt) {
    return false;
  }
  // terrain_alt_valid
  if (lhs->terrain_alt_valid != rhs->terrain_alt_valid) {
    return false;
  }
  // dead_reckoning
  if (lhs->dead_reckoning != rhs->dead_reckoning) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleGlobalPosition__copy(
  const px4_msgs__msg__VehicleGlobalPosition * input,
  px4_msgs__msg__VehicleGlobalPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  // alt_ellipsoid
  output->alt_ellipsoid = input->alt_ellipsoid;
  // delta_alt
  output->delta_alt = input->delta_alt;
  // lat_lon_reset_counter
  output->lat_lon_reset_counter = input->lat_lon_reset_counter;
  // alt_reset_counter
  output->alt_reset_counter = input->alt_reset_counter;
  // eph
  output->eph = input->eph;
  // epv
  output->epv = input->epv;
  // terrain_alt
  output->terrain_alt = input->terrain_alt;
  // terrain_alt_valid
  output->terrain_alt_valid = input->terrain_alt_valid;
  // dead_reckoning
  output->dead_reckoning = input->dead_reckoning;
  return true;
}

px4_msgs__msg__VehicleGlobalPosition *
px4_msgs__msg__VehicleGlobalPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleGlobalPosition * msg = (px4_msgs__msg__VehicleGlobalPosition *)allocator.allocate(sizeof(px4_msgs__msg__VehicleGlobalPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleGlobalPosition));
  bool success = px4_msgs__msg__VehicleGlobalPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleGlobalPosition__destroy(px4_msgs__msg__VehicleGlobalPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleGlobalPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleGlobalPosition__Sequence__init(px4_msgs__msg__VehicleGlobalPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleGlobalPosition * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleGlobalPosition *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleGlobalPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleGlobalPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleGlobalPosition__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleGlobalPosition__Sequence__fini(px4_msgs__msg__VehicleGlobalPosition__Sequence * array)
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
      px4_msgs__msg__VehicleGlobalPosition__fini(&array->data[i]);
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

px4_msgs__msg__VehicleGlobalPosition__Sequence *
px4_msgs__msg__VehicleGlobalPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleGlobalPosition__Sequence * array = (px4_msgs__msg__VehicleGlobalPosition__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleGlobalPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleGlobalPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleGlobalPosition__Sequence__destroy(px4_msgs__msg__VehicleGlobalPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleGlobalPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleGlobalPosition__Sequence__are_equal(const px4_msgs__msg__VehicleGlobalPosition__Sequence * lhs, const px4_msgs__msg__VehicleGlobalPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleGlobalPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleGlobalPosition__Sequence__copy(
  const px4_msgs__msg__VehicleGlobalPosition__Sequence * input,
  px4_msgs__msg__VehicleGlobalPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleGlobalPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleGlobalPosition * data =
      (px4_msgs__msg__VehicleGlobalPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleGlobalPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleGlobalPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleGlobalPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
