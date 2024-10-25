// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_JOINT_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__GET_JOINT_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetJointProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetJointProperties_Request
{
  /// Scoped name of joint
  rosidl_runtime_c__String joint_name;
} gazebo_msgs__srv__GetJointProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__GetJointProperties_Request.
typedef struct gazebo_msgs__srv__GetJointProperties_Request__Sequence
{
  gazebo_msgs__srv__GetJointProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetJointProperties_Request__Sequence;


// Constants defined in the message

/// Constant 'REVOLUTE'.
/**
  * single DOF
 */
enum
{
  gazebo_msgs__srv__GetJointProperties_Response__REVOLUTE = 0
};

/// Constant 'CONTINUOUS'.
/**
  * single DOF (revolute w/o limits)
 */
enum
{
  gazebo_msgs__srv__GetJointProperties_Response__CONTINUOUS = 1
};

/// Constant 'PRISMATIC'.
/**
  * single DOF
 */
enum
{
  gazebo_msgs__srv__GetJointProperties_Response__PRISMATIC = 2
};

/// Constant 'FIXED'.
/**
  * 0 DOF
 */
enum
{
  gazebo_msgs__srv__GetJointProperties_Response__FIXED = 3
};

/// Constant 'BALL'.
/**
  * 3 DOF movement, 0 DOF control
 */
enum
{
  gazebo_msgs__srv__GetJointProperties_Response__BALL = 4
};

/// Constant 'UNIVERSAL'.
/**
  * 2 DOF
 */
enum
{
  gazebo_msgs__srv__GetJointProperties_Response__UNIVERSAL = 5
};

// Include directives for member types
// Member 'damping'
// Member 'position'
// Member 'rate'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetJointProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetJointProperties_Response
{
  uint8_t type;
  /// dynamics properties
  rosidl_runtime_c__double__Sequence damping;
  /// joint state
  rosidl_runtime_c__double__Sequence position;
  /// TODO(chapulina) Rename to velocity
  rosidl_runtime_c__double__Sequence rate;
  /// service return status
  /// return true if get successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__GetJointProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__GetJointProperties_Response.
typedef struct gazebo_msgs__srv__GetJointProperties_Response__Sequence
{
  gazebo_msgs__srv__GetJointProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetJointProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_JOINT_PROPERTIES__STRUCT_H_
