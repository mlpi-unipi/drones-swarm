// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice
#include "fdds_messages/msg/detail/geo_ping__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fdds_messages__msg__GeoPing__init(fdds_messages__msg__GeoPing * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_id
  // latitude_m
  // longitude_m
  // speed_north_m_s
  // speed_east_m_s
  return true;
}

void
fdds_messages__msg__GeoPing__fini(fdds_messages__msg__GeoPing * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_id
  // latitude_m
  // longitude_m
  // speed_north_m_s
  // speed_east_m_s
}

bool
fdds_messages__msg__GeoPing__are_equal(const fdds_messages__msg__GeoPing * lhs, const fdds_messages__msg__GeoPing * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_id
  if (lhs->vehicle_id != rhs->vehicle_id) {
    return false;
  }
  // latitude_m
  if (lhs->latitude_m != rhs->latitude_m) {
    return false;
  }
  // longitude_m
  if (lhs->longitude_m != rhs->longitude_m) {
    return false;
  }
  // speed_north_m_s
  if (lhs->speed_north_m_s != rhs->speed_north_m_s) {
    return false;
  }
  // speed_east_m_s
  if (lhs->speed_east_m_s != rhs->speed_east_m_s) {
    return false;
  }
  return true;
}

bool
fdds_messages__msg__GeoPing__copy(
  const fdds_messages__msg__GeoPing * input,
  fdds_messages__msg__GeoPing * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_id
  output->vehicle_id = input->vehicle_id;
  // latitude_m
  output->latitude_m = input->latitude_m;
  // longitude_m
  output->longitude_m = input->longitude_m;
  // speed_north_m_s
  output->speed_north_m_s = input->speed_north_m_s;
  // speed_east_m_s
  output->speed_east_m_s = input->speed_east_m_s;
  return true;
}

fdds_messages__msg__GeoPing *
fdds_messages__msg__GeoPing__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fdds_messages__msg__GeoPing * msg = (fdds_messages__msg__GeoPing *)allocator.allocate(sizeof(fdds_messages__msg__GeoPing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fdds_messages__msg__GeoPing));
  bool success = fdds_messages__msg__GeoPing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fdds_messages__msg__GeoPing__destroy(fdds_messages__msg__GeoPing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fdds_messages__msg__GeoPing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fdds_messages__msg__GeoPing__Sequence__init(fdds_messages__msg__GeoPing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fdds_messages__msg__GeoPing * data = NULL;

  if (size) {
    data = (fdds_messages__msg__GeoPing *)allocator.zero_allocate(size, sizeof(fdds_messages__msg__GeoPing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fdds_messages__msg__GeoPing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fdds_messages__msg__GeoPing__fini(&data[i - 1]);
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
fdds_messages__msg__GeoPing__Sequence__fini(fdds_messages__msg__GeoPing__Sequence * array)
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
      fdds_messages__msg__GeoPing__fini(&array->data[i]);
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

fdds_messages__msg__GeoPing__Sequence *
fdds_messages__msg__GeoPing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fdds_messages__msg__GeoPing__Sequence * array = (fdds_messages__msg__GeoPing__Sequence *)allocator.allocate(sizeof(fdds_messages__msg__GeoPing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fdds_messages__msg__GeoPing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fdds_messages__msg__GeoPing__Sequence__destroy(fdds_messages__msg__GeoPing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fdds_messages__msg__GeoPing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fdds_messages__msg__GeoPing__Sequence__are_equal(const fdds_messages__msg__GeoPing__Sequence * lhs, const fdds_messages__msg__GeoPing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fdds_messages__msg__GeoPing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fdds_messages__msg__GeoPing__Sequence__copy(
  const fdds_messages__msg__GeoPing__Sequence * input,
  fdds_messages__msg__GeoPing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fdds_messages__msg__GeoPing);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fdds_messages__msg__GeoPing * data =
      (fdds_messages__msg__GeoPing *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fdds_messages__msg__GeoPing__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fdds_messages__msg__GeoPing__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fdds_messages__msg__GeoPing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
