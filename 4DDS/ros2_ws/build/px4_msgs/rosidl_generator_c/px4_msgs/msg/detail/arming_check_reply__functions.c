// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/arming_check_reply__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `events`
#include "px4_msgs/msg/detail/event__functions.h"

bool
px4_msgs__msg__ArmingCheckReply__init(px4_msgs__msg__ArmingCheckReply * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // request_id
  // registration_id
  // health_component_index
  // health_component_is_present
  // health_component_warning
  // health_component_error
  // can_arm_and_run
  // num_events
  // events
  for (size_t i = 0; i < 5; ++i) {
    if (!px4_msgs__msg__Event__init(&msg->events[i])) {
      px4_msgs__msg__ArmingCheckReply__fini(msg);
      return false;
    }
  }
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_mission
  // mode_req_home_position
  // mode_req_prevent_arming
  // mode_req_manual_control
  return true;
}

void
px4_msgs__msg__ArmingCheckReply__fini(px4_msgs__msg__ArmingCheckReply * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // request_id
  // registration_id
  // health_component_index
  // health_component_is_present
  // health_component_warning
  // health_component_error
  // can_arm_and_run
  // num_events
  // events
  for (size_t i = 0; i < 5; ++i) {
    px4_msgs__msg__Event__fini(&msg->events[i]);
  }
  // mode_req_angular_velocity
  // mode_req_attitude
  // mode_req_local_alt
  // mode_req_local_position
  // mode_req_local_position_relaxed
  // mode_req_global_position
  // mode_req_mission
  // mode_req_home_position
  // mode_req_prevent_arming
  // mode_req_manual_control
}

bool
px4_msgs__msg__ArmingCheckReply__are_equal(const px4_msgs__msg__ArmingCheckReply * lhs, const px4_msgs__msg__ArmingCheckReply * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  // registration_id
  if (lhs->registration_id != rhs->registration_id) {
    return false;
  }
  // health_component_index
  if (lhs->health_component_index != rhs->health_component_index) {
    return false;
  }
  // health_component_is_present
  if (lhs->health_component_is_present != rhs->health_component_is_present) {
    return false;
  }
  // health_component_warning
  if (lhs->health_component_warning != rhs->health_component_warning) {
    return false;
  }
  // health_component_error
  if (lhs->health_component_error != rhs->health_component_error) {
    return false;
  }
  // can_arm_and_run
  if (lhs->can_arm_and_run != rhs->can_arm_and_run) {
    return false;
  }
  // num_events
  if (lhs->num_events != rhs->num_events) {
    return false;
  }
  // events
  for (size_t i = 0; i < 5; ++i) {
    if (!px4_msgs__msg__Event__are_equal(
        &(lhs->events[i]), &(rhs->events[i])))
    {
      return false;
    }
  }
  // mode_req_angular_velocity
  if (lhs->mode_req_angular_velocity != rhs->mode_req_angular_velocity) {
    return false;
  }
  // mode_req_attitude
  if (lhs->mode_req_attitude != rhs->mode_req_attitude) {
    return false;
  }
  // mode_req_local_alt
  if (lhs->mode_req_local_alt != rhs->mode_req_local_alt) {
    return false;
  }
  // mode_req_local_position
  if (lhs->mode_req_local_position != rhs->mode_req_local_position) {
    return false;
  }
  // mode_req_local_position_relaxed
  if (lhs->mode_req_local_position_relaxed != rhs->mode_req_local_position_relaxed) {
    return false;
  }
  // mode_req_global_position
  if (lhs->mode_req_global_position != rhs->mode_req_global_position) {
    return false;
  }
  // mode_req_mission
  if (lhs->mode_req_mission != rhs->mode_req_mission) {
    return false;
  }
  // mode_req_home_position
  if (lhs->mode_req_home_position != rhs->mode_req_home_position) {
    return false;
  }
  // mode_req_prevent_arming
  if (lhs->mode_req_prevent_arming != rhs->mode_req_prevent_arming) {
    return false;
  }
  // mode_req_manual_control
  if (lhs->mode_req_manual_control != rhs->mode_req_manual_control) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__ArmingCheckReply__copy(
  const px4_msgs__msg__ArmingCheckReply * input,
  px4_msgs__msg__ArmingCheckReply * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // request_id
  output->request_id = input->request_id;
  // registration_id
  output->registration_id = input->registration_id;
  // health_component_index
  output->health_component_index = input->health_component_index;
  // health_component_is_present
  output->health_component_is_present = input->health_component_is_present;
  // health_component_warning
  output->health_component_warning = input->health_component_warning;
  // health_component_error
  output->health_component_error = input->health_component_error;
  // can_arm_and_run
  output->can_arm_and_run = input->can_arm_and_run;
  // num_events
  output->num_events = input->num_events;
  // events
  for (size_t i = 0; i < 5; ++i) {
    if (!px4_msgs__msg__Event__copy(
        &(input->events[i]), &(output->events[i])))
    {
      return false;
    }
  }
  // mode_req_angular_velocity
  output->mode_req_angular_velocity = input->mode_req_angular_velocity;
  // mode_req_attitude
  output->mode_req_attitude = input->mode_req_attitude;
  // mode_req_local_alt
  output->mode_req_local_alt = input->mode_req_local_alt;
  // mode_req_local_position
  output->mode_req_local_position = input->mode_req_local_position;
  // mode_req_local_position_relaxed
  output->mode_req_local_position_relaxed = input->mode_req_local_position_relaxed;
  // mode_req_global_position
  output->mode_req_global_position = input->mode_req_global_position;
  // mode_req_mission
  output->mode_req_mission = input->mode_req_mission;
  // mode_req_home_position
  output->mode_req_home_position = input->mode_req_home_position;
  // mode_req_prevent_arming
  output->mode_req_prevent_arming = input->mode_req_prevent_arming;
  // mode_req_manual_control
  output->mode_req_manual_control = input->mode_req_manual_control;
  return true;
}

px4_msgs__msg__ArmingCheckReply *
px4_msgs__msg__ArmingCheckReply__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ArmingCheckReply * msg = (px4_msgs__msg__ArmingCheckReply *)allocator.allocate(sizeof(px4_msgs__msg__ArmingCheckReply), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__ArmingCheckReply));
  bool success = px4_msgs__msg__ArmingCheckReply__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__ArmingCheckReply__destroy(px4_msgs__msg__ArmingCheckReply * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__ArmingCheckReply__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__ArmingCheckReply__Sequence__init(px4_msgs__msg__ArmingCheckReply__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ArmingCheckReply * data = NULL;

  if (size) {
    data = (px4_msgs__msg__ArmingCheckReply *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__ArmingCheckReply), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__ArmingCheckReply__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__ArmingCheckReply__fini(&data[i - 1]);
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
px4_msgs__msg__ArmingCheckReply__Sequence__fini(px4_msgs__msg__ArmingCheckReply__Sequence * array)
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
      px4_msgs__msg__ArmingCheckReply__fini(&array->data[i]);
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

px4_msgs__msg__ArmingCheckReply__Sequence *
px4_msgs__msg__ArmingCheckReply__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ArmingCheckReply__Sequence * array = (px4_msgs__msg__ArmingCheckReply__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__ArmingCheckReply__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__ArmingCheckReply__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__ArmingCheckReply__Sequence__destroy(px4_msgs__msg__ArmingCheckReply__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__ArmingCheckReply__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__ArmingCheckReply__Sequence__are_equal(const px4_msgs__msg__ArmingCheckReply__Sequence * lhs, const px4_msgs__msg__ArmingCheckReply__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__ArmingCheckReply__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__ArmingCheckReply__Sequence__copy(
  const px4_msgs__msg__ArmingCheckReply__Sequence * input,
  px4_msgs__msg__ArmingCheckReply__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__ArmingCheckReply);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__ArmingCheckReply * data =
      (px4_msgs__msg__ArmingCheckReply *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__ArmingCheckReply__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__ArmingCheckReply__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__ArmingCheckReply__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
