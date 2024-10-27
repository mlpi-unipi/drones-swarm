// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SpawnModel.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SPAWN_MODEL__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SPAWN_MODEL__STRUCT_H_

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
// Member 'model_xml'
// Member 'robot_namespace'
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SpawnModel in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SpawnModel_Request
{
  /// name of the model to be spawn
  rosidl_runtime_c__String model_name;
  /// this should be an urdf or gazebo xml
  rosidl_runtime_c__String model_xml;
  /// spawn robot and all ROS interfaces under this namespace
  rosidl_runtime_c__String robot_namespace;
  /// only applied to canonical body
  geometry_msgs__msg__Pose initial_pose;
  /// initial_pose is defined relative to the frame of this model/body
  /// if left empty or "world", then gazebo world frame is used
  /// if non-existent model/body is specified, an error is returned
  ///   and the model is not spawned
  rosidl_runtime_c__String reference_frame;
} gazebo_msgs__srv__SpawnModel_Request;

// Struct for a sequence of gazebo_msgs__srv__SpawnModel_Request.
typedef struct gazebo_msgs__srv__SpawnModel_Request__Sequence
{
  gazebo_msgs__srv__SpawnModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SpawnModel_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpawnModel in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SpawnModel_Response
{
  /// return true if spawn successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SpawnModel_Response;

// Struct for a sequence of gazebo_msgs__srv__SpawnModel_Response.
typedef struct gazebo_msgs__srv__SpawnModel_Response__Sequence
{
  gazebo_msgs__srv__SpawnModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SpawnModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SPAWN_MODEL__STRUCT_H_
