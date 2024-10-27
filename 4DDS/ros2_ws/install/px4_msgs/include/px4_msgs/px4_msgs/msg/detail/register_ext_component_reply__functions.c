// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/register_ext_component_reply__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RegisterExtComponentReply__init(px4_msgs__msg__RegisterExtComponentReply * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // request_id
  // name
  // px4_ros2_api_version
  // success
  // arming_check_id
  // mode_id
  // mode_executor_id
  return true;
}

void
px4_msgs__msg__RegisterExtComponentReply__fini(px4_msgs__msg__RegisterExtComponentReply * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // request_id
  // name
  // px4_ros2_api_version
  // success
  // arming_check_id
  // mode_id
  // mode_executor_id
}

bool
px4_msgs__msg__RegisterExtComponentReply__are_equal(const px4_msgs__msg__RegisterExtComponentReply * lhs, const px4_msgs__msg__RegisterExtComponentReply * rhs)
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
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // arming_check_id
  if (lhs->arming_check_id != rhs->arming_check_id) {
    return false;
  }
  // mode_id
  if (lhs->mode_id != rhs->mode_id) {
    return false;
  }
  // mode_executor_id
  if (lhs->mode_executor_id != rhs->mode_executor_id) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RegisterExtComponentReply__copy(
  const px4_msgs__msg__RegisterExtComponentReply * input,
  px4_msgs__msg__RegisterExtComponentReply * output)
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
  // success
  output->success = input->success;
  // arming_check_id
  output->arming_check_id = input->arming_check_id;
  // mode_id
  output->mode_id = input->mode_id;
  // mode_executor_id
  output->mode_executor_id = input->mode_executor_id;
  return true;
}

px4_msgs__msg__RegisterExtComponentReply *
px4_msgs__msg__RegisterExtComponentReply__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RegisterExtComponentReply * msg = (px4_msgs__msg__RegisterExtComponentReply *)allocator.allocate(sizeof(px4_msgs__msg__RegisterExtComponentReply), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RegisterExtComponentReply));
  bool success = px4_msgs__msg__RegisterExtComponentReply__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RegisterExtComponentReply__destroy(px4_msgs__msg__RegisterExtComponentReply * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RegisterExtComponentReply__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RegisterExtComponentReply__Sequence__init(px4_msgs__msg__RegisterExtComponentReply__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RegisterExtComponentReply * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RegisterExtComponentReply *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RegisterExtComponentReply), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RegisterExtComponentReply__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RegisterExtComponentReply__fini(&data[i - 1]);
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
px4_msgs__msg__RegisterExtComponentReply__Sequence__fini(px4_msgs__msg__RegisterExtComponentReply__Sequence * array)
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
      px4_msgs__msg__RegisterExtComponentReply__fini(&array->data[i]);
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

px4_msgs__msg__RegisterExtComponentReply__Sequence *
px4_msgs__msg__RegisterExtComponentReply__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RegisterExtComponentReply__Sequence * array = (px4_msgs__msg__RegisterExtComponentReply__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RegisterExtComponentReply__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RegisterExtComponentReply__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RegisterExtComponentReply__Sequence__destroy(px4_msgs__msg__RegisterExtComponentReply__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RegisterExtComponentReply__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RegisterExtComponentReply__Sequence__are_equal(const px4_msgs__msg__RegisterExtComponentReply__Sequence * lhs, const px4_msgs__msg__RegisterExtComponentReply__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RegisterExtComponentReply__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RegisterExtComponentReply__Sequence__copy(
  const px4_msgs__msg__RegisterExtComponentReply__Sequence * input,
  px4_msgs__msg__RegisterExtComponentReply__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RegisterExtComponentReply);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RegisterExtComponentReply * data =
      (px4_msgs__msg__RegisterExtComponentReply *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RegisterExtComponentReply__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RegisterExtComponentReply__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RegisterExtComponentReply__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
