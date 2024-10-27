// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RcParameterMap.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rc_parameter_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RcParameterMap__init(px4_msgs__msg__RcParameterMap * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // valid
  // param_index
  // param_id
  // scale
  // value0
  // value_min
  // value_max
  return true;
}

void
px4_msgs__msg__RcParameterMap__fini(px4_msgs__msg__RcParameterMap * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // valid
  // param_index
  // param_id
  // scale
  // value0
  // value_min
  // value_max
}

bool
px4_msgs__msg__RcParameterMap__are_equal(const px4_msgs__msg__RcParameterMap * lhs, const px4_msgs__msg__RcParameterMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // valid
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->valid[i] != rhs->valid[i]) {
      return false;
    }
  }
  // param_index
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->param_index[i] != rhs->param_index[i]) {
      return false;
    }
  }
  // param_id
  for (size_t i = 0; i < 51; ++i) {
    if (lhs->param_id[i] != rhs->param_id[i]) {
      return false;
    }
  }
  // scale
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->scale[i] != rhs->scale[i]) {
      return false;
    }
  }
  // value0
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->value0[i] != rhs->value0[i]) {
      return false;
    }
  }
  // value_min
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->value_min[i] != rhs->value_min[i]) {
      return false;
    }
  }
  // value_max
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->value_max[i] != rhs->value_max[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RcParameterMap__copy(
  const px4_msgs__msg__RcParameterMap * input,
  px4_msgs__msg__RcParameterMap * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // valid
  for (size_t i = 0; i < 3; ++i) {
    output->valid[i] = input->valid[i];
  }
  // param_index
  for (size_t i = 0; i < 3; ++i) {
    output->param_index[i] = input->param_index[i];
  }
  // param_id
  for (size_t i = 0; i < 51; ++i) {
    output->param_id[i] = input->param_id[i];
  }
  // scale
  for (size_t i = 0; i < 3; ++i) {
    output->scale[i] = input->scale[i];
  }
  // value0
  for (size_t i = 0; i < 3; ++i) {
    output->value0[i] = input->value0[i];
  }
  // value_min
  for (size_t i = 0; i < 3; ++i) {
    output->value_min[i] = input->value_min[i];
  }
  // value_max
  for (size_t i = 0; i < 3; ++i) {
    output->value_max[i] = input->value_max[i];
  }
  return true;
}

px4_msgs__msg__RcParameterMap *
px4_msgs__msg__RcParameterMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RcParameterMap * msg = (px4_msgs__msg__RcParameterMap *)allocator.allocate(sizeof(px4_msgs__msg__RcParameterMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RcParameterMap));
  bool success = px4_msgs__msg__RcParameterMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RcParameterMap__destroy(px4_msgs__msg__RcParameterMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RcParameterMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RcParameterMap__Sequence__init(px4_msgs__msg__RcParameterMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RcParameterMap * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RcParameterMap *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RcParameterMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RcParameterMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RcParameterMap__fini(&data[i - 1]);
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
px4_msgs__msg__RcParameterMap__Sequence__fini(px4_msgs__msg__RcParameterMap__Sequence * array)
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
      px4_msgs__msg__RcParameterMap__fini(&array->data[i]);
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

px4_msgs__msg__RcParameterMap__Sequence *
px4_msgs__msg__RcParameterMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RcParameterMap__Sequence * array = (px4_msgs__msg__RcParameterMap__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RcParameterMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RcParameterMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RcParameterMap__Sequence__destroy(px4_msgs__msg__RcParameterMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RcParameterMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RcParameterMap__Sequence__are_equal(const px4_msgs__msg__RcParameterMap__Sequence * lhs, const px4_msgs__msg__RcParameterMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RcParameterMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RcParameterMap__Sequence__copy(
  const px4_msgs__msg__RcParameterMap__Sequence * input,
  px4_msgs__msg__RcParameterMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RcParameterMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RcParameterMap * data =
      (px4_msgs__msg__RcParameterMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RcParameterMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RcParameterMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RcParameterMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
