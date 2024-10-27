// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/home_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__HomePosition__init(px4_msgs__msg__HomePosition * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // lat
  // lon
  // alt
  // x
  // y
  // z
  // yaw
  // valid_alt
  // valid_hpos
  // valid_lpos
  // manual_home
  // update_count
  return true;
}

void
px4_msgs__msg__HomePosition__fini(px4_msgs__msg__HomePosition * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // lat
  // lon
  // alt
  // x
  // y
  // z
  // yaw
  // valid_alt
  // valid_hpos
  // valid_lpos
  // manual_home
  // update_count
}

bool
px4_msgs__msg__HomePosition__are_equal(const px4_msgs__msg__HomePosition * lhs, const px4_msgs__msg__HomePosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // valid_alt
  if (lhs->valid_alt != rhs->valid_alt) {
    return false;
  }
  // valid_hpos
  if (lhs->valid_hpos != rhs->valid_hpos) {
    return false;
  }
  // valid_lpos
  if (lhs->valid_lpos != rhs->valid_lpos) {
    return false;
  }
  // manual_home
  if (lhs->manual_home != rhs->manual_home) {
    return false;
  }
  // update_count
  if (lhs->update_count != rhs->update_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__HomePosition__copy(
  const px4_msgs__msg__HomePosition * input,
  px4_msgs__msg__HomePosition * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  // valid_alt
  output->valid_alt = input->valid_alt;
  // valid_hpos
  output->valid_hpos = input->valid_hpos;
  // valid_lpos
  output->valid_lpos = input->valid_lpos;
  // manual_home
  output->manual_home = input->manual_home;
  // update_count
  output->update_count = input->update_count;
  return true;
}

px4_msgs__msg__HomePosition *
px4_msgs__msg__HomePosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__HomePosition * msg = (px4_msgs__msg__HomePosition *)allocator.allocate(sizeof(px4_msgs__msg__HomePosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__HomePosition));
  bool success = px4_msgs__msg__HomePosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__HomePosition__destroy(px4_msgs__msg__HomePosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__HomePosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__HomePosition__Sequence__init(px4_msgs__msg__HomePosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__HomePosition * data = NULL;

  if (size) {
    data = (px4_msgs__msg__HomePosition *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__HomePosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__HomePosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__HomePosition__fini(&data[i - 1]);
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
px4_msgs__msg__HomePosition__Sequence__fini(px4_msgs__msg__HomePosition__Sequence * array)
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
      px4_msgs__msg__HomePosition__fini(&array->data[i]);
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

px4_msgs__msg__HomePosition__Sequence *
px4_msgs__msg__HomePosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__HomePosition__Sequence * array = (px4_msgs__msg__HomePosition__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__HomePosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__HomePosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__HomePosition__Sequence__destroy(px4_msgs__msg__HomePosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__HomePosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__HomePosition__Sequence__are_equal(const px4_msgs__msg__HomePosition__Sequence * lhs, const px4_msgs__msg__HomePosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__HomePosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__HomePosition__Sequence__copy(
  const px4_msgs__msg__HomePosition__Sequence * input,
  px4_msgs__msg__HomePosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__HomePosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__HomePosition * data =
      (px4_msgs__msg__HomePosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__HomePosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__HomePosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__HomePosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
