// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetPhysicsProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPhysicsProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetPhysicsProperties_Request
{
  uint8_t structure_needs_at_least_one_member;
} gazebo_msgs__srv__GetPhysicsProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__GetPhysicsProperties_Request.
typedef struct gazebo_msgs__srv__GetPhysicsProperties_Request__Sequence
{
  gazebo_msgs__srv__GetPhysicsProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetPhysicsProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'gravity'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'ode_config'
#include "gazebo_msgs/msg/detail/ode_physics__struct.h"
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetPhysicsProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetPhysicsProperties_Response
{
  /// dt in seconds
  double time_step;
  /// true if physics engine is paused
  bool pause;
  /// throttle maximum physics update rate
  double max_update_rate;
  /// gravity vector (e.g. earth ~[0,0,-9.81])
  geometry_msgs__msg__Vector3 gravity;
  /// contains physics configurations pertaining to ODE
  gazebo_msgs__msg__ODEPhysics ode_config;
  /// return true if set wrench successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__GetPhysicsProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__GetPhysicsProperties_Response.
typedef struct gazebo_msgs__srv__GetPhysicsProperties_Response__Sequence
{
  gazebo_msgs__srv__GetPhysicsProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetPhysicsProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__STRUCT_H_
