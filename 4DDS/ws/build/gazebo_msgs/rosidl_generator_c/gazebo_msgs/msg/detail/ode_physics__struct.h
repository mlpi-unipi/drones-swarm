// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ODEPhysics in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__ODEPhysics
{
  /// enable auto disabling of bodies, default false
  bool auto_disable_bodies;
  /// preconditioning inner iterations when uisng projected Gauss Seidel
  uint32_t sor_pgs_precon_iters;
  /// inner iterations when uisng projected Gauss Seidel
  uint32_t sor_pgs_iters;
  /// relaxation parameter when using projected Gauss Seidel, 1 = no relaxation
  double sor_pgs_w;
  /// rms error tolerance before stopping inner iterations
  double sor_pgs_rms_error_tol;
  /// contact "dead-band" width
  double contact_surface_layer;
  /// contact maximum correction velocity
  double contact_max_correcting_vel;
  /// global constraint force mixing
  double cfm;
  /// global error reduction parameter
  double erp;
  /// maximum contact joints between two geoms
  uint32_t max_contacts;
} gazebo_msgs__msg__ODEPhysics;

// Struct for a sequence of gazebo_msgs__msg__ODEPhysics.
typedef struct gazebo_msgs__msg__ODEPhysics__Sequence
{
  gazebo_msgs__msg__ODEPhysics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ODEPhysics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_H_
