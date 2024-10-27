// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_land_detected__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleLandDetected__init(px4_msgs__msg__VehicleLandDetected * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // freefall
  // ground_contact
  // maybe_landed
  // landed
  // in_ground_effect
  // in_descend
  // has_low_throttle
  // vertical_movement
  // horizontal_movement
  // rotational_movement
  // close_to_ground_or_skipped_check
  // at_rest
  return true;
}

void
px4_msgs__msg__VehicleLandDetected__fini(px4_msgs__msg__VehicleLandDetected * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // freefall
  // ground_contact
  // maybe_landed
  // landed
  // in_ground_effect
  // in_descend
  // has_low_throttle
  // vertical_movement
  // horizontal_movement
  // rotational_movement
  // close_to_ground_or_skipped_check
  // at_rest
}

bool
px4_msgs__msg__VehicleLandDetected__are_equal(const px4_msgs__msg__VehicleLandDetected * lhs, const px4_msgs__msg__VehicleLandDetected * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // freefall
  if (lhs->freefall != rhs->freefall) {
    return false;
  }
  // ground_contact
  if (lhs->ground_contact != rhs->ground_contact) {
    return false;
  }
  // maybe_landed
  if (lhs->maybe_landed != rhs->maybe_landed) {
    return false;
  }
  // landed
  if (lhs->landed != rhs->landed) {
    return false;
  }
  // in_ground_effect
  if (lhs->in_ground_effect != rhs->in_ground_effect) {
    return false;
  }
  // in_descend
  if (lhs->in_descend != rhs->in_descend) {
    return false;
  }
  // has_low_throttle
  if (lhs->has_low_throttle != rhs->has_low_throttle) {
    return false;
  }
  // vertical_movement
  if (lhs->vertical_movement != rhs->vertical_movement) {
    return false;
  }
  // horizontal_movement
  if (lhs->horizontal_movement != rhs->horizontal_movement) {
    return false;
  }
  // rotational_movement
  if (lhs->rotational_movement != rhs->rotational_movement) {
    return false;
  }
  // close_to_ground_or_skipped_check
  if (lhs->close_to_ground_or_skipped_check != rhs->close_to_ground_or_skipped_check) {
    return false;
  }
  // at_rest
  if (lhs->at_rest != rhs->at_rest) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleLandDetected__copy(
  const px4_msgs__msg__VehicleLandDetected * input,
  px4_msgs__msg__VehicleLandDetected * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // freefall
  output->freefall = input->freefall;
  // ground_contact
  output->ground_contact = input->ground_contact;
  // maybe_landed
  output->maybe_landed = input->maybe_landed;
  // landed
  output->landed = input->landed;
  // in_ground_effect
  output->in_ground_effect = input->in_ground_effect;
  // in_descend
  output->in_descend = input->in_descend;
  // has_low_throttle
  output->has_low_throttle = input->has_low_throttle;
  // vertical_movement
  output->vertical_movement = input->vertical_movement;
  // horizontal_movement
  output->horizontal_movement = input->horizontal_movement;
  // rotational_movement
  output->rotational_movement = input->rotational_movement;
  // close_to_ground_or_skipped_check
  output->close_to_ground_or_skipped_check = input->close_to_ground_or_skipped_check;
  // at_rest
  output->at_rest = input->at_rest;
  return true;
}

px4_msgs__msg__VehicleLandDetected *
px4_msgs__msg__VehicleLandDetected__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleLandDetected * msg = (px4_msgs__msg__VehicleLandDetected *)allocator.allocate(sizeof(px4_msgs__msg__VehicleLandDetected), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleLandDetected));
  bool success = px4_msgs__msg__VehicleLandDetected__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleLandDetected__destroy(px4_msgs__msg__VehicleLandDetected * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleLandDetected__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleLandDetected__Sequence__init(px4_msgs__msg__VehicleLandDetected__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleLandDetected * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleLandDetected *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleLandDetected), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleLandDetected__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleLandDetected__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleLandDetected__Sequence__fini(px4_msgs__msg__VehicleLandDetected__Sequence * array)
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
      px4_msgs__msg__VehicleLandDetected__fini(&array->data[i]);
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

px4_msgs__msg__VehicleLandDetected__Sequence *
px4_msgs__msg__VehicleLandDetected__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleLandDetected__Sequence * array = (px4_msgs__msg__VehicleLandDetected__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleLandDetected__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleLandDetected__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleLandDetected__Sequence__destroy(px4_msgs__msg__VehicleLandDetected__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleLandDetected__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleLandDetected__Sequence__are_equal(const px4_msgs__msg__VehicleLandDetected__Sequence * lhs, const px4_msgs__msg__VehicleLandDetected__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleLandDetected__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleLandDetected__Sequence__copy(
  const px4_msgs__msg__VehicleLandDetected__Sequence * input,
  px4_msgs__msg__VehicleLandDetected__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleLandDetected);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleLandDetected * data =
      (px4_msgs__msg__VehicleLandDetected *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleLandDetected__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleLandDetected__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleLandDetected__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
