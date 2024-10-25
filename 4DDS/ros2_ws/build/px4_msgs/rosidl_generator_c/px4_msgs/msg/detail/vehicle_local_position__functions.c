// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleLocalPosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_local_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleLocalPosition__init(px4_msgs__msg__VehicleLocalPosition * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // xy_valid
  // z_valid
  // v_xy_valid
  // v_z_valid
  // x
  // y
  // z
  // delta_xy
  // xy_reset_counter
  // delta_z
  // z_reset_counter
  // vx
  // vy
  // vz
  // z_deriv
  // delta_vxy
  // vxy_reset_counter
  // delta_vz
  // vz_reset_counter
  // ax
  // ay
  // az
  // heading
  // heading_var
  // unaided_heading
  // delta_heading
  // heading_reset_counter
  // heading_good_for_control
  // tilt_var
  // xy_global
  // z_global
  // ref_timestamp
  // ref_lat
  // ref_lon
  // ref_alt
  // dist_bottom
  // dist_bottom_valid
  // dist_bottom_sensor_bitfield
  // eph
  // epv
  // evh
  // evv
  // dead_reckoning
  // vxy_max
  // vz_max
  // hagl_min
  // hagl_max
  return true;
}

void
px4_msgs__msg__VehicleLocalPosition__fini(px4_msgs__msg__VehicleLocalPosition * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // xy_valid
  // z_valid
  // v_xy_valid
  // v_z_valid
  // x
  // y
  // z
  // delta_xy
  // xy_reset_counter
  // delta_z
  // z_reset_counter
  // vx
  // vy
  // vz
  // z_deriv
  // delta_vxy
  // vxy_reset_counter
  // delta_vz
  // vz_reset_counter
  // ax
  // ay
  // az
  // heading
  // heading_var
  // unaided_heading
  // delta_heading
  // heading_reset_counter
  // heading_good_for_control
  // tilt_var
  // xy_global
  // z_global
  // ref_timestamp
  // ref_lat
  // ref_lon
  // ref_alt
  // dist_bottom
  // dist_bottom_valid
  // dist_bottom_sensor_bitfield
  // eph
  // epv
  // evh
  // evv
  // dead_reckoning
  // vxy_max
  // vz_max
  // hagl_min
  // hagl_max
}

bool
px4_msgs__msg__VehicleLocalPosition__are_equal(const px4_msgs__msg__VehicleLocalPosition * lhs, const px4_msgs__msg__VehicleLocalPosition * rhs)
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
  // xy_valid
  if (lhs->xy_valid != rhs->xy_valid) {
    return false;
  }
  // z_valid
  if (lhs->z_valid != rhs->z_valid) {
    return false;
  }
  // v_xy_valid
  if (lhs->v_xy_valid != rhs->v_xy_valid) {
    return false;
  }
  // v_z_valid
  if (lhs->v_z_valid != rhs->v_z_valid) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // delta_xy
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->delta_xy[i] != rhs->delta_xy[i]) {
      return false;
    }
  }
  // xy_reset_counter
  if (lhs->xy_reset_counter != rhs->xy_reset_counter) {
    return false;
  }
  // delta_z
  if (lhs->delta_z != rhs->delta_z) {
    return false;
  }
  // z_reset_counter
  if (lhs->z_reset_counter != rhs->z_reset_counter) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // z_deriv
  if (lhs->z_deriv != rhs->z_deriv) {
    return false;
  }
  // delta_vxy
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->delta_vxy[i] != rhs->delta_vxy[i]) {
      return false;
    }
  }
  // vxy_reset_counter
  if (lhs->vxy_reset_counter != rhs->vxy_reset_counter) {
    return false;
  }
  // delta_vz
  if (lhs->delta_vz != rhs->delta_vz) {
    return false;
  }
  // vz_reset_counter
  if (lhs->vz_reset_counter != rhs->vz_reset_counter) {
    return false;
  }
  // ax
  if (lhs->ax != rhs->ax) {
    return false;
  }
  // ay
  if (lhs->ay != rhs->ay) {
    return false;
  }
  // az
  if (lhs->az != rhs->az) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_var
  if (lhs->heading_var != rhs->heading_var) {
    return false;
  }
  // unaided_heading
  if (lhs->unaided_heading != rhs->unaided_heading) {
    return false;
  }
  // delta_heading
  if (lhs->delta_heading != rhs->delta_heading) {
    return false;
  }
  // heading_reset_counter
  if (lhs->heading_reset_counter != rhs->heading_reset_counter) {
    return false;
  }
  // heading_good_for_control
  if (lhs->heading_good_for_control != rhs->heading_good_for_control) {
    return false;
  }
  // tilt_var
  if (lhs->tilt_var != rhs->tilt_var) {
    return false;
  }
  // xy_global
  if (lhs->xy_global != rhs->xy_global) {
    return false;
  }
  // z_global
  if (lhs->z_global != rhs->z_global) {
    return false;
  }
  // ref_timestamp
  if (lhs->ref_timestamp != rhs->ref_timestamp) {
    return false;
  }
  // ref_lat
  if (lhs->ref_lat != rhs->ref_lat) {
    return false;
  }
  // ref_lon
  if (lhs->ref_lon != rhs->ref_lon) {
    return false;
  }
  // ref_alt
  if (lhs->ref_alt != rhs->ref_alt) {
    return false;
  }
  // dist_bottom
  if (lhs->dist_bottom != rhs->dist_bottom) {
    return false;
  }
  // dist_bottom_valid
  if (lhs->dist_bottom_valid != rhs->dist_bottom_valid) {
    return false;
  }
  // dist_bottom_sensor_bitfield
  if (lhs->dist_bottom_sensor_bitfield != rhs->dist_bottom_sensor_bitfield) {
    return false;
  }
  // eph
  if (lhs->eph != rhs->eph) {
    return false;
  }
  // epv
  if (lhs->epv != rhs->epv) {
    return false;
  }
  // evh
  if (lhs->evh != rhs->evh) {
    return false;
  }
  // evv
  if (lhs->evv != rhs->evv) {
    return false;
  }
  // dead_reckoning
  if (lhs->dead_reckoning != rhs->dead_reckoning) {
    return false;
  }
  // vxy_max
  if (lhs->vxy_max != rhs->vxy_max) {
    return false;
  }
  // vz_max
  if (lhs->vz_max != rhs->vz_max) {
    return false;
  }
  // hagl_min
  if (lhs->hagl_min != rhs->hagl_min) {
    return false;
  }
  // hagl_max
  if (lhs->hagl_max != rhs->hagl_max) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleLocalPosition__copy(
  const px4_msgs__msg__VehicleLocalPosition * input,
  px4_msgs__msg__VehicleLocalPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // xy_valid
  output->xy_valid = input->xy_valid;
  // z_valid
  output->z_valid = input->z_valid;
  // v_xy_valid
  output->v_xy_valid = input->v_xy_valid;
  // v_z_valid
  output->v_z_valid = input->v_z_valid;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // delta_xy
  for (size_t i = 0; i < 2; ++i) {
    output->delta_xy[i] = input->delta_xy[i];
  }
  // xy_reset_counter
  output->xy_reset_counter = input->xy_reset_counter;
  // delta_z
  output->delta_z = input->delta_z;
  // z_reset_counter
  output->z_reset_counter = input->z_reset_counter;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // z_deriv
  output->z_deriv = input->z_deriv;
  // delta_vxy
  for (size_t i = 0; i < 2; ++i) {
    output->delta_vxy[i] = input->delta_vxy[i];
  }
  // vxy_reset_counter
  output->vxy_reset_counter = input->vxy_reset_counter;
  // delta_vz
  output->delta_vz = input->delta_vz;
  // vz_reset_counter
  output->vz_reset_counter = input->vz_reset_counter;
  // ax
  output->ax = input->ax;
  // ay
  output->ay = input->ay;
  // az
  output->az = input->az;
  // heading
  output->heading = input->heading;
  // heading_var
  output->heading_var = input->heading_var;
  // unaided_heading
  output->unaided_heading = input->unaided_heading;
  // delta_heading
  output->delta_heading = input->delta_heading;
  // heading_reset_counter
  output->heading_reset_counter = input->heading_reset_counter;
  // heading_good_for_control
  output->heading_good_for_control = input->heading_good_for_control;
  // tilt_var
  output->tilt_var = input->tilt_var;
  // xy_global
  output->xy_global = input->xy_global;
  // z_global
  output->z_global = input->z_global;
  // ref_timestamp
  output->ref_timestamp = input->ref_timestamp;
  // ref_lat
  output->ref_lat = input->ref_lat;
  // ref_lon
  output->ref_lon = input->ref_lon;
  // ref_alt
  output->ref_alt = input->ref_alt;
  // dist_bottom
  output->dist_bottom = input->dist_bottom;
  // dist_bottom_valid
  output->dist_bottom_valid = input->dist_bottom_valid;
  // dist_bottom_sensor_bitfield
  output->dist_bottom_sensor_bitfield = input->dist_bottom_sensor_bitfield;
  // eph
  output->eph = input->eph;
  // epv
  output->epv = input->epv;
  // evh
  output->evh = input->evh;
  // evv
  output->evv = input->evv;
  // dead_reckoning
  output->dead_reckoning = input->dead_reckoning;
  // vxy_max
  output->vxy_max = input->vxy_max;
  // vz_max
  output->vz_max = input->vz_max;
  // hagl_min
  output->hagl_min = input->hagl_min;
  // hagl_max
  output->hagl_max = input->hagl_max;
  return true;
}

px4_msgs__msg__VehicleLocalPosition *
px4_msgs__msg__VehicleLocalPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleLocalPosition * msg = (px4_msgs__msg__VehicleLocalPosition *)allocator.allocate(sizeof(px4_msgs__msg__VehicleLocalPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleLocalPosition));
  bool success = px4_msgs__msg__VehicleLocalPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleLocalPosition__destroy(px4_msgs__msg__VehicleLocalPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleLocalPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleLocalPosition__Sequence__init(px4_msgs__msg__VehicleLocalPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleLocalPosition * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleLocalPosition *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleLocalPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleLocalPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleLocalPosition__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleLocalPosition__Sequence__fini(px4_msgs__msg__VehicleLocalPosition__Sequence * array)
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
      px4_msgs__msg__VehicleLocalPosition__fini(&array->data[i]);
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

px4_msgs__msg__VehicleLocalPosition__Sequence *
px4_msgs__msg__VehicleLocalPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleLocalPosition__Sequence * array = (px4_msgs__msg__VehicleLocalPosition__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleLocalPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleLocalPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleLocalPosition__Sequence__destroy(px4_msgs__msg__VehicleLocalPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleLocalPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleLocalPosition__Sequence__are_equal(const px4_msgs__msg__VehicleLocalPosition__Sequence * lhs, const px4_msgs__msg__VehicleLocalPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleLocalPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleLocalPosition__Sequence__copy(
  const px4_msgs__msg__VehicleLocalPosition__Sequence * input,
  px4_msgs__msg__VehicleLocalPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleLocalPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleLocalPosition * data =
      (px4_msgs__msg__VehicleLocalPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleLocalPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleLocalPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleLocalPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
