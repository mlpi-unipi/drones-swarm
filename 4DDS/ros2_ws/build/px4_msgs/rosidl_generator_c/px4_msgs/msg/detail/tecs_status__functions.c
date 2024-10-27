// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/tecs_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__TecsStatus__init(px4_msgs__msg__TecsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // altitude_sp
  // altitude_reference
  // height_rate_reference
  // height_rate_direct
  // height_rate_setpoint
  // height_rate
  // equivalent_airspeed_sp
  // true_airspeed_sp
  // true_airspeed_filtered
  // true_airspeed_derivative_sp
  // true_airspeed_derivative
  // true_airspeed_derivative_raw
  // total_energy_rate_sp
  // total_energy_rate
  // total_energy_balance_rate_sp
  // total_energy_balance_rate
  // throttle_integ
  // pitch_integ
  // throttle_sp
  // pitch_sp_rad
  // throttle_trim
  // underspeed_ratio
  return true;
}

void
px4_msgs__msg__TecsStatus__fini(px4_msgs__msg__TecsStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // altitude_sp
  // altitude_reference
  // height_rate_reference
  // height_rate_direct
  // height_rate_setpoint
  // height_rate
  // equivalent_airspeed_sp
  // true_airspeed_sp
  // true_airspeed_filtered
  // true_airspeed_derivative_sp
  // true_airspeed_derivative
  // true_airspeed_derivative_raw
  // total_energy_rate_sp
  // total_energy_rate
  // total_energy_balance_rate_sp
  // total_energy_balance_rate
  // throttle_integ
  // pitch_integ
  // throttle_sp
  // pitch_sp_rad
  // throttle_trim
  // underspeed_ratio
}

bool
px4_msgs__msg__TecsStatus__are_equal(const px4_msgs__msg__TecsStatus * lhs, const px4_msgs__msg__TecsStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // altitude_sp
  if (lhs->altitude_sp != rhs->altitude_sp) {
    return false;
  }
  // altitude_reference
  if (lhs->altitude_reference != rhs->altitude_reference) {
    return false;
  }
  // height_rate_reference
  if (lhs->height_rate_reference != rhs->height_rate_reference) {
    return false;
  }
  // height_rate_direct
  if (lhs->height_rate_direct != rhs->height_rate_direct) {
    return false;
  }
  // height_rate_setpoint
  if (lhs->height_rate_setpoint != rhs->height_rate_setpoint) {
    return false;
  }
  // height_rate
  if (lhs->height_rate != rhs->height_rate) {
    return false;
  }
  // equivalent_airspeed_sp
  if (lhs->equivalent_airspeed_sp != rhs->equivalent_airspeed_sp) {
    return false;
  }
  // true_airspeed_sp
  if (lhs->true_airspeed_sp != rhs->true_airspeed_sp) {
    return false;
  }
  // true_airspeed_filtered
  if (lhs->true_airspeed_filtered != rhs->true_airspeed_filtered) {
    return false;
  }
  // true_airspeed_derivative_sp
  if (lhs->true_airspeed_derivative_sp != rhs->true_airspeed_derivative_sp) {
    return false;
  }
  // true_airspeed_derivative
  if (lhs->true_airspeed_derivative != rhs->true_airspeed_derivative) {
    return false;
  }
  // true_airspeed_derivative_raw
  if (lhs->true_airspeed_derivative_raw != rhs->true_airspeed_derivative_raw) {
    return false;
  }
  // total_energy_rate_sp
  if (lhs->total_energy_rate_sp != rhs->total_energy_rate_sp) {
    return false;
  }
  // total_energy_rate
  if (lhs->total_energy_rate != rhs->total_energy_rate) {
    return false;
  }
  // total_energy_balance_rate_sp
  if (lhs->total_energy_balance_rate_sp != rhs->total_energy_balance_rate_sp) {
    return false;
  }
  // total_energy_balance_rate
  if (lhs->total_energy_balance_rate != rhs->total_energy_balance_rate) {
    return false;
  }
  // throttle_integ
  if (lhs->throttle_integ != rhs->throttle_integ) {
    return false;
  }
  // pitch_integ
  if (lhs->pitch_integ != rhs->pitch_integ) {
    return false;
  }
  // throttle_sp
  if (lhs->throttle_sp != rhs->throttle_sp) {
    return false;
  }
  // pitch_sp_rad
  if (lhs->pitch_sp_rad != rhs->pitch_sp_rad) {
    return false;
  }
  // throttle_trim
  if (lhs->throttle_trim != rhs->throttle_trim) {
    return false;
  }
  // underspeed_ratio
  if (lhs->underspeed_ratio != rhs->underspeed_ratio) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__TecsStatus__copy(
  const px4_msgs__msg__TecsStatus * input,
  px4_msgs__msg__TecsStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // altitude_sp
  output->altitude_sp = input->altitude_sp;
  // altitude_reference
  output->altitude_reference = input->altitude_reference;
  // height_rate_reference
  output->height_rate_reference = input->height_rate_reference;
  // height_rate_direct
  output->height_rate_direct = input->height_rate_direct;
  // height_rate_setpoint
  output->height_rate_setpoint = input->height_rate_setpoint;
  // height_rate
  output->height_rate = input->height_rate;
  // equivalent_airspeed_sp
  output->equivalent_airspeed_sp = input->equivalent_airspeed_sp;
  // true_airspeed_sp
  output->true_airspeed_sp = input->true_airspeed_sp;
  // true_airspeed_filtered
  output->true_airspeed_filtered = input->true_airspeed_filtered;
  // true_airspeed_derivative_sp
  output->true_airspeed_derivative_sp = input->true_airspeed_derivative_sp;
  // true_airspeed_derivative
  output->true_airspeed_derivative = input->true_airspeed_derivative;
  // true_airspeed_derivative_raw
  output->true_airspeed_derivative_raw = input->true_airspeed_derivative_raw;
  // total_energy_rate_sp
  output->total_energy_rate_sp = input->total_energy_rate_sp;
  // total_energy_rate
  output->total_energy_rate = input->total_energy_rate;
  // total_energy_balance_rate_sp
  output->total_energy_balance_rate_sp = input->total_energy_balance_rate_sp;
  // total_energy_balance_rate
  output->total_energy_balance_rate = input->total_energy_balance_rate;
  // throttle_integ
  output->throttle_integ = input->throttle_integ;
  // pitch_integ
  output->pitch_integ = input->pitch_integ;
  // throttle_sp
  output->throttle_sp = input->throttle_sp;
  // pitch_sp_rad
  output->pitch_sp_rad = input->pitch_sp_rad;
  // throttle_trim
  output->throttle_trim = input->throttle_trim;
  // underspeed_ratio
  output->underspeed_ratio = input->underspeed_ratio;
  return true;
}

px4_msgs__msg__TecsStatus *
px4_msgs__msg__TecsStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TecsStatus * msg = (px4_msgs__msg__TecsStatus *)allocator.allocate(sizeof(px4_msgs__msg__TecsStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__TecsStatus));
  bool success = px4_msgs__msg__TecsStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__TecsStatus__destroy(px4_msgs__msg__TecsStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__TecsStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__TecsStatus__Sequence__init(px4_msgs__msg__TecsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TecsStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__TecsStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__TecsStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__TecsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__TecsStatus__fini(&data[i - 1]);
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
px4_msgs__msg__TecsStatus__Sequence__fini(px4_msgs__msg__TecsStatus__Sequence * array)
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
      px4_msgs__msg__TecsStatus__fini(&array->data[i]);
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

px4_msgs__msg__TecsStatus__Sequence *
px4_msgs__msg__TecsStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__TecsStatus__Sequence * array = (px4_msgs__msg__TecsStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__TecsStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__TecsStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__TecsStatus__Sequence__destroy(px4_msgs__msg__TecsStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__TecsStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__TecsStatus__Sequence__are_equal(const px4_msgs__msg__TecsStatus__Sequence * lhs, const px4_msgs__msg__TecsStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__TecsStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__TecsStatus__Sequence__copy(
  const px4_msgs__msg__TecsStatus__Sequence * input,
  px4_msgs__msg__TecsStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__TecsStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__TecsStatus * data =
      (px4_msgs__msg__TecsStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__TecsStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__TecsStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__TecsStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
