// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/autotune_attitude_control_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__AutotuneAttitudeControlStatus__init(px4_msgs__msg__AutotuneAttitudeControlStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // coeff
  // coeff_var
  // fitness
  // innov
  // dt_model
  // kc
  // ki
  // kd
  // kff
  // att_p
  // rate_sp
  // u_filt
  // y_filt
  // state
  return true;
}

void
px4_msgs__msg__AutotuneAttitudeControlStatus__fini(px4_msgs__msg__AutotuneAttitudeControlStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // coeff
  // coeff_var
  // fitness
  // innov
  // dt_model
  // kc
  // ki
  // kd
  // kff
  // att_p
  // rate_sp
  // u_filt
  // y_filt
  // state
}

bool
px4_msgs__msg__AutotuneAttitudeControlStatus__are_equal(const px4_msgs__msg__AutotuneAttitudeControlStatus * lhs, const px4_msgs__msg__AutotuneAttitudeControlStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // coeff
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->coeff[i] != rhs->coeff[i]) {
      return false;
    }
  }
  // coeff_var
  for (size_t i = 0; i < 5; ++i) {
    if (lhs->coeff_var[i] != rhs->coeff_var[i]) {
      return false;
    }
  }
  // fitness
  if (lhs->fitness != rhs->fitness) {
    return false;
  }
  // innov
  if (lhs->innov != rhs->innov) {
    return false;
  }
  // dt_model
  if (lhs->dt_model != rhs->dt_model) {
    return false;
  }
  // kc
  if (lhs->kc != rhs->kc) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  // kff
  if (lhs->kff != rhs->kff) {
    return false;
  }
  // att_p
  if (lhs->att_p != rhs->att_p) {
    return false;
  }
  // rate_sp
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rate_sp[i] != rhs->rate_sp[i]) {
      return false;
    }
  }
  // u_filt
  if (lhs->u_filt != rhs->u_filt) {
    return false;
  }
  // y_filt
  if (lhs->y_filt != rhs->y_filt) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__AutotuneAttitudeControlStatus__copy(
  const px4_msgs__msg__AutotuneAttitudeControlStatus * input,
  px4_msgs__msg__AutotuneAttitudeControlStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // coeff
  for (size_t i = 0; i < 5; ++i) {
    output->coeff[i] = input->coeff[i];
  }
  // coeff_var
  for (size_t i = 0; i < 5; ++i) {
    output->coeff_var[i] = input->coeff_var[i];
  }
  // fitness
  output->fitness = input->fitness;
  // innov
  output->innov = input->innov;
  // dt_model
  output->dt_model = input->dt_model;
  // kc
  output->kc = input->kc;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  // kff
  output->kff = input->kff;
  // att_p
  output->att_p = input->att_p;
  // rate_sp
  for (size_t i = 0; i < 3; ++i) {
    output->rate_sp[i] = input->rate_sp[i];
  }
  // u_filt
  output->u_filt = input->u_filt;
  // y_filt
  output->y_filt = input->y_filt;
  // state
  output->state = input->state;
  return true;
}

px4_msgs__msg__AutotuneAttitudeControlStatus *
px4_msgs__msg__AutotuneAttitudeControlStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__AutotuneAttitudeControlStatus * msg = (px4_msgs__msg__AutotuneAttitudeControlStatus *)allocator.allocate(sizeof(px4_msgs__msg__AutotuneAttitudeControlStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__AutotuneAttitudeControlStatus));
  bool success = px4_msgs__msg__AutotuneAttitudeControlStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__AutotuneAttitudeControlStatus__destroy(px4_msgs__msg__AutotuneAttitudeControlStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__AutotuneAttitudeControlStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__init(px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__AutotuneAttitudeControlStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__AutotuneAttitudeControlStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__AutotuneAttitudeControlStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__AutotuneAttitudeControlStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__AutotuneAttitudeControlStatus__fini(&data[i - 1]);
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
px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__fini(px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * array)
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
      px4_msgs__msg__AutotuneAttitudeControlStatus__fini(&array->data[i]);
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

px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence *
px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * array = (px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__destroy(px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__are_equal(const px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * lhs, const px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__AutotuneAttitudeControlStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence__copy(
  const px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * input,
  px4_msgs__msg__AutotuneAttitudeControlStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__AutotuneAttitudeControlStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__AutotuneAttitudeControlStatus * data =
      (px4_msgs__msg__AutotuneAttitudeControlStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__AutotuneAttitudeControlStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__AutotuneAttitudeControlStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__AutotuneAttitudeControlStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
