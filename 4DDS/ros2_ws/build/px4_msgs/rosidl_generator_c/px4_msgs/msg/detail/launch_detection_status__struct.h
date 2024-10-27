// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LaunchDetectionStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LAUNCH_DETECTION_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__LAUNCH_DETECTION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_WAITING_FOR_LAUNCH'.
/**
  * waiting for launch
 */
enum
{
  px4_msgs__msg__LaunchDetectionStatus__STATE_WAITING_FOR_LAUNCH = 0
};

/// Constant 'STATE_LAUNCH_DETECTED_DISABLED_MOTOR'.
/**
  * launch detected, but keep motor(s) disabled (e.g. because it can't spin freely while on catapult)
 */
enum
{
  px4_msgs__msg__LaunchDetectionStatus__STATE_LAUNCH_DETECTED_DISABLED_MOTOR = 1
};

/// Constant 'STATE_FLYING'.
/**
  * launch detected, use normal takeoff/flying configuration
 */
enum
{
  px4_msgs__msg__LaunchDetectionStatus__STATE_FLYING = 2
};

/// Struct defined in msg/LaunchDetectionStatus in the package px4_msgs.
/**
  * Status of the launch detection state machine (fixed-wing only)
 */
typedef struct px4_msgs__msg__LaunchDetectionStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t launch_detection_state;
} px4_msgs__msg__LaunchDetectionStatus;

// Struct for a sequence of px4_msgs__msg__LaunchDetectionStatus.
typedef struct px4_msgs__msg__LaunchDetectionStatus__Sequence
{
  px4_msgs__msg__LaunchDetectionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LaunchDetectionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__LAUNCH_DETECTION_STATUS__STRUCT_H_
