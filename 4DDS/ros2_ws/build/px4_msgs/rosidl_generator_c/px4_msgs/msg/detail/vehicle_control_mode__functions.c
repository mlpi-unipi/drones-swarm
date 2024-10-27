// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_control_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleControlMode__init(px4_msgs__msg__VehicleControlMode * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // flag_armed
  // flag_multicopter_position_control_enabled
  // flag_control_manual_enabled
  // flag_control_auto_enabled
  // flag_control_offboard_enabled
  // flag_control_position_enabled
  // flag_control_velocity_enabled
  // flag_control_altitude_enabled
  // flag_control_climb_rate_enabled
  // flag_control_acceleration_enabled
  // flag_control_attitude_enabled
  // flag_control_rates_enabled
  // flag_control_allocation_enabled
  // flag_control_termination_enabled
  // source_id
  return true;
}

void
px4_msgs__msg__VehicleControlMode__fini(px4_msgs__msg__VehicleControlMode * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // flag_armed
  // flag_multicopter_position_control_enabled
  // flag_control_manual_enabled
  // flag_control_auto_enabled
  // flag_control_offboard_enabled
  // flag_control_position_enabled
  // flag_control_velocity_enabled
  // flag_control_altitude_enabled
  // flag_control_climb_rate_enabled
  // flag_control_acceleration_enabled
  // flag_control_attitude_enabled
  // flag_control_rates_enabled
  // flag_control_allocation_enabled
  // flag_control_termination_enabled
  // source_id
}

bool
px4_msgs__msg__VehicleControlMode__are_equal(const px4_msgs__msg__VehicleControlMode * lhs, const px4_msgs__msg__VehicleControlMode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // flag_armed
  if (lhs->flag_armed != rhs->flag_armed) {
    return false;
  }
  // flag_multicopter_position_control_enabled
  if (lhs->flag_multicopter_position_control_enabled != rhs->flag_multicopter_position_control_enabled) {
    return false;
  }
  // flag_control_manual_enabled
  if (lhs->flag_control_manual_enabled != rhs->flag_control_manual_enabled) {
    return false;
  }
  // flag_control_auto_enabled
  if (lhs->flag_control_auto_enabled != rhs->flag_control_auto_enabled) {
    return false;
  }
  // flag_control_offboard_enabled
  if (lhs->flag_control_offboard_enabled != rhs->flag_control_offboard_enabled) {
    return false;
  }
  // flag_control_position_enabled
  if (lhs->flag_control_position_enabled != rhs->flag_control_position_enabled) {
    return false;
  }
  // flag_control_velocity_enabled
  if (lhs->flag_control_velocity_enabled != rhs->flag_control_velocity_enabled) {
    return false;
  }
  // flag_control_altitude_enabled
  if (lhs->flag_control_altitude_enabled != rhs->flag_control_altitude_enabled) {
    return false;
  }
  // flag_control_climb_rate_enabled
  if (lhs->flag_control_climb_rate_enabled != rhs->flag_control_climb_rate_enabled) {
    return false;
  }
  // flag_control_acceleration_enabled
  if (lhs->flag_control_acceleration_enabled != rhs->flag_control_acceleration_enabled) {
    return false;
  }
  // flag_control_attitude_enabled
  if (lhs->flag_control_attitude_enabled != rhs->flag_control_attitude_enabled) {
    return false;
  }
  // flag_control_rates_enabled
  if (lhs->flag_control_rates_enabled != rhs->flag_control_rates_enabled) {
    return false;
  }
  // flag_control_allocation_enabled
  if (lhs->flag_control_allocation_enabled != rhs->flag_control_allocation_enabled) {
    return false;
  }
  // flag_control_termination_enabled
  if (lhs->flag_control_termination_enabled != rhs->flag_control_termination_enabled) {
    return false;
  }
  // source_id
  if (lhs->source_id != rhs->source_id) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleControlMode__copy(
  const px4_msgs__msg__VehicleControlMode * input,
  px4_msgs__msg__VehicleControlMode * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // flag_armed
  output->flag_armed = input->flag_armed;
  // flag_multicopter_position_control_enabled
  output->flag_multicopter_position_control_enabled = input->flag_multicopter_position_control_enabled;
  // flag_control_manual_enabled
  output->flag_control_manual_enabled = input->flag_control_manual_enabled;
  // flag_control_auto_enabled
  output->flag_control_auto_enabled = input->flag_control_auto_enabled;
  // flag_control_offboard_enabled
  output->flag_control_offboard_enabled = input->flag_control_offboard_enabled;
  // flag_control_position_enabled
  output->flag_control_position_enabled = input->flag_control_position_enabled;
  // flag_control_velocity_enabled
  output->flag_control_velocity_enabled = input->flag_control_velocity_enabled;
  // flag_control_altitude_enabled
  output->flag_control_altitude_enabled = input->flag_control_altitude_enabled;
  // flag_control_climb_rate_enabled
  output->flag_control_climb_rate_enabled = input->flag_control_climb_rate_enabled;
  // flag_control_acceleration_enabled
  output->flag_control_acceleration_enabled = input->flag_control_acceleration_enabled;
  // flag_control_attitude_enabled
  output->flag_control_attitude_enabled = input->flag_control_attitude_enabled;
  // flag_control_rates_enabled
  output->flag_control_rates_enabled = input->flag_control_rates_enabled;
  // flag_control_allocation_enabled
  output->flag_control_allocation_enabled = input->flag_control_allocation_enabled;
  // flag_control_termination_enabled
  output->flag_control_termination_enabled = input->flag_control_termination_enabled;
  // source_id
  output->source_id = input->source_id;
  return true;
}

px4_msgs__msg__VehicleControlMode *
px4_msgs__msg__VehicleControlMode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleControlMode * msg = (px4_msgs__msg__VehicleControlMode *)allocator.allocate(sizeof(px4_msgs__msg__VehicleControlMode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleControlMode));
  bool success = px4_msgs__msg__VehicleControlMode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleControlMode__destroy(px4_msgs__msg__VehicleControlMode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleControlMode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleControlMode__Sequence__init(px4_msgs__msg__VehicleControlMode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleControlMode * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleControlMode *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleControlMode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleControlMode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleControlMode__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleControlMode__Sequence__fini(px4_msgs__msg__VehicleControlMode__Sequence * array)
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
      px4_msgs__msg__VehicleControlMode__fini(&array->data[i]);
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

px4_msgs__msg__VehicleControlMode__Sequence *
px4_msgs__msg__VehicleControlMode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleControlMode__Sequence * array = (px4_msgs__msg__VehicleControlMode__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleControlMode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleControlMode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleControlMode__Sequence__destroy(px4_msgs__msg__VehicleControlMode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleControlMode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleControlMode__Sequence__are_equal(const px4_msgs__msg__VehicleControlMode__Sequence * lhs, const px4_msgs__msg__VehicleControlMode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleControlMode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleControlMode__Sequence__copy(
  const px4_msgs__msg__VehicleControlMode__Sequence * input,
  px4_msgs__msg__VehicleControlMode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleControlMode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleControlMode * data =
      (px4_msgs__msg__VehicleControlMode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleControlMode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleControlMode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleControlMode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
