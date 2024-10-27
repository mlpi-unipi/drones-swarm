// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/rate_ctrl_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__RateCtrlStatus__init(px4_msgs__msg__RateCtrlStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // rollspeed_integ
  // pitchspeed_integ
  // yawspeed_integ
  // wheel_rate_integ
  return true;
}

void
px4_msgs__msg__RateCtrlStatus__fini(px4_msgs__msg__RateCtrlStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // rollspeed_integ
  // pitchspeed_integ
  // yawspeed_integ
  // wheel_rate_integ
}

bool
px4_msgs__msg__RateCtrlStatus__are_equal(const px4_msgs__msg__RateCtrlStatus * lhs, const px4_msgs__msg__RateCtrlStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // rollspeed_integ
  if (lhs->rollspeed_integ != rhs->rollspeed_integ) {
    return false;
  }
  // pitchspeed_integ
  if (lhs->pitchspeed_integ != rhs->pitchspeed_integ) {
    return false;
  }
  // yawspeed_integ
  if (lhs->yawspeed_integ != rhs->yawspeed_integ) {
    return false;
  }
  // wheel_rate_integ
  if (lhs->wheel_rate_integ != rhs->wheel_rate_integ) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__RateCtrlStatus__copy(
  const px4_msgs__msg__RateCtrlStatus * input,
  px4_msgs__msg__RateCtrlStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // rollspeed_integ
  output->rollspeed_integ = input->rollspeed_integ;
  // pitchspeed_integ
  output->pitchspeed_integ = input->pitchspeed_integ;
  // yawspeed_integ
  output->yawspeed_integ = input->yawspeed_integ;
  // wheel_rate_integ
  output->wheel_rate_integ = input->wheel_rate_integ;
  return true;
}

px4_msgs__msg__RateCtrlStatus *
px4_msgs__msg__RateCtrlStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RateCtrlStatus * msg = (px4_msgs__msg__RateCtrlStatus *)allocator.allocate(sizeof(px4_msgs__msg__RateCtrlStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__RateCtrlStatus));
  bool success = px4_msgs__msg__RateCtrlStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__RateCtrlStatus__destroy(px4_msgs__msg__RateCtrlStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__RateCtrlStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__RateCtrlStatus__Sequence__init(px4_msgs__msg__RateCtrlStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RateCtrlStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__RateCtrlStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__RateCtrlStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__RateCtrlStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__RateCtrlStatus__fini(&data[i - 1]);
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
px4_msgs__msg__RateCtrlStatus__Sequence__fini(px4_msgs__msg__RateCtrlStatus__Sequence * array)
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
      px4_msgs__msg__RateCtrlStatus__fini(&array->data[i]);
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

px4_msgs__msg__RateCtrlStatus__Sequence *
px4_msgs__msg__RateCtrlStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__RateCtrlStatus__Sequence * array = (px4_msgs__msg__RateCtrlStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__RateCtrlStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__RateCtrlStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__RateCtrlStatus__Sequence__destroy(px4_msgs__msg__RateCtrlStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__RateCtrlStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__RateCtrlStatus__Sequence__are_equal(const px4_msgs__msg__RateCtrlStatus__Sequence * lhs, const px4_msgs__msg__RateCtrlStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__RateCtrlStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__RateCtrlStatus__Sequence__copy(
  const px4_msgs__msg__RateCtrlStatus__Sequence * input,
  px4_msgs__msg__RateCtrlStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__RateCtrlStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__RateCtrlStatus * data =
      (px4_msgs__msg__RateCtrlStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__RateCtrlStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__RateCtrlStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__RateCtrlStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
