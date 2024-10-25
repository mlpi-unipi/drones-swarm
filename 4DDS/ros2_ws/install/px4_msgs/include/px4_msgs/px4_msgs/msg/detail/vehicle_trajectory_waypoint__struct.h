// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS = 0
};

/// Constant 'POINT_0'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__POINT_0 = 0
};

/// Constant 'POINT_1'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__POINT_1 = 1
};

/// Constant 'POINT_2'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__POINT_2 = 2
};

/// Constant 'POINT_3'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__POINT_3 = 3
};

/// Constant 'POINT_4'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__POINT_4 = 4
};

/// Constant 'NUMBER_POINTS'.
enum
{
  px4_msgs__msg__VehicleTrajectoryWaypoint__NUMBER_POINTS = 5
};

// Include directives for member types
// Member 'waypoints'
#include "px4_msgs/msg/detail/trajectory_waypoint__struct.h"

/// Struct defined in msg/VehicleTrajectoryWaypoint in the package px4_msgs.
/**
  * Vehicle Waypoints Trajectory description. See also MAVLink MAV_TRAJECTORY_REPRESENTATION msg
  * The topic vehicle_trajectory_waypoint_desired is used to send the user desired waypoints from the position controller to the companion computer / avoidance module.
  * The topic vehicle_trajectory_waypoint is used to send the adjusted waypoints from the companion computer / avoidance module to the position controller.
 */
typedef struct px4_msgs__msg__VehicleTrajectoryWaypoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Type from MAV_TRAJECTORY_REPRESENTATION enum.
  uint8_t type;
  px4_msgs__msg__TrajectoryWaypoint waypoints[5];
} px4_msgs__msg__VehicleTrajectoryWaypoint;

// Struct for a sequence of px4_msgs__msg__VehicleTrajectoryWaypoint.
typedef struct px4_msgs__msg__VehicleTrajectoryWaypoint__Sequence
{
  px4_msgs__msg__VehicleTrajectoryWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleTrajectoryWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT__STRUCT_H_
