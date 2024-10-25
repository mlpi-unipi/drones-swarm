// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalManagerSetManualControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GIMBAL_MANAGER_FLAGS_RETRACT'.
enum
{
  px4_msgs__msg__GimbalManagerSetManualControl__GIMBAL_MANAGER_FLAGS_RETRACT = 1ul
};

/// Constant 'GIMBAL_MANAGER_FLAGS_NEUTRAL'.
enum
{
  px4_msgs__msg__GimbalManagerSetManualControl__GIMBAL_MANAGER_FLAGS_NEUTRAL = 2ul
};

/// Constant 'GIMBAL_MANAGER_FLAGS_ROLL_LOCK'.
enum
{
  px4_msgs__msg__GimbalManagerSetManualControl__GIMBAL_MANAGER_FLAGS_ROLL_LOCK = 4ul
};

/// Constant 'GIMBAL_MANAGER_FLAGS_PITCH_LOCK'.
enum
{
  px4_msgs__msg__GimbalManagerSetManualControl__GIMBAL_MANAGER_FLAGS_PITCH_LOCK = 8ul
};

/// Constant 'GIMBAL_MANAGER_FLAGS_YAW_LOCK'.
enum
{
  px4_msgs__msg__GimbalManagerSetManualControl__GIMBAL_MANAGER_FLAGS_YAW_LOCK = 16ul
};

/// Struct defined in msg/GimbalManagerSetManualControl in the package px4_msgs.
typedef struct px4_msgs__msg__GimbalManagerSetManualControl
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t origin_sysid;
  uint8_t origin_compid;
  uint8_t target_system;
  uint8_t target_component;
  uint32_t flags;
  uint8_t gimbal_device_id;
  /// unitless -1..1, can be NAN
  float pitch;
  /// unitless -1..1, can be NAN
  float yaw;
  /// unitless -1..1, can be NAN
  float pitch_rate;
  /// unitless -1..1, can be NAN
  float yaw_rate;
} px4_msgs__msg__GimbalManagerSetManualControl;

// Struct for a sequence of px4_msgs__msg__GimbalManagerSetManualControl.
typedef struct px4_msgs__msg__GimbalManagerSetManualControl__Sequence
{
  px4_msgs__msg__GimbalManagerSetManualControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GimbalManagerSetManualControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__STRUCT_H_
