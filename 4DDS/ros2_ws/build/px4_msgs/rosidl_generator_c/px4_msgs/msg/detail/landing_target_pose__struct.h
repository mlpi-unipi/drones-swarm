// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LandingTargetPose in the package px4_msgs.
/**
  * Relative position of precision land target in navigation (body fixed, north aligned, NED) and inertial (world fixed, north aligned, NED) frames
 */
typedef struct px4_msgs__msg__LandingTargetPose
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Flag indicating whether the landing target is static or moving with respect to the ground
  bool is_static;
  /// Flag showing whether relative position is valid
  bool rel_pos_valid;
  /// Flag showing whether relative velocity is valid
  bool rel_vel_valid;
  /// X/north position of target, relative to vehicle (navigation frame)
  float x_rel;
  /// Y/east position of target, relative to vehicle (navigation frame)
  float y_rel;
  /// Z/down position of target, relative to vehicle (navigation frame)
  float z_rel;
  /// X/north velocity  of target, relative to vehicle (navigation frame)
  float vx_rel;
  /// Y/east velocity of target, relative to vehicle (navigation frame)
  float vy_rel;
  /// X/north position variance
  float cov_x_rel;
  /// Y/east position variance
  float cov_y_rel;
  /// X/north velocity variance
  float cov_vx_rel;
  /// Y/east velocity variance
  float cov_vy_rel;
  /// Flag showing whether absolute position is valid
  bool abs_pos_valid;
  /// X/north position of target, relative to origin (navigation frame)
  float x_abs;
  /// Y/east position of target, relative to origin (navigation frame)
  float y_abs;
  /// Z/down position of target, relative to origin (navigation frame)
  float z_abs;
} px4_msgs__msg__LandingTargetPose;

// Struct for a sequence of px4_msgs__msg__LandingTargetPose.
typedef struct px4_msgs__msg__LandingTargetPose__Sequence
{
  px4_msgs__msg__LandingTargetPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LandingTargetPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__STRUCT_H_
