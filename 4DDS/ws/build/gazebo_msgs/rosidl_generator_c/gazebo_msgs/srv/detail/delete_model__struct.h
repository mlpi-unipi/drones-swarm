// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/DeleteModel.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__DELETE_MODEL__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__DELETE_MODEL__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteModel in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteModel_Request
{
  /// name of the Gazebo Model to be deleted
  rosidl_runtime_c__String model_name;
} gazebo_msgs__srv__DeleteModel_Request;

// Struct for a sequence of gazebo_msgs__srv__DeleteModel_Request.
typedef struct gazebo_msgs__srv__DeleteModel_Request__Sequence
{
  gazebo_msgs__srv__DeleteModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteModel_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DeleteModel in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__DeleteModel_Response
{
  /// return true if deletion is successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__DeleteModel_Response;

// Struct for a sequence of gazebo_msgs__srv__DeleteModel_Response.
typedef struct gazebo_msgs__srv__DeleteModel_Response__Sequence
{
  gazebo_msgs__srv__DeleteModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__DeleteModel_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__DELETE_MODEL__STRUCT_H_
