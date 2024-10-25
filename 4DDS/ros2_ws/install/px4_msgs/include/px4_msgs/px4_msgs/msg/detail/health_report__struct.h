// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/HealthReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HealthReport in the package px4_msgs.
typedef struct px4_msgs__msg__HealthReport
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// bitfield for each flight mode (NAVIGATION_STATE_*) if arming is possible
  uint64_t can_arm_mode_flags;
  /// bitfield for each flight mode if it can run
  uint64_t can_run_mode_flags;
  /// flags for each health_component_t
  uint64_t health_is_present_flags;
  uint64_t health_warning_flags;
  uint64_t health_error_flags;
  /// A component is required but missing, if present==0 and error==1
  uint64_t arming_check_warning_flags;
  uint64_t arming_check_error_flags;
} px4_msgs__msg__HealthReport;

// Struct for a sequence of px4_msgs__msg__HealthReport.
typedef struct px4_msgs__msg__HealthReport__Sequence
{
  px4_msgs__msg__HealthReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__HealthReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__HEALTH_REPORT__STRUCT_H_
