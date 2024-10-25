// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:srv/GetLightProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/detail/get_light_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `light_name`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__GetLightProperties_Request__init(gazebo_msgs__srv__GetLightProperties_Request * msg)
{
  if (!msg) {
    return false;
  }
  // light_name
  if (!rosidl_runtime_c__String__init(&msg->light_name)) {
    gazebo_msgs__srv__GetLightProperties_Request__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__GetLightProperties_Request__fini(gazebo_msgs__srv__GetLightProperties_Request * msg)
{
  if (!msg) {
    return;
  }
  // light_name
  rosidl_runtime_c__String__fini(&msg->light_name);
}

bool
gazebo_msgs__srv__GetLightProperties_Request__are_equal(const gazebo_msgs__srv__GetLightProperties_Request * lhs, const gazebo_msgs__srv__GetLightProperties_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // light_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->light_name), &(rhs->light_name)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__srv__GetLightProperties_Request__copy(
  const gazebo_msgs__srv__GetLightProperties_Request * input,
  gazebo_msgs__srv__GetLightProperties_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // light_name
  if (!rosidl_runtime_c__String__copy(
      &(input->light_name), &(output->light_name)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__srv__GetLightProperties_Request *
gazebo_msgs__srv__GetLightProperties_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetLightProperties_Request * msg = (gazebo_msgs__srv__GetLightProperties_Request *)allocator.allocate(sizeof(gazebo_msgs__srv__GetLightProperties_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetLightProperties_Request));
  bool success = gazebo_msgs__srv__GetLightProperties_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetLightProperties_Request__destroy(gazebo_msgs__srv__GetLightProperties_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__GetLightProperties_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__GetLightProperties_Request__Sequence__init(gazebo_msgs__srv__GetLightProperties_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetLightProperties_Request * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__GetLightProperties_Request *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__GetLightProperties_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetLightProperties_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetLightProperties_Request__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetLightProperties_Request__Sequence__fini(gazebo_msgs__srv__GetLightProperties_Request__Sequence * array)
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
      gazebo_msgs__srv__GetLightProperties_Request__fini(&array->data[i]);
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

gazebo_msgs__srv__GetLightProperties_Request__Sequence *
gazebo_msgs__srv__GetLightProperties_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetLightProperties_Request__Sequence * array = (gazebo_msgs__srv__GetLightProperties_Request__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__GetLightProperties_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetLightProperties_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetLightProperties_Request__Sequence__destroy(gazebo_msgs__srv__GetLightProperties_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__GetLightProperties_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__GetLightProperties_Request__Sequence__are_equal(const gazebo_msgs__srv__GetLightProperties_Request__Sequence * lhs, const gazebo_msgs__srv__GetLightProperties_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__GetLightProperties_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__GetLightProperties_Request__Sequence__copy(
  const gazebo_msgs__srv__GetLightProperties_Request__Sequence * input,
  gazebo_msgs__srv__GetLightProperties_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__GetLightProperties_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__GetLightProperties_Request * data =
      (gazebo_msgs__srv__GetLightProperties_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__GetLightProperties_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__GetLightProperties_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__GetLightProperties_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `diffuse`
#include "std_msgs/msg/detail/color_rgba__functions.h"
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__srv__GetLightProperties_Response__init(gazebo_msgs__srv__GetLightProperties_Response * msg)
{
  if (!msg) {
    return false;
  }
  // diffuse
  if (!std_msgs__msg__ColorRGBA__init(&msg->diffuse)) {
    gazebo_msgs__srv__GetLightProperties_Response__fini(msg);
    return false;
  }
  // attenuation_constant
  // attenuation_linear
  // attenuation_quadratic
  // success
  // status_message
  if (!rosidl_runtime_c__String__init(&msg->status_message)) {
    gazebo_msgs__srv__GetLightProperties_Response__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__srv__GetLightProperties_Response__fini(gazebo_msgs__srv__GetLightProperties_Response * msg)
{
  if (!msg) {
    return;
  }
  // diffuse
  std_msgs__msg__ColorRGBA__fini(&msg->diffuse);
  // attenuation_constant
  // attenuation_linear
  // attenuation_quadratic
  // success
  // status_message
  rosidl_runtime_c__String__fini(&msg->status_message);
}

bool
gazebo_msgs__srv__GetLightProperties_Response__are_equal(const gazebo_msgs__srv__GetLightProperties_Response * lhs, const gazebo_msgs__srv__GetLightProperties_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // diffuse
  if (!std_msgs__msg__ColorRGBA__are_equal(
      &(lhs->diffuse), &(rhs->diffuse)))
  {
    return false;
  }
  // attenuation_constant
  if (lhs->attenuation_constant != rhs->attenuation_constant) {
    return false;
  }
  // attenuation_linear
  if (lhs->attenuation_linear != rhs->attenuation_linear) {
    return false;
  }
  // attenuation_quadratic
  if (lhs->attenuation_quadratic != rhs->attenuation_quadratic) {
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
gazebo_msgs__srv__GetLightProperties_Response__copy(
  const gazebo_msgs__srv__GetLightProperties_Response * input,
  gazebo_msgs__srv__GetLightProperties_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // diffuse
  if (!std_msgs__msg__ColorRGBA__copy(
      &(input->diffuse), &(output->diffuse)))
  {
    return false;
  }
  // attenuation_constant
  output->attenuation_constant = input->attenuation_constant;
  // attenuation_linear
  output->attenuation_linear = input->attenuation_linear;
  // attenuation_quadratic
  output->attenuation_quadratic = input->attenuation_quadratic;
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

gazebo_msgs__srv__GetLightProperties_Response *
gazebo_msgs__srv__GetLightProperties_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetLightProperties_Response * msg = (gazebo_msgs__srv__GetLightProperties_Response *)allocator.allocate(sizeof(gazebo_msgs__srv__GetLightProperties_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__srv__GetLightProperties_Response));
  bool success = gazebo_msgs__srv__GetLightProperties_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__srv__GetLightProperties_Response__destroy(gazebo_msgs__srv__GetLightProperties_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__srv__GetLightProperties_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__srv__GetLightProperties_Response__Sequence__init(gazebo_msgs__srv__GetLightProperties_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetLightProperties_Response * data = NULL;

  if (size) {
    data = (gazebo_msgs__srv__GetLightProperties_Response *)allocator.zero_allocate(size, sizeof(gazebo_msgs__srv__GetLightProperties_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__srv__GetLightProperties_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__srv__GetLightProperties_Response__fini(&data[i - 1]);
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
gazebo_msgs__srv__GetLightProperties_Response__Sequence__fini(gazebo_msgs__srv__GetLightProperties_Response__Sequence * array)
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
      gazebo_msgs__srv__GetLightProperties_Response__fini(&array->data[i]);
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

gazebo_msgs__srv__GetLightProperties_Response__Sequence *
gazebo_msgs__srv__GetLightProperties_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__srv__GetLightProperties_Response__Sequence * array = (gazebo_msgs__srv__GetLightProperties_Response__Sequence *)allocator.allocate(sizeof(gazebo_msgs__srv__GetLightProperties_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__srv__GetLightProperties_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__srv__GetLightProperties_Response__Sequence__destroy(gazebo_msgs__srv__GetLightProperties_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__srv__GetLightProperties_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__srv__GetLightProperties_Response__Sequence__are_equal(const gazebo_msgs__srv__GetLightProperties_Response__Sequence * lhs, const gazebo_msgs__srv__GetLightProperties_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__srv__GetLightProperties_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__srv__GetLightProperties_Response__Sequence__copy(
  const gazebo_msgs__srv__GetLightProperties_Response__Sequence * input,
  gazebo_msgs__srv__GetLightProperties_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__srv__GetLightProperties_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__srv__GetLightProperties_Response * data =
      (gazebo_msgs__srv__GetLightProperties_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__srv__GetLightProperties_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__srv__GetLightProperties_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__srv__GetLightProperties_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
