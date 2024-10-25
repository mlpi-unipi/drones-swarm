// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/GetEntityState.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/get_entity_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__GetEntityState_Request__init(gazebo_msgs__srv__GetEntityState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    gazebo_msgs__srv__GetEntityState_Request__fini(msg);
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    gazebo_msgs__srv__GetEntityState_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__GetEntityState_Request__fini(gazebo_msgs__srv__GetEntityState_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
}

bool
gazebo_msgs__srv__GetEntityState_Request__are_equal(const gazebo_msgs__srv__GetEntityState_Request * lhs, const gazebo_msgs__srv__GetEntityState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference_frame), &(rhs->reference_frame)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__GetEntityState_Request__copy(
  const gazebo_msgs__srv__GetEntityState_Request * input,
  gazebo_msgs__srv__GetEntityState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->reference_frame), &(output->reference_frame)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__GetEntityState_Request *
gazebo_msgs__srv__GetEntityState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetEntityState_Request * msg = (gazebo_msgs__srv__GetEntityState_Request *)allocator.allocate(sizeof(gazebo_msgs__srv__GetEntityState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetEntityState_Request));
  bool success = gazebo_msgs__srv__GetEntityState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetEntityState_Request__destroy(gazebo_msgs__srv__GetEntityState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__GetEntityState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__GetEntityState_Request__Sequence__init(gazebo_msgs__srv__GetEntityState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetEntityState_Request * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__GetEntityState_Request *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__GetEntityState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetEntityState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetEntityState_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetEntityState_Request__Sequence__fini(gazebo_msgs__srv__GetEntityState_Request__Sequence * array)
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
      gazebo_msgs__srv__GetEntityState_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__GetEntityState_Request__Sequence *
gazebo_msgs__srv__GetEntityState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetEntityState_Request__Sequence * array = (gazebo_msgs__srv__GetEntityState_Request__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__GetEntityState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetEntityState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetEntityState_Request__Sequence__destroy(gazebo_msgs__srv__GetEntityState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__GetEntityState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__GetEntityState_Request__Sequence__are_equal(const gazebo_msgs__srv__GetEntityState_Request__Sequence * lhs, const gazebo_msgs__srv__GetEntityState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__GetEntityState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__GetEntityState_Request__Sequence__copy(
  const gazebo_msgs__srv__GetEntityState_Request__Sequence * input,
  gazebo_msgs__srv__GetEntityState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__GetEntityState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__GetEntityState_Request * data =
      (gazebo_msgs__srv__GetEntityState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__GetEntityState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__GetEntityState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__GetEntityState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "gazebo_msgs/msg/detail/entity_state__functions.h"

bool
gazebo_msgs__srv__GetEntityState_Response__init(gazebo_msgs__srv__GetEntityState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gazebo_msgs__srv__GetEntityState_Response__fini(msg);
    return false;
  }
  // state
  if (!gazebo_msgs__msg__EntityState__init(&msg->state)) {
    gazebo_msgs__srv__GetEntityState_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
gazebo_msgs__srv__GetEntityState_Response__fini(gazebo_msgs__srv__GetEntityState_Response * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  gazebo_msgs__msg__EntityState__fini(&msg->state);
  // success
}

bool
gazebo_msgs__srv__GetEntityState_Response__are_equal(const gazebo_msgs__srv__GetEntityState_Response * lhs, const gazebo_msgs__srv__GetEntityState_Response * rhs)
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
  // state
  if (!gazebo_msgs__msg__EntityState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__GetEntityState_Response__copy(
  const gazebo_msgs__srv__GetEntityState_Response * input,
  gazebo_msgs__srv__GetEntityState_Response * output)
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
  // state
  if (!gazebo_msgs__msg__EntityState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

gazebo_msgs__srv__GetEntityState_Response *
gazebo_msgs__srv__GetEntityState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetEntityState_Response * msg = (gazebo_msgs__srv__GetEntityState_Response *)allocator.allocate(sizeof(gazebo_msgs__srv__GetEntityState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetEntityState_Response));
  bool success = gazebo_msgs__srv__GetEntityState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetEntityState_Response__destroy(gazebo_msgs__srv__GetEntityState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__GetEntityState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__GetEntityState_Response__Sequence__init(gazebo_msgs__srv__GetEntityState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetEntityState_Response * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__GetEntityState_Response *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__GetEntityState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetEntityState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetEntityState_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetEntityState_Response__Sequence__fini(gazebo_msgs__srv__GetEntityState_Response__Sequence * array)
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
      gazebo_msgs__srv__GetEntityState_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__GetEntityState_Response__Sequence *
gazebo_msgs__srv__GetEntityState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetEntityState_Response__Sequence * array = (gazebo_msgs__srv__GetEntityState_Response__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__GetEntityState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetEntityState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetEntityState_Response__Sequence__destroy(gazebo_msgs__srv__GetEntityState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__GetEntityState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__GetEntityState_Response__Sequence__are_equal(const gazebo_msgs__srv__GetEntityState_Response__Sequence * lhs, const gazebo_msgs__srv__GetEntityState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__GetEntityState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__GetEntityState_Response__Sequence__copy(
  const gazebo_msgs__srv__GetEntityState_Response__Sequence * input,
  gazebo_msgs__srv__GetEntityState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__GetEntityState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__GetEntityState_Response * data =
      (gazebo_msgs__srv__GetEntityState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__GetEntityState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__GetEntityState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__GetEntityState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
