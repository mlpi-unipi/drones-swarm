// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/px4io_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__Px4ioStatus__init(px4_msgs__msg__Px4ioStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // free_memory_bytes
  // voltage_v
  // rssi_v
  // status_arm_sync
  // status_failsafe
  // status_fmu_initialized
  // status_fmu_ok
  // status_init_ok
  // status_outputs_armed
  // status_raw_pwm
  // status_rc_ok
  // status_rc_dsm
  // status_rc_ppm
  // status_rc_sbus
  // status_rc_st24
  // status_rc_sumd
  // status_safety_button_event
  // alarm_pwm_error
  // alarm_rc_lost
  // arming_failsafe_custom
  // arming_fmu_armed
  // arming_fmu_prearmed
  // arming_force_failsafe
  // arming_io_arm_ok
  // arming_lockdown
  // arming_termination_failsafe
  // pwm
  // pwm_disarmed
  // pwm_failsafe
  // pwm_rate_hz
  // raw_inputs
  return true;
}

void
px4_msgs__msg__Px4ioStatus__fini(px4_msgs__msg__Px4ioStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // free_memory_bytes
  // voltage_v
  // rssi_v
  // status_arm_sync
  // status_failsafe
  // status_fmu_initialized
  // status_fmu_ok
  // status_init_ok
  // status_outputs_armed
  // status_raw_pwm
  // status_rc_ok
  // status_rc_dsm
  // status_rc_ppm
  // status_rc_sbus
  // status_rc_st24
  // status_rc_sumd
  // status_safety_button_event
  // alarm_pwm_error
  // alarm_rc_lost
  // arming_failsafe_custom
  // arming_fmu_armed
  // arming_fmu_prearmed
  // arming_force_failsafe
  // arming_io_arm_ok
  // arming_lockdown
  // arming_termination_failsafe
  // pwm
  // pwm_disarmed
  // pwm_failsafe
  // pwm_rate_hz
  // raw_inputs
}

bool
px4_msgs__msg__Px4ioStatus__are_equal(const px4_msgs__msg__Px4ioStatus * lhs, const px4_msgs__msg__Px4ioStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // free_memory_bytes
  if (lhs->free_memory_bytes != rhs->free_memory_bytes) {
    return false;
  }
  // voltage_v
  if (lhs->voltage_v != rhs->voltage_v) {
    return false;
  }
  // rssi_v
  if (lhs->rssi_v != rhs->rssi_v) {
    return false;
  }
  // status_arm_sync
  if (lhs->status_arm_sync != rhs->status_arm_sync) {
    return false;
  }
  // status_failsafe
  if (lhs->status_failsafe != rhs->status_failsafe) {
    return false;
  }
  // status_fmu_initialized
  if (lhs->status_fmu_initialized != rhs->status_fmu_initialized) {
    return false;
  }
  // status_fmu_ok
  if (lhs->status_fmu_ok != rhs->status_fmu_ok) {
    return false;
  }
  // status_init_ok
  if (lhs->status_init_ok != rhs->status_init_ok) {
    return false;
  }
  // status_outputs_armed
  if (lhs->status_outputs_armed != rhs->status_outputs_armed) {
    return false;
  }
  // status_raw_pwm
  if (lhs->status_raw_pwm != rhs->status_raw_pwm) {
    return false;
  }
  // status_rc_ok
  if (lhs->status_rc_ok != rhs->status_rc_ok) {
    return false;
  }
  // status_rc_dsm
  if (lhs->status_rc_dsm != rhs->status_rc_dsm) {
    return false;
  }
  // status_rc_ppm
  if (lhs->status_rc_ppm != rhs->status_rc_ppm) {
    return false;
  }
  // status_rc_sbus
  if (lhs->status_rc_sbus != rhs->status_rc_sbus) {
    return false;
  }
  // status_rc_st24
  if (lhs->status_rc_st24 != rhs->status_rc_st24) {
    return false;
  }
  // status_rc_sumd
  if (lhs->status_rc_sumd != rhs->status_rc_sumd) {
    return false;
  }
  // status_safety_button_event
  if (lhs->status_safety_button_event != rhs->status_safety_button_event) {
    return false;
  }
  // alarm_pwm_error
  if (lhs->alarm_pwm_error != rhs->alarm_pwm_error) {
    return false;
  }
  // alarm_rc_lost
  if (lhs->alarm_rc_lost != rhs->alarm_rc_lost) {
    return false;
  }
  // arming_failsafe_custom
  if (lhs->arming_failsafe_custom != rhs->arming_failsafe_custom) {
    return false;
  }
  // arming_fmu_armed
  if (lhs->arming_fmu_armed != rhs->arming_fmu_armed) {
    return false;
  }
  // arming_fmu_prearmed
  if (lhs->arming_fmu_prearmed != rhs->arming_fmu_prearmed) {
    return false;
  }
  // arming_force_failsafe
  if (lhs->arming_force_failsafe != rhs->arming_force_failsafe) {
    return false;
  }
  // arming_io_arm_ok
  if (lhs->arming_io_arm_ok != rhs->arming_io_arm_ok) {
    return false;
  }
  // arming_lockdown
  if (lhs->arming_lockdown != rhs->arming_lockdown) {
    return false;
  }
  // arming_termination_failsafe
  if (lhs->arming_termination_failsafe != rhs->arming_termination_failsafe) {
    return false;
  }
  // pwm
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->pwm[i] != rhs->pwm[i]) {
      return false;
    }
  }
  // pwm_disarmed
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->pwm_disarmed[i] != rhs->pwm_disarmed[i]) {
      return false;
    }
  }
  // pwm_failsafe
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->pwm_failsafe[i] != rhs->pwm_failsafe[i]) {
      return false;
    }
  }
  // pwm_rate_hz
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->pwm_rate_hz[i] != rhs->pwm_rate_hz[i]) {
      return false;
    }
  }
  // raw_inputs
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->raw_inputs[i] != rhs->raw_inputs[i]) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Px4ioStatus__copy(
  const px4_msgs__msg__Px4ioStatus * input,
  px4_msgs__msg__Px4ioStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // free_memory_bytes
  output->free_memory_bytes = input->free_memory_bytes;
  // voltage_v
  output->voltage_v = input->voltage_v;
  // rssi_v
  output->rssi_v = input->rssi_v;
  // status_arm_sync
  output->status_arm_sync = input->status_arm_sync;
  // status_failsafe
  output->status_failsafe = input->status_failsafe;
  // status_fmu_initialized
  output->status_fmu_initialized = input->status_fmu_initialized;
  // status_fmu_ok
  output->status_fmu_ok = input->status_fmu_ok;
  // status_init_ok
  output->status_init_ok = input->status_init_ok;
  // status_outputs_armed
  output->status_outputs_armed = input->status_outputs_armed;
  // status_raw_pwm
  output->status_raw_pwm = input->status_raw_pwm;
  // status_rc_ok
  output->status_rc_ok = input->status_rc_ok;
  // status_rc_dsm
  output->status_rc_dsm = input->status_rc_dsm;
  // status_rc_ppm
  output->status_rc_ppm = input->status_rc_ppm;
  // status_rc_sbus
  output->status_rc_sbus = input->status_rc_sbus;
  // status_rc_st24
  output->status_rc_st24 = input->status_rc_st24;
  // status_rc_sumd
  output->status_rc_sumd = input->status_rc_sumd;
  // status_safety_button_event
  output->status_safety_button_event = input->status_safety_button_event;
  // alarm_pwm_error
  output->alarm_pwm_error = input->alarm_pwm_error;
  // alarm_rc_lost
  output->alarm_rc_lost = input->alarm_rc_lost;
  // arming_failsafe_custom
  output->arming_failsafe_custom = input->arming_failsafe_custom;
  // arming_fmu_armed
  output->arming_fmu_armed = input->arming_fmu_armed;
  // arming_fmu_prearmed
  output->arming_fmu_prearmed = input->arming_fmu_prearmed;
  // arming_force_failsafe
  output->arming_force_failsafe = input->arming_force_failsafe;
  // arming_io_arm_ok
  output->arming_io_arm_ok = input->arming_io_arm_ok;
  // arming_lockdown
  output->arming_lockdown = input->arming_lockdown;
  // arming_termination_failsafe
  output->arming_termination_failsafe = input->arming_termination_failsafe;
  // pwm
  for (size_t i = 0; i < 8; ++i) {
    output->pwm[i] = input->pwm[i];
  }
  // pwm_disarmed
  for (size_t i = 0; i < 8; ++i) {
    output->pwm_disarmed[i] = input->pwm_disarmed[i];
  }
  // pwm_failsafe
  for (size_t i = 0; i < 8; ++i) {
    output->pwm_failsafe[i] = input->pwm_failsafe[i];
  }
  // pwm_rate_hz
  for (size_t i = 0; i < 8; ++i) {
    output->pwm_rate_hz[i] = input->pwm_rate_hz[i];
  }
  // raw_inputs
  for (size_t i = 0; i < 18; ++i) {
    output->raw_inputs[i] = input->raw_inputs[i];
  }
  return true;
}

px4_msgs__msg__Px4ioStatus *
px4_msgs__msg__Px4ioStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Px4ioStatus * msg = (px4_msgs__msg__Px4ioStatus *)allocator.allocate(sizeof(px4_msgs__msg__Px4ioStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Px4ioStatus));
  bool success = px4_msgs__msg__Px4ioStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Px4ioStatus__destroy(px4_msgs__msg__Px4ioStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__Px4ioStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__Px4ioStatus__Sequence__init(px4_msgs__msg__Px4ioStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Px4ioStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__Px4ioStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__Px4ioStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Px4ioStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Px4ioStatus__fini(&data[i - 1]);
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
px4_msgs__msg__Px4ioStatus__Sequence__fini(px4_msgs__msg__Px4ioStatus__Sequence * array)
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
      px4_msgs__msg__Px4ioStatus__fini(&array->data[i]);
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

px4_msgs__msg__Px4ioStatus__Sequence *
px4_msgs__msg__Px4ioStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Px4ioStatus__Sequence * array = (px4_msgs__msg__Px4ioStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__Px4ioStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Px4ioStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Px4ioStatus__Sequence__destroy(px4_msgs__msg__Px4ioStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__Px4ioStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__Px4ioStatus__Sequence__are_equal(const px4_msgs__msg__Px4ioStatus__Sequence * lhs, const px4_msgs__msg__Px4ioStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__Px4ioStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Px4ioStatus__Sequence__copy(
  const px4_msgs__msg__Px4ioStatus__Sequence * input,
  px4_msgs__msg__Px4ioStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__Px4ioStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__Px4ioStatus * data =
      (px4_msgs__msg__Px4ioStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__Px4ioStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__Px4ioStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__Px4ioStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
