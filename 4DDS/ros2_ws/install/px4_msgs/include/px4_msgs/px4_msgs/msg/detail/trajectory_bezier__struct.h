// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TrajectoryBezier.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_BEZIER__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_BEZIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectoryBezier in the package px4_msgs.
/**
  * Bezier Trajectory description. See also Mavlink TRAJECTORY msg
  * The topic trajectory_bezier describe each waypoint defined in vehicle_trajectory_bezier
 */
typedef struct px4_msgs__msg__TrajectoryBezier
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// local position x,y,z (metres)
  float position[3];
  /// yaw angle (rad)
  float yaw;
  /// time it should take to get to this waypoint, if this is the final waypoint (seconds)
  float delta;
} px4_msgs__msg__TrajectoryBezier;

// Struct for a sequence of px4_msgs__msg__TrajectoryBezier.
typedef struct px4_msgs__msg__TrajectoryBezier__Sequence
{
  px4_msgs__msg__TrajectoryBezier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TrajectoryBezier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_BEZIER__STRUCT_H_
