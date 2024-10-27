// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/internal_combustion_engine_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__InternalCombustionEngineStatus__init(px4_msgs__msg__InternalCombustionEngineStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // state
  // flags
  // engine_load_percent
  // engine_speed_rpm
  // spark_dwell_time_ms
  // atmospheric_pressure_kpa
  // intake_manifold_pressure_kpa
  // intake_manifold_temperature
  // coolant_temperature
  // oil_pressure
  // oil_temperature
  // fuel_pressure
  // fuel_consumption_rate_cm3pm
  // estimated_consumed_fuel_volume_cm3
  // throttle_position_percent
  // ecu_index
  // spark_plug_usage
  // ignition_timing_deg
  // injection_time_ms
  // cylinder_head_temperature
  // exhaust_gas_temperature
  // lambda_coefficient
  return true;
}

void
px4_msgs__msg__InternalCombustionEngineStatus__fini(px4_msgs__msg__InternalCombustionEngineStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // state
  // flags
  // engine_load_percent
  // engine_speed_rpm
  // spark_dwell_time_ms
  // atmospheric_pressure_kpa
  // intake_manifold_pressure_kpa
  // intake_manifold_temperature
  // coolant_temperature
  // oil_pressure
  // oil_temperature
  // fuel_pressure
  // fuel_consumption_rate_cm3pm
  // estimated_consumed_fuel_volume_cm3
  // throttle_position_percent
  // ecu_index
  // spark_plug_usage
  // ignition_timing_deg
  // injection_time_ms
  // cylinder_head_temperature
  // exhaust_gas_temperature
  // lambda_coefficient
}

bool
px4_msgs__msg__InternalCombustionEngineStatus__are_equal(const px4_msgs__msg__InternalCombustionEngineStatus * lhs, const px4_msgs__msg__InternalCombustionEngineStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // engine_load_percent
  if (lhs->engine_load_percent != rhs->engine_load_percent) {
    return false;
  }
  // engine_speed_rpm
  if (lhs->engine_speed_rpm != rhs->engine_speed_rpm) {
    return false;
  }
  // spark_dwell_time_ms
  if (lhs->spark_dwell_time_ms != rhs->spark_dwell_time_ms) {
    return false;
  }
  // atmospheric_pressure_kpa
  if (lhs->atmospheric_pressure_kpa != rhs->atmospheric_pressure_kpa) {
    return false;
  }
  // intake_manifold_pressure_kpa
  if (lhs->intake_manifold_pressure_kpa != rhs->intake_manifold_pressure_kpa) {
    return false;
  }
  // intake_manifold_temperature
  if (lhs->intake_manifold_temperature != rhs->intake_manifold_temperature) {
    return false;
  }
  // coolant_temperature
  if (lhs->coolant_temperature != rhs->coolant_temperature) {
    return false;
  }
  // oil_pressure
  if (lhs->oil_pressure != rhs->oil_pressure) {
    return false;
  }
  // oil_temperature
  if (lhs->oil_temperature != rhs->oil_temperature) {
    return false;
  }
  // fuel_pressure
  if (lhs->fuel_pressure != rhs->fuel_pressure) {
    return false;
  }
  // fuel_consumption_rate_cm3pm
  if (lhs->fuel_consumption_rate_cm3pm != rhs->fuel_consumption_rate_cm3pm) {
    return false;
  }
  // estimated_consumed_fuel_volume_cm3
  if (lhs->estimated_consumed_fuel_volume_cm3 != rhs->estimated_consumed_fuel_volume_cm3) {
    return false;
  }
  // throttle_position_percent
  if (lhs->throttle_position_percent != rhs->throttle_position_percent) {
    return false;
  }
  // ecu_index
  if (lhs->ecu_index != rhs->ecu_index) {
    return false;
  }
  // spark_plug_usage
  if (lhs->spark_plug_usage != rhs->spark_plug_usage) {
    return false;
  }
  // ignition_timing_deg
  if (lhs->ignition_timing_deg != rhs->ignition_timing_deg) {
    return false;
  }
  // injection_time_ms
  if (lhs->injection_time_ms != rhs->injection_time_ms) {
    return false;
  }
  // cylinder_head_temperature
  if (lhs->cylinder_head_temperature != rhs->cylinder_head_temperature) {
    return false;
  }
  // exhaust_gas_temperature
  if (lhs->exhaust_gas_temperature != rhs->exhaust_gas_temperature) {
    return false;
  }
  // lambda_coefficient
  if (lhs->lambda_coefficient != rhs->lambda_coefficient) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__InternalCombustionEngineStatus__copy(
  const px4_msgs__msg__InternalCombustionEngineStatus * input,
  px4_msgs__msg__InternalCombustionEngineStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // state
  output->state = input->state;
  // flags
  output->flags = input->flags;
  // engine_load_percent
  output->engine_load_percent = input->engine_load_percent;
  // engine_speed_rpm
  output->engine_speed_rpm = input->engine_speed_rpm;
  // spark_dwell_time_ms
  output->spark_dwell_time_ms = input->spark_dwell_time_ms;
  // atmospheric_pressure_kpa
  output->atmospheric_pressure_kpa = input->atmospheric_pressure_kpa;
  // intake_manifold_pressure_kpa
  output->intake_manifold_pressure_kpa = input->intake_manifold_pressure_kpa;
  // intake_manifold_temperature
  output->intake_manifold_temperature = input->intake_manifold_temperature;
  // coolant_temperature
  output->coolant_temperature = input->coolant_temperature;
  // oil_pressure
  output->oil_pressure = input->oil_pressure;
  // oil_temperature
  output->oil_temperature = input->oil_temperature;
  // fuel_pressure
  output->fuel_pressure = input->fuel_pressure;
  // fuel_consumption_rate_cm3pm
  output->fuel_consumption_rate_cm3pm = input->fuel_consumption_rate_cm3pm;
  // estimated_consumed_fuel_volume_cm3
  output->estimated_consumed_fuel_volume_cm3 = input->estimated_consumed_fuel_volume_cm3;
  // throttle_position_percent
  output->throttle_position_percent = input->throttle_position_percent;
  // ecu_index
  output->ecu_index = input->ecu_index;
  // spark_plug_usage
  output->spark_plug_usage = input->spark_plug_usage;
  // ignition_timing_deg
  output->ignition_timing_deg = input->ignition_timing_deg;
  // injection_time_ms
  output->injection_time_ms = input->injection_time_ms;
  // cylinder_head_temperature
  output->cylinder_head_temperature = input->cylinder_head_temperature;
  // exhaust_gas_temperature
  output->exhaust_gas_temperature = input->exhaust_gas_temperature;
  // lambda_coefficient
  output->lambda_coefficient = input->lambda_coefficient;
  return true;
}

px4_msgs__msg__InternalCombustionEngineStatus *
px4_msgs__msg__InternalCombustionEngineStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InternalCombustionEngineStatus * msg = (px4_msgs__msg__InternalCombustionEngineStatus *)allocator.allocate(sizeof(px4_msgs__msg__InternalCombustionEngineStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__InternalCombustionEngineStatus));
  bool success = px4_msgs__msg__InternalCombustionEngineStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__InternalCombustionEngineStatus__destroy(px4_msgs__msg__InternalCombustionEngineStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__InternalCombustionEngineStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__init(px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InternalCombustionEngineStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__InternalCombustionEngineStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__InternalCombustionEngineStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__InternalCombustionEngineStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__InternalCombustionEngineStatus__fini(&data[i - 1]);
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
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__fini(px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array)
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
      px4_msgs__msg__InternalCombustionEngineStatus__fini(&array->data[i]);
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

px4_msgs__msg__InternalCombustionEngineStatus__Sequence *
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array = (px4_msgs__msg__InternalCombustionEngineStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__InternalCombustionEngineStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__InternalCombustionEngineStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__destroy(px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__InternalCombustionEngineStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__are_equal(const px4_msgs__msg__InternalCombustionEngineStatus__Sequence * lhs, const px4_msgs__msg__InternalCombustionEngineStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__InternalCombustionEngineStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__copy(
  const px4_msgs__msg__InternalCombustionEngineStatus__Sequence * input,
  px4_msgs__msg__InternalCombustionEngineStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__InternalCombustionEngineStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__InternalCombustionEngineStatus * data =
      (px4_msgs__msg__InternalCombustionEngineStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__InternalCombustionEngineStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__InternalCombustionEngineStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__InternalCombustionEngineStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
