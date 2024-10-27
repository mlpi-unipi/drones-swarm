// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/contact_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `info`
// Member `collision1_name`
// Member `collision2_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `wrenches`
// Member `total_wrench`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `contact_positions`
// Member `contact_normals`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gazebo_msgs__msg__ContactState__init(gazebo_msgs__msg__ContactState * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // collision1_name
  if (!rosidl_runtime_c__String__init(&msg->collision1_name)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // collision2_name
  if (!rosidl_runtime_c__String__init(&msg->collision2_name)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // wrenches
  if (!geometry_msgs__msg__Wrench__Sequence__init(&msg->wrenches, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // total_wrench
  if (!geometry_msgs__msg__Wrench__init(&msg->total_wrench)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // contact_positions
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->contact_positions, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // contact_normals
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->contact_normals, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__init(&msg->depths, 0)) {
    gazebo_msgs__msg__ContactState__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ContactState__fini(gazebo_msgs__msg__ContactState * msg)
{
  if (!msg) {
    return;
  }
  // info
  rosidl_runtime_c__String__fini(&msg->info);
  // collision1_name
  rosidl_runtime_c__String__fini(&msg->collision1_name);
  // collision2_name
  rosidl_runtime_c__String__fini(&msg->collision2_name);
  // wrenches
  geometry_msgs__msg__Wrench__Sequence__fini(&msg->wrenches);
  // total_wrench
  geometry_msgs__msg__Wrench__fini(&msg->total_wrench);
  // contact_positions
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->contact_positions);
  // contact_normals
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->contact_normals);
  // depths
  rosidl_runtime_c__double__Sequence__fini(&msg->depths);
}

bool
gazebo_msgs__msg__ContactState__are_equal(const gazebo_msgs__msg__ContactState * lhs, const gazebo_msgs__msg__ContactState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // collision1_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->collision1_name), &(rhs->collision1_name)))
  {
    return false;
  }
  // collision2_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->collision2_name), &(rhs->collision2_name)))
  {
    return false;
  }
  // wrenches
  if (!geometry_msgs__msg__Wrench__Sequence__are_equal(
      &(lhs->wrenches), &(rhs->wrenches)))
  {
    return false;
  }
  // total_wrench
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->total_wrench), &(rhs->total_wrench)))
  {
    return false;
  }
  // contact_positions
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->contact_positions), &(rhs->contact_positions)))
  {
    return false;
  }
  // contact_normals
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->contact_normals), &(rhs->contact_normals)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->depths), &(rhs->depths)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__ContactState__copy(
  const gazebo_msgs__msg__ContactState * input,
  gazebo_msgs__msg__ContactState * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // collision1_name
  if (!rosidl_runtime_c__String__copy(
      &(input->collision1_name), &(output->collision1_name)))
  {
    return false;
  }
  // collision2_name
  if (!rosidl_runtime_c__String__copy(
      &(input->collision2_name), &(output->collision2_name)))
  {
    return false;
  }
  // wrenches
  if (!geometry_msgs__msg__Wrench__Sequence__copy(
      &(input->wrenches), &(output->wrenches)))
  {
    return false;
  }
  // total_wrench
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->total_wrench), &(output->total_wrench)))
  {
    return false;
  }
  // contact_positions
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->contact_positions), &(output->contact_positions)))
  {
    return false;
  }
  // contact_normals
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->contact_normals), &(output->contact_normals)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->depths), &(output->depths)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__msg__ContactState *
gazebo_msgs__msg__ContactState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ContactState * msg = (gazebo_msgs__msg__ContactState *)allocator.allocate(sizeof(gazebo_msgs__msg__ContactState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ContactState));
  bool success = gazebo_msgs__msg__ContactState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ContactState__destroy(gazebo_msgs__msg__ContactState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__ContactState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__ContactState__Sequence__init(gazebo_msgs__msg__ContactState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ContactState * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__ContactState *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__ContactState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ContactState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ContactState__fini(&data[i - 1]);
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
gazebo_msgs__msg__ContactState__Sequence__fini(gazebo_msgs__msg__ContactState__Sequence * array)
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
      gazebo_msgs__msg__ContactState__fini(&array->data[i]);
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

gazebo_msgs__msg__ContactState__Sequence *
gazebo_msgs__msg__ContactState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ContactState__Sequence * array = (gazebo_msgs__msg__ContactState__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__ContactState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ContactState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ContactState__Sequence__destroy(gazebo_msgs__msg__ContactState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__ContactState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__ContactState__Sequence__are_equal(const gazebo_msgs__msg__ContactState__Sequence * lhs, const gazebo_msgs__msg__ContactState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__ContactState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__ContactState__Sequence__copy(
  const gazebo_msgs__msg__ContactState__Sequence * input,
  gazebo_msgs__msg__ContactState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__ContactState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__ContactState * data =
      (gazebo_msgs__msg__ContactState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__ContactState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__ContactState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__ContactState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
