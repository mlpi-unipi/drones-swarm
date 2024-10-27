// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetModelList.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetModelList in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetModelList_Request
{
  uint8_t structure_needs_at_least_one_member;
} gazebo_msgs__srv__GetModelList_Request;

// Struct for a sequence of gazebo_msgs__srv__GetModelList_Request.
typedef struct gazebo_msgs__srv__GetModelList_Request__Sequence
{
  gazebo_msgs__srv__GetModelList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetModelList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'model_names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetModelList in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetModelList_Response
{
  /// Standard metadata for higher-level stamped data types.
  /// * header.stamp Simulation time when data was collected.
  std_msgs__msg__Header header;
  /// list of models in the world
  rosidl_runtime_c__String__Sequence model_names;
  /// return true if get successful
  bool success;
} gazebo_msgs__srv__GetModelList_Response;

// Struct for a sequence of gazebo_msgs__srv__GetModelList_Response.
typedef struct gazebo_msgs__srv__GetModelList_Response__Sequence
{
  gazebo_msgs__srv__GetModelList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetModelList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__STRUCT_H_
