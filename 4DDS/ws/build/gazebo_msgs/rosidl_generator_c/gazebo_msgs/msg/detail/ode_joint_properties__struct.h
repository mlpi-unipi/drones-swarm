// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'damping'
// Member 'hi_stop'
// Member 'lo_stop'
// Member 'erp'
// Member 'cfm'
// Member 'stop_erp'
// Member 'stop_cfm'
// Member 'fudge_factor'
// Member 'fmax'
// Member 'vel'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ODEJointProperties in the package gazebo_msgs.
/**
  * access to low level joint properties, change these at your own risk
 */
typedef struct gazebo_msgs__msg__ODEJointProperties
{
  /// joint damping
  rosidl_runtime_c__double__Sequence damping;
  /// joint limit
  rosidl_runtime_c__double__Sequence hi_stop;
  /// joint limit
  rosidl_runtime_c__double__Sequence lo_stop;
  /// set joint erp
  rosidl_runtime_c__double__Sequence erp;
  /// set joint cfm
  rosidl_runtime_c__double__Sequence cfm;
  /// set joint erp for joint limit "contact" joint
  rosidl_runtime_c__double__Sequence stop_erp;
  /// set joint cfm for joint limit "contact" joint
  rosidl_runtime_c__double__Sequence stop_cfm;
  /// joint fudge_factor applied at limits, see ODE manual for info.
  rosidl_runtime_c__double__Sequence fudge_factor;
  /// ode joint param fmax
  rosidl_runtime_c__double__Sequence fmax;
  /// ode joint param vel
  rosidl_runtime_c__double__Sequence vel;
} gazebo_msgs__msg__ODEJointProperties;

// Struct for a sequence of gazebo_msgs__msg__ODEJointProperties.
typedef struct gazebo_msgs__msg__ODEJointProperties__Sequence
{
  gazebo_msgs__msg__ODEJointProperties * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ODEJointProperties__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__STRUCT_H_
