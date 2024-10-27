// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/PowerMonitor.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/power_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__PowerMonitor__init(px4_msgs__msg__PowerMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // voltage_v
  // current_a
  // power_w
  // rconf
  // rsv
  // rbv
  // rp
  // rc
  // rcal
  // me
  // al
  return true;
}

void
px4_msgs__msg__PowerMonitor__fini(px4_msgs__msg__PowerMonitor * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // voltage_v
  // current_a
  // power_w
  // rconf
  // rsv
  // rbv
  // rp
  // rc
  // rcal
  // me
  // al
}

bool
px4_msgs__msg__PowerMonitor__are_equal(const px4_msgs__msg__PowerMonitor * lhs, const px4_msgs__msg__PowerMonitor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // voltage_v
  if (lhs->voltage_v != rhs->voltage_v) {
    return false;
  }
  // current_a
  if (lhs->current_a != rhs->current_a) {
    return false;
  }
  // power_w
  if (lhs->power_w != rhs->power_w) {
    return false;
  }
  // rconf
  if (lhs->rconf != rhs->rconf) {
    return false;
  }
  // rsv
  if (lhs->rsv != rhs->rsv) {
    return false;
  }
  // rbv
  if (lhs->rbv != rhs->rbv) {
    return false;
  }
  // rp
  if (lhs->rp != rhs->rp) {
    return false;
  }
  // rc
  if (lhs->rc != rhs->rc) {
    return false;
  }
  // rcal
  if (lhs->rcal != rhs->rcal) {
    return false;
  }
  // me
  if (lhs->me != rhs->me) {
    return false;
  }
  // al
  if (lhs->al != rhs->al) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__PowerMonitor__copy(
  const px4_msgs__msg__PowerMonitor * input,
  px4_msgs__msg__PowerMonitor * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // voltage_v
  output->voltage_v = input->voltage_v;
  // current_a
  output->current_a = input->current_a;
  // power_w
  output->power_w = input->power_w;
  // rconf
  output->rconf = input->rconf;
  // rsv
  output->rsv = input->rsv;
  // rbv
  output->rbv = input->rbv;
  // rp
  output->rp = input->rp;
  // rc
  output->rc = input->rc;
  // rcal
  output->rcal = input->rcal;
  // me
  output->me = input->me;
  // al
  output->al = input->al;
  return true;
}

px4_msgs__msg__PowerMonitor *
px4_msgs__msg__PowerMonitor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PowerMonitor * msg = (px4_msgs__msg__PowerMonitor *)allocator.allocate(sizeof(px4_msgs__msg__PowerMonitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__PowerMonitor));
  bool success = px4_msgs__msg__PowerMonitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__PowerMonitor__destroy(px4_msgs__msg__PowerMonitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__PowerMonitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__PowerMonitor__Sequence__init(px4_msgs__msg__PowerMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PowerMonitor * data = NULL;

  if (size) {
    data = (px4_msgs__msg__PowerMonitor *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__PowerMonitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__PowerMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__PowerMonitor__fini(&data[i - 1]);
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
px4_msgs__msg__PowerMonitor__Sequence__fini(px4_msgs__msg__PowerMonitor__Sequence * array)
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
      px4_msgs__msg__PowerMonitor__fini(&array->data[i]);
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

px4_msgs__msg__PowerMonitor__Sequence *
px4_msgs__msg__PowerMonitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__PowerMonitor__Sequence * array = (px4_msgs__msg__PowerMonitor__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__PowerMonitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__PowerMonitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__PowerMonitor__Sequence__destroy(px4_msgs__msg__PowerMonitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__PowerMonitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__PowerMonitor__Sequence__are_equal(const px4_msgs__msg__PowerMonitor__Sequence * lhs, const px4_msgs__msg__PowerMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__PowerMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__PowerMonitor__Sequence__copy(
  const px4_msgs__msg__PowerMonitor__Sequence * input,
  px4_msgs__msg__PowerMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__PowerMonitor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__PowerMonitor * data =
      (px4_msgs__msg__PowerMonitor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__PowerMonitor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__PowerMonitor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__PowerMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
