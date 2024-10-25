// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectoryWaypoint in the package px4_msgs.
/**
  * Waypoint Trajectory description. See also Mavlink TRAJECTORY msg
  * The topic trajectory_waypoint describe each waypoint defined in vehicle_trajectory_waypoint
 */
typedef struct px4_msgs__msg__TrajectoryWaypoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  float position[3];
  float velocity[3];
  float acceleration[3];
  float yaw;
  float yaw_speed;
  bool point_valid;
  uint8_t type;
} px4_msgs__msg__TrajectoryWaypoint;

// Struct for a sequence of px4_msgs__msg__TrajectoryWaypoint.
typedef struct px4_msgs__msg__TrajectoryWaypoint__Sequence
{
  px4_msgs__msg__TrajectoryWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TrajectoryWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__STRUCT_H_
