// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model_name'
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/ModelState in the package gazebo_msgs.
/**
  * Deprecated, kept for ROS 1 bridge.
  * Use EntityState
  * Set Gazebo Model pose and twist
 */
typedef struct gazebo_msgs__msg__ModelState
{
  /// model to set state (pose and twist)
  rosidl_runtime_c__String model_name;
  /// desired pose in reference frame
  geometry_msgs__msg__Pose pose;
  /// desired twist in reference frame
  geometry_msgs__msg__Twist twist;
  /// set pose/twist relative to the frame of this entity (Body/Model)
  /// leave empty or "world" or "map" defaults to world-frame
  rosidl_runtime_c__String reference_frame;
} gazebo_msgs__msg__ModelState;

// Struct for a sequence of gazebo_msgs__msg__ModelState.
typedef struct gazebo_msgs__msg__ModelState__Sequence
{
  gazebo_msgs__msg__ModelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ModelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__STRUCT_H_
