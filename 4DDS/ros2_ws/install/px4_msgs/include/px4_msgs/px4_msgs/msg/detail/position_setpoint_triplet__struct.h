// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'previous'
// Member 'current'
// Member 'next'
#include "px4_msgs/msg/detail/position_setpoint__struct.h"

/// Struct defined in msg/PositionSetpointTriplet in the package px4_msgs.
/**
  * Global position setpoint triplet in WGS84 coordinates.
  * This are the three next waypoints (or just the next two or one).
 */
typedef struct px4_msgs__msg__PositionSetpointTriplet
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  px4_msgs__msg__PositionSetpoint previous;
  px4_msgs__msg__PositionSetpoint current;
  px4_msgs__msg__PositionSetpoint next;
} px4_msgs__msg__PositionSetpointTriplet;

// Struct for a sequence of px4_msgs__msg__PositionSetpointTriplet.
typedef struct px4_msgs__msg__PositionSetpointTriplet__Sequence
{
  px4_msgs__msg__PositionSetpointTriplet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PositionSetpointTriplet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__STRUCT_H_
