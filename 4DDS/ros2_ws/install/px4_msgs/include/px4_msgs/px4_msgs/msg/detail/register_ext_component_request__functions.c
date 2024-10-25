// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/register_ext_component_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RegisterExtComponentRequest__init(px4_msgs__msg__RegisterExtComponentRequest * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // request_id
  // name
  // px4_ros2_api_version
  // register_arming_check
  // register_mode
  // register_mode_executor
  // enable_replace_internal_mode
  // replace_internal_mode
  // activate_mode_immediately
  return true;
}

void
px4_msgs__msg__RegisterExtComponentRequest__fini(px4_msgs__msg__RegisterExtComponentRequest * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // request_id
  // name
  // px4_ros2_api_version
  // register_arming_check
  // register_mode
  // register_mode_executor
  // enable_replace_internal_mode
  // replace_internal_mode
  // activate_mode_immediately
}

bool
px4_msgs__msg__RegisterExtComponentRequest__are_equal(const px4_msgs__msg__RegisterExtComponentRequest * lhs, const px4_msgs__msg__RegisterExtComponentRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  // name
  for (size_t i = 0; i < 25; ++i) {
    if (lhs->name[i] != rhs->name[i]) {
      return false;
    }
  }
  // px4_ros2_api_version
  if (lhs->px4_ros2_api_version != rhs->px4_ros2_api_version) {
    return false;
  }
  // register_arming_check
  if (lhs->register_arming_check != rhs->register_arming_check) {
    return false;
  }
  // register_mode
  if (lhs->register_mode != rhs->register_mode) {
    return false;
  }
  // register_mode_executor
  if (lhs->register_mode_executor != rhs->register_mode_executor) {
    return false;
  }
  // enable_replace_internal_mode
  if (lhs->enable_replace_internal_mode != rhs->enable_replace_internal_mode) {
    return false;
  }
  // replace_internal_mode
  if (lhs->replace_internal_mode != rhs->replace_internal_mode) {
    return false;
  }
  // activate_mode_immediately
  if (lhs->activate_mode_immediately != rhs->activate_mode_immediately) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RegisterExtComponentRequest__copy(
  const px4_msgs__msg__RegisterExtComponentRequest * input,
  px4_msgs__msg__RegisterExtComponentRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // request_id
  output->request_id = input->request_id;
  // name
  for (size_t i = 0; i < 25; ++i) {
    output->name[i] = input->name[i];
  }
  // px4_ros2_api_version
  output->px4_ros2_api_version = input->px4_ros2_api_version;
  // register_arming_check
  output->register_arming_check = input->register_arming_check;
  // register_mode
  output->register_mode = input->register_mode;
  // register_mode_executor
  output->register_mode_executor = input->register_mode_executor;
  // enable_replace_internal_mode
  output->enable_replace_internal_mode = input->enable_replace_internal_mode;
  // replace_internal_mode
  output->replace_internal_mode = input->replace_internal_mode;
  // activate_mode_immediately
  output->activate_mode_immediately = input->activate_mode_immediately;
  return true;
}

px4_msgs__msg__RegisterExtComponentRequest *
px4_msgs__msg__RegisterExtComponentRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RegisterExtComponentRequest * msg = (px4_msgs__msg__RegisterExtComponentRequest *)allocator.allocate(sizeof(px4_msgs__msg__RegisterExtComponentRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RegisterExtComponentRequest));
  bool success = px4_msgs__msg__RegisterExtComponentRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RegisterExtComponentRequest__destroy(px4_msgs__msg__RegisterExtComponentRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RegisterExtComponentRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RegisterExtComponentRequest__Sequence__init(px4_msgs__msg__RegisterExtComponentRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RegisterExtComponentRequest * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RegisterExtComponentRequest *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RegisterExtComponentRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RegisterExtComponentRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RegisterExtComponentRequest__fini(&data[i - 1]);
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
px4_msgs__msg__RegisterExtComponentRequest__Sequence__fini(px4_msgs__msg__RegisterExtComponentRequest__Sequence * array)
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
      px4_msgs__msg__RegisterExtComponentRequest__fini(&array->data[i]);
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

px4_msgs__msg__RegisterExtComponentRequest__Sequence *
px4_msgs__msg__RegisterExtComponentRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RegisterExtComponentRequest__Sequence * array = (px4_msgs__msg__RegisterExtComponentRequest__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RegisterExtComponentRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RegisterExtComponentRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RegisterExtComponentRequest__Sequence__destroy(px4_msgs__msg__RegisterExtComponentRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RegisterExtComponentRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RegisterExtComponentRequest__Sequence__are_equal(const px4_msgs__msg__RegisterExtComponentRequest__Sequence * lhs, const px4_msgs__msg__RegisterExtComponentRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RegisterExtComponentRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RegisterExtComponentRequest__Sequence__copy(
  const px4_msgs__msg__RegisterExtComponentRequest__Sequence * input,
  px4_msgs__msg__RegisterExtComponentRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RegisterExtComponentRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RegisterExtComponentRequest * data =
      (px4_msgs__msg__RegisterExtComponentRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RegisterExtComponentRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RegisterExtComponentRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RegisterExtComponentRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
