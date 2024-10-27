// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalDeviceSetAttitude.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_SET_ATTITUDE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_SET_ATTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GIMBAL_DEVICE_FLAGS_RETRACT'.
enum
{
  px4_msgs__msg__GimbalDeviceSetAttitude__GIMBAL_DEVICE_FLAGS_RETRACT = 1ul
};

/// Constant 'GIMBAL_DEVICE_FLAGS_NEUTRAL'.
enum
{
  px4_msgs__msg__GimbalDeviceSetAttitude__GIMBAL_DEVICE_FLAGS_NEUTRAL = 2ul
};

/// Constant 'GIMBAL_DEVICE_FLAGS_ROLL_LOCK'.
enum
{
  px4_msgs__msg__GimbalDeviceSetAttitude__GIMBAL_DEVICE_FLAGS_ROLL_LOCK = 4ul
};

/// Constant 'GIMBAL_DEVICE_FLAGS_PITCH_LOCK'.
enum
{
  px4_msgs__msg__GimbalDeviceSetAttitude__GIMBAL_DEVICE_FLAGS_PITCH_LOCK = 8ul
};

/// Constant 'GIMBAL_DEVICE_FLAGS_YAW_LOCK'.
enum
{
  px4_msgs__msg__GimbalDeviceSetAttitude__GIMBAL_DEVICE_FLAGS_YAW_LOCK = 16ul
};

/// Struct defined in msg/GimbalDeviceSetAttitude in the package px4_msgs.
typedef struct px4_msgs__msg__GimbalDeviceSetAttitude
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t target_system;
  uint8_t target_component;
  uint16_t flags;
  float q[4];
  float angular_velocity_x;
  float angular_velocity_y;
  float angular_velocity_z;
} px4_msgs__msg__GimbalDeviceSetAttitude;

// Struct for a sequence of px4_msgs__msg__GimbalDeviceSetAttitude.
typedef struct px4_msgs__msg__GimbalDeviceSetAttitude__Sequence
{
  px4_msgs__msg__GimbalDeviceSetAttitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GimbalDeviceSetAttitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_SET_ATTITUDE__STRUCT_H_
