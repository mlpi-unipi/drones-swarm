// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetPhysicsProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_PHYSICS_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SET_PHYSICS_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gravity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'ode_config'
#include "gazebo_msgs/msg/detail/ode_physics__struct.h"

/// Struct defined in srv/SetPhysicsProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetPhysicsProperties_Request
{
  /// dt in seconds
  double time_step;
  /// throttle maximum physics update rate
  double max_update_rate;
  /// gravity vector (e.g. earth ~[0,0,-9.81])
  geometry_msgs__msg__Vector3 gravity;
  /// configurations for ODE
  gazebo_msgs__msg__ODEPhysics ode_config;
} gazebo_msgs__srv__SetPhysicsProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__SetPhysicsProperties_Request.
typedef struct gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence
{
  gazebo_msgs__srv__SetPhysicsProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetPhysicsProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPhysicsProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetPhysicsProperties_Response
{
  /// return true if set wrench successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SetPhysicsProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__SetPhysicsProperties_Response.
typedef struct gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence
{
  gazebo_msgs__srv__SetPhysicsProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetPhysicsProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_PHYSICS_PROPERTIES__STRUCT_H_
