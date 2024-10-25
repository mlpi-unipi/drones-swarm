// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetWorldProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetWorldProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetWorldProperties_Request
{
  uint8_t structure_needs_at_least_one_member;
} gazebo_msgs__srv__GetWorldProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__GetWorldProperties_Request.
typedef struct gazebo_msgs__srv__GetWorldProperties_Request__Sequence
{
  gazebo_msgs__srv__GetWorldProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetWorldProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'model_names'
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetWorldProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetWorldProperties_Response
{
  /// current sim time
  double sim_time;
  /// list of models in the world
  rosidl_runtime_c__String__Sequence model_names;
  /// if X is used
  bool rendering_enabled;
  /// return true if get successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__GetWorldProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__GetWorldProperties_Response.
typedef struct gazebo_msgs__srv__GetWorldProperties_Response__Sequence
{
  gazebo_msgs__srv__GetWorldProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetWorldProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_WORLD_PROPERTIES__STRUCT_H_
