// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/manual_control_switches__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__ManualControlSwitches__init(px4_msgs__msg__ManualControlSwitches * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // mode_slot
  // arm_switch
  // return_switch
  // loiter_switch
  // offboard_switch
  // kill_switch
  // gear_switch
  // transition_switch
  // photo_switch
  // video_switch
  // engage_main_motor_switch
  // switch_changes
  return true;
}

void
px4_msgs__msg__ManualControlSwitches__fini(px4_msgs__msg__ManualControlSwitches * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // mode_slot
  // arm_switch
  // return_switch
  // loiter_switch
  // offboard_switch
  // kill_switch
  // gear_switch
  // transition_switch
  // photo_switch
  // video_switch
  // engage_main_motor_switch
  // switch_changes
}

bool
px4_msgs__msg__ManualControlSwitches__are_equal(const px4_msgs__msg__ManualControlSwitches * lhs, const px4_msgs__msg__ManualControlSwitches * rhs)
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
  // mode_slot
  if (lhs->mode_slot != rhs->mode_slot) {
    return false;
  }
  // arm_switch
  if (lhs->arm_switch != rhs->arm_switch) {
    return false;
  }
  // return_switch
  if (lhs->return_switch != rhs->return_switch) {
    return false;
  }
  // loiter_switch
  if (lhs->loiter_switch != rhs->loiter_switch) {
    return false;
  }
  // offboard_switch
  if (lhs->offboard_switch != rhs->offboard_switch) {
    return false;
  }
  // kill_switch
  if (lhs->kill_switch != rhs->kill_switch) {
    return false;
  }
  // gear_switch
  if (lhs->gear_switch != rhs->gear_switch) {
    return false;
  }
  // transition_switch
  if (lhs->transition_switch != rhs->transition_switch) {
    return false;
  }
  // photo_switch
  if (lhs->photo_switch != rhs->photo_switch) {
    return false;
  }
  // video_switch
  if (lhs->video_switch != rhs->video_switch) {
    return false;
  }
  // engage_main_motor_switch
  if (lhs->engage_main_motor_switch != rhs->engage_main_motor_switch) {
    return false;
  }
  // switch_changes
  if (lhs->switch_changes != rhs->switch_changes) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__ManualControlSwitches__copy(
  const px4_msgs__msg__ManualControlSwitches * input,
  px4_msgs__msg__ManualControlSwitches * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // mode_slot
  output->mode_slot = input->mode_slot;
  // arm_switch
  output->arm_switch = input->arm_switch;
  // return_switch
  output->return_switch = input->return_switch;
  // loiter_switch
  output->loiter_switch = input->loiter_switch;
  // offboard_switch
  output->offboard_switch = input->offboard_switch;
  // kill_switch
  output->kill_switch = input->kill_switch;
  // gear_switch
  output->gear_switch = input->gear_switch;
  // transition_switch
  output->transition_switch = input->transition_switch;
  // photo_switch
  output->photo_switch = input->photo_switch;
  // video_switch
  output->video_switch = input->video_switch;
  // engage_main_motor_switch
  output->engage_main_motor_switch = input->engage_main_motor_switch;
  // switch_changes
  output->switch_changes = input->switch_changes;
  return true;
}

px4_msgs__msg__ManualControlSwitches *
px4_msgs__msg__ManualControlSwitches__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ManualControlSwitches * msg = (px4_msgs__msg__ManualControlSwitches *)allocator.allocate(sizeof(px4_msgs__msg__ManualControlSwitches), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__ManualControlSwitches));
  bool success = px4_msgs__msg__ManualControlSwitches__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__ManualControlSwitches__destroy(px4_msgs__msg__ManualControlSwitches * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__ManualControlSwitches__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__ManualControlSwitches__Sequence__init(px4_msgs__msg__ManualControlSwitches__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ManualControlSwitches * data = NULL;

  if (size) {
    data = (px4_msgs__msg__ManualControlSwitches *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__ManualControlSwitches), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__ManualControlSwitches__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__ManualControlSwitches__fini(&data[i - 1]);
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
px4_msgs__msg__ManualControlSwitches__Sequence__fini(px4_msgs__msg__ManualControlSwitches__Sequence * array)
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
      px4_msgs__msg__ManualControlSwitches__fini(&array->data[i]);
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

px4_msgs__msg__ManualControlSwitches__Sequence *
px4_msgs__msg__ManualControlSwitches__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ManualControlSwitches__Sequence * array = (px4_msgs__msg__ManualControlSwitches__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__ManualControlSwitches__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__ManualControlSwitches__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__ManualControlSwitches__Sequence__destroy(px4_msgs__msg__ManualControlSwitches__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__ManualControlSwitches__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__ManualControlSwitches__Sequence__are_equal(const px4_msgs__msg__ManualControlSwitches__Sequence * lhs, const px4_msgs__msg__ManualControlSwitches__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__ManualControlSwitches__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__ManualControlSwitches__Sequence__copy(
  const px4_msgs__msg__ManualControlSwitches__Sequence * input,
  px4_msgs__msg__ManualControlSwitches__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__ManualControlSwitches);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__ManualControlSwitches * data =
      (px4_msgs__msg__ManualControlSwitches *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__ManualControlSwitches__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__ManualControlSwitches__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__ManualControlSwitches__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
