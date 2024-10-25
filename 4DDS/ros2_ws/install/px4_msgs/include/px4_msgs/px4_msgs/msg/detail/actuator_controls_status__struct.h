// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorControlsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ActuatorControlsStatus in the package px4_msgs.
typedef struct px4_msgs__msg__ActuatorControlsStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  float control_power[3];
} px4_msgs__msg__ActuatorControlsStatus;

// Struct for a sequence of px4_msgs__msg__ActuatorControlsStatus.
typedef struct px4_msgs__msg__ActuatorControlsStatus__Sequence
{
  px4_msgs__msg__ActuatorControlsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorControlsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS__STRUCT_H_
