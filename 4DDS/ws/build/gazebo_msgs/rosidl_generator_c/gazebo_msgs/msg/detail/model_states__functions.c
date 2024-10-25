// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/model_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
gazebo_msgs__msg__ModelStates__init(gazebo_msgs__msg__ModelStates * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    gazebo_msgs__msg__ModelStates__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->pose, 0)) {
    gazebo_msgs__msg__ModelStates__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__Sequence__init(&msg->twist, 0)) {
    gazebo_msgs__msg__ModelStates__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ModelStates__fini(gazebo_msgs__msg__ModelStates * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__Sequence__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__Sequence__fini(&msg->twist);
}

bool
gazebo_msgs__msg__ModelStates__are_equal(const gazebo_msgs__msg__ModelStates * lhs, const gazebo_msgs__msg__ModelStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__Sequence__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__ModelStates__copy(
  const gazebo_msgs__msg__ModelStates * input,
  gazebo_msgs__msg__ModelStates * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__Sequence__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__msg__ModelStates *
gazebo_msgs__msg__ModelStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ModelStates * msg = (gazebo_msgs__msg__ModelStates *)allocator.allocate(sizeof(gazebo_msgs__msg__ModelStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ModelStates));
  bool success = gazebo_msgs__msg__ModelStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ModelStates__destroy(gazebo_msgs__msg__ModelStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__ModelStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__ModelStates__Sequence__init(gazebo_msgs__msg__ModelStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ModelStates * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__ModelStates *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__ModelStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ModelStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ModelStates__fini(&data[i - 1]);
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
gazebo_msgs__msg__ModelStates__Sequence__fini(gazebo_msgs__msg__ModelStates__Sequence * array)
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
      gazebo_msgs__msg__ModelStates__fini(&array->data[i]);
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

gazebo_msgs__msg__ModelStates__Sequence *
gazebo_msgs__msg__ModelStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ModelStates__Sequence * array = (gazebo_msgs__msg__ModelStates__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__ModelStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ModelStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ModelStates__Sequence__destroy(gazebo_msgs__msg__ModelStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__ModelStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__ModelStates__Sequence__are_equal(const gazebo_msgs__msg__ModelStates__Sequence * lhs, const gazebo_msgs__msg__ModelStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__ModelStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__ModelStates__Sequence__copy(
  const gazebo_msgs__msg__ModelStates__Sequence * input,
  gazebo_msgs__msg__ModelStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__ModelStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__ModelStates * data =
      (gazebo_msgs__msg__ModelStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__ModelStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__ModelStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__ModelStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
