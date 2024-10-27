// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OrbitStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER'.
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER = 0
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING'.
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING = 1
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_UNCONTROLLED'.
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_UNCONTROLLED = 2
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE'.
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE = 3
};

/// Constant 'ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED'.
enum
{
  px4_msgs__msg__OrbitStatus__ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED = 4
};

/// Struct defined in msg/OrbitStatus in the package px4_msgs.
/**
  * ORBIT_YAW_BEHAVIOUR
 */
typedef struct px4_msgs__msg__OrbitStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Radius of the orbit circle. Positive values orbit clockwise, negative values orbit counter-clockwise.
  float radius;
  /// The coordinate system of the fields: x, y, z.
  uint8_t frame;
  /// X coordinate of center point. Coordinate system depends on frame field: local = x position in meters * 1e4, global = latitude in degrees * 1e7.
  double x;
  /// Y coordinate of center point. Coordinate system depends on frame field: local = y position in meters * 1e4, global = latitude in degrees * 1e7.
  double y;
  /// Altitude of center point. Coordinate system depends on frame field.
  float z;
  uint8_t yaw_behaviour;
} px4_msgs__msg__OrbitStatus;

// Struct for a sequence of px4_msgs__msg__OrbitStatus.
typedef struct px4_msgs__msg__OrbitStatus__Sequence
{
  px4_msgs__msg__OrbitStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OrbitStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ORBIT_STATUS__STRUCT_H_
