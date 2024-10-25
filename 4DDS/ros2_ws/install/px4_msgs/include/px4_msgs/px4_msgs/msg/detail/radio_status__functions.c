// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RadioStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/radio_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RadioStatus__init(px4_msgs__msg__RadioStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // rssi
  // remote_rssi
  // txbuf
  // noise
  // remote_noise
  // rxerrors
  // fix
  return true;
}

void
px4_msgs__msg__RadioStatus__fini(px4_msgs__msg__RadioStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // rssi
  // remote_rssi
  // txbuf
  // noise
  // remote_noise
  // rxerrors
  // fix
}

bool
px4_msgs__msg__RadioStatus__are_equal(const px4_msgs__msg__RadioStatus * lhs, const px4_msgs__msg__RadioStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // remote_rssi
  if (lhs->remote_rssi != rhs->remote_rssi) {
    return false;
  }
  // txbuf
  if (lhs->txbuf != rhs->txbuf) {
    return false;
  }
  // noise
  if (lhs->noise != rhs->noise) {
    return false;
  }
  // remote_noise
  if (lhs->remote_noise != rhs->remote_noise) {
    return false;
  }
  // rxerrors
  if (lhs->rxerrors != rhs->rxerrors) {
    return false;
  }
  // fix
  if (lhs->fix != rhs->fix) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RadioStatus__copy(
  const px4_msgs__msg__RadioStatus * input,
  px4_msgs__msg__RadioStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // rssi
  output->rssi = input->rssi;
  // remote_rssi
  output->remote_rssi = input->remote_rssi;
  // txbuf
  output->txbuf = input->txbuf;
  // noise
  output->noise = input->noise;
  // remote_noise
  output->remote_noise = input->remote_noise;
  // rxerrors
  output->rxerrors = input->rxerrors;
  // fix
  output->fix = input->fix;
  return true;
}

px4_msgs__msg__RadioStatus *
px4_msgs__msg__RadioStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RadioStatus * msg = (px4_msgs__msg__RadioStatus *)allocator.allocate(sizeof(px4_msgs__msg__RadioStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RadioStatus));
  bool success = px4_msgs__msg__RadioStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RadioStatus__destroy(px4_msgs__msg__RadioStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RadioStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RadioStatus__Sequence__init(px4_msgs__msg__RadioStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RadioStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RadioStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RadioStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RadioStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RadioStatus__fini(&data[i - 1]);
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
px4_msgs__msg__RadioStatus__Sequence__fini(px4_msgs__msg__RadioStatus__Sequence * array)
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
      px4_msgs__msg__RadioStatus__fini(&array->data[i]);
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

px4_msgs__msg__RadioStatus__Sequence *
px4_msgs__msg__RadioStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RadioStatus__Sequence * array = (px4_msgs__msg__RadioStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RadioStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RadioStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RadioStatus__Sequence__destroy(px4_msgs__msg__RadioStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RadioStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RadioStatus__Sequence__are_equal(const px4_msgs__msg__RadioStatus__Sequence * lhs, const px4_msgs__msg__RadioStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RadioStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RadioStatus__Sequence__copy(
  const px4_msgs__msg__RadioStatus__Sequence * input,
  px4_msgs__msg__RadioStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RadioStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RadioStatus * data =
      (px4_msgs__msg__RadioStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RadioStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RadioStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RadioStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
