// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_selector_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorSelectorStatus__init(px4_msgs__msg__EstimatorSelectorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // primary_instance
  // instances_available
  // instance_changed_count
  // last_instance_change
  // accel_device_id
  // baro_device_id
  // gyro_device_id
  // mag_device_id
  // combined_test_ratio
  // relative_test_ratio
  // healthy
  // accumulated_gyro_error
  // accumulated_accel_error
  // gyro_fault_detected
  // accel_fault_detected
  return true;
}

void
px4_msgs__msg__EstimatorSelectorStatus__fini(px4_msgs__msg__EstimatorSelectorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // primary_instance
  // instances_available
  // instance_changed_count
  // last_instance_change
  // accel_device_id
  // baro_device_id
  // gyro_device_id
  // mag_device_id
  // combined_test_ratio
  // relative_test_ratio
  // healthy
  // accumulated_gyro_error
  // accumulated_accel_error
  // gyro_fault_detected
  // accel_fault_detected
}

bool
px4_msgs__msg__EstimatorSelectorStatus__are_equal(const px4_msgs__msg__EstimatorSelectorStatus * lhs, const px4_msgs__msg__EstimatorSelectorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // primary_instance
  if (lhs->primary_instance != rhs->primary_instance) {
    return false;
  }
  // instances_available
  if (lhs->instances_available != rhs->instances_available) {
    return false;
  }
  // instance_changed_count
  if (lhs->instance_changed_count != rhs->instance_changed_count) {
    return false;
  }
  // last_instance_change
  if (lhs->last_instance_change != rhs->last_instance_change) {
    return false;
  }
  // accel_device_id
  if (lhs->accel_device_id != rhs->accel_device_id) {
    return false;
  }
  // baro_device_id
  if (lhs->baro_device_id != rhs->baro_device_id) {
    return false;
  }
  // gyro_device_id
  if (lhs->gyro_device_id != rhs->gyro_device_id) {
    return false;
  }
  // mag_device_id
  if (lhs->mag_device_id != rhs->mag_device_id) {
    return false;
  }
  // combined_test_ratio
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->combined_test_ratio[i] != rhs->combined_test_ratio[i]) {
      return false;
    }
  }
  // relative_test_ratio
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->relative_test_ratio[i] != rhs->relative_test_ratio[i]) {
      return false;
    }
  }
  // healthy
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->healthy[i] != rhs->healthy[i]) {
      return false;
    }
  }
  // accumulated_gyro_error
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->accumulated_gyro_error[i] != rhs->accumulated_gyro_error[i]) {
      return false;
    }
  }
  // accumulated_accel_error
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->accumulated_accel_error[i] != rhs->accumulated_accel_error[i]) {
      return false;
    }
  }
  // gyro_fault_detected
  if (lhs->gyro_fault_detected != rhs->gyro_fault_detected) {
    return false;
  }
  // accel_fault_detected
  if (lhs->accel_fault_detected != rhs->accel_fault_detected) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorSelectorStatus__copy(
  const px4_msgs__msg__EstimatorSelectorStatus * input,
  px4_msgs__msg__EstimatorSelectorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // primary_instance
  output->primary_instance = input->primary_instance;
  // instances_available
  output->instances_available = input->instances_available;
  // instance_changed_count
  output->instance_changed_count = input->instance_changed_count;
  // last_instance_change
  output->last_instance_change = input->last_instance_change;
  // accel_device_id
  output->accel_device_id = input->accel_device_id;
  // baro_device_id
  output->baro_device_id = input->baro_device_id;
  // gyro_device_id
  output->gyro_device_id = input->gyro_device_id;
  // mag_device_id
  output->mag_device_id = input->mag_device_id;
  // combined_test_ratio
  for (size_t i = 0; i < 9; ++i) {
    output->combined_test_ratio[i] = input->combined_test_ratio[i];
  }
  // relative_test_ratio
  for (size_t i = 0; i < 9; ++i) {
    output->relative_test_ratio[i] = input->relative_test_ratio[i];
  }
  // healthy
  for (size_t i = 0; i < 9; ++i) {
    output->healthy[i] = input->healthy[i];
  }
  // accumulated_gyro_error
  for (size_t i = 0; i < 4; ++i) {
    output->accumulated_gyro_error[i] = input->accumulated_gyro_error[i];
  }
  // accumulated_accel_error
  for (size_t i = 0; i < 4; ++i) {
    output->accumulated_accel_error[i] = input->accumulated_accel_error[i];
  }
  // gyro_fault_detected
  output->gyro_fault_detected = input->gyro_fault_detected;
  // accel_fault_detected
  output->accel_fault_detected = input->accel_fault_detected;
  return true;
}

px4_msgs__msg__EstimatorSelectorStatus *
px4_msgs__msg__EstimatorSelectorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorSelectorStatus * msg = (px4_msgs__msg__EstimatorSelectorStatus *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorSelectorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorSelectorStatus));
  bool success = px4_msgs__msg__EstimatorSelectorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorSelectorStatus__destroy(px4_msgs__msg__EstimatorSelectorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorSelectorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorSelectorStatus__Sequence__init(px4_msgs__msg__EstimatorSelectorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorSelectorStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorSelectorStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorSelectorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorSelectorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorSelectorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorSelectorStatus__Sequence__fini(px4_msgs__msg__EstimatorSelectorStatus__Sequence * array)
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
      px4_msgs__msg__EstimatorSelectorStatus__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorSelectorStatus__Sequence *
px4_msgs__msg__EstimatorSelectorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorSelectorStatus__Sequence * array = (px4_msgs__msg__EstimatorSelectorStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorSelectorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorSelectorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorSelectorStatus__Sequence__destroy(px4_msgs__msg__EstimatorSelectorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorSelectorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorSelectorStatus__Sequence__are_equal(const px4_msgs__msg__EstimatorSelectorStatus__Sequence * lhs, const px4_msgs__msg__EstimatorSelectorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorSelectorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorSelectorStatus__Sequence__copy(
  const px4_msgs__msg__EstimatorSelectorStatus__Sequence * input,
  px4_msgs__msg__EstimatorSelectorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorSelectorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EstimatorSelectorStatus * data =
      (px4_msgs__msg__EstimatorSelectorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorSelectorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorSelectorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorSelectorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
