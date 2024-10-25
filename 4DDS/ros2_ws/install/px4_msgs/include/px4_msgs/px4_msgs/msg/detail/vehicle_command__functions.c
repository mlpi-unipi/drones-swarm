// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleCommand__init(px4_msgs__msg__VehicleCommand * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // param1
  // param2
  // param3
  // param4
  // param5
  // param6
  // param7
  // command
  // target_system
  // target_component
  // source_system
  // source_component
  // confirmation
  // from_external
  return true;
}

void
px4_msgs__msg__VehicleCommand__fini(px4_msgs__msg__VehicleCommand * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // param1
  // param2
  // param3
  // param4
  // param5
  // param6
  // param7
  // command
  // target_system
  // target_component
  // source_system
  // source_component
  // confirmation
  // from_external
}

bool
px4_msgs__msg__VehicleCommand__are_equal(const px4_msgs__msg__VehicleCommand * lhs, const px4_msgs__msg__VehicleCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // param1
  if (lhs->param1 != rhs->param1) {
    return false;
  }
  // param2
  if (lhs->param2 != rhs->param2) {
    return false;
  }
  // param3
  if (lhs->param3 != rhs->param3) {
    return false;
  }
  // param4
  if (lhs->param4 != rhs->param4) {
    return false;
  }
  // param5
  if (lhs->param5 != rhs->param5) {
    return false;
  }
  // param6
  if (lhs->param6 != rhs->param6) {
    return false;
  }
  // param7
  if (lhs->param7 != rhs->param7) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
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
  // source_system
  if (lhs->source_system != rhs->source_system) {
    return false;
  }
  // source_component
  if (lhs->source_component != rhs->source_component) {
    return false;
  }
  // confirmation
  if (lhs->confirmation != rhs->confirmation) {
    return false;
  }
  // from_external
  if (lhs->from_external != rhs->from_external) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleCommand__copy(
  const px4_msgs__msg__VehicleCommand * input,
  px4_msgs__msg__VehicleCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // param1
  output->param1 = input->param1;
  // param2
  output->param2 = input->param2;
  // param3
  output->param3 = input->param3;
  // param4
  output->param4 = input->param4;
  // param5
  output->param5 = input->param5;
  // param6
  output->param6 = input->param6;
  // param7
  output->param7 = input->param7;
  // command
  output->command = input->command;
  // target_system
  output->target_system = input->target_system;
  // target_component
  output->target_component = input->target_component;
  // source_system
  output->source_system = input->source_system;
  // source_component
  output->source_component = input->source_component;
  // confirmation
  output->confirmation = input->confirmation;
  // from_external
  output->from_external = input->from_external;
  return true;
}

px4_msgs__msg__VehicleCommand *
px4_msgs__msg__VehicleCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleCommand * msg = (px4_msgs__msg__VehicleCommand *)allocator.allocate(sizeof(px4_msgs__msg__VehicleCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleCommand));
  bool success = px4_msgs__msg__VehicleCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleCommand__destroy(px4_msgs__msg__VehicleCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleCommand__Sequence__init(px4_msgs__msg__VehicleCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleCommand * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleCommand *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleCommand__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleCommand__Sequence__fini(px4_msgs__msg__VehicleCommand__Sequence * array)
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
      px4_msgs__msg__VehicleCommand__fini(&array->data[i]);
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

px4_msgs__msg__VehicleCommand__Sequence *
px4_msgs__msg__VehicleCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleCommand__Sequence * array = (px4_msgs__msg__VehicleCommand__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleCommand__Sequence__destroy(px4_msgs__msg__VehicleCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleCommand__Sequence__are_equal(const px4_msgs__msg__VehicleCommand__Sequence * lhs, const px4_msgs__msg__VehicleCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleCommand__Sequence__copy(
  const px4_msgs__msg__VehicleCommand__Sequence * input,
  px4_msgs__msg__VehicleCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleCommand * data =
      (px4_msgs__msg__VehicleCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
