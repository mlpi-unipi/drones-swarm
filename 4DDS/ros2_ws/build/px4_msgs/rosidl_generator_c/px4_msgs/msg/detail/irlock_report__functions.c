// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/IrlockReport.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/irlock_report__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__IrlockReport__init(px4_msgs__msg__IrlockReport * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // signature
  // pos_x
  // pos_y
  // size_x
  // size_y
  return true;
}

void
px4_msgs__msg__IrlockReport__fini(px4_msgs__msg__IrlockReport * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // signature
  // pos_x
  // pos_y
  // size_x
  // size_y
}

bool
px4_msgs__msg__IrlockReport__are_equal(const px4_msgs__msg__IrlockReport * lhs, const px4_msgs__msg__IrlockReport * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // signature
  if (lhs->signature != rhs->signature) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // size_x
  if (lhs->size_x != rhs->size_x) {
    return false;
  }
  // size_y
  if (lhs->size_y != rhs->size_y) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__IrlockReport__copy(
  const px4_msgs__msg__IrlockReport * input,
  px4_msgs__msg__IrlockReport * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // signature
  output->signature = input->signature;
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // size_x
  output->size_x = input->size_x;
  // size_y
  output->size_y = input->size_y;
  return true;
}

px4_msgs__msg__IrlockReport *
px4_msgs__msg__IrlockReport__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__IrlockReport * msg = (px4_msgs__msg__IrlockReport *)allocator.allocate(sizeof(px4_msgs__msg__IrlockReport), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__IrlockReport));
  bool success = px4_msgs__msg__IrlockReport__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__IrlockReport__destroy(px4_msgs__msg__IrlockReport * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__IrlockReport__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__IrlockReport__Sequence__init(px4_msgs__msg__IrlockReport__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__IrlockReport * data = NULL;

  if (size) {
    data = (px4_msgs__msg__IrlockReport *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__IrlockReport), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__IrlockReport__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__IrlockReport__fini(&data[i - 1]);
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
px4_msgs__msg__IrlockReport__Sequence__fini(px4_msgs__msg__IrlockReport__Sequence * array)
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
      px4_msgs__msg__IrlockReport__fini(&array->data[i]);
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

px4_msgs__msg__IrlockReport__Sequence *
px4_msgs__msg__IrlockReport__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__IrlockReport__Sequence * array = (px4_msgs__msg__IrlockReport__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__IrlockReport__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__IrlockReport__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__IrlockReport__Sequence__destroy(px4_msgs__msg__IrlockReport__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__IrlockReport__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__IrlockReport__Sequence__are_equal(const px4_msgs__msg__IrlockReport__Sequence * lhs, const px4_msgs__msg__IrlockReport__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__IrlockReport__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__IrlockReport__Sequence__copy(
  const px4_msgs__msg__IrlockReport__Sequence * input,
  px4_msgs__msg__IrlockReport__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__IrlockReport);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__IrlockReport * data =
      (px4_msgs__msg__IrlockReport *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__IrlockReport__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__IrlockReport__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__IrlockReport__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
