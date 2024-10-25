// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/WheelSlip.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/wheel_slip__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `lateral_slip`
// Member `longitudinal_slip`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gazebo_msgs__msg__WheelSlip__init(gazebo_msgs__msg__WheelSlip * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    gazebo_msgs__msg__WheelSlip__fini(msg);
    return false;
  }
  // lateral_slip
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lateral_slip, 0)) {
    gazebo_msgs__msg__WheelSlip__fini(msg);
    return false;
  }
  // longitudinal_slip
  if (!rosidl_runtime_c__double__Sequence__init(&msg->longitudinal_slip, 0)) {
    gazebo_msgs__msg__WheelSlip__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__WheelSlip__fini(gazebo_msgs__msg__WheelSlip * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // lateral_slip
  rosidl_runtime_c__double__Sequence__fini(&msg->lateral_slip);
  // longitudinal_slip
  rosidl_runtime_c__double__Sequence__fini(&msg->longitudinal_slip);
}

bool
gazebo_msgs__msg__WheelSlip__are_equal(const gazebo_msgs__msg__WheelSlip * lhs, const gazebo_msgs__msg__WheelSlip * rhs)
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
  // lateral_slip
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lateral_slip), &(rhs->lateral_slip)))
  {
    return false;
  }
  // longitudinal_slip
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->longitudinal_slip), &(rhs->longitudinal_slip)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__WheelSlip__copy(
  const gazebo_msgs__msg__WheelSlip * input,
  gazebo_msgs__msg__WheelSlip * output)
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
  // lateral_slip
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lateral_slip), &(output->lateral_slip)))
  {
    return false;
  }
  // longitudinal_slip
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->longitudinal_slip), &(output->longitudinal_slip)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__msg__WheelSlip *
gazebo_msgs__msg__WheelSlip__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__WheelSlip * msg = (gazebo_msgs__msg__WheelSlip *)allocator.allocate(sizeof(gazebo_msgs__msg__WheelSlip), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__WheelSlip));
  bool success = gazebo_msgs__msg__WheelSlip__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__WheelSlip__destroy(gazebo_msgs__msg__WheelSlip * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__WheelSlip__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__WheelSlip__Sequence__init(gazebo_msgs__msg__WheelSlip__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__WheelSlip * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__WheelSlip *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__WheelSlip), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__WheelSlip__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__WheelSlip__fini(&data[i - 1]);
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
gazebo_msgs__msg__WheelSlip__Sequence__fini(gazebo_msgs__msg__WheelSlip__Sequence * array)
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
      gazebo_msgs__msg__WheelSlip__fini(&array->data[i]);
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

gazebo_msgs__msg__WheelSlip__Sequence *
gazebo_msgs__msg__WheelSlip__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__WheelSlip__Sequence * array = (gazebo_msgs__msg__WheelSlip__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__WheelSlip__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__WheelSlip__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__WheelSlip__Sequence__destroy(gazebo_msgs__msg__WheelSlip__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__WheelSlip__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__WheelSlip__Sequence__are_equal(const gazebo_msgs__msg__WheelSlip__Sequence * lhs, const gazebo_msgs__msg__WheelSlip__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__WheelSlip__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__WheelSlip__Sequence__copy(
  const gazebo_msgs__msg__WheelSlip__Sequence * input,
  gazebo_msgs__msg__WheelSlip__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__WheelSlip);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__WheelSlip * data =
      (gazebo_msgs__msg__WheelSlip *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__WheelSlip__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__WheelSlip__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__WheelSlip__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
