// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_uwb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__SensorUwb__init(px4_msgs__msg__SensorUwb * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // sessionid
  // time_offset
  // counter
  // mac
  // mac_dest
  // status
  // nlos
  // distance
  // aoa_azimuth_dev
  // aoa_elevation_dev
  // aoa_azimuth_resp
  // aoa_elevation_resp
  // aoa_azimuth_fom
  // aoa_elevation_fom
  // aoa_dest_azimuth_fom
  // aoa_dest_elevation_fom
  // orientation
  // offset_x
  // offset_y
  // offset_z
  return true;
}

void
px4_msgs__msg__SensorUwb__fini(px4_msgs__msg__SensorUwb * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // sessionid
  // time_offset
  // counter
  // mac
  // mac_dest
  // status
  // nlos
  // distance
  // aoa_azimuth_dev
  // aoa_elevation_dev
  // aoa_azimuth_resp
  // aoa_elevation_resp
  // aoa_azimuth_fom
  // aoa_elevation_fom
  // aoa_dest_azimuth_fom
  // aoa_dest_elevation_fom
  // orientation
  // offset_x
  // offset_y
  // offset_z
}

bool
px4_msgs__msg__SensorUwb__are_equal(const px4_msgs__msg__SensorUwb * lhs, const px4_msgs__msg__SensorUwb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // sessionid
  if (lhs->sessionid != rhs->sessionid) {
    return false;
  }
  // time_offset
  if (lhs->time_offset != rhs->time_offset) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // mac
  if (lhs->mac != rhs->mac) {
    return false;
  }
  // mac_dest
  if (lhs->mac_dest != rhs->mac_dest) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // nlos
  if (lhs->nlos != rhs->nlos) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // aoa_azimuth_dev
  if (lhs->aoa_azimuth_dev != rhs->aoa_azimuth_dev) {
    return false;
  }
  // aoa_elevation_dev
  if (lhs->aoa_elevation_dev != rhs->aoa_elevation_dev) {
    return false;
  }
  // aoa_azimuth_resp
  if (lhs->aoa_azimuth_resp != rhs->aoa_azimuth_resp) {
    return false;
  }
  // aoa_elevation_resp
  if (lhs->aoa_elevation_resp != rhs->aoa_elevation_resp) {
    return false;
  }
  // aoa_azimuth_fom
  if (lhs->aoa_azimuth_fom != rhs->aoa_azimuth_fom) {
    return false;
  }
  // aoa_elevation_fom
  if (lhs->aoa_elevation_fom != rhs->aoa_elevation_fom) {
    return false;
  }
  // aoa_dest_azimuth_fom
  if (lhs->aoa_dest_azimuth_fom != rhs->aoa_dest_azimuth_fom) {
    return false;
  }
  // aoa_dest_elevation_fom
  if (lhs->aoa_dest_elevation_fom != rhs->aoa_dest_elevation_fom) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // offset_x
  if (lhs->offset_x != rhs->offset_x) {
    return false;
  }
  // offset_y
  if (lhs->offset_y != rhs->offset_y) {
    return false;
  }
  // offset_z
  if (lhs->offset_z != rhs->offset_z) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__SensorUwb__copy(
  const px4_msgs__msg__SensorUwb * input,
  px4_msgs__msg__SensorUwb * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // sessionid
  output->sessionid = input->sessionid;
  // time_offset
  output->time_offset = input->time_offset;
  // counter
  output->counter = input->counter;
  // mac
  output->mac = input->mac;
  // mac_dest
  output->mac_dest = input->mac_dest;
  // status
  output->status = input->status;
  // nlos
  output->nlos = input->nlos;
  // distance
  output->distance = input->distance;
  // aoa_azimuth_dev
  output->aoa_azimuth_dev = input->aoa_azimuth_dev;
  // aoa_elevation_dev
  output->aoa_elevation_dev = input->aoa_elevation_dev;
  // aoa_azimuth_resp
  output->aoa_azimuth_resp = input->aoa_azimuth_resp;
  // aoa_elevation_resp
  output->aoa_elevation_resp = input->aoa_elevation_resp;
  // aoa_azimuth_fom
  output->aoa_azimuth_fom = input->aoa_azimuth_fom;
  // aoa_elevation_fom
  output->aoa_elevation_fom = input->aoa_elevation_fom;
  // aoa_dest_azimuth_fom
  output->aoa_dest_azimuth_fom = input->aoa_dest_azimuth_fom;
  // aoa_dest_elevation_fom
  output->aoa_dest_elevation_fom = input->aoa_dest_elevation_fom;
  // orientation
  output->orientation = input->orientation;
  // offset_x
  output->offset_x = input->offset_x;
  // offset_y
  output->offset_y = input->offset_y;
  // offset_z
  output->offset_z = input->offset_z;
  return true;
}

px4_msgs__msg__SensorUwb *
px4_msgs__msg__SensorUwb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorUwb * msg = (px4_msgs__msg__SensorUwb *)allocator.allocate(sizeof(px4_msgs__msg__SensorUwb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SensorUwb));
  bool success = px4_msgs__msg__SensorUwb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SensorUwb__destroy(px4_msgs__msg__SensorUwb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__SensorUwb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__SensorUwb__Sequence__init(px4_msgs__msg__SensorUwb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorUwb * data = NULL;

  if (size) {
    data = (px4_msgs__msg__SensorUwb *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__SensorUwb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SensorUwb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SensorUwb__fini(&data[i - 1]);
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
px4_msgs__msg__SensorUwb__Sequence__fini(px4_msgs__msg__SensorUwb__Sequence * array)
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
      px4_msgs__msg__SensorUwb__fini(&array->data[i]);
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

px4_msgs__msg__SensorUwb__Sequence *
px4_msgs__msg__SensorUwb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__SensorUwb__Sequence * array = (px4_msgs__msg__SensorUwb__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__SensorUwb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SensorUwb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SensorUwb__Sequence__destroy(px4_msgs__msg__SensorUwb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__SensorUwb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__SensorUwb__Sequence__are_equal(const px4_msgs__msg__SensorUwb__Sequence * lhs, const px4_msgs__msg__SensorUwb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__SensorUwb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__SensorUwb__Sequence__copy(
  const px4_msgs__msg__SensorUwb__Sequence * input,
  px4_msgs__msg__SensorUwb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__SensorUwb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__SensorUwb * data =
      (px4_msgs__msg__SensorUwb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__SensorUwb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__SensorUwb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__SensorUwb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
