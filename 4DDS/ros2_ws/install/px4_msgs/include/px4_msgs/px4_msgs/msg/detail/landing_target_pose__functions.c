// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/landing_target_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__LandingTargetPose__init(px4_msgs__msg__LandingTargetPose * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // is_static
  // rel_pos_valid
  // rel_vel_valid
  // x_rel
  // y_rel
  // z_rel
  // vx_rel
  // vy_rel
  // cov_x_rel
  // cov_y_rel
  // cov_vx_rel
  // cov_vy_rel
  // abs_pos_valid
  // x_abs
  // y_abs
  // z_abs
  return true;
}

void
px4_msgs__msg__LandingTargetPose__fini(px4_msgs__msg__LandingTargetPose * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // is_static
  // rel_pos_valid
  // rel_vel_valid
  // x_rel
  // y_rel
  // z_rel
  // vx_rel
  // vy_rel
  // cov_x_rel
  // cov_y_rel
  // cov_vx_rel
  // cov_vy_rel
  // abs_pos_valid
  // x_abs
  // y_abs
  // z_abs
}

bool
px4_msgs__msg__LandingTargetPose__are_equal(const px4_msgs__msg__LandingTargetPose * lhs, const px4_msgs__msg__LandingTargetPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // is_static
  if (lhs->is_static != rhs->is_static) {
    return false;
  }
  // rel_pos_valid
  if (lhs->rel_pos_valid != rhs->rel_pos_valid) {
    return false;
  }
  // rel_vel_valid
  if (lhs->rel_vel_valid != rhs->rel_vel_valid) {
    return false;
  }
  // x_rel
  if (lhs->x_rel != rhs->x_rel) {
    return false;
  }
  // y_rel
  if (lhs->y_rel != rhs->y_rel) {
    return false;
  }
  // z_rel
  if (lhs->z_rel != rhs->z_rel) {
    return false;
  }
  // vx_rel
  if (lhs->vx_rel != rhs->vx_rel) {
    return false;
  }
  // vy_rel
  if (lhs->vy_rel != rhs->vy_rel) {
    return false;
  }
  // cov_x_rel
  if (lhs->cov_x_rel != rhs->cov_x_rel) {
    return false;
  }
  // cov_y_rel
  if (lhs->cov_y_rel != rhs->cov_y_rel) {
    return false;
  }
  // cov_vx_rel
  if (lhs->cov_vx_rel != rhs->cov_vx_rel) {
    return false;
  }
  // cov_vy_rel
  if (lhs->cov_vy_rel != rhs->cov_vy_rel) {
    return false;
  }
  // abs_pos_valid
  if (lhs->abs_pos_valid != rhs->abs_pos_valid) {
    return false;
  }
  // x_abs
  if (lhs->x_abs != rhs->x_abs) {
    return false;
  }
  // y_abs
  if (lhs->y_abs != rhs->y_abs) {
    return false;
  }
  // z_abs
  if (lhs->z_abs != rhs->z_abs) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__LandingTargetPose__copy(
  const px4_msgs__msg__LandingTargetPose * input,
  px4_msgs__msg__LandingTargetPose * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // is_static
  output->is_static = input->is_static;
  // rel_pos_valid
  output->rel_pos_valid = input->rel_pos_valid;
  // rel_vel_valid
  output->rel_vel_valid = input->rel_vel_valid;
  // x_rel
  output->x_rel = input->x_rel;
  // y_rel
  output->y_rel = input->y_rel;
  // z_rel
  output->z_rel = input->z_rel;
  // vx_rel
  output->vx_rel = input->vx_rel;
  // vy_rel
  output->vy_rel = input->vy_rel;
  // cov_x_rel
  output->cov_x_rel = input->cov_x_rel;
  // cov_y_rel
  output->cov_y_rel = input->cov_y_rel;
  // cov_vx_rel
  output->cov_vx_rel = input->cov_vx_rel;
  // cov_vy_rel
  output->cov_vy_rel = input->cov_vy_rel;
  // abs_pos_valid
  output->abs_pos_valid = input->abs_pos_valid;
  // x_abs
  output->x_abs = input->x_abs;
  // y_abs
  output->y_abs = input->y_abs;
  // z_abs
  output->z_abs = input->z_abs;
  return true;
}

px4_msgs__msg__LandingTargetPose *
px4_msgs__msg__LandingTargetPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LandingTargetPose * msg = (px4_msgs__msg__LandingTargetPose *)allocator.allocate(sizeof(px4_msgs__msg__LandingTargetPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__LandingTargetPose));
  bool success = px4_msgs__msg__LandingTargetPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__LandingTargetPose__destroy(px4_msgs__msg__LandingTargetPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__LandingTargetPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__LandingTargetPose__Sequence__init(px4_msgs__msg__LandingTargetPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LandingTargetPose * data = NULL;

  if (size) {
    data = (px4_msgs__msg__LandingTargetPose *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__LandingTargetPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__LandingTargetPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__LandingTargetPose__fini(&data[i - 1]);
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
px4_msgs__msg__LandingTargetPose__Sequence__fini(px4_msgs__msg__LandingTargetPose__Sequence * array)
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
      px4_msgs__msg__LandingTargetPose__fini(&array->data[i]);
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

px4_msgs__msg__LandingTargetPose__Sequence *
px4_msgs__msg__LandingTargetPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__LandingTargetPose__Sequence * array = (px4_msgs__msg__LandingTargetPose__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__LandingTargetPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__LandingTargetPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__LandingTargetPose__Sequence__destroy(px4_msgs__msg__LandingTargetPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__LandingTargetPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__LandingTargetPose__Sequence__are_equal(const px4_msgs__msg__LandingTargetPose__Sequence * lhs, const px4_msgs__msg__LandingTargetPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__LandingTargetPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__LandingTargetPose__Sequence__copy(
  const px4_msgs__msg__LandingTargetPose__Sequence * input,
  px4_msgs__msg__LandingTargetPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__LandingTargetPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__LandingTargetPose * data =
      (px4_msgs__msg__LandingTargetPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__LandingTargetPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__LandingTargetPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__LandingTargetPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
