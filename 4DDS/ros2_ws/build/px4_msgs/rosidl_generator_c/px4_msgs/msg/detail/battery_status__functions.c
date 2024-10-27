// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__BatteryStatus__init(px4_msgs__msg__BatteryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // connected
  // voltage_v
  // voltage_filtered_v
  // current_a
  // current_filtered_a
  // current_average_a
  // discharged_mah
  // remaining
  // scale
  // time_remaining_s
  // temperature
  // cell_count
  // source
  // priority
  // capacity
  // cycle_count
  // average_time_to_empty
  // serial_number
  // manufacture_date
  // state_of_health
  // max_error
  // id
  // interface_error
  // voltage_cell_v
  // max_cell_voltage_delta
  // is_powering_off
  // is_required
  // faults
  // custom_faults
  // warning
  // mode
  // average_power
  // available_energy
  // full_charge_capacity_wh
  // remaining_capacity_wh
  // design_capacity
  // average_time_to_full
  // over_discharge_count
  // nominal_voltage
  return true;
}

void
px4_msgs__msg__BatteryStatus__fini(px4_msgs__msg__BatteryStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // connected
  // voltage_v
  // voltage_filtered_v
  // current_a
  // current_filtered_a
  // current_average_a
  // discharged_mah
  // remaining
  // scale
  // time_remaining_s
  // temperature
  // cell_count
  // source
  // priority
  // capacity
  // cycle_count
  // average_time_to_empty
  // serial_number
  // manufacture_date
  // state_of_health
  // max_error
  // id
  // interface_error
  // voltage_cell_v
  // max_cell_voltage_delta
  // is_powering_off
  // is_required
  // faults
  // custom_faults
  // warning
  // mode
  // average_power
  // available_energy
  // full_charge_capacity_wh
  // remaining_capacity_wh
  // design_capacity
  // average_time_to_full
  // over_discharge_count
  // nominal_voltage
}

bool
px4_msgs__msg__BatteryStatus__are_equal(const px4_msgs__msg__BatteryStatus * lhs, const px4_msgs__msg__BatteryStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  // voltage_v
  if (lhs->voltage_v != rhs->voltage_v) {
    return false;
  }
  // voltage_filtered_v
  if (lhs->voltage_filtered_v != rhs->voltage_filtered_v) {
    return false;
  }
  // current_a
  if (lhs->current_a != rhs->current_a) {
    return false;
  }
  // current_filtered_a
  if (lhs->current_filtered_a != rhs->current_filtered_a) {
    return false;
  }
  // current_average_a
  if (lhs->current_average_a != rhs->current_average_a) {
    return false;
  }
  // discharged_mah
  if (lhs->discharged_mah != rhs->discharged_mah) {
    return false;
  }
  // remaining
  if (lhs->remaining != rhs->remaining) {
    return false;
  }
  // scale
  if (lhs->scale != rhs->scale) {
    return false;
  }
  // time_remaining_s
  if (lhs->time_remaining_s != rhs->time_remaining_s) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // cell_count
  if (lhs->cell_count != rhs->cell_count) {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // capacity
  if (lhs->capacity != rhs->capacity) {
    return false;
  }
  // cycle_count
  if (lhs->cycle_count != rhs->cycle_count) {
    return false;
  }
  // average_time_to_empty
  if (lhs->average_time_to_empty != rhs->average_time_to_empty) {
    return false;
  }
  // serial_number
  if (lhs->serial_number != rhs->serial_number) {
    return false;
  }
  // manufacture_date
  if (lhs->manufacture_date != rhs->manufacture_date) {
    return false;
  }
  // state_of_health
  if (lhs->state_of_health != rhs->state_of_health) {
    return false;
  }
  // max_error
  if (lhs->max_error != rhs->max_error) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // interface_error
  if (lhs->interface_error != rhs->interface_error) {
    return false;
  }
  // voltage_cell_v
  for (size_t i = 0; i < 14; ++i) {
    if (lhs->voltage_cell_v[i] != rhs->voltage_cell_v[i]) {
      return false;
    }
  }
  // max_cell_voltage_delta
  if (lhs->max_cell_voltage_delta != rhs->max_cell_voltage_delta) {
    return false;
  }
  // is_powering_off
  if (lhs->is_powering_off != rhs->is_powering_off) {
    return false;
  }
  // is_required
  if (lhs->is_required != rhs->is_required) {
    return false;
  }
  // faults
  if (lhs->faults != rhs->faults) {
    return false;
  }
  // custom_faults
  if (lhs->custom_faults != rhs->custom_faults) {
    return false;
  }
  // warning
  if (lhs->warning != rhs->warning) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // average_power
  if (lhs->average_power != rhs->average_power) {
    return false;
  }
  // available_energy
  if (lhs->available_energy != rhs->available_energy) {
    return false;
  }
  // full_charge_capacity_wh
  if (lhs->full_charge_capacity_wh != rhs->full_charge_capacity_wh) {
    return false;
  }
  // remaining_capacity_wh
  if (lhs->remaining_capacity_wh != rhs->remaining_capacity_wh) {
    return false;
  }
  // design_capacity
  if (lhs->design_capacity != rhs->design_capacity) {
    return false;
  }
  // average_time_to_full
  if (lhs->average_time_to_full != rhs->average_time_to_full) {
    return false;
  }
  // over_discharge_count
  if (lhs->over_discharge_count != rhs->over_discharge_count) {
    return false;
  }
  // nominal_voltage
  if (lhs->nominal_voltage != rhs->nominal_voltage) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__BatteryStatus__copy(
  const px4_msgs__msg__BatteryStatus * input,
  px4_msgs__msg__BatteryStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // connected
  output->connected = input->connected;
  // voltage_v
  output->voltage_v = input->voltage_v;
  // voltage_filtered_v
  output->voltage_filtered_v = input->voltage_filtered_v;
  // current_a
  output->current_a = input->current_a;
  // current_filtered_a
  output->current_filtered_a = input->current_filtered_a;
  // current_average_a
  output->current_average_a = input->current_average_a;
  // discharged_mah
  output->discharged_mah = input->discharged_mah;
  // remaining
  output->remaining = input->remaining;
  // scale
  output->scale = input->scale;
  // time_remaining_s
  output->time_remaining_s = input->time_remaining_s;
  // temperature
  output->temperature = input->temperature;
  // cell_count
  output->cell_count = input->cell_count;
  // source
  output->source = input->source;
  // priority
  output->priority = input->priority;
  // capacity
  output->capacity = input->capacity;
  // cycle_count
  output->cycle_count = input->cycle_count;
  // average_time_to_empty
  output->average_time_to_empty = input->average_time_to_empty;
  // serial_number
  output->serial_number = input->serial_number;
  // manufacture_date
  output->manufacture_date = input->manufacture_date;
  // state_of_health
  output->state_of_health = input->state_of_health;
  // max_error
  output->max_error = input->max_error;
  // id
  output->id = input->id;
  // interface_error
  output->interface_error = input->interface_error;
  // voltage_cell_v
  for (size_t i = 0; i < 14; ++i) {
    output->voltage_cell_v[i] = input->voltage_cell_v[i];
  }
  // max_cell_voltage_delta
  output->max_cell_voltage_delta = input->max_cell_voltage_delta;
  // is_powering_off
  output->is_powering_off = input->is_powering_off;
  // is_required
  output->is_required = input->is_required;
  // faults
  output->faults = input->faults;
  // custom_faults
  output->custom_faults = input->custom_faults;
  // warning
  output->warning = input->warning;
  // mode
  output->mode = input->mode;
  // average_power
  output->average_power = input->average_power;
  // available_energy
  output->available_energy = input->available_energy;
  // full_charge_capacity_wh
  output->full_charge_capacity_wh = input->full_charge_capacity_wh;
  // remaining_capacity_wh
  output->remaining_capacity_wh = input->remaining_capacity_wh;
  // design_capacity
  output->design_capacity = input->design_capacity;
  // average_time_to_full
  output->average_time_to_full = input->average_time_to_full;
  // over_discharge_count
  output->over_discharge_count = input->over_discharge_count;
  // nominal_voltage
  output->nominal_voltage = input->nominal_voltage;
  return true;
}

px4_msgs__msg__BatteryStatus *
px4_msgs__msg__BatteryStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__BatteryStatus * msg = (px4_msgs__msg__BatteryStatus *)allocator.allocate(sizeof(px4_msgs__msg__BatteryStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__BatteryStatus));
  bool success = px4_msgs__msg__BatteryStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__BatteryStatus__destroy(px4_msgs__msg__BatteryStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__BatteryStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__BatteryStatus__Sequence__init(px4_msgs__msg__BatteryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__BatteryStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__BatteryStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__BatteryStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__BatteryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__BatteryStatus__fini(&data[i - 1]);
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
px4_msgs__msg__BatteryStatus__Sequence__fini(px4_msgs__msg__BatteryStatus__Sequence * array)
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
      px4_msgs__msg__BatteryStatus__fini(&array->data[i]);
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

px4_msgs__msg__BatteryStatus__Sequence *
px4_msgs__msg__BatteryStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__BatteryStatus__Sequence * array = (px4_msgs__msg__BatteryStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__BatteryStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__BatteryStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__BatteryStatus__Sequence__destroy(px4_msgs__msg__BatteryStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__BatteryStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__BatteryStatus__Sequence__are_equal(const px4_msgs__msg__BatteryStatus__Sequence * lhs, const px4_msgs__msg__BatteryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__BatteryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__BatteryStatus__Sequence__copy(
  const px4_msgs__msg__BatteryStatus__Sequence * input,
  px4_msgs__msg__BatteryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__BatteryStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__BatteryStatus * data =
      (px4_msgs__msg__BatteryStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__BatteryStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__BatteryStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__BatteryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
