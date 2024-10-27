// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'model_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetJointTrajectory in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetJointTrajectory_Request
{
  rosidl_runtime_c__String model_name;
  trajectory_msgs__msg__JointTrajectory joint_trajectory;
  geometry_msgs__msg__Pose model_pose;
  bool set_model_pose;
  /// defaults to false
  bool disable_physics_updates;
} gazebo_msgs__srv__SetJointTrajectory_Request;

// Struct for a sequence of gazebo_msgs__srv__SetJointTrajectory_Request.
typedef struct gazebo_msgs__srv__SetJointTrajectory_Request__Sequence
{
  gazebo_msgs__srv__SetJointTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetJointTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetJointTrajectory in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetJointTrajectory_Response
{
  /// return true if set wrench successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SetJointTrajectory_Response;

// Struct for a sequence of gazebo_msgs__srv__SetJointTrajectory_Response.
typedef struct gazebo_msgs__srv__SetJointTrajectory_Response__Sequence
{
  gazebo_msgs__srv__SetJointTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetJointTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__STRUCT_H_
