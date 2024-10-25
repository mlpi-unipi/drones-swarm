// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/LoggerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/logger_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__LoggerStatus__init(px4_msgs__msg__LoggerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  // backend
  // total_written_kb
  // write_rate_kb_s
  // dropouts
  // message_gaps
  // buffer_used_bytes
  // buffer_size_bytes
  // num_messages
  return true;
}

void
px4_msgs__msg__LoggerStatus__fini(px4_msgs__msg__LoggerStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  // backend
  // total_written_kb
  // write_rate_kb_s
  // dropouts
  // message_gaps
  // buffer_used_bytes
  // buffer_size_bytes
  // num_messages
}

bool
px4_msgs__msg__LoggerStatus__are_equal(const px4_msgs__msg__LoggerStatus * lhs, const px4_msgs__msg__LoggerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // backend
  if (lhs->backend != rhs->backend) {
    return false;
  }
  // total_written_kb
  if (lhs->total_written_kb != rhs->total_written_kb) {
    return false;
  }
  // write_rate_kb_s
  if (lhs->write_rate_kb_s != rhs->write_rate_kb_s) {
    return false;
  }
  // dropouts
  if (lhs->dropouts != rhs->dropouts) {
    return false;
  }
  // message_gaps
  if (lhs->message_gaps != rhs->message_gaps) {
    return false;
  }
  // buffer_used_bytes
  if (lhs->buffer_used_bytes != rhs->buffer_used_bytes) {
    return false;
  }
  // buffer_size_bytes
  if (lhs->buffer_size_bytes != rhs->buffer_size_bytes) {
    return false;
  }
  // num_messages
  if (lhs->num_messages != rhs->num_messages) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__LoggerStatus__copy(
  const px4_msgs__msg__LoggerStatus * input,
  px4_msgs__msg__LoggerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // type
  output->type = input->type;
  // backend
  output->backend = input->backend;
  // total_written_kb
  output->total_written_kb = input->total_written_kb;
  // write_rate_kb_s
  output->write_rate_kb_s = input->write_rate_kb_s;
  // dropouts
  output->dropouts = input->dropouts;
  // message_gaps
  output->message_gaps = input->message_gaps;
  // buffer_used_bytes
  output->buffer_used_bytes = input->buffer_used_bytes;
  // buffer_size_bytes
  output->buffer_size_bytes = input->buffer_size_bytes;
  // num_messages
  output->num_messages = input->num_messages;
  return true;
}

px4_msgs__msg__LoggerStatus *
px4_msgs__msg__LoggerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LoggerStatus * msg = (px4_msgs__msg__LoggerStatus *)allocator.allocate(sizeof(px4_msgs__msg__LoggerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__LoggerStatus));
  bool success = px4_msgs__msg__LoggerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__LoggerStatus__destroy(px4_msgs__msg__LoggerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__LoggerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__LoggerStatus__Sequence__init(px4_msgs__msg__LoggerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LoggerStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__LoggerStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__LoggerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__LoggerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__LoggerStatus__fini(&data[i - 1]);
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
px4_msgs__msg__LoggerStatus__Sequence__fini(px4_msgs__msg__LoggerStatus__Sequence * array)
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
      px4_msgs__msg__LoggerStatus__fini(&array->data[i]);
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

px4_msgs__msg__LoggerStatus__Sequence *
px4_msgs__msg__LoggerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LoggerStatus__Sequence * array = (px4_msgs__msg__LoggerStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__LoggerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__LoggerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__LoggerStatus__Sequence__destroy(px4_msgs__msg__LoggerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__LoggerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__LoggerStatus__Sequence__are_equal(const px4_msgs__msg__LoggerStatus__Sequence * lhs, const px4_msgs__msg__LoggerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__LoggerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__LoggerStatus__Sequence__copy(
  const px4_msgs__msg__LoggerStatus__Sequence * input,
  px4_msgs__msg__LoggerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__LoggerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__LoggerStatus * data =
      (px4_msgs__msg__LoggerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__LoggerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__LoggerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__LoggerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
