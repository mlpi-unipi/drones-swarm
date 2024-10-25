// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FollowTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FollowTargetStatus in the package px4_msgs.
typedef struct px4_msgs__msg__FollowTargetStatus
{
  /// time since system start
  uint64_t timestamp;
  /// Tracked target course in NED local frame (North is course zero)
  float tracked_target_course;
  /// Current follow angle setting
  float follow_angle;
  /// Current orbit angle setpoint from the smooth trajectory generator
  float orbit_angle_setpoint;
  /// Angular rate commanded from Jerk-limited Orbit Angle trajectory for Orbit Angle
  float angular_rate_setpoint;
  /// Raw 'idealistic' desired drone position if a drone could teleport from place to places
  float desired_position_raw[3];
  /// True when doing emergency ascent (when distance to ground is below safety altitude)
  bool in_emergency_ascent;
  /// Gimbal pitch commanded to track target in the center of the frame
  float gimbal_pitch;
} px4_msgs__msg__FollowTargetStatus;

// Struct for a sequence of px4_msgs__msg__FollowTargetStatus.
typedef struct px4_msgs__msg__FollowTargetStatus__Sequence
{
  px4_msgs__msg__FollowTargetStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FollowTargetStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__STRUCT_H_
