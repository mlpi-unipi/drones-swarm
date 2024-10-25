// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/system_power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__SystemPower__init(px4_msgs__msg__SystemPower * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // voltage5v_v
  // sensors3v3
  // sensors3v3_valid
  // usb_connected
  // brick_valid
  // usb_valid
  // servo_valid
  // periph_5v_oc
  // hipower_5v_oc
  // comp_5v_valid
  // can1_gps1_5v_valid
  return true;
}

void
px4_msgs__msg__SystemPower__fini(px4_msgs__msg__SystemPower * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // voltage5v_v
  // sensors3v3
  // sensors3v3_valid
  // usb_connected
  // brick_valid
  // usb_valid
  // servo_valid
  // periph_5v_oc
  // hipower_5v_oc
  // comp_5v_valid
  // can1_gps1_5v_valid
}

bool
px4_msgs__msg__SystemPower__are_equal(const px4_msgs__msg__SystemPower * lhs, const px4_msgs__msg__SystemPower * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // voltage5v_v
  if (lhs->voltage5v_v != rhs->voltage5v_v) {
    return false;
  }
  // sensors3v3
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->sensors3v3[i] != rhs->sensors3v3[i]) {
      return false;
    }
  }
  // sensors3v3_valid
  if (lhs->sensors3v3_valid != rhs->sensors3v3_valid) {
    return false;
  }
  // usb_connected
  if (lhs->usb_connected != rhs->usb_connected) {
    return false;
  }
  // brick_valid
  if (lhs->brick_valid != rhs->brick_valid) {
    return false;
  }
  // usb_valid
  if (lhs->usb_valid != rhs->usb_valid) {
    return false;
  }
  // servo_valid
  if (lhs->servo_valid != rhs->servo_valid) {
    return false;
  }
  // periph_5v_oc
  if (lhs->periph_5v_oc != rhs->periph_5v_oc) {
    return false;
  }
  // hipower_5v_oc
  if (lhs->hipower_5v_oc != rhs->hipower_5v_oc) {
    return false;
  }
  // comp_5v_valid
  if (lhs->comp_5v_valid != rhs->comp_5v_valid) {
    return false;
  }
  // can1_gps1_5v_valid
  if (lhs->can1_gps1_5v_valid != rhs->can1_gps1_5v_valid) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SystemPower__copy(
  const px4_msgs__msg__SystemPower * input,
  px4_msgs__msg__SystemPower * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // voltage5v_v
  output->voltage5v_v = input->voltage5v_v;
  // sensors3v3
  for (size_t i = 0; i < 4; ++i) {
    output->sensors3v3[i] = input->sensors3v3[i];
  }
  // sensors3v3_valid
  output->sensors3v3_valid = input->sensors3v3_valid;
  // usb_connected
  output->usb_connected = input->usb_connected;
  // brick_valid
  output->brick_valid = input->brick_valid;
  // usb_valid
  output->usb_valid = input->usb_valid;
  // servo_valid
  output->servo_valid = input->servo_valid;
  // periph_5v_oc
  output->periph_5v_oc = input->periph_5v_oc;
  // hipower_5v_oc
  output->hipower_5v_oc = input->hipower_5v_oc;
  // comp_5v_valid
  output->comp_5v_valid = input->comp_5v_valid;
  // can1_gps1_5v_valid
  output->can1_gps1_5v_valid = input->can1_gps1_5v_valid;
  return true;
}

px4_msgs__msg__SystemPower *
px4_msgs__msg__SystemPower__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SystemPower * msg = (px4_msgs__msg__SystemPower *)allocator.allocate(sizeof(px4_msgs__msg__SystemPower), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SystemPower));
  bool success = px4_msgs__msg__SystemPower__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SystemPower__destroy(px4_msgs__msg__SystemPower * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__SystemPower__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__SystemPower__Sequence__init(px4_msgs__msg__SystemPower__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SystemPower * data = NULL;

  if (size) {
    data = (px4_msgs__msg__SystemPower *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__SystemPower), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SystemPower__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SystemPower__fini(&data[i - 1]);
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
px4_msgs__msg__SystemPower__Sequence__fini(px4_msgs__msg__SystemPower__Sequence * array)
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
      px4_msgs__msg__SystemPower__fini(&array->data[i]);
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

px4_msgs__msg__SystemPower__Sequence *
px4_msgs__msg__SystemPower__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SystemPower__Sequence * array = (px4_msgs__msg__SystemPower__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__SystemPower__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SystemPower__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SystemPower__Sequence__destroy(px4_msgs__msg__SystemPower__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__SystemPower__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__SystemPower__Sequence__are_equal(const px4_msgs__msg__SystemPower__Sequence * lhs, const px4_msgs__msg__SystemPower__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SystemPower__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SystemPower__Sequence__copy(
  const px4_msgs__msg__SystemPower__Sequence * input,
  px4_msgs__msg__SystemPower__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SystemPower);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__SystemPower * data =
      (px4_msgs__msg__SystemPower *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SystemPower__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SystemPower__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__SystemPower__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
