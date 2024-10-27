// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetLinkProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__STRUCT_H_

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

/// Struct defined in srv/GetLinkProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetLinkProperties_Request
{
  /// name of link
  /// link names are prefixed by model name, e.g. pr2::base_link
  rosidl_runtime_c__String link_name;
} gazebo_msgs__srv__GetLinkProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__GetLinkProperties_Request.
typedef struct gazebo_msgs__srv__GetLinkProperties_Request__Sequence
{
  gazebo_msgs__srv__GetLinkProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetLinkProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetLinkProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetLinkProperties_Response
{
  /// center of mass location in link frame
  /// and orientation of the moment of inertias
  /// relative to the link frame
  geometry_msgs__msg__Pose com;
  /// set gravity mode on/off
  bool gravity_mode;
  /// linear mass of link
  double mass;
  /// moment of inertia
  double ixx;
  /// moment of inertia
  double ixy;
  /// moment of inertia
  double ixz;
  /// moment of inertia
  double iyy;
  /// moment of inertia
  double iyz;
  /// moment of inertia
  double izz;
  /// return true if get info is successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__GetLinkProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__GetLinkProperties_Response.
typedef struct gazebo_msgs__srv__GetLinkProperties_Response__Sequence
{
  gazebo_msgs__srv__GetLinkProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetLinkProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LINK_PROPERTIES__STRUCT_H_
