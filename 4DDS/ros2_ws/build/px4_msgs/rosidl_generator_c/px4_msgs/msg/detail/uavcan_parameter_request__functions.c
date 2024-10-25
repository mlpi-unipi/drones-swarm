// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/UavcanParameterRequest.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/uavcan_parameter_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__UavcanParameterRequest__init(px4_msgs__msg__UavcanParameterRequest * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // message_type
  // node_id
  // param_id
  // param_index
  // param_type
  // int_value
  // real_value
  return true;
}

void
px4_msgs__msg__UavcanParameterRequest__fini(px4_msgs__msg__UavcanParameterRequest * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // message_type
  // node_id
  // param_id
  // param_index
  // param_type
  // int_value
  // real_value
}

bool
px4_msgs__msg__UavcanParameterRequest__are_equal(const px4_msgs__msg__UavcanParameterRequest * lhs, const px4_msgs__msg__UavcanParameterRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // message_type
  if (lhs->message_type != rhs->message_type) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // param_id
  for (size_t i = 0; i < 17; ++i) {
    if (lhs->param_id[i] != rhs->param_id[i]) {
      return false;
    }
  }
  // param_index
  if (lhs->param_index != rhs->param_index) {
    return false;
  }
  // param_type
  if (lhs->param_type != rhs->param_type) {
    return false;
  }
  // int_value
  if (lhs->int_value != rhs->int_value) {
    return false;
  }
  // real_value
  if (lhs->real_value != rhs->real_value) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__UavcanParameterRequest__copy(
  const px4_msgs__msg__UavcanParameterRequest * input,
  px4_msgs__msg__UavcanParameterRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // message_type
  output->message_type = input->message_type;
  // node_id
  output->node_id = input->node_id;
  // param_id
  for (size_t i = 0; i < 17; ++i) {
    output->param_id[i] = input->param_id[i];
  }
  // param_index
  output->param_index = input->param_index;
  // param_type
  output->param_type = input->param_type;
  // int_value
  output->int_value = input->int_value;
  // real_value
  output->real_value = input->real_value;
  return true;
}

px4_msgs__msg__UavcanParameterRequest *
px4_msgs__msg__UavcanParameterRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__UavcanParameterRequest * msg = (px4_msgs__msg__UavcanParameterRequest *)allocator.allocate(sizeof(px4_msgs__msg__UavcanParameterRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__UavcanParameterRequest));
  bool success = px4_msgs__msg__UavcanParameterRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__UavcanParameterRequest__destroy(px4_msgs__msg__UavcanParameterRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__UavcanParameterRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__UavcanParameterRequest__Sequence__init(px4_msgs__msg__UavcanParameterRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__UavcanParameterRequest * data = NULL;

  if (size) {
    data = (px4_msgs__msg__UavcanParameterRequest *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__UavcanParameterRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__UavcanParameterRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__UavcanParameterRequest__fini(&data[i - 1]);
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
px4_msgs__msg__UavcanParameterRequest__Sequence__fini(px4_msgs__msg__UavcanParameterRequest__Sequence * array)
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
      px4_msgs__msg__UavcanParameterRequest__fini(&array->data[i]);
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

px4_msgs__msg__UavcanParameterRequest__Sequence *
px4_msgs__msg__UavcanParameterRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__UavcanParameterRequest__Sequence * array = (px4_msgs__msg__UavcanParameterRequest__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__UavcanParameterRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__UavcanParameterRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__UavcanParameterRequest__Sequence__destroy(px4_msgs__msg__UavcanParameterRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__UavcanParameterRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__UavcanParameterRequest__Sequence__are_equal(const px4_msgs__msg__UavcanParameterRequest__Sequence * lhs, const px4_msgs__msg__UavcanParameterRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__UavcanParameterRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__UavcanParameterRequest__Sequence__copy(
  const px4_msgs__msg__UavcanParameterRequest__Sequence * input,
  px4_msgs__msg__UavcanParameterRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__UavcanParameterRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__UavcanParameterRequest * data =
      (px4_msgs__msg__UavcanParameterRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__UavcanParameterRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__UavcanParameterRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__UavcanParameterRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
