// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/GeneratorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/generator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__GeneratorStatus__init(px4_msgs__msg__GeneratorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // status
  // battery_current
  // load_current
  // power_generated
  // bus_voltage
  // bat_current_setpoint
  // runtime
  // time_until_maintenance
  // generator_speed
  // rectifier_temperature
  // generator_temperature
  return true;
}

void
px4_msgs__msg__GeneratorStatus__fini(px4_msgs__msg__GeneratorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // status
  // battery_current
  // load_current
  // power_generated
  // bus_voltage
  // bat_current_setpoint
  // runtime
  // time_until_maintenance
  // generator_speed
  // rectifier_temperature
  // generator_temperature
}

bool
px4_msgs__msg__GeneratorStatus__are_equal(const px4_msgs__msg__GeneratorStatus * lhs, const px4_msgs__msg__GeneratorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // battery_current
  if (lhs->battery_current != rhs->battery_current) {
    return false;
  }
  // load_current
  if (lhs->load_current != rhs->load_current) {
    return false;
  }
  // power_generated
  if (lhs->power_generated != rhs->power_generated) {
    return false;
  }
  // bus_voltage
  if (lhs->bus_voltage != rhs->bus_voltage) {
    return false;
  }
  // bat_current_setpoint
  if (lhs->bat_current_setpoint != rhs->bat_current_setpoint) {
    return false;
  }
  // runtime
  if (lhs->runtime != rhs->runtime) {
    return false;
  }
  // time_until_maintenance
  if (lhs->time_until_maintenance != rhs->time_until_maintenance) {
    return false;
  }
  // generator_speed
  if (lhs->generator_speed != rhs->generator_speed) {
    return false;
  }
  // rectifier_temperature
  if (lhs->rectifier_temperature != rhs->rectifier_temperature) {
    return false;
  }
  // generator_temperature
  if (lhs->generator_temperature != rhs->generator_temperature) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__GeneratorStatus__copy(
  const px4_msgs__msg__GeneratorStatus * input,
  px4_msgs__msg__GeneratorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // status
  output->status = input->status;
  // battery_current
  output->battery_current = input->battery_current;
  // load_current
  output->load_current = input->load_current;
  // power_generated
  output->power_generated = input->power_generated;
  // bus_voltage
  output->bus_voltage = input->bus_voltage;
  // bat_current_setpoint
  output->bat_current_setpoint = input->bat_current_setpoint;
  // runtime
  output->runtime = input->runtime;
  // time_until_maintenance
  output->time_until_maintenance = input->time_until_maintenance;
  // generator_speed
  output->generator_speed = input->generator_speed;
  // rectifier_temperature
  output->rectifier_temperature = input->rectifier_temperature;
  // generator_temperature
  output->generator_temperature = input->generator_temperature;
  return true;
}

px4_msgs__msg__GeneratorStatus *
px4_msgs__msg__GeneratorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GeneratorStatus * msg = (px4_msgs__msg__GeneratorStatus *)allocator.allocate(sizeof(px4_msgs__msg__GeneratorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__GeneratorStatus));
  bool success = px4_msgs__msg__GeneratorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__GeneratorStatus__destroy(px4_msgs__msg__GeneratorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__GeneratorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__GeneratorStatus__Sequence__init(px4_msgs__msg__GeneratorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GeneratorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__GeneratorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__GeneratorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__GeneratorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__GeneratorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__GeneratorStatus__Sequence__fini(px4_msgs__msg__GeneratorStatus__Sequence * array)
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
      px4_msgs__msg__GeneratorStatus__fini(&array->data[i]);
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

px4_msgs__msg__GeneratorStatus__Sequence *
px4_msgs__msg__GeneratorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__GeneratorStatus__Sequence * array = (px4_msgs__msg__GeneratorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__GeneratorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__GeneratorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__GeneratorStatus__Sequence__destroy(px4_msgs__msg__GeneratorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__GeneratorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__GeneratorStatus__Sequence__are_equal(const px4_msgs__msg__GeneratorStatus__Sequence * lhs, const px4_msgs__msg__GeneratorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__GeneratorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__GeneratorStatus__Sequence__copy(
  const px4_msgs__msg__GeneratorStatus__Sequence * input,
  px4_msgs__msg__GeneratorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__GeneratorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__GeneratorStatus * data =
      (px4_msgs__msg__GeneratorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__GeneratorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__GeneratorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__GeneratorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
