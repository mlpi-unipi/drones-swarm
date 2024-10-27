// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleAirData.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_air_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleAirData__init(px4_msgs__msg__VehicleAirData * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // baro_device_id
  // baro_alt_meter
  // baro_temp_celcius
  // baro_pressure_pa
  // rho
  // eas2tas
  // calibration_count
  return true;
}

void
px4_msgs__msg__VehicleAirData__fini(px4_msgs__msg__VehicleAirData * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // baro_device_id
  // baro_alt_meter
  // baro_temp_celcius
  // baro_pressure_pa
  // rho
  // eas2tas
  // calibration_count
}

bool
px4_msgs__msg__VehicleAirData__are_equal(const px4_msgs__msg__VehicleAirData * lhs, const px4_msgs__msg__VehicleAirData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // baro_device_id
  if (lhs->baro_device_id != rhs->baro_device_id) {
    return false;
  }
  // baro_alt_meter
  if (lhs->baro_alt_meter != rhs->baro_alt_meter) {
    return false;
  }
  // baro_temp_celcius
  if (lhs->baro_temp_celcius != rhs->baro_temp_celcius) {
    return false;
  }
  // baro_pressure_pa
  if (lhs->baro_pressure_pa != rhs->baro_pressure_pa) {
    return false;
  }
  // rho
  if (lhs->rho != rhs->rho) {
    return false;
  }
  // eas2tas
  if (lhs->eas2tas != rhs->eas2tas) {
    return false;
  }
  // calibration_count
  if (lhs->calibration_count != rhs->calibration_count) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleAirData__copy(
  const px4_msgs__msg__VehicleAirData * input,
  px4_msgs__msg__VehicleAirData * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // baro_device_id
  output->baro_device_id = input->baro_device_id;
  // baro_alt_meter
  output->baro_alt_meter = input->baro_alt_meter;
  // baro_temp_celcius
  output->baro_temp_celcius = input->baro_temp_celcius;
  // baro_pressure_pa
  output->baro_pressure_pa = input->baro_pressure_pa;
  // rho
  output->rho = input->rho;
  // eas2tas
  output->eas2tas = input->eas2tas;
  // calibration_count
  output->calibration_count = input->calibration_count;
  return true;
}

px4_msgs__msg__VehicleAirData *
px4_msgs__msg__VehicleAirData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleAirData * msg = (px4_msgs__msg__VehicleAirData *)allocator.allocate(sizeof(px4_msgs__msg__VehicleAirData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleAirData));
  bool success = px4_msgs__msg__VehicleAirData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleAirData__destroy(px4_msgs__msg__VehicleAirData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleAirData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleAirData__Sequence__init(px4_msgs__msg__VehicleAirData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleAirData * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleAirData *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleAirData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleAirData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleAirData__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleAirData__Sequence__fini(px4_msgs__msg__VehicleAirData__Sequence * array)
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
      px4_msgs__msg__VehicleAirData__fini(&array->data[i]);
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

px4_msgs__msg__VehicleAirData__Sequence *
px4_msgs__msg__VehicleAirData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleAirData__Sequence * array = (px4_msgs__msg__VehicleAirData__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleAirData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleAirData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleAirData__Sequence__destroy(px4_msgs__msg__VehicleAirData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleAirData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleAirData__Sequence__are_equal(const px4_msgs__msg__VehicleAirData__Sequence * lhs, const px4_msgs__msg__VehicleAirData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleAirData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleAirData__Sequence__copy(
  const px4_msgs__msg__VehicleAirData__Sequence * input,
  px4_msgs__msg__VehicleAirData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleAirData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleAirData * data =
      (px4_msgs__msg__VehicleAirData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleAirData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleAirData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleAirData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
