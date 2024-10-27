// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
gazebo_msgs__msg__SensorPerformanceMetric__init(gazebo_msgs__msg__SensorPerformanceMetric * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    gazebo_msgs__msg__SensorPerformanceMetric__fini(msg);
    return false;
  }
  // sim_update_rate
  // real_update_rate
  // fps
  return true;
}

void
gazebo_msgs__msg__SensorPerformanceMetric__fini(gazebo_msgs__msg__SensorPerformanceMetric * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // sim_update_rate
  // real_update_rate
  // fps
}

bool
gazebo_msgs__msg__SensorPerformanceMetric__are_equal(const gazebo_msgs__msg__SensorPerformanceMetric * lhs, const gazebo_msgs__msg__SensorPerformanceMetric * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // sim_update_rate
  if (lhs->sim_update_rate != rhs->sim_update_rate) {
    return false;
  }
  // real_update_rate
  if (lhs->real_update_rate != rhs->real_update_rate) {
    return false;
  }
  // fps
  if (lhs->fps != rhs->fps) {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__SensorPerformanceMetric__copy(
  const gazebo_msgs__msg__SensorPerformanceMetric * input,
  gazebo_msgs__msg__SensorPerformanceMetric * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // sim_update_rate
  output->sim_update_rate = input->sim_update_rate;
  // real_update_rate
  output->real_update_rate = input->real_update_rate;
  // fps
  output->fps = input->fps;
  return true;
}

gazebo_msgs__msg__SensorPerformanceMetric *
gazebo_msgs__msg__SensorPerformanceMetric__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__SensorPerformanceMetric * msg = (gazebo_msgs__msg__SensorPerformanceMetric *)allocator.allocate(sizeof(gazebo_msgs__msg__SensorPerformanceMetric), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__SensorPerformanceMetric));
  bool success = gazebo_msgs__msg__SensorPerformanceMetric__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__SensorPerformanceMetric__destroy(gazebo_msgs__msg__SensorPerformanceMetric * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__SensorPerformanceMetric__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__SensorPerformanceMetric * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__SensorPerformanceMetric *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__SensorPerformanceMetric), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__SensorPerformanceMetric__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__SensorPerformanceMetric__fini(&data[i - 1]);
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
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array)
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
      gazebo_msgs__msg__SensorPerformanceMetric__fini(&array->data[i]);
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

gazebo_msgs__msg__SensorPerformanceMetric__Sequence *
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array = (gazebo_msgs__msg__SensorPerformanceMetric__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__SensorPerformanceMetric__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__destroy(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__are_equal(const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * lhs, const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__SensorPerformanceMetric__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__copy(
  const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * input,
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__SensorPerformanceMetric);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__SensorPerformanceMetric * data =
      (gazebo_msgs__msg__SensorPerformanceMetric *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__SensorPerformanceMetric__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__SensorPerformanceMetric__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__SensorPerformanceMetric__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
