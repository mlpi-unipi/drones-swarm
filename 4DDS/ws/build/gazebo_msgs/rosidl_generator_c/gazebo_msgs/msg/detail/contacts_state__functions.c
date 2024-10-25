// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/contacts_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `states`
#include "gazebo_msgs/msg/detail/contact_state__functions.h"

bool
gazebo_msgs__msg__ContactsState__init(gazebo_msgs__msg__ContactsState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gazebo_msgs__msg__ContactsState__fini(msg);
    return false;
  }
  // states
  if (!gazebo_msgs__msg__ContactState__Sequence__init(&msg->states, 0)) {
    gazebo_msgs__msg__ContactsState__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ContactsState__fini(gazebo_msgs__msg__ContactsState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // states
  gazebo_msgs__msg__ContactState__Sequence__fini(&msg->states);
}

bool
gazebo_msgs__msg__ContactsState__are_equal(const gazebo_msgs__msg__ContactsState * lhs, const gazebo_msgs__msg__ContactsState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // states
  if (!gazebo_msgs__msg__ContactState__Sequence__are_equal(
      &(lhs->states), &(rhs->states)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__ContactsState__copy(
  const gazebo_msgs__msg__ContactsState * input,
  gazebo_msgs__msg__ContactsState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // states
  if (!gazebo_msgs__msg__ContactState__Sequence__copy(
      &(input->states), &(output->states)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__msg__ContactsState *
gazebo_msgs__msg__ContactsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ContactsState * msg = (gazebo_msgs__msg__ContactsState *)allocator.allocate(sizeof(gazebo_msgs__msg__ContactsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ContactsState));
  bool success = gazebo_msgs__msg__ContactsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ContactsState__destroy(gazebo_msgs__msg__ContactsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__ContactsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__ContactsState__Sequence__init(gazebo_msgs__msg__ContactsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ContactsState * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__ContactsState *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__ContactsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ContactsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ContactsState__fini(&data[i - 1]);
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
gazebo_msgs__msg__ContactsState__Sequence__fini(gazebo_msgs__msg__ContactsState__Sequence * array)
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
      gazebo_msgs__msg__ContactsState__fini(&array->data[i]);
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

gazebo_msgs__msg__ContactsState__Sequence *
gazebo_msgs__msg__ContactsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ContactsState__Sequence * array = (gazebo_msgs__msg__ContactsState__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__ContactsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ContactsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ContactsState__Sequence__destroy(gazebo_msgs__msg__ContactsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__ContactsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__ContactsState__Sequence__are_equal(const gazebo_msgs__msg__ContactsState__Sequence * lhs, const gazebo_msgs__msg__ContactsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__ContactsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__ContactsState__Sequence__copy(
  const gazebo_msgs__msg__ContactsState__Sequence * input,
  gazebo_msgs__msg__ContactsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__ContactsState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__ContactsState * data =
      (gazebo_msgs__msg__ContactsState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__ContactsState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__ContactsState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__ContactsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
