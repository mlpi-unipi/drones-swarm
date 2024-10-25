// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/input_rc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__InputRc__init(px4_msgs__msg__InputRc * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_last_signal
  // channel_count
  // rssi
  // rc_failsafe
  // rc_lost
  // rc_lost_frame_count
  // rc_total_frame_count
  // rc_ppm_frame_length
  // input_source
  // values
  // link_quality
  // rssi_dbm
  return true;
}

void
px4_msgs__msg__InputRc__fini(px4_msgs__msg__InputRc * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_last_signal
  // channel_count
  // rssi
  // rc_failsafe
  // rc_lost
  // rc_lost_frame_count
  // rc_total_frame_count
  // rc_ppm_frame_length
  // input_source
  // values
  // link_quality
  // rssi_dbm
}

bool
px4_msgs__msg__InputRc__are_equal(const px4_msgs__msg__InputRc * lhs, const px4_msgs__msg__InputRc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_last_signal
  if (lhs->timestamp_last_signal != rhs->timestamp_last_signal) {
    return false;
  }
  // channel_count
  if (lhs->channel_count != rhs->channel_count) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // rc_failsafe
  if (lhs->rc_failsafe != rhs->rc_failsafe) {
    return false;
  }
  // rc_lost
  if (lhs->rc_lost != rhs->rc_lost) {
    return false;
  }
  // rc_lost_frame_count
  if (lhs->rc_lost_frame_count != rhs->rc_lost_frame_count) {
    return false;
  }
  // rc_total_frame_count
  if (lhs->rc_total_frame_count != rhs->rc_total_frame_count) {
    return false;
  }
  // rc_ppm_frame_length
  if (lhs->rc_ppm_frame_length != rhs->rc_ppm_frame_length) {
    return false;
  }
  // input_source
  if (lhs->input_source != rhs->input_source) {
    return false;
  }
  // values
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->values[i] != rhs->values[i]) {
      return false;
    }
  }
  // link_quality
  if (lhs->link_quality != rhs->link_quality) {
    return false;
  }
  // rssi_dbm
  if (lhs->rssi_dbm != rhs->rssi_dbm) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__InputRc__copy(
  const px4_msgs__msg__InputRc * input,
  px4_msgs__msg__InputRc * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_last_signal
  output->timestamp_last_signal = input->timestamp_last_signal;
  // channel_count
  output->channel_count = input->channel_count;
  // rssi
  output->rssi = input->rssi;
  // rc_failsafe
  output->rc_failsafe = input->rc_failsafe;
  // rc_lost
  output->rc_lost = input->rc_lost;
  // rc_lost_frame_count
  output->rc_lost_frame_count = input->rc_lost_frame_count;
  // rc_total_frame_count
  output->rc_total_frame_count = input->rc_total_frame_count;
  // rc_ppm_frame_length
  output->rc_ppm_frame_length = input->rc_ppm_frame_length;
  // input_source
  output->input_source = input->input_source;
  // values
  for (size_t i = 0; i < 18; ++i) {
    output->values[i] = input->values[i];
  }
  // link_quality
  output->link_quality = input->link_quality;
  // rssi_dbm
  output->rssi_dbm = input->rssi_dbm;
  return true;
}

px4_msgs__msg__InputRc *
px4_msgs__msg__InputRc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InputRc * msg = (px4_msgs__msg__InputRc *)allocator.allocate(sizeof(px4_msgs__msg__InputRc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__InputRc));
  bool success = px4_msgs__msg__InputRc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__InputRc__destroy(px4_msgs__msg__InputRc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__InputRc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__InputRc__Sequence__init(px4_msgs__msg__InputRc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InputRc * data = NULL;

  if (size) {
    data = (px4_msgs__msg__InputRc *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__InputRc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__InputRc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__InputRc__fini(&data[i - 1]);
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
px4_msgs__msg__InputRc__Sequence__fini(px4_msgs__msg__InputRc__Sequence * array)
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
      px4_msgs__msg__InputRc__fini(&array->data[i]);
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

px4_msgs__msg__InputRc__Sequence *
px4_msgs__msg__InputRc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InputRc__Sequence * array = (px4_msgs__msg__InputRc__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__InputRc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__InputRc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__InputRc__Sequence__destroy(px4_msgs__msg__InputRc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__InputRc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__InputRc__Sequence__are_equal(const px4_msgs__msg__InputRc__Sequence * lhs, const px4_msgs__msg__InputRc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__InputRc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__InputRc__Sequence__copy(
  const px4_msgs__msg__InputRc__Sequence * input,
  px4_msgs__msg__InputRc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__InputRc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__InputRc * data =
      (px4_msgs__msg__InputRc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__InputRc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__InputRc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__InputRc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
