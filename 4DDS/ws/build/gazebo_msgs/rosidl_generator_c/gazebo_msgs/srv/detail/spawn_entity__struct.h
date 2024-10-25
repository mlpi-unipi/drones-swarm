// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_

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
// Member 'xml'
// Member 'robot_namespace'
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SpawnEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SpawnEntity_Request
{
  /// Name of the entity to be spawned (optional).
  rosidl_runtime_c__String name;
  /// Entity XML description as a string, either URDF or SDF.
  rosidl_runtime_c__String xml;
  /// Spawn robot and all ROS interfaces under this namespace
  rosidl_runtime_c__String robot_namespace;
  /// Initial entity pose.
  geometry_msgs__msg__Pose initial_pose;
  /// initial_pose is defined relative to the frame of this entity.
  /// If left empty or "world" or "map", then gazebo world frame is
  /// used.
  /// If non-existent entity is specified, an error is returned
  /// and the entity is not spawned.
  rosidl_runtime_c__String reference_frame;
} gazebo_msgs__srv__SpawnEntity_Request;

// Struct for a sequence of gazebo_msgs__srv__SpawnEntity_Request.
typedef struct gazebo_msgs__srv__SpawnEntity_Request__Sequence
{
  gazebo_msgs__srv__SpawnEntity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SpawnEntity_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SpawnEntity in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SpawnEntity_Response
{
  /// Return true if spawned successfully.
  bool success;
  /// Comments if available.
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SpawnEntity_Response;

// Struct for a sequence of gazebo_msgs__srv__SpawnEntity_Response.
typedef struct gazebo_msgs__srv__SpawnEntity_Response__Sequence
{
  gazebo_msgs__srv__SpawnEntity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SpawnEntity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SPAWN_ENTITY__STRUCT_H_
