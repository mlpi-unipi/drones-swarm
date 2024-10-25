// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalManagerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GimbalManagerStatus in the package px4_msgs.
typedef struct px4_msgs__msg__GimbalManagerStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint32_t flags;
  uint8_t gimbal_device_id;
  uint8_t primary_control_sysid;
  uint8_t primary_control_compid;
  uint8_t secondary_control_sysid;
  uint8_t secondary_control_compid;
} px4_msgs__msg__GimbalManagerStatus;

// Struct for a sequence of px4_msgs__msg__GimbalManagerStatus.
typedef struct px4_msgs__msg__GimbalManagerStatus__Sequence
{
  px4_msgs__msg__GimbalManagerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GimbalManagerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__STRUCT_H_
