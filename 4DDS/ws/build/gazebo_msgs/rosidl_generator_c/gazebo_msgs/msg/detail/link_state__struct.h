// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/LinkState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__LINK_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__LINK_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/LinkState in the package gazebo_msgs.
/**
  * Deprecated, kept for ROS 1 bridge.
  * Use EntityState
  * @todo: FIXME: sets pose and twist of a link.  All children link poses/twists of the URDF tree are not updated accordingly, but should be.
 */
typedef struct gazebo_msgs__msg__LinkState
{
  /// link name, link_names are in gazebo scoped name notation,
  rosidl_runtime_c__String link_name;
  /// desired pose in reference frame
  geometry_msgs__msg__Pose pose;
  /// desired twist in reference frame
  geometry_msgs__msg__Twist twist;
  /// set pose/twist relative to the frame of this link/body
  /// leave empty or "world" or "map" defaults to world-frame
  rosidl_runtime_c__String reference_frame;
} gazebo_msgs__msg__LinkState;

// Struct for a sequence of gazebo_msgs__msg__LinkState.
typedef struct gazebo_msgs__msg__LinkState__Sequence
{
  gazebo_msgs__msg__LinkState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__LinkState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__LINK_STATE__STRUCT_H_
