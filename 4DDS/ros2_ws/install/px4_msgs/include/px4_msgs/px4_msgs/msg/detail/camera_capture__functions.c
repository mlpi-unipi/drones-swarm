// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/CameraCapture.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/camera_capture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__CameraCapture__init(px4_msgs__msg__CameraCapture * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_utc
  // seq
  // lat
  // lon
  // alt
  // ground_distance
  // q
  // result
  return true;
}

void
px4_msgs__msg__CameraCapture__fini(px4_msgs__msg__CameraCapture * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_utc
  // seq
  // lat
  // lon
  // alt
  // ground_distance
  // q
  // result
}

bool
px4_msgs__msg__CameraCapture__are_equal(const px4_msgs__msg__CameraCapture * lhs, const px4_msgs__msg__CameraCapture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_utc
  if (lhs->timestamp_utc != rhs->timestamp_utc) {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  // ground_distance
  if (lhs->ground_distance != rhs->ground_distance) {
    return false;
  }
  // q
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__CameraCapture__copy(
  const px4_msgs__msg__CameraCapture * input,
  px4_msgs__msg__CameraCapture * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_utc
  output->timestamp_utc = input->timestamp_utc;
  // seq
  output->seq = input->seq;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // alt
  output->alt = input->alt;
  // ground_distance
  output->ground_distance = input->ground_distance;
  // q
  for (size_t i = 0; i < 4; ++i) {
    output->q[i] = input->q[i];
  }
  // result
  output->result = input->result;
  return true;
}

px4_msgs__msg__CameraCapture *
px4_msgs__msg__CameraCapture__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CameraCapture * msg = (px4_msgs__msg__CameraCapture *)allocator.allocate(sizeof(px4_msgs__msg__CameraCapture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__CameraCapture));
  bool success = px4_msgs__msg__CameraCapture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__CameraCapture__destroy(px4_msgs__msg__CameraCapture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__CameraCapture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__CameraCapture__Sequence__init(px4_msgs__msg__CameraCapture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CameraCapture * data = NULL;

  if (size) {
    data = (px4_msgs__msg__CameraCapture *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__CameraCapture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__CameraCapture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__CameraCapture__fini(&data[i - 1]);
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
px4_msgs__msg__CameraCapture__Sequence__fini(px4_msgs__msg__CameraCapture__Sequence * array)
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
      px4_msgs__msg__CameraCapture__fini(&array->data[i]);
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

px4_msgs__msg__CameraCapture__Sequence *
px4_msgs__msg__CameraCapture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__CameraCapture__Sequence * array = (px4_msgs__msg__CameraCapture__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__CameraCapture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__CameraCapture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__CameraCapture__Sequence__destroy(px4_msgs__msg__CameraCapture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__CameraCapture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__CameraCapture__Sequence__are_equal(const px4_msgs__msg__CameraCapture__Sequence * lhs, const px4_msgs__msg__CameraCapture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__CameraCapture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__CameraCapture__Sequence__copy(
  const px4_msgs__msg__CameraCapture__Sequence * input,
  px4_msgs__msg__CameraCapture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__CameraCapture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__CameraCapture * data =
      (px4_msgs__msg__CameraCapture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__CameraCapture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__CameraCapture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__CameraCapture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
