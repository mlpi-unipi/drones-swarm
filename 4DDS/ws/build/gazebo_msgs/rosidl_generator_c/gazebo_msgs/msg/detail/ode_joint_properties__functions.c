// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_joint_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `damping`
// Member `hi_stop`
// Member `lo_stop`
// Member `erp`
// Member `cfm`
// Member `stop_erp`
// Member `stop_cfm`
// Member `fudge_factor`
// Member `fmax`
// Member `vel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gazebo_msgs__msg__ODEJointProperties__init(gazebo_msgs__msg__ODEJointProperties * msg)
{
  if (!msg) {
    return false;
  }
  // damping
  if (!rosidl_runtime_c__double__Sequence__init(&msg->damping, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // hi_stop
  if (!rosidl_runtime_c__double__Sequence__init(&msg->hi_stop, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // lo_stop
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lo_stop, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // erp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->erp, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // cfm
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cfm, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // stop_erp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->stop_erp, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // stop_cfm
  if (!rosidl_runtime_c__double__Sequence__init(&msg->stop_cfm, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // fudge_factor
  if (!rosidl_runtime_c__double__Sequence__init(&msg->fudge_factor, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // fmax
  if (!rosidl_runtime_c__double__Sequence__init(&msg->fmax, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  // vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vel, 0)) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__ODEJointProperties__fini(gazebo_msgs__msg__ODEJointProperties * msg)
{
  if (!msg) {
    return;
  }
  // damping
  rosidl_runtime_c__double__Sequence__fini(&msg->damping);
  // hi_stop
  rosidl_runtime_c__double__Sequence__fini(&msg->hi_stop);
  // lo_stop
  rosidl_runtime_c__double__Sequence__fini(&msg->lo_stop);
  // erp
  rosidl_runtime_c__double__Sequence__fini(&msg->erp);
  // cfm
  rosidl_runtime_c__double__Sequence__fini(&msg->cfm);
  // stop_erp
  rosidl_runtime_c__double__Sequence__fini(&msg->stop_erp);
  // stop_cfm
  rosidl_runtime_c__double__Sequence__fini(&msg->stop_cfm);
  // fudge_factor
  rosidl_runtime_c__double__Sequence__fini(&msg->fudge_factor);
  // fmax
  rosidl_runtime_c__double__Sequence__fini(&msg->fmax);
  // vel
  rosidl_runtime_c__double__Sequence__fini(&msg->vel);
}

bool
gazebo_msgs__msg__ODEJointProperties__are_equal(const gazebo_msgs__msg__ODEJointProperties * lhs, const gazebo_msgs__msg__ODEJointProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // damping
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->damping), &(rhs->damping)))
  {
    return false;
  }
  // hi_stop
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->hi_stop), &(rhs->hi_stop)))
  {
    return false;
  }
  // lo_stop
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lo_stop), &(rhs->lo_stop)))
  {
    return false;
  }
  // erp
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->erp), &(rhs->erp)))
  {
    return false;
  }
  // cfm
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cfm), &(rhs->cfm)))
  {
    return false;
  }
  // stop_erp
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->stop_erp), &(rhs->stop_erp)))
  {
    return false;
  }
  // stop_cfm
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->stop_cfm), &(rhs->stop_cfm)))
  {
    return false;
  }
  // fudge_factor
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->fudge_factor), &(rhs->fudge_factor)))
  {
    return false;
  }
  // fmax
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->fmax), &(rhs->fmax)))
  {
    return false;
  }
  // vel
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__ODEJointProperties__copy(
  const gazebo_msgs__msg__ODEJointProperties * input,
  gazebo_msgs__msg__ODEJointProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // damping
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->damping), &(output->damping)))
  {
    return false;
  }
  // hi_stop
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->hi_stop), &(output->hi_stop)))
  {
    return false;
  }
  // lo_stop
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lo_stop), &(output->lo_stop)))
  {
    return false;
  }
  // erp
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->erp), &(output->erp)))
  {
    return false;
  }
  // cfm
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cfm), &(output->cfm)))
  {
    return false;
  }
  // stop_erp
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->stop_erp), &(output->stop_erp)))
  {
    return false;
  }
  // stop_cfm
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->stop_cfm), &(output->stop_cfm)))
  {
    return false;
  }
  // fudge_factor
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->fudge_factor), &(output->fudge_factor)))
  {
    return false;
  }
  // fmax
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->fmax), &(output->fmax)))
  {
    return false;
  }
  // vel
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__msg__ODEJointProperties *
gazebo_msgs__msg__ODEJointProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ODEJointProperties * msg = (gazebo_msgs__msg__ODEJointProperties *)allocator.allocate(sizeof(gazebo_msgs__msg__ODEJointProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ODEJointProperties));
  bool success = gazebo_msgs__msg__ODEJointProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ODEJointProperties__destroy(gazebo_msgs__msg__ODEJointProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__ODEJointProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__ODEJointProperties__Sequence__init(gazebo_msgs__msg__ODEJointProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ODEJointProperties * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__ODEJointProperties *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__ODEJointProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ODEJointProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ODEJointProperties__fini(&data[i - 1]);
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
gazebo_msgs__msg__ODEJointProperties__Sequence__fini(gazebo_msgs__msg__ODEJointProperties__Sequence * array)
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
      gazebo_msgs__msg__ODEJointProperties__fini(&array->data[i]);
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

gazebo_msgs__msg__ODEJointProperties__Sequence *
gazebo_msgs__msg__ODEJointProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ODEJointProperties__Sequence * array = (gazebo_msgs__msg__ODEJointProperties__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__ODEJointProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ODEJointProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ODEJointProperties__Sequence__destroy(gazebo_msgs__msg__ODEJointProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__ODEJointProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__ODEJointProperties__Sequence__are_equal(const gazebo_msgs__msg__ODEJointProperties__Sequence * lhs, const gazebo_msgs__msg__ODEJointProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__ODEJointProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__ODEJointProperties__Sequence__copy(
  const gazebo_msgs__msg__ODEJointProperties__Sequence * input,
  gazebo_msgs__msg__ODEJointProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__ODEJointProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__ODEJointProperties * data =
      (gazebo_msgs__msg__ODEJointProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__ODEJointProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__ODEJointProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__ODEJointProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
