// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/HeaterStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/heater_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__HeaterStatus__init(px4_msgs__msg__HeaterStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // device_id
  // heater_on
  // temperature_target_met
  // temperature_sensor
  // temperature_target
  // controller_period_usec
  // controller_time_on_usec
  // proportional_value
  // integrator_value
  // feed_forward_value
  // mode
  return true;
}

void
px4_msgs__msg__HeaterStatus__fini(px4_msgs__msg__HeaterStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // device_id
  // heater_on
  // temperature_target_met
  // temperature_sensor
  // temperature_target
  // controller_period_usec
  // controller_time_on_usec
  // proportional_value
  // integrator_value
  // feed_forward_value
  // mode
}

bool
px4_msgs__msg__HeaterStatus__are_equal(const px4_msgs__msg__HeaterStatus * lhs, const px4_msgs__msg__HeaterStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // heater_on
  if (lhs->heater_on != rhs->heater_on) {
    return false;
  }
  // temperature_target_met
  if (lhs->temperature_target_met != rhs->temperature_target_met) {
    return false;
  }
  // temperature_sensor
  if (lhs->temperature_sensor != rhs->temperature_sensor) {
    return false;
  }
  // temperature_target
  if (lhs->temperature_target != rhs->temperature_target) {
    return false;
  }
  // controller_period_usec
  if (lhs->controller_period_usec != rhs->controller_period_usec) {
    return false;
  }
  // controller_time_on_usec
  if (lhs->controller_time_on_usec != rhs->controller_time_on_usec) {
    return false;
  }
  // proportional_value
  if (lhs->proportional_value != rhs->proportional_value) {
    return false;
  }
  // integrator_value
  if (lhs->integrator_value != rhs->integrator_value) {
    return false;
  }
  // feed_forward_value
  if (lhs->feed_forward_value != rhs->feed_forward_value) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__HeaterStatus__copy(
  const px4_msgs__msg__HeaterStatus * input,
  px4_msgs__msg__HeaterStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // device_id
  output->device_id = input->device_id;
  // heater_on
  output->heater_on = input->heater_on;
  // temperature_target_met
  output->temperature_target_met = input->temperature_target_met;
  // temperature_sensor
  output->temperature_sensor = input->temperature_sensor;
  // temperature_target
  output->temperature_target = input->temperature_target;
  // controller_period_usec
  output->controller_period_usec = input->controller_period_usec;
  // controller_time_on_usec
  output->controller_time_on_usec = input->controller_time_on_usec;
  // proportional_value
  output->proportional_value = input->proportional_value;
  // integrator_value
  output->integrator_value = input->integrator_value;
  // feed_forward_value
  output->feed_forward_value = input->feed_forward_value;
  // mode
  output->mode = input->mode;
  return true;
}

px4_msgs__msg__HeaterStatus *
px4_msgs__msg__HeaterStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__HeaterStatus * msg = (px4_msgs__msg__HeaterStatus *)allocator.allocate(sizeof(px4_msgs__msg__HeaterStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__HeaterStatus));
  bool success = px4_msgs__msg__HeaterStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__HeaterStatus__destroy(px4_msgs__msg__HeaterStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__HeaterStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__HeaterStatus__Sequence__init(px4_msgs__msg__HeaterStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__HeaterStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__HeaterStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__HeaterStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__HeaterStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__HeaterStatus__fini(&data[i - 1]);
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
px4_msgs__msg__HeaterStatus__Sequence__fini(px4_msgs__msg__HeaterStatus__Sequence * array)
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
      px4_msgs__msg__HeaterStatus__fini(&array->data[i]);
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

px4_msgs__msg__HeaterStatus__Sequence *
px4_msgs__msg__HeaterStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__HeaterStatus__Sequence * array = (px4_msgs__msg__HeaterStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__HeaterStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__HeaterStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__HeaterStatus__Sequence__destroy(px4_msgs__msg__HeaterStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__HeaterStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__HeaterStatus__Sequence__are_equal(const px4_msgs__msg__HeaterStatus__Sequence * lhs, const px4_msgs__msg__HeaterStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__HeaterStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__HeaterStatus__Sequence__copy(
  const px4_msgs__msg__HeaterStatus__Sequence * input,
  px4_msgs__msg__HeaterStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__HeaterStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__HeaterStatus * data =
      (px4_msgs__msg__HeaterStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__HeaterStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__HeaterStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__HeaterStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
