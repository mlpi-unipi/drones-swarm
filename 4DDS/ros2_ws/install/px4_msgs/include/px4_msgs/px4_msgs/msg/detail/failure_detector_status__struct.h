// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FailureDetectorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__FailureDetectorStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// FailureDetector status
  bool fd_roll;
  bool fd_pitch;
  bool fd_alt;
  bool fd_ext;
  bool fd_arm_escs;
  bool fd_battery;
  bool fd_imbalanced_prop;
  bool fd_motor;
  /// Metric of the imbalanced propeller check (low-passed)
  float imbalanced_prop_metric;
  /// Bit-mask with motor indices, indicating critical motor failures
  uint16_t motor_failure_mask;
} px4_msgs__msg__FailureDetectorStatus;

// Struct for a sequence of px4_msgs__msg__FailureDetectorStatus.
typedef struct px4_msgs__msg__FailureDetectorStatus__Sequence
{
  px4_msgs__msg__FailureDetectorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FailureDetectorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FAILURE_DETECTOR_STATUS__STRUCT_H_
