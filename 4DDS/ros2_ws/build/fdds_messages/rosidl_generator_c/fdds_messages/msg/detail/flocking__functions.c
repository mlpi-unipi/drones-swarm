// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fdds_messages:msg/Flocking.idl
// generated code does not contain a copyright notice
#include "fdds_messages/msg/detail/flocking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fdds_messages__msg__Flocking__init(fdds_messages__msg__Flocking * msg)
{
  if (!msg) {
    return false;
  }
  // cohesion_x
  // cohesion_y
  // alignment_x
  // alignment_y
  // separation_x
  // separation_y
  return true;
}

void
fdds_messages__msg__Flocking__fini(fdds_messages__msg__Flocking * msg)
{
  if (!msg) {
    return;
  }
  // cohesion_x
  // cohesion_y
  // alignment_x
  // alignment_y
  // separation_x
  // separation_y
}

bool
fdds_messages__msg__Flocking__are_equal(const fdds_messages__msg__Flocking * lhs, const fdds_messages__msg__Flocking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cohesion_x
  if (lhs->cohesion_x != rhs->cohesion_x) {
    return false;
  }
  // cohesion_y
  if (lhs->cohesion_y != rhs->cohesion_y) {
    return false;
  }
  // alignment_x
  if (lhs->alignment_x != rhs->alignment_x) {
    return false;
  }
  // alignment_y
  if (lhs->alignment_y != rhs->alignment_y) {
    return false;
  }
  // separation_x
  if (lhs->separation_x != rhs->separation_x) {
    return false;
  }
  // separation_y
  if (lhs->separation_y != rhs->separation_y) {
    return false;
  }
  return true;
}

bool
fdds_messages__msg__Flocking__copy(
  const fdds_messages__msg__Flocking * input,
  fdds_messages__msg__Flocking * output)
{
  if (!input || !output) {
    return false;
  }
  // cohesion_x
  output->cohesion_x = input->cohesion_x;
  // cohesion_y
  output->cohesion_y = input->cohesion_y;
  // alignment_x
  output->alignment_x = input->alignment_x;
  // alignment_y
  output->alignment_y = input->alignment_y;
  // separation_x
  output->separation_x = input->separation_x;
  // separation_y
  output->separation_y = input->separation_y;
  return true;
}

fdds_messages__msg__Flocking *
fdds_messages__msg__Flocking__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fdds_messages__msg__Flocking * msg = (fdds_messages__msg__Flocking *)allocator.allocate(sizeof(fdds_messages__msg__Flocking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fdds_messages__msg__Flocking));
  bool success = fdds_messages__msg__Flocking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fdds_messages__msg__Flocking__destroy(fdds_messages__msg__Flocking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fdds_messages__msg__Flocking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fdds_messages__msg__Flocking__Sequence__init(fdds_messages__msg__Flocking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fdds_messages__msg__Flocking * data = NULL;

  if (size) {
    data = (fdds_messages__msg__Flocking *)allocator.zero_allocate(size, sizeof(fdds_messages__msg__Flocking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fdds_messages__msg__Flocking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fdds_messages__msg__Flocking__fini(&data[i - 1]);
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
fdds_messages__msg__Flocking__Sequence__fini(fdds_messages__msg__Flocking__Sequence * array)
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
      fdds_messages__msg__Flocking__fini(&array->data[i]);
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

fdds_messages__msg__Flocking__Sequence *
fdds_messages__msg__Flocking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fdds_messages__msg__Flocking__Sequence * array = (fdds_messages__msg__Flocking__Sequence *)allocator.allocate(sizeof(fdds_messages__msg__Flocking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fdds_messages__msg__Flocking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fdds_messages__msg__Flocking__Sequence__destroy(fdds_messages__msg__Flocking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fdds_messages__msg__Flocking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fdds_messages__msg__Flocking__Sequence__are_equal(const fdds_messages__msg__Flocking__Sequence * lhs, const fdds_messages__msg__Flocking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fdds_messages__msg__Flocking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fdds_messages__msg__Flocking__Sequence__copy(
  const fdds_messages__msg__Flocking__Sequence * input,
  fdds_messages__msg__Flocking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fdds_messages__msg__Flocking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fdds_messages__msg__Flocking * data =
      (fdds_messages__msg__Flocking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fdds_messages__msg__Flocking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fdds_messages__msg__Flocking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fdds_messages__msg__Flocking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
