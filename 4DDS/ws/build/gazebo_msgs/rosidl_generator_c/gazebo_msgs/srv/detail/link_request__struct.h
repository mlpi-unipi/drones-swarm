// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/LinkRequest.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LinkRequest in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__LinkRequest_Request
{
  /// name of the link requested. link names are prefixed by model name, e.g. pr2::base_link
  rosidl_runtime_c__String link_name;
} gazebo_msgs__srv__LinkRequest_Request;

// Struct for a sequence of gazebo_msgs__srv__LinkRequest_Request.
typedef struct gazebo_msgs__srv__LinkRequest_Request__Sequence
{
  gazebo_msgs__srv__LinkRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__LinkRequest_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/LinkRequest in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__LinkRequest_Response
{
  uint8_t structure_needs_at_least_one_member;
} gazebo_msgs__srv__LinkRequest_Response;

// Struct for a sequence of gazebo_msgs__srv__LinkRequest_Response.
typedef struct gazebo_msgs__srv__LinkRequest_Response__Sequence
{
  gazebo_msgs__srv__LinkRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__LinkRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__STRUCT_H_
