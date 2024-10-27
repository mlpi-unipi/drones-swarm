// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetModelConfiguration.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__STRUCT_H_

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
// Member 'urdf_param_name'
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'joint_positions'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetModelConfiguration in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetModelConfiguration_Request
{
  /// model to set state
  rosidl_runtime_c__String model_name;
  /// UNUSED
  rosidl_runtime_c__String urdf_param_name;
  /// list of joints to set positions.  if joint is not listed here, preserve current position.
  rosidl_runtime_c__String__Sequence joint_names;
  /// set to this position.
  rosidl_runtime_c__double__Sequence joint_positions;
} gazebo_msgs__srv__SetModelConfiguration_Request;

// Struct for a sequence of gazebo_msgs__srv__SetModelConfiguration_Request.
typedef struct gazebo_msgs__srv__SetModelConfiguration_Request__Sequence
{
  gazebo_msgs__srv__SetModelConfiguration_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetModelConfiguration_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetModelConfiguration in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetModelConfiguration_Response
{
  /// return true if setting state successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__SetModelConfiguration_Response;

// Struct for a sequence of gazebo_msgs__srv__SetModelConfiguration_Response.
typedef struct gazebo_msgs__srv__SetModelConfiguration_Response__Sequence
{
  gazebo_msgs__srv__SetModelConfiguration_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetModelConfiguration_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__STRUCT_H_
