// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Mission.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__Mission__init(px4_msgs__msg__Mission * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // mission_dataman_id
  // fence_dataman_id
  // safepoint_dataman_id
  // count
  // current_seq
  // land_start_index
  // land_index
  // mission_id
  // geofence_id
  // safe_points_id
  return true;
}

void
px4_msgs__msg__Mission__fini(px4_msgs__msg__Mission * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // mission_dataman_id
  // fence_dataman_id
  // safepoint_dataman_id
  // count
  // current_seq
  // land_start_index
  // land_index
  // mission_id
  // geofence_id
  // safe_points_id
}

bool
px4_msgs__msg__Mission__are_equal(const px4_msgs__msg__Mission * lhs, const px4_msgs__msg__Mission * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // mission_dataman_id
  if (lhs->mission_dataman_id != rhs->mission_dataman_id) {
    return false;
  }
  // fence_dataman_id
  if (lhs->fence_dataman_id != rhs->fence_dataman_id) {
    return false;
  }
  // safepoint_dataman_id
  if (lhs->safepoint_dataman_id != rhs->safepoint_dataman_id) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // current_seq
  if (lhs->current_seq != rhs->current_seq) {
    return false;
  }
  // land_start_index
  if (lhs->land_start_index != rhs->land_start_index) {
    return false;
  }
  // land_index
  if (lhs->land_index != rhs->land_index) {
    return false;
  }
  // mission_id
  if (lhs->mission_id != rhs->mission_id) {
    return false;
  }
  // geofence_id
  if (lhs->geofence_id != rhs->geofence_id) {
    return false;
  }
  // safe_points_id
  if (lhs->safe_points_id != rhs->safe_points_id) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__Mission__copy(
  const px4_msgs__msg__Mission * input,
  px4_msgs__msg__Mission * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // mission_dataman_id
  output->mission_dataman_id = input->mission_dataman_id;
  // fence_dataman_id
  output->fence_dataman_id = input->fence_dataman_id;
  // safepoint_dataman_id
  output->safepoint_dataman_id = input->safepoint_dataman_id;
  // count
  output->count = input->count;
  // current_seq
  output->current_seq = input->current_seq;
  // land_start_index
  output->land_start_index = input->land_start_index;
  // land_index
  output->land_index = input->land_index;
  // mission_id
  output->mission_id = input->mission_id;
  // geofence_id
  output->geofence_id = input->geofence_id;
  // safe_points_id
  output->safe_points_id = input->safe_points_id;
  return true;
}

px4_msgs__msg__Mission *
px4_msgs__msg__Mission__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Mission * msg = (px4_msgs__msg__Mission *)allocator.allocate(sizeof(px4_msgs__msg__Mission), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Mission));
  bool success = px4_msgs__msg__Mission__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Mission__destroy(px4_msgs__msg__Mission * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__Mission__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__Mission__Sequence__init(px4_msgs__msg__Mission__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Mission * data = NULL;

  if (size) {
    data = (px4_msgs__msg__Mission *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__Mission), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Mission__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Mission__fini(&data[i - 1]);
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
px4_msgs__msg__Mission__Sequence__fini(px4_msgs__msg__Mission__Sequence * array)
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
      px4_msgs__msg__Mission__fini(&array->data[i]);
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

px4_msgs__msg__Mission__Sequence *
px4_msgs__msg__Mission__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Mission__Sequence * array = (px4_msgs__msg__Mission__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__Mission__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Mission__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Mission__Sequence__destroy(px4_msgs__msg__Mission__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__Mission__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__Mission__Sequence__are_equal(const px4_msgs__msg__Mission__Sequence * lhs, const px4_msgs__msg__Mission__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__Mission__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Mission__Sequence__copy(
  const px4_msgs__msg__Mission__Sequence * input,
  px4_msgs__msg__Mission__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__Mission);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__Mission * data =
      (px4_msgs__msg__Mission *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__Mission__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__Mission__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__Mission__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
