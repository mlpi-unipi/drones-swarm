// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/iridiumsbd_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__IridiumsbdStatus__init(px4_msgs__msg__IridiumsbdStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // last_heartbeat
  // tx_buf_write_index
  // rx_buf_read_index
  // rx_buf_end_index
  // failed_sbd_sessions
  // successful_sbd_sessions
  // num_tx_buf_reset
  // signal_quality
  // state
  // ring_pending
  // tx_buf_write_pending
  // tx_session_pending
  // rx_read_pending
  // rx_session_pending
  return true;
}

void
px4_msgs__msg__IridiumsbdStatus__fini(px4_msgs__msg__IridiumsbdStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // last_heartbeat
  // tx_buf_write_index
  // rx_buf_read_index
  // rx_buf_end_index
  // failed_sbd_sessions
  // successful_sbd_sessions
  // num_tx_buf_reset
  // signal_quality
  // state
  // ring_pending
  // tx_buf_write_pending
  // tx_session_pending
  // rx_read_pending
  // rx_session_pending
}

bool
px4_msgs__msg__IridiumsbdStatus__are_equal(const px4_msgs__msg__IridiumsbdStatus * lhs, const px4_msgs__msg__IridiumsbdStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // last_heartbeat
  if (lhs->last_heartbeat != rhs->last_heartbeat) {
    return false;
  }
  // tx_buf_write_index
  if (lhs->tx_buf_write_index != rhs->tx_buf_write_index) {
    return false;
  }
  // rx_buf_read_index
  if (lhs->rx_buf_read_index != rhs->rx_buf_read_index) {
    return false;
  }
  // rx_buf_end_index
  if (lhs->rx_buf_end_index != rhs->rx_buf_end_index) {
    return false;
  }
  // failed_sbd_sessions
  if (lhs->failed_sbd_sessions != rhs->failed_sbd_sessions) {
    return false;
  }
  // successful_sbd_sessions
  if (lhs->successful_sbd_sessions != rhs->successful_sbd_sessions) {
    return false;
  }
  // num_tx_buf_reset
  if (lhs->num_tx_buf_reset != rhs->num_tx_buf_reset) {
    return false;
  }
  // signal_quality
  if (lhs->signal_quality != rhs->signal_quality) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // ring_pending
  if (lhs->ring_pending != rhs->ring_pending) {
    return false;
  }
  // tx_buf_write_pending
  if (lhs->tx_buf_write_pending != rhs->tx_buf_write_pending) {
    return false;
  }
  // tx_session_pending
  if (lhs->tx_session_pending != rhs->tx_session_pending) {
    return false;
  }
  // rx_read_pending
  if (lhs->rx_read_pending != rhs->rx_read_pending) {
    return false;
  }
  // rx_session_pending
  if (lhs->rx_session_pending != rhs->rx_session_pending) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__IridiumsbdStatus__copy(
  const px4_msgs__msg__IridiumsbdStatus * input,
  px4_msgs__msg__IridiumsbdStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // last_heartbeat
  output->last_heartbeat = input->last_heartbeat;
  // tx_buf_write_index
  output->tx_buf_write_index = input->tx_buf_write_index;
  // rx_buf_read_index
  output->rx_buf_read_index = input->rx_buf_read_index;
  // rx_buf_end_index
  output->rx_buf_end_index = input->rx_buf_end_index;
  // failed_sbd_sessions
  output->failed_sbd_sessions = input->failed_sbd_sessions;
  // successful_sbd_sessions
  output->successful_sbd_sessions = input->successful_sbd_sessions;
  // num_tx_buf_reset
  output->num_tx_buf_reset = input->num_tx_buf_reset;
  // signal_quality
  output->signal_quality = input->signal_quality;
  // state
  output->state = input->state;
  // ring_pending
  output->ring_pending = input->ring_pending;
  // tx_buf_write_pending
  output->tx_buf_write_pending = input->tx_buf_write_pending;
  // tx_session_pending
  output->tx_session_pending = input->tx_session_pending;
  // rx_read_pending
  output->rx_read_pending = input->rx_read_pending;
  // rx_session_pending
  output->rx_session_pending = input->rx_session_pending;
  return true;
}

px4_msgs__msg__IridiumsbdStatus *
px4_msgs__msg__IridiumsbdStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__IridiumsbdStatus * msg = (px4_msgs__msg__IridiumsbdStatus *)allocator.allocate(sizeof(px4_msgs__msg__IridiumsbdStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__IridiumsbdStatus));
  bool success = px4_msgs__msg__IridiumsbdStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__IridiumsbdStatus__destroy(px4_msgs__msg__IridiumsbdStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__IridiumsbdStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__IridiumsbdStatus__Sequence__init(px4_msgs__msg__IridiumsbdStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__IridiumsbdStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__IridiumsbdStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__IridiumsbdStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__IridiumsbdStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__IridiumsbdStatus__fini(&data[i - 1]);
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
px4_msgs__msg__IridiumsbdStatus__Sequence__fini(px4_msgs__msg__IridiumsbdStatus__Sequence * array)
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
      px4_msgs__msg__IridiumsbdStatus__fini(&array->data[i]);
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

px4_msgs__msg__IridiumsbdStatus__Sequence *
px4_msgs__msg__IridiumsbdStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__IridiumsbdStatus__Sequence * array = (px4_msgs__msg__IridiumsbdStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__IridiumsbdStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__IridiumsbdStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__IridiumsbdStatus__Sequence__destroy(px4_msgs__msg__IridiumsbdStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__IridiumsbdStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__IridiumsbdStatus__Sequence__are_equal(const px4_msgs__msg__IridiumsbdStatus__Sequence * lhs, const px4_msgs__msg__IridiumsbdStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__IridiumsbdStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__IridiumsbdStatus__Sequence__copy(
  const px4_msgs__msg__IridiumsbdStatus__Sequence * input,
  px4_msgs__msg__IridiumsbdStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__IridiumsbdStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__IridiumsbdStatus * data =
      (px4_msgs__msg__IridiumsbdStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__IridiumsbdStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__IridiumsbdStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__IridiumsbdStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
