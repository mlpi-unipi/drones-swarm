// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/get_model_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `model_name`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__GetModelProperties_Request__init(gazebo_msgs__srv__GetModelProperties_Request * msg)
{
  if (!msg) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__init(&msg->model_name)) {
    gazebo_msgs__srv__GetModelProperties_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__GetModelProperties_Request__fini(gazebo_msgs__srv__GetModelProperties_Request * msg)
{
  if (!msg) {
    return;
  }
  // model_name
  rosidl_runtime_c__String__fini(&msg->model_name);
}

bool
gazebo_msgs__srv__GetModelProperties_Request__are_equal(const gazebo_msgs__srv__GetModelProperties_Request * lhs, const gazebo_msgs__srv__GetModelProperties_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model_name), &(rhs->model_name)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__GetModelProperties_Request__copy(
  const gazebo_msgs__srv__GetModelProperties_Request * input,
  gazebo_msgs__srv__GetModelProperties_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model_name), &(output->model_name)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__GetModelProperties_Request *
gazebo_msgs__srv__GetModelProperties_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetModelProperties_Request * msg = (gazebo_msgs__srv__GetModelProperties_Request *)allocator.allocate(sizeof(gazebo_msgs__srv__GetModelProperties_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetModelProperties_Request));
  bool success = gazebo_msgs__srv__GetModelProperties_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetModelProperties_Request__destroy(gazebo_msgs__srv__GetModelProperties_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__GetModelProperties_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__GetModelProperties_Request__Sequence__init(gazebo_msgs__srv__GetModelProperties_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetModelProperties_Request * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__GetModelProperties_Request *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__GetModelProperties_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetModelProperties_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetModelProperties_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetModelProperties_Request__Sequence__fini(gazebo_msgs__srv__GetModelProperties_Request__Sequence * array)
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
      gazebo_msgs__srv__GetModelProperties_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__GetModelProperties_Request__Sequence *
gazebo_msgs__srv__GetModelProperties_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetModelProperties_Request__Sequence * array = (gazebo_msgs__srv__GetModelProperties_Request__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__GetModelProperties_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetModelProperties_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetModelProperties_Request__Sequence__destroy(gazebo_msgs__srv__GetModelProperties_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__GetModelProperties_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__GetModelProperties_Request__Sequence__are_equal(const gazebo_msgs__srv__GetModelProperties_Request__Sequence * lhs, const gazebo_msgs__srv__GetModelProperties_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__GetModelProperties_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__GetModelProperties_Request__Sequence__copy(
  const gazebo_msgs__srv__GetModelProperties_Request__Sequence * input,
  gazebo_msgs__srv__GetModelProperties_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__GetModelProperties_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__GetModelProperties_Request * data =
      (gazebo_msgs__srv__GetModelProperties_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__GetModelProperties_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__GetModelProperties_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__GetModelProperties_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `parent_model_name`
// Member `canonical_body_name`
// Member `body_names`
// Member `geom_names`
// Member `joint_names`
// Member `child_model_names`
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__GetModelProperties_Response__init(gazebo_msgs__srv__GetModelProperties_Response * msg)
{
  if (!msg) {
    return false;
  }
  // parent_model_name
  if (!rosidl_runtime_c__String__init(&msg->parent_model_name)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  // canonical_body_name
  if (!rosidl_runtime_c__String__init(&msg->canonical_body_name)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  // body_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->body_names, 0)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  // geom_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->geom_names, 0)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint_names, 0)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  // child_model_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->child_model_names, 0)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  // is_static
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__GetModelProperties_Response__fini(gazebo_msgs__srv__GetModelProperties_Response * msg)
{
  if (!msg) {
    return;
  }
  // parent_model_name
  rosidl_runtime_c__String__fini(&msg->parent_model_name);
  // canonical_body_name
  rosidl_runtime_c__String__fini(&msg->canonical_body_name);
  // body_names
  rosidl_runtime_c__String__Sequence__fini(&msg->body_names);
  // geom_names
  rosidl_runtime_c__String__Sequence__fini(&msg->geom_names);
  // joint_names
  rosidl_runtime_c__String__Sequence__fini(&msg->joint_names);
  // child_model_names
  rosidl_runtime_c__String__Sequence__fini(&msg->child_model_names);
  // is_static
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
gazebo_msgs__srv__GetModelProperties_Response__are_equal(const gazebo_msgs__srv__GetModelProperties_Response * lhs, const gazebo_msgs__srv__GetModelProperties_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parent_model_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent_model_name), &(rhs->parent_model_name)))
  {
    return false;
  }
  // canonical_body_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->canonical_body_name), &(rhs->canonical_body_name)))
  {
    return false;
  }
  // body_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->body_names), &(rhs->body_names)))
  {
    return false;
  }
  // geom_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->geom_names), &(rhs->geom_names)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint_names), &(rhs->joint_names)))
  {
    return false;
  }
  // child_model_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->child_model_names), &(rhs->child_model_names)))
  {
    return false;
  }
  // is_static
  if (lhs->is_static != rhs->is_static) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_message), &(rhs->status_message)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__GetModelProperties_Response__copy(
  const gazebo_msgs__srv__GetModelProperties_Response * input,
  gazebo_msgs__srv__GetModelProperties_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // parent_model_name
  if (!rosidl_runtime_c__String__copy(
      &(input->parent_model_name), &(output->parent_model_name)))
  {
    return false;
  }
  // canonical_body_name
  if (!rosidl_runtime_c__String__copy(
      &(input->canonical_body_name), &(output->canonical_body_name)))
  {
    return false;
  }
  // body_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->body_names), &(output->body_names)))
  {
    return false;
  }
  // geom_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->geom_names), &(output->geom_names)))
  {
    return false;
  }
  // joint_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint_names), &(output->joint_names)))
  {
    return false;
  }
  // child_model_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->child_model_names), &(output->child_model_names)))
  {
    return false;
  }
  // is_static
  output->is_static = input->is_static;
  // success
  output->success = input->success;
  // status_message
  if (!rosidl_runtime_c__String__copy(
      &(input->status_message), &(output->status_message)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__GetModelProperties_Response *
gazebo_msgs__srv__GetModelProperties_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetModelProperties_Response * msg = (gazebo_msgs__srv__GetModelProperties_Response *)allocator.allocate(sizeof(gazebo_msgs__srv__GetModelProperties_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetModelProperties_Response));
  bool success = gazebo_msgs__srv__GetModelProperties_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetModelProperties_Response__destroy(gazebo_msgs__srv__GetModelProperties_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__GetModelProperties_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__GetModelProperties_Response__Sequence__init(gazebo_msgs__srv__GetModelProperties_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetModelProperties_Response * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__GetModelProperties_Response *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__GetModelProperties_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetModelProperties_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetModelProperties_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetModelProperties_Response__Sequence__fini(gazebo_msgs__srv__GetModelProperties_Response__Sequence * array)
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
      gazebo_msgs__srv__GetModelProperties_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__GetModelProperties_Response__Sequence *
gazebo_msgs__srv__GetModelProperties_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetModelProperties_Response__Sequence * array = (gazebo_msgs__srv__GetModelProperties_Response__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__GetModelProperties_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetModelProperties_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetModelProperties_Response__Sequence__destroy(gazebo_msgs__srv__GetModelProperties_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__GetModelProperties_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__GetModelProperties_Response__Sequence__are_equal(const gazebo_msgs__srv__GetModelProperties_Response__Sequence * lhs, const gazebo_msgs__srv__GetModelProperties_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__GetModelProperties_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__GetModelProperties_Response__Sequence__copy(
  const gazebo_msgs__srv__GetModelProperties_Response__Sequence * input,
  gazebo_msgs__srv__GetModelProperties_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__GetModelProperties_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__GetModelProperties_Response * data =
      (gazebo_msgs__srv__GetModelProperties_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__GetModelProperties_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__GetModelProperties_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__GetModelProperties_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
