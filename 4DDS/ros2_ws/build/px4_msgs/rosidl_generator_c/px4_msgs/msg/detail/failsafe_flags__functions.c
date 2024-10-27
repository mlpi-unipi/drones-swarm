// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/failsafe_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FailsafeFlags__init(px4_msgs__msg__FailsafeFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_mission
  // mode_req_offboard_signal
  // mode_req_home_position
  // mode_req_wind_and_flight_time_compliance
  // mode_req_prevent_arming
  // mode_req_manual_control
  // mode_req_other
  // angular_velocity_invalid
  // attitude_invalid
  // local_altitude_invalid
  // local_position_invalid
  // local_position_invalid_relaxed
  // local_velocity_invalid
  // global_position_invalid
  // auto_mission_missing
  // offboard_control_signal_lost
  // home_position_invalid
  // manual_control_signal_lost
  // gcs_connection_lost
  // battery_warning
  // battery_low_remaining_time
  // battery_unhealthy
  // geofence_breached
  // mission_failure
  // vtol_fixed_wing_system_failure
  // wind_limit_exceeded
  // flight_time_limit_exceeded
  // local_position_accuracy_low
  // fd_critical_failure
  // fd_esc_arming_failure
  // fd_imbalanced_prop
  // fd_motor_failure
  return true;
}

void
px4_msgs__msg__FailsafeFlags__fini(px4_msgs__msg__FailsafeFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_mission
  // mode_req_offboard_signal
  // mode_req_home_position
  // mode_req_wind_and_flight_time_compliance
  // mode_req_prevent_arming
  // mode_req_manual_control
  // mode_req_other
  // angular_velocity_invalid
  // attitude_invalid
  // local_altitude_invalid
  // local_position_invalid
  // local_position_invalid_relaxed
  // local_velocity_invalid
  // global_position_invalid
  // auto_mission_missing
  // offboard_control_signal_lost
  // home_position_invalid
  // manual_control_signal_lost
  // gcs_connection_lost
  // battery_warning
  // battery_low_remaining_time
  // battery_unhealthy
  // geofence_breached
  // mission_failure
  // vtol_fixed_wing_system_failure
  // wind_limit_exceeded
  // flight_time_limit_exceeded
  // local_position_accuracy_low
  // fd_critical_failure
  // fd_esc_arming_failure
  // fd_imbalanced_prop
  // fd_motor_failure
}

bool
px4_msgs__msg__FailsafeFlags__are_equal(const px4_msgs__msg__FailsafeFlags * lhs, const px4_msgs__msg__FailsafeFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // mode_req_angular_velocity
  if (lhs->mode_req_angular_velocity != rhs->mode_req_angular_velocity) {
    return false;
  }
  // mode_req_attitude
  if (lhs->mode_req_attitude != rhs->mode_req_attitude) {
    return false;
  }
  // mode_req_local_alt
  if (lhs->mode_req_local_alt != rhs->mode_req_local_alt) {
    return false;
  }
  // mode_req_local_position
  if (lhs->mode_req_local_position != rhs->mode_req_local_position) {
    return false;
  }
  // mode_req_local_position_relaxed
  if (lhs->mode_req_local_position_relaxed != rhs->mode_req_local_position_relaxed) {
    return false;
  }
  // mode_req_global_position
  if (lhs->mode_req_global_position != rhs->mode_req_global_position) {
    return false;
  }
  // mode_req_mission
  if (lhs->mode_req_mission != rhs->mode_req_mission) {
    return false;
  }
  // mode_req_offboard_signal
  if (lhs->mode_req_offboard_signal != rhs->mode_req_offboard_signal) {
    return false;
  }
  // mode_req_home_position
  if (lhs->mode_req_home_position != rhs->mode_req_home_position) {
    return false;
  }
  // mode_req_wind_and_flight_time_compliance
  if (lhs->mode_req_wind_and_flight_time_compliance != rhs->mode_req_wind_and_flight_time_compliance) {
    return false;
  }
  // mode_req_prevent_arming
  if (lhs->mode_req_prevent_arming != rhs->mode_req_prevent_arming) {
    return false;
  }
  // mode_req_manual_control
  if (lhs->mode_req_manual_control != rhs->mode_req_manual_control) {
    return false;
  }
  // mode_req_other
  if (lhs->mode_req_other != rhs->mode_req_other) {
    return false;
  }
  // angular_velocity_invalid
  if (lhs->angular_velocity_invalid != rhs->angular_velocity_invalid) {
    return false;
  }
  // attitude_invalid
  if (lhs->attitude_invalid != rhs->attitude_invalid) {
    return false;
  }
  // local_altitude_invalid
  if (lhs->local_altitude_invalid != rhs->local_altitude_invalid) {
    return false;
  }
  // local_position_invalid
  if (lhs->local_position_invalid != rhs->local_position_invalid) {
    return false;
  }
  // local_position_invalid_relaxed
  if (lhs->local_position_invalid_relaxed != rhs->local_position_invalid_relaxed) {
    return false;
  }
  // local_velocity_invalid
  if (lhs->local_velocity_invalid != rhs->local_velocity_invalid) {
    return false;
  }
  // global_position_invalid
  if (lhs->global_position_invalid != rhs->global_position_invalid) {
    return false;
  }
  // auto_mission_missing
  if (lhs->auto_mission_missing != rhs->auto_mission_missing) {
    return false;
  }
  // offboard_control_signal_lost
  if (lhs->offboard_control_signal_lost != rhs->offboard_control_signal_lost) {
    return false;
  }
  // home_position_invalid
  if (lhs->home_position_invalid != rhs->home_position_invalid) {
    return false;
  }
  // manual_control_signal_lost
  if (lhs->manual_control_signal_lost != rhs->manual_control_signal_lost) {
    return false;
  }
  // gcs_connection_lost
  if (lhs->gcs_connection_lost != rhs->gcs_connection_lost) {
    return false;
  }
  // battery_warning
  if (lhs->battery_warning != rhs->battery_warning) {
    return false;
  }
  // battery_low_remaining_time
  if (lhs->battery_low_remaining_time != rhs->battery_low_remaining_time) {
    return false;
  }
  // battery_unhealthy
  if (lhs->battery_unhealthy != rhs->battery_unhealthy) {
    return false;
  }
  // geofence_breached
  if (lhs->geofence_breached != rhs->geofence_breached) {
    return false;
  }
  // mission_failure
  if (lhs->mission_failure != rhs->mission_failure) {
    return false;
  }
  // vtol_fixed_wing_system_failure
  if (lhs->vtol_fixed_wing_system_failure != rhs->vtol_fixed_wing_system_failure) {
    return false;
  }
  // wind_limit_exceeded
  if (lhs->wind_limit_exceeded != rhs->wind_limit_exceeded) {
    return false;
  }
  // flight_time_limit_exceeded
  if (lhs->flight_time_limit_exceeded != rhs->flight_time_limit_exceeded) {
    return false;
  }
  // local_position_accuracy_low
  if (lhs->local_position_accuracy_low != rhs->local_position_accuracy_low) {
    return false;
  }
  // fd_critical_failure
  if (lhs->fd_critical_failure != rhs->fd_critical_failure) {
    return false;
  }
  // fd_esc_arming_failure
  if (lhs->fd_esc_arming_failure != rhs->fd_esc_arming_failure) {
    return false;
  }
  // fd_imbalanced_prop
  if (lhs->fd_imbalanced_prop != rhs->fd_imbalanced_prop) {
    return false;
  }
  // fd_motor_failure
  if (lhs->fd_motor_failure != rhs->fd_motor_failure) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__FailsafeFlags__copy(
  const px4_msgs__msg__FailsafeFlags * input,
  px4_msgs__msg__FailsafeFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // mode_req_angular_velocity
  output->mode_req_angular_velocity = input->mode_req_angular_velocity;
  // mode_req_attitude
  output->mode_req_attitude = input->mode_req_attitude;
  // mode_req_local_alt
  output->mode_req_local_alt = input->mode_req_local_alt;
  // mode_req_local_position
  output->mode_req_local_position = input->mode_req_local_position;
  // mode_req_local_position_relaxed
  output->mode_req_local_position_relaxed = input->mode_req_local_position_relaxed;
  // mode_req_global_position
  output->mode_req_global_position = input->mode_req_global_position;
  // mode_req_mission
  output->mode_req_mission = input->mode_req_mission;
  // mode_req_offboard_signal
  output->mode_req_offboard_signal = input->mode_req_offboard_signal;
  // mode_req_home_position
  output->mode_req_home_position = input->mode_req_home_position;
  // mode_req_wind_and_flight_time_compliance
  output->mode_req_wind_and_flight_time_compliance = input->mode_req_wind_and_flight_time_compliance;
  // mode_req_prevent_arming
  output->mode_req_prevent_arming = input->mode_req_prevent_arming;
  // mode_req_manual_control
  output->mode_req_manual_control = input->mode_req_manual_control;
  // mode_req_other
  output->mode_req_other = input->mode_req_other;
  // angular_velocity_invalid
  output->angular_velocity_invalid = input->angular_velocity_invalid;
  // attitude_invalid
  output->attitude_invalid = input->attitude_invalid;
  // local_altitude_invalid
  output->local_altitude_invalid = input->local_altitude_invalid;
  // local_position_invalid
  output->local_position_invalid = input->local_position_invalid;
  // local_position_invalid_relaxed
  output->local_position_invalid_relaxed = input->local_position_invalid_relaxed;
  // local_velocity_invalid
  output->local_velocity_invalid = input->local_velocity_invalid;
  // global_position_invalid
  output->global_position_invalid = input->global_position_invalid;
  // auto_mission_missing
  output->auto_mission_missing = input->auto_mission_missing;
  // offboard_control_signal_lost
  output->offboard_control_signal_lost = input->offboard_control_signal_lost;
  // home_position_invalid
  output->home_position_invalid = input->home_position_invalid;
  // manual_control_signal_lost
  output->manual_control_signal_lost = input->manual_control_signal_lost;
  // gcs_connection_lost
  output->gcs_connection_lost = input->gcs_connection_lost;
  // battery_warning
  output->battery_warning = input->battery_warning;
  // battery_low_remaining_time
  output->battery_low_remaining_time = input->battery_low_remaining_time;
  // battery_unhealthy
  output->battery_unhealthy = input->battery_unhealthy;
  // geofence_breached
  output->geofence_breached = input->geofence_breached;
  // mission_failure
  output->mission_failure = input->mission_failure;
  // vtol_fixed_wing_system_failure
  output->vtol_fixed_wing_system_failure = input->vtol_fixed_wing_system_failure;
  // wind_limit_exceeded
  output->wind_limit_exceeded = input->wind_limit_exceeded;
  // flight_time_limit_exceeded
  output->flight_time_limit_exceeded = input->flight_time_limit_exceeded;
  // local_position_accuracy_low
  output->local_position_accuracy_low = input->local_position_accuracy_low;
  // fd_critical_failure
  output->fd_critical_failure = input->fd_critical_failure;
  // fd_esc_arming_failure
  output->fd_esc_arming_failure = input->fd_esc_arming_failure;
  // fd_imbalanced_prop
  output->fd_imbalanced_prop = input->fd_imbalanced_prop;
  // fd_motor_failure
  output->fd_motor_failure = input->fd_motor_failure;
  return true;
}

px4_msgs__msg__FailsafeFlags *
px4_msgs__msg__FailsafeFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailsafeFlags * msg = (px4_msgs__msg__FailsafeFlags *)allocator.allocate(sizeof(px4_msgs__msg__FailsafeFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FailsafeFlags));
  bool success = px4_msgs__msg__FailsafeFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FailsafeFlags__destroy(px4_msgs__msg__FailsafeFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FailsafeFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FailsafeFlags__Sequence__init(px4_msgs__msg__FailsafeFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailsafeFlags * data = NULL;

  if (size) {
    data = (px4_msgs__msg__FailsafeFlags *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FailsafeFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FailsafeFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FailsafeFlags__fini(&data[i - 1]);
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
px4_msgs__msg__FailsafeFlags__Sequence__fini(px4_msgs__msg__FailsafeFlags__Sequence * array)
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
      px4_msgs__msg__FailsafeFlags__fini(&array->data[i]);
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

px4_msgs__msg__FailsafeFlags__Sequence *
px4_msgs__msg__FailsafeFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FailsafeFlags__Sequence * array = (px4_msgs__msg__FailsafeFlags__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FailsafeFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FailsafeFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FailsafeFlags__Sequence__destroy(px4_msgs__msg__FailsafeFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FailsafeFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FailsafeFlags__Sequence__are_equal(const px4_msgs__msg__FailsafeFlags__Sequence * lhs, const px4_msgs__msg__FailsafeFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FailsafeFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FailsafeFlags__Sequence__copy(
  const px4_msgs__msg__FailsafeFlags__Sequence * input,
  px4_msgs__msg__FailsafeFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FailsafeFlags);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FailsafeFlags * data =
      (px4_msgs__msg__FailsafeFlags *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FailsafeFlags__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FailsafeFlags__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FailsafeFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
