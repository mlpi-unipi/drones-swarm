// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RcChannels.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rc_channels__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RcChannels__init(px4_msgs__msg__RcChannels * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_last_valid
  // channels
  // channel_count
  // function
  // rssi
  // signal_lost
  // frame_drop_count
  return true;
}

void
px4_msgs__msg__RcChannels__fini(px4_msgs__msg__RcChannels * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_last_valid
  // channels
  // channel_count
  // function
  // rssi
  // signal_lost
  // frame_drop_count
}

bool
px4_msgs__msg__RcChannels__are_equal(const px4_msgs__msg__RcChannels * lhs, const px4_msgs__msg__RcChannels * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_last_valid
  if (lhs->timestamp_last_valid != rhs->timestamp_last_valid) {
    return false;
  }
  // channels
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->channels[i] != rhs->channels[i]) {
      return false;
    }
  }
  // channel_count
  if (lhs->channel_count != rhs->channel_count) {
    return false;
  }
  // function
  for (size_t i = 0; i < 28; ++i) {
    if (lhs->function[i] != rhs->function[i]) {
      return false;
    }
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // signal_lost
  if (lhs->signal_lost != rhs->signal_lost) {
    return false;
  }
  // frame_drop_count
  if (lhs->frame_drop_count != rhs->frame_drop_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RcChannels__copy(
  const px4_msgs__msg__RcChannels * input,
  px4_msgs__msg__RcChannels * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_last_valid
  output->timestamp_last_valid = input->timestamp_last_valid;
  // channels
  for (size_t i = 0; i < 18; ++i) {
    output->channels[i] = input->channels[i];
  }
  // channel_count
  output->channel_count = input->channel_count;
  // function
  for (size_t i = 0; i < 28; ++i) {
    output->function[i] = input->function[i];
  }
  // rssi
  output->rssi = input->rssi;
  // signal_lost
  output->signal_lost = input->signal_lost;
  // frame_drop_count
  output->frame_drop_count = input->frame_drop_count;
  return true;
}

px4_msgs__msg__RcChannels *
px4_msgs__msg__RcChannels__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RcChannels * msg = (px4_msgs__msg__RcChannels *)allocator.allocate(sizeof(px4_msgs__msg__RcChannels), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RcChannels));
  bool success = px4_msgs__msg__RcChannels__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RcChannels__destroy(px4_msgs__msg__RcChannels * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RcChannels__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RcChannels__Sequence__init(px4_msgs__msg__RcChannels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RcChannels * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RcChannels *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RcChannels), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RcChannels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RcChannels__fini(&data[i - 1]);
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
px4_msgs__msg__RcChannels__Sequence__fini(px4_msgs__msg__RcChannels__Sequence * array)
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
      px4_msgs__msg__RcChannels__fini(&array->data[i]);
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

px4_msgs__msg__RcChannels__Sequence *
px4_msgs__msg__RcChannels__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RcChannels__Sequence * array = (px4_msgs__msg__RcChannels__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RcChannels__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RcChannels__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RcChannels__Sequence__destroy(px4_msgs__msg__RcChannels__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RcChannels__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RcChannels__Sequence__are_equal(const px4_msgs__msg__RcChannels__Sequence * lhs, const px4_msgs__msg__RcChannels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RcChannels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RcChannels__Sequence__copy(
  const px4_msgs__msg__RcChannels__Sequence * input,
  px4_msgs__msg__RcChannels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RcChannels);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RcChannels * data =
      (px4_msgs__msg__RcChannels *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RcChannels__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RcChannels__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RcChannels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
