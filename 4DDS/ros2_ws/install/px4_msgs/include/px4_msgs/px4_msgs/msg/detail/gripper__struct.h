// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Gripper.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GRIPPER__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMMAND_GRAB'.
enum
{
  px4_msgs__msg__Gripper__COMMAND_GRAB = 0
};

/// Constant 'COMMAND_RELEASE'.
enum
{
  px4_msgs__msg__Gripper__COMMAND_RELEASE = 1
};

/// Struct defined in msg/Gripper in the package px4_msgs.
/**
  * Used to command an actuation in the gripper, which is mapped to a specific output in the control allocation module
 */
typedef struct px4_msgs__msg__Gripper
{
  uint64_t timestamp;
  /// Commanded state for the gripper
  int8_t command;
} px4_msgs__msg__Gripper;

// Struct for a sequence of px4_msgs__msg__Gripper.
typedef struct px4_msgs__msg__Gripper__Sequence
{
  px4_msgs__msg__Gripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Gripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GRIPPER__STRUCT_H_
