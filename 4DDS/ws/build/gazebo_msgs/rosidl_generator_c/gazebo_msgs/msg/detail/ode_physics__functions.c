// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_physics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gazebo_msgs__msg__ODEPhysics__init(gazebo_msgs__msg__ODEPhysics * msg)
{
  if (!msg) {
    return false;
  }
  // auto_disable_bodies
  // sor_pgs_precon_iters
  // sor_pgs_iters
  // sor_pgs_w
  // sor_pgs_rms_error_tol
  // contact_surface_layer
  // contact_max_correcting_vel
  // cfm
  // erp
  // max_contacts
  return true;
}

void
gazebo_msgs__msg__ODEPhysics__fini(gazebo_msgs__msg__ODEPhysics * msg)
{
  if (!msg) {
    return;
  }
  // auto_disable_bodies
  // sor_pgs_precon_iters
  // sor_pgs_iters
  // sor_pgs_w
  // sor_pgs_rms_error_tol
  // contact_surface_layer
  // contact_max_correcting_vel
  // cfm
  // erp
  // max_contacts
}

bool
gazebo_msgs__msg__ODEPhysics__are_equal(const gazebo_msgs__msg__ODEPhysics * lhs, const gazebo_msgs__msg__ODEPhysics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // auto_disable_bodies
  if (lhs->auto_disable_bodies != rhs->auto_disable_bodies) {
    return false;
  }
  // sor_pgs_precon_iters
  if (lhs->sor_pgs_precon_iters != rhs->sor_pgs_precon_iters) {
    return false;
  }
  // sor_pgs_iters
  if (lhs->sor_pgs_iters != rhs->sor_pgs_iters) {
    return false;
  }
  // sor_pgs_w
  if (lhs->sor_pgs_w != rhs->sor_pgs_w) {
    return false;
  }
  // sor_pgs_rms_error_tol
  if (lhs->sor_pgs_rms_error_tol != rhs->sor_pgs_rms_error_tol) {
    return false;
  }
  // contact_surface_layer
  if (lhs->contact_surface_layer != rhs->contact_surface_layer) {
    return false;
  }
  // contact_max_correcting_vel
  if (lhs->contact_max_correcting_vel != rhs->contact_max_correcting_vel) {
    return false;
  }
  // cfm
  if (lhs->cfm != rhs->cfm) {
    return false;
  }
  // erp
  if (lhs->erp != rhs->erp) {
    return false;
  }
  // max_contacts
  if (lhs->max_contacts != rhs->max_contacts) {
    return false;
  }
  return true;
}

bool
gazebo_msgs__msg__ODEPhysics__copy(
  const gazebo_msgs__msg__ODEPhysics * input,
  gazebo_msgs__msg__ODEPhysics * output)
{
  if (!input || !output) {
    return false;
  }
  // auto_disable_bodies
  output->auto_disable_bodies = input->auto_disable_bodies;
  // sor_pgs_precon_iters
  output->sor_pgs_precon_iters = input->sor_pgs_precon_iters;
  // sor_pgs_iters
  output->sor_pgs_iters = input->sor_pgs_iters;
  // sor_pgs_w
  output->sor_pgs_w = input->sor_pgs_w;
  // sor_pgs_rms_error_tol
  output->sor_pgs_rms_error_tol = input->sor_pgs_rms_error_tol;
  // contact_surface_layer
  output->contact_surface_layer = input->contact_surface_layer;
  // contact_max_correcting_vel
  output->contact_max_correcting_vel = input->contact_max_correcting_vel;
  // cfm
  output->cfm = input->cfm;
  // erp
  output->erp = input->erp;
  // max_contacts
  output->max_contacts = input->max_contacts;
  return true;
}

gazebo_msgs__msg__ODEPhysics *
gazebo_msgs__msg__ODEPhysics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ODEPhysics * msg = (gazebo_msgs__msg__ODEPhysics *)allocator.allocate(sizeof(gazebo_msgs__msg__ODEPhysics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gazebo_msgs__msg__ODEPhysics));
  bool success = gazebo_msgs__msg__ODEPhysics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gazebo_msgs__msg__ODEPhysics__destroy(gazebo_msgs__msg__ODEPhysics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gazebo_msgs__msg__ODEPhysics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gazebo_msgs__msg__ODEPhysics__Sequence__init(gazebo_msgs__msg__ODEPhysics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ODEPhysics * data = NULL;

  if (size) {
    data = (gazebo_msgs__msg__ODEPhysics *)allocator.zero_allocate(size, sizeof(gazebo_msgs__msg__ODEPhysics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gazebo_msgs__msg__ODEPhysics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gazebo_msgs__msg__ODEPhysics__fini(&data[i - 1]);
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
gazebo_msgs__msg__ODEPhysics__Sequence__fini(gazebo_msgs__msg__ODEPhysics__Sequence * array)
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
      gazebo_msgs__msg__ODEPhysics__fini(&array->data[i]);
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

gazebo_msgs__msg__ODEPhysics__Sequence *
gazebo_msgs__msg__ODEPhysics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gazebo_msgs__msg__ODEPhysics__Sequence * array = (gazebo_msgs__msg__ODEPhysics__Sequence *)allocator.allocate(sizeof(gazebo_msgs__msg__ODEPhysics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gazebo_msgs__msg__ODEPhysics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gazebo_msgs__msg__ODEPhysics__Sequence__destroy(gazebo_msgs__msg__ODEPhysics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gazebo_msgs__msg__ODEPhysics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gazebo_msgs__msg__ODEPhysics__Sequence__are_equal(const gazebo_msgs__msg__ODEPhysics__Sequence * lhs, const gazebo_msgs__msg__ODEPhysics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gazebo_msgs__msg__ODEPhysics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gazebo_msgs__msg__ODEPhysics__Sequence__copy(
  const gazebo_msgs__msg__ODEPhysics__Sequence * input,
  gazebo_msgs__msg__ODEPhysics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gazebo_msgs__msg__ODEPhysics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gazebo_msgs__msg__ODEPhysics * data =
      (gazebo_msgs__msg__ODEPhysics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gazebo_msgs__msg__ODEPhysics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gazebo_msgs__msg__ODEPhysics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gazebo_msgs__msg__ODEPhysics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
