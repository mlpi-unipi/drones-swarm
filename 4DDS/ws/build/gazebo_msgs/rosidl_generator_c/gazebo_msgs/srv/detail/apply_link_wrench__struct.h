// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/ApplyLinkWrench.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__APPLY_LINK_WRENCH__STRUCT_H_
#define GAZEBO_MSGS__SRV__DETAIL__APPLY_LINK_WRENCH__STRUCT_H_

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
// Member 'reference_frame'
#include "rosidl_runtime_c/string.h"
// Member 'reference_point'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/ApplyLinkWrench in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyLinkWrench_Request
{
  /// Gazebo link to apply wrench (linear force and torque)
  /// wrench is applied in the gazebo world by default
  /// link names are prefixed by model name, e.g. pr2::base_link
  rosidl_runtime_c__String link_name;
  /// wrench is defined in the reference frame of this entity
  /// use inertial frame if left empty
  /// frame names are links prefixed by model name, e.g. pr2::base_link
  rosidl_runtime_c__String reference_frame;
  /// wrench is defined at this location in the reference frame
  geometry_msgs__msg__Point reference_point;
  /// wrench applied to the origin of the link
  geometry_msgs__msg__Wrench wrench;
  /// (optional) wrench application start time (seconds)
  /// if start_time is not specified, or
  /// start_time < current time, start as soon as possible
  builtin_interfaces__msg__Time start_time;
  /// optional duration of wrench application time (seconds)
  /// if duration < 0, apply wrench continuously without end
  /// if duration = 0, do nothing
  /// if duration < step size, apply wrench
  /// for one step size
  builtin_interfaces__msg__Duration duration;
} gazebo_msgs__srv__ApplyLinkWrench_Request;

// Struct for a sequence of gazebo_msgs__srv__ApplyLinkWrench_Request.
typedef struct gazebo_msgs__srv__ApplyLinkWrench_Request__Sequence
{
  gazebo_msgs__srv__ApplyLinkWrench_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyLinkWrench_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ApplyLinkWrench in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyLinkWrench_Response
{
  /// return true if set wrench successful
  bool success;
  /// comments if available
  rosidl_runtime_c__String status_message;
} gazebo_msgs__srv__ApplyLinkWrench_Response;

// Struct for a sequence of gazebo_msgs__srv__ApplyLinkWrench_Response.
typedef struct gazebo_msgs__srv__ApplyLinkWrench_Response__Sequence
{
  gazebo_msgs__srv__ApplyLinkWrench_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyLinkWrench_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__DETAIL__APPLY_LINK_WRENCH__STRUCT_H_
