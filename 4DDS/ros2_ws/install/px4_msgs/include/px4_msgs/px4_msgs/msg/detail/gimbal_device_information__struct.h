// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_RETRACT'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_RETRACT = 1ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_NEUTRAL'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_NEUTRAL = 2ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_AXIS'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_AXIS = 4ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_FOLLOW'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_FOLLOW = 8ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_LOCK'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_ROLL_LOCK = 16ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_AXIS'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_AXIS = 32ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_FOLLOW'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_FOLLOW = 64ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_LOCK'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_PITCH_LOCK = 128ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_AXIS'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_AXIS = 256ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_FOLLOW'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_FOLLOW = 512ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_LOCK'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_HAS_YAW_LOCK = 1024ul
};

/// Constant 'GIMBAL_DEVICE_CAP_FLAGS_SUPPORTS_INFINITE_YAW'.
enum
{
  px4_msgs__msg__GimbalDeviceInformation__GIMBAL_DEVICE_CAP_FLAGS_SUPPORTS_INFINITE_YAW = 2048ul
};

/// Struct defined in msg/GimbalDeviceInformation in the package px4_msgs.
typedef struct px4_msgs__msg__GimbalDeviceInformation
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t vendor_name[32];
  uint8_t model_name[32];
  uint8_t custom_name[32];
  uint32_t firmware_version;
  uint32_t hardware_version;
  uint64_t uid;
  uint16_t cap_flags;
  uint16_t custom_cap_flags;
  float roll_min;
  float roll_max;
  float pitch_min;
  float pitch_max;
  float yaw_min;
  float yaw_max;
  uint8_t gimbal_device_compid;
} px4_msgs__msg__GimbalDeviceInformation;

// Struct for a sequence of px4_msgs__msg__GimbalDeviceInformation.
typedef struct px4_msgs__msg__GimbalDeviceInformation__Sequence
{
  px4_msgs__msg__GimbalDeviceInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GimbalDeviceInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_DEVICE_INFORMATION__STRUCT_H_
