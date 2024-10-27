// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "gazebo_msgs/msg/detail/entity_state__struct.h"

/// Struct defined in srv/SetEntityState in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetEntityState_Request
{
  /// Entity state to set to.
  /// Be sure to fill all fields, values of zero have meaning.
  gazebo_msgs__msg__EntityState state;
} gazebo_msgs__srv__SetEntityState_Request;

// Struct for a sequence of gazebo_msgs__srv__SetEntityState_Request.
typedef struct gazebo_msgs__srv__SetEntityState_Request__Sequence
{
  gazebo_msgs__srv__SetEntityState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetEntityState_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetEntityState in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__SetEntityState_Response
{
  /// Return true if setting state was successful.
  bool success;
} gazebo_msgs__srv__SetEntityState_Response;

// Struct for a sequence of gazebo_msgs__srv__SetEntityState_Response.
typedef struct gazebo_msgs__srv__SetEntityState_Response__Sequence
{
  gazebo_msgs__srv__SetEntityState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__SetEntityState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__STRUCT_H_
