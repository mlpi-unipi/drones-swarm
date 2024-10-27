// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleCommandAck.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_command_ack__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleCommandAck__init(px4_msgs__msg__VehicleCommandAck * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // command
  // result
  // result_param1
  // result_param2
  // target_system
  // target_component
  // from_external
  return true;
}

void
px4_msgs__msg__VehicleCommandAck__fini(px4_msgs__msg__VehicleCommandAck * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // command
  // result
  // result_param1
  // result_param2
  // target_system
  // target_component
  // from_external
}

bool
px4_msgs__msg__VehicleCommandAck__are_equal(const px4_msgs__msg__VehicleCommandAck * lhs, const px4_msgs__msg__VehicleCommandAck * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  // result_param1
  if (lhs->result_param1 != rhs->result_param1) {
    return false;
  }
  // result_param2
  if (lhs->result_param2 != rhs->result_param2) {
    return false;
  }
  // target_system
  if (lhs->target_system != rhs->target_system) {
    return false;
  }
  // target_component
  if (lhs->target_component != rhs->target_component) {
    return false;
  }
  // from_external
  if (lhs->from_external != rhs->from_external) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleCommandAck__copy(
  const px4_msgs__msg__VehicleCommandAck * input,
  px4_msgs__msg__VehicleCommandAck * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // command
  output->command = input->command;
  // result
  output->result = input->result;
  // result_param1
  output->result_param1 = input->result_param1;
  // result_param2
  output->result_param2 = input->result_param2;
  // target_system
  output->target_system = input->target_system;
  // target_component
  output->target_component = input->target_component;
  // from_external
  output->from_external = input->from_external;
  return true;
}

px4_msgs__msg__VehicleCommandAck *
px4_msgs__msg__VehicleCommandAck__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleCommandAck * msg = (px4_msgs__msg__VehicleCommandAck *)allocator.allocate(sizeof(px4_msgs__msg__VehicleCommandAck), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleCommandAck));
  bool success = px4_msgs__msg__VehicleCommandAck__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleCommandAck__destroy(px4_msgs__msg__VehicleCommandAck * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleCommandAck__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleCommandAck__Sequence__init(px4_msgs__msg__VehicleCommandAck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleCommandAck * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleCommandAck *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleCommandAck), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleCommandAck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleCommandAck__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleCommandAck__Sequence__fini(px4_msgs__msg__VehicleCommandAck__Sequence * array)
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
      px4_msgs__msg__VehicleCommandAck__fini(&array->data[i]);
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

px4_msgs__msg__VehicleCommandAck__Sequence *
px4_msgs__msg__VehicleCommandAck__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleCommandAck__Sequence * array = (px4_msgs__msg__VehicleCommandAck__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleCommandAck__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleCommandAck__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleCommandAck__Sequence__destroy(px4_msgs__msg__VehicleCommandAck__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleCommandAck__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleCommandAck__Sequence__are_equal(const px4_msgs__msg__VehicleCommandAck__Sequence * lhs, const px4_msgs__msg__VehicleCommandAck__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleCommandAck__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleCommandAck__Sequence__copy(
  const px4_msgs__msg__VehicleCommandAck__Sequence * input,
  px4_msgs__msg__VehicleCommandAck__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleCommandAck);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleCommandAck * data =
      (px4_msgs__msg__VehicleCommandAck *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleCommandAck__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleCommandAck__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleCommandAck__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
