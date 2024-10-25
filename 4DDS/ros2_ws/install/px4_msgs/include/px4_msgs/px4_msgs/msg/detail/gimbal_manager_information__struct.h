// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalManagerInformation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT = 1ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL = 2ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS = 4ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW = 8ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK = 16ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS = 32ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW = 64ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK = 128ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS = 256ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW = 512ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK = 1024ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW = 2048ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL = 65536ul
};

/// Constant 'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL'.
enum
{
  px4_msgs__msg__GimbalManagerInformation__GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL = 131072ul
};

/// Struct defined in msg/GimbalManagerInformation in the package px4_msgs.
typedef struct px4_msgs__msg__GimbalManagerInformation
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint32_t cap_flags;
  uint8_t gimbal_device_id;
  float roll_min;
  float roll_max;
  float pitch_min;
  float pitch_max;
  float yaw_min;
  float yaw_max;
} px4_msgs__msg__GimbalManagerInformation;

// Struct for a sequence of px4_msgs__msg__GimbalManagerInformation.
typedef struct px4_msgs__msg__GimbalManagerInformation__Sequence
{
  px4_msgs__msg__GimbalManagerInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GimbalManagerInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_INFORMATION__STRUCT_H_
