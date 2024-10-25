// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/performance_metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensors`
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

bool
gazebo_msgs__msg__PerformanceMetrics__init(gazebo_msgs__msg__PerformanceMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gazebo_msgs__msg__PerformanceMetrics__fini(msg);
    return false;
  }
  // real_time_factor
  // sensors
  if (!gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(&msg->sensors, 0)) {
    gazebo_msgs__msg__PerformanceMetrics__fini(msg);
    return false;
  }
  return true;
}

void
gazebo_msgs__msg__PerformanceMetrics__fini(gazebo_msgs__msg__PerformanceMetrics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // real_time_factor
  // sensors
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(&msg->sensors);
}

bool
gazebo_msgs__msg__PerformanceMetrics__are_equal(const gazebo_msgs__msg__PerformanceMetrics * lhs, const gazebo_msgs__msg__PerformanceMetrics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // real_time_factor
  if (lhs->real_time_factor != rhs->real_time_factor) {
    return false;
  }
  // sensors
  if (!gazebo_msgs__msg__SensorPerformanceMetric__Sequence__are_equal(
      &(lhs->sensors), &(rhs->sensors)))
  {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__PerformanceMetrics__copy(
  const gazebo_msgs__msg__PerformanceMetrics * input,
  gazebo_msgs__msg__PerformanceMetrics * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // real_time_factor
  output->real_time_factor = input->real_time_factor;
  // sensors
  if (!gazebo_msgs__msg__SensorPerformanceMetric__Sequence__copy(
      &(input->sensors), &(output->sensors)))
  {
    return false;
  }
  return true;
}

gazebo_msgs__msg__PerformanceMetrics *
gazebo_msgs__msg__PerformanceMetrics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__PerformanceMetrics * msg = (gazebo_msgs__msg__PerformanceMetrics *)allocator.allocate(sizeof(gazebo_msgs__msg__PerformanceMetrics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__PerformanceMetrics));
  bool success = gazebo_msgs__msg__PerformanceMetrics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__PerformanceMetrics__destroy(gazebo_msgs__msg__PerformanceMetrics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__PerformanceMetrics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__init(gazebo_msgs__msg__PerformanceMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__PerformanceMetrics * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__PerformanceMetrics *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__PerformanceMetrics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__PerformanceMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__PerformanceMetrics__fini(&data[i - 1]);
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
gazebo_msgs__msg__PerformanceMetrics__Sequence__fini(gazebo_msgs__msg__PerformanceMetrics__Sequence * array)
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
      gazebo_msgs__msg__PerformanceMetrics__fini(&array->data[i]);
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

gazebo_msgs__msg__PerformanceMetrics__Sequence *
gazebo_msgs__msg__PerformanceMetrics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__PerformanceMetrics__Sequence * array = (gazebo_msgs__msg__PerformanceMetrics__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__PerformanceMetrics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__PerformanceMetrics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__PerformanceMetrics__Sequence__destroy(gazebo_msgs__msg__PerformanceMetrics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__PerformanceMetrics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__are_equal(const gazebo_msgs__msg__PerformanceMetrics__Sequence * lhs, const gazebo_msgs__msg__PerformanceMetrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__PerformanceMetrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__copy(
  const gazebo_msgs__msg__PerformanceMetrics__Sequence * input,
  gazebo_msgs__msg__PerformanceMetrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__PerformanceMetrics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__PerformanceMetrics * data =
      (gazebo_msgs__msg__PerformanceMetrics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__PerformanceMetrics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__PerformanceMetrics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__PerformanceMetrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
