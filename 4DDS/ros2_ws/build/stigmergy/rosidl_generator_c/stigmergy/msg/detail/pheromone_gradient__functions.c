// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice
#include "stigmergy/msg/detail/pheromone_gradient__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stigmergy__msg__PheromoneGradient__init(stigmergy__msg__PheromoneGradient * msg)
{
  if (!msg) {
    return false;
  }
  // dx
  // dy
  return true;
}

void
stigmergy__msg__PheromoneGradient__fini(stigmergy__msg__PheromoneGradient * msg)
{
  if (!msg) {
    return;
  }
  // dx
  // dy
}

bool
stigmergy__msg__PheromoneGradient__are_equal(const stigmergy__msg__PheromoneGradient * lhs, const stigmergy__msg__PheromoneGradient * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dx
  if (lhs->dx != rhs->dx) {
    return false;
  }
  // dy
  if (lhs->dy != rhs->dy) {
    return false;
  }
  return true;
}

bool
stigmergy__msg__PheromoneGradient__copy(
  const stigmergy__msg__PheromoneGradient * input,
  stigmergy__msg__PheromoneGradient * output)
{
  if (!input || !output) {
    return false;
  }
  // dx
  output->dx = input->dx;
  // dy
  output->dy = input->dy;
  return true;
}

stigmergy__msg__PheromoneGradient *
stigmergy__msg__PheromoneGradient__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stigmergy__msg__PheromoneGradient * msg = (stigmergy__msg__PheromoneGradient *)allocator.allocate(sizeof(stigmergy__msg__PheromoneGradient), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stigmergy__msg__PheromoneGradient));
  bool success = stigmergy__msg__PheromoneGradient__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stigmergy__msg__PheromoneGradient__destroy(stigmergy__msg__PheromoneGradient * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stigmergy__msg__PheromoneGradient__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stigmergy__msg__PheromoneGradient__Sequence__init(stigmergy__msg__PheromoneGradient__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stigmergy__msg__PheromoneGradient * data = NULL;

  if (size) {
    data = (stigmergy__msg__PheromoneGradient *)allocator.zero_allocate(size, sizeof(stigmergy__msg__PheromoneGradient), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stigmergy__msg__PheromoneGradient__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stigmergy__msg__PheromoneGradient__fini(&data[i - 1]);
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
stigmergy__msg__PheromoneGradient__Sequence__fini(stigmergy__msg__PheromoneGradient__Sequence * array)
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
      stigmergy__msg__PheromoneGradient__fini(&array->data[i]);
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

stigmergy__msg__PheromoneGradient__Sequence *
stigmergy__msg__PheromoneGradient__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stigmergy__msg__PheromoneGradient__Sequence * array = (stigmergy__msg__PheromoneGradient__Sequence *)allocator.allocate(sizeof(stigmergy__msg__PheromoneGradient__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stigmergy__msg__PheromoneGradient__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stigmergy__msg__PheromoneGradient__Sequence__destroy(stigmergy__msg__PheromoneGradient__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stigmergy__msg__PheromoneGradient__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stigmergy__msg__PheromoneGradient__Sequence__are_equal(const stigmergy__msg__PheromoneGradient__Sequence * lhs, const stigmergy__msg__PheromoneGradient__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stigmergy__msg__PheromoneGradient__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stigmergy__msg__PheromoneGradient__Sequence__copy(
  const stigmergy__msg__PheromoneGradient__Sequence * input,
  stigmergy__msg__PheromoneGradient__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stigmergy__msg__PheromoneGradient);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stigmergy__msg__PheromoneGradient * data =
      (stigmergy__msg__PheromoneGradient *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stigmergy__msg__PheromoneGradient__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stigmergy__msg__PheromoneGradient__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stigmergy__msg__PheromoneGradient__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
