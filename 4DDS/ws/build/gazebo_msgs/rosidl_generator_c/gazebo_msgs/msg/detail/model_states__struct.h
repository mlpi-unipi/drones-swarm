// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ModelStates.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/ModelStates in the package gazebo_msgs.
/**
  * broadcast all model states in world frame
 */
typedef struct gazebo_msgs__msg__ModelStates
{
  /// model names
  rosidl_runtime_c__String__Sequence name;
  /// desired pose in world frame
  geometry_msgs__msg__Pose__Sequence pose;
  /// desired twist in world frame
  geometry_msgs__msg__Twist__Sequence twist;
} gazebo_msgs__msg__ModelStates;

// Struct for a sequence of gazebo_msgs__msg__ModelStates.
typedef struct gazebo_msgs__msg__ModelStates__Sequence
{
  gazebo_msgs__msg__ModelStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ModelStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__MODEL_STATES__STRUCT_H_
