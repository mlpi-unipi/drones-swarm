// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SETPOINT_TYPE_POSITION'.
/**
  * position setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_POSITION = 0
};

/// Constant 'SETPOINT_TYPE_VELOCITY'.
/**
  * velocity setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_VELOCITY = 1
};

/// Constant 'SETPOINT_TYPE_LOITER'.
/**
  * loiter setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_LOITER = 2
};

/// Constant 'SETPOINT_TYPE_TAKEOFF'.
/**
  * takeoff setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_TAKEOFF = 3
};

/// Constant 'SETPOINT_TYPE_LAND'.
/**
  * land setpoint, altitude must be ignored, descend until landing
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_LAND = 4
};

/// Constant 'SETPOINT_TYPE_IDLE'.
/**
  * do nothing, switch off motors or keep at idle speed (MC)
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_IDLE = 5
};

/// Constant 'LOITER_TYPE_ORBIT'.
/**
  * Circular pattern
 */
enum
{
  px4_msgs__msg__PositionSetpoint__LOITER_TYPE_ORBIT = 0
};

/// Constant 'LOITER_TYPE_FIGUREEIGHT'.
/**
  * Pattern resembling an 8
 */
enum
{
  px4_msgs__msg__PositionSetpoint__LOITER_TYPE_FIGUREEIGHT = 1
};

/// Struct defined in msg/PositionSetpoint in the package px4_msgs.
/**
  * this file is only used in the position_setpoint triple as a dependency
 */
typedef struct px4_msgs__msg__PositionSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// true if setpoint is valid
  bool valid;
  /// setpoint type to adjust behavior of position controller
  uint8_t type;
  /// local velocity setpoint in m/s in NED
  float vx;
  /// local velocity setpoint in m/s in NED
  float vy;
  /// local velocity setpoint in m/s in NED
  float vz;
  /// latitude, in deg
  double lat;
  /// longitude, in deg
  double lon;
  /// altitude AMSL, in m
  float alt;
  /// yaw (only in hover), in rad [-PI..PI), NaN = leave to flight task
  float yaw;
  /// loiter major axis radius in m
  float loiter_radius;
  /// loiter minor axis radius (used for non-circular loiter shapes) in m
  float loiter_minor_radius;
  /// loiter direction is clockwise by default and can be changed using this field
  bool loiter_direction_counter_clockwise;
  /// Orientation of the major axis with respect to true north in rad [-pi,pi)
  float loiter_orientation;
  /// loitern pattern to follow
  uint8_t loiter_pattern;
  /// navigation acceptance_radius if we're doing waypoint navigation
  float acceptance_radius;
  /// the generally desired cruising speed (not a hard constraint)
  float cruising_speed;
  /// commands the vehicle to glide if the capability is available (fixed wing only)
  bool gliding_enabled;
  /// the generally desired cruising throttle (not a hard constraint), only has an effect for rover
  float cruising_throttle;
} px4_msgs__msg__PositionSetpoint;

// Struct for a sequence of px4_msgs__msg__PositionSetpoint.
typedef struct px4_msgs__msg__PositionSetpoint__Sequence
{
  px4_msgs__msg__PositionSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PositionSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_
