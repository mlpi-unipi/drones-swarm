// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/goto_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__GotoSetpoint__init(px4_msgs__msg__GotoSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // position
  // flag_control_heading
  // heading
  // flag_set_max_horizontal_speed
  // max_horizontal_speed
  // flag_set_max_vertical_speed
  // max_vertical_speed
  // flag_set_max_heading_rate
  // max_heading_rate
  return true;
}

void
px4_msgs__msg__GotoSetpoint__fini(px4_msgs__msg__GotoSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // position
  // flag_control_heading
  // heading
  // flag_set_max_horizontal_speed
  // max_horizontal_speed
  // flag_set_max_vertical_speed
  // max_vertical_speed
  // flag_set_max_heading_rate
  // max_heading_rate
}

bool
px4_msgs__msg__GotoSetpoint__are_equal(const px4_msgs__msg__GotoSetpoint * lhs, const px4_msgs__msg__GotoSetpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // flag_control_heading
  if (lhs->flag_control_heading != rhs->flag_control_heading) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // flag_set_max_horizontal_speed
  if (lhs->flag_set_max_horizontal_speed != rhs->flag_set_max_horizontal_speed) {
    return false;
  }
  // max_horizontal_speed
  if (lhs->max_horizontal_speed != rhs->max_horizontal_speed) {
    return false;
  }
  // flag_set_max_vertical_speed
  if (lhs->flag_set_max_vertical_speed != rhs->flag_set_max_vertical_speed) {
    return false;
  }
  // max_vertical_speed
  if (lhs->max_vertical_speed != rhs->max_vertical_speed) {
    return false;
  }
  // flag_set_max_heading_rate
  if (lhs->flag_set_max_heading_rate != rhs->flag_set_max_heading_rate) {
    return false;
  }
  // max_heading_rate
  if (lhs->max_heading_rate != rhs->max_heading_rate) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__GotoSetpoint__copy(
  const px4_msgs__msg__GotoSetpoint * input,
  px4_msgs__msg__GotoSetpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // flag_control_heading
  output->flag_control_heading = input->flag_control_heading;
  // heading
  output->heading = input->heading;
  // flag_set_max_horizontal_speed
  output->flag_set_max_horizontal_speed = input->flag_set_max_horizontal_speed;
  // max_horizontal_speed
  output->max_horizontal_speed = input->max_horizontal_speed;
  // flag_set_max_vertical_speed
  output->flag_set_max_vertical_speed = input->flag_set_max_vertical_speed;
  // max_vertical_speed
  output->max_vertical_speed = input->max_vertical_speed;
  // flag_set_max_heading_rate
  output->flag_set_max_heading_rate = input->flag_set_max_heading_rate;
  // max_heading_rate
  output->max_heading_rate = input->max_heading_rate;
  return true;
}

px4_msgs__msg__GotoSetpoint *
px4_msgs__msg__GotoSetpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GotoSetpoint * msg = (px4_msgs__msg__GotoSetpoint *)allocator.allocate(sizeof(px4_msgs__msg__GotoSetpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GotoSetpoint));
  bool success = px4_msgs__msg__GotoSetpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GotoSetpoint__destroy(px4_msgs__msg__GotoSetpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__GotoSetpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__GotoSetpoint__Sequence__init(px4_msgs__msg__GotoSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GotoSetpoint * data = NULL;

  if (size) {
    data = (px4_msgs__msg__GotoSetpoint *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__GotoSetpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GotoSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GotoSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__GotoSetpoint__Sequence__fini(px4_msgs__msg__GotoSetpoint__Sequence * array)
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
      px4_msgs__msg__GotoSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__GotoSetpoint__Sequence *
px4_msgs__msg__GotoSetpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GotoSetpoint__Sequence * array = (px4_msgs__msg__GotoSetpoint__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__GotoSetpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GotoSetpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GotoSetpoint__Sequence__destroy(px4_msgs__msg__GotoSetpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__GotoSetpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__GotoSetpoint__Sequence__are_equal(const px4_msgs__msg__GotoSetpoint__Sequence * lhs, const px4_msgs__msg__GotoSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GotoSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GotoSetpoint__Sequence__copy(
  const px4_msgs__msg__GotoSetpoint__Sequence * input,
  px4_msgs__msg__GotoSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GotoSetpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__GotoSetpoint * data =
      (px4_msgs__msg__GotoSetpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GotoSetpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GotoSetpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__GotoSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
