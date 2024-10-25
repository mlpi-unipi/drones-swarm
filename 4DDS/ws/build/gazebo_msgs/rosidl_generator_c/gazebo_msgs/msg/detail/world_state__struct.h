// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__struct.h"

/// Struct defined in msg/WorldState in the package gazebo_msgs.
/**
  * This is a message that holds data necessary to reconstruct a snapshot of the world
  *
  * = Approach to Message Passing =
  * The state of the world is defined by either
  *   1. Inertial Model pose, twist
  *      * kinematic data - connectivity graph from Model to each Link
  *      * joint angles
  *      * joint velocities
  *      * Applied forces - Body wrench
  *        * relative transform from Body to each collision Geom
  * Or
  *   2. Inertial (absolute) Body pose, twist, wrench
  *      * relative transform from Body to each collision Geom - constant, so not sent over wire
  *      * back compute from canonical body info to get Model pose and twist.
  *
  * Chooing (2.) because it matches most physics engines out there
  *   and is simpler.
  *
  * = Future =
  * Consider impacts on using reduced coordinates / graph (parent/child links) approach
  *   constraint and physics solvers.
  *
  * = Application =
  * This message is used to do the following:
  *   * reconstruct the world and objects for sensor generation
  *   * stop / start simulation - need pose, twist, wrench of each body
  *   * collision detection - need pose of each collision geometry.  velocity/acceleration if
  *
  * = Assumptions =
  * Assuming that each (physics) processor node locally already has
  *   * collision information - Trimesh for Geoms, etc
  *   * relative transforms from Body to Geom - this is assumed to be fixed, do not send oved wire
  *   * inertial information - does not vary in time
  *   * visual information - does not vary in time
 */
typedef struct gazebo_msgs__msg__WorldState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence name;
  geometry_msgs__msg__Pose__Sequence pose;
  geometry_msgs__msg__Twist__Sequence twist;
  geometry_msgs__msg__Wrench__Sequence wrench;
} gazebo_msgs__msg__WorldState;

// Struct for a sequence of gazebo_msgs__msg__WorldState.
typedef struct gazebo_msgs__msg__WorldState__Sequence
{
  gazebo_msgs__msg__WorldState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__WorldState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__STRUCT_H_
