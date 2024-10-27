// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Wind.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/wind__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__Wind__init(px4_msgs__msg__Wind * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // windspeed_north
  // windspeed_east
  // variance_north
  // variance_east
  // tas_innov
  // tas_innov_var
  // beta_innov
  // beta_innov_var
  return true;
}

void
px4_msgs__msg__Wind__fini(px4_msgs__msg__Wind * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // windspeed_north
  // windspeed_east
  // variance_north
  // variance_east
  // tas_innov
  // tas_innov_var
  // beta_innov
  // beta_innov_var
}

bool
px4_msgs__msg__Wind__are_equal(const px4_msgs__msg__Wind * lhs, const px4_msgs__msg__Wind * rhs)
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
  // windspeed_north
  if (lhs->windspeed_north != rhs->windspeed_north) {
    return false;
  }
  // windspeed_east
  if (lhs->windspeed_east != rhs->windspeed_east) {
    return false;
  }
  // variance_north
  if (lhs->variance_north != rhs->variance_north) {
    return false;
  }
  // variance_east
  if (lhs->variance_east != rhs->variance_east) {
    return false;
  }
  // tas_innov
  if (lhs->tas_innov != rhs->tas_innov) {
    return false;
  }
  // tas_innov_var
  if (lhs->tas_innov_var != rhs->tas_innov_var) {
    return false;
  }
  // beta_innov
  if (lhs->beta_innov != rhs->beta_innov) {
    return false;
  }
  // beta_innov_var
  if (lhs->beta_innov_var != rhs->beta_innov_var) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__Wind__copy(
  const px4_msgs__msg__Wind * input,
  px4_msgs__msg__Wind * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // windspeed_north
  output->windspeed_north = input->windspeed_north;
  // windspeed_east
  output->windspeed_east = input->windspeed_east;
  // variance_north
  output->variance_north = input->variance_north;
  // variance_east
  output->variance_east = input->variance_east;
  // tas_innov
  output->tas_innov = input->tas_innov;
  // tas_innov_var
  output->tas_innov_var = input->tas_innov_var;
  // beta_innov
  output->beta_innov = input->beta_innov;
  // beta_innov_var
  output->beta_innov_var = input->beta_innov_var;
  return true;
}

px4_msgs__msg__Wind *
px4_msgs__msg__Wind__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Wind * msg = (px4_msgs__msg__Wind *)allocator.allocate(sizeof(px4_msgs__msg__Wind), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Wind));
  bool success = px4_msgs__msg__Wind__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Wind__destroy(px4_msgs__msg__Wind * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__Wind__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__Wind__Sequence__init(px4_msgs__msg__Wind__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Wind * data = NULL;

  if (size) {
    data = (px4_msgs__msg__Wind *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__Wind), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Wind__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Wind__fini(&data[i - 1]);
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
px4_msgs__msg__Wind__Sequence__fini(px4_msgs__msg__Wind__Sequence * array)
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
      px4_msgs__msg__Wind__fini(&array->data[i]);
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

px4_msgs__msg__Wind__Sequence *
px4_msgs__msg__Wind__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Wind__Sequence * array = (px4_msgs__msg__Wind__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__Wind__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Wind__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Wind__Sequence__destroy(px4_msgs__msg__Wind__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__Wind__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__Wind__Sequence__are_equal(const px4_msgs__msg__Wind__Sequence * lhs, const px4_msgs__msg__Wind__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__Wind__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Wind__Sequence__copy(
  const px4_msgs__msg__Wind__Sequence * input,
  px4_msgs__msg__Wind__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__Wind);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__Wind * data =
      (px4_msgs__msg__Wind *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__Wind__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__Wind__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__Wind__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
