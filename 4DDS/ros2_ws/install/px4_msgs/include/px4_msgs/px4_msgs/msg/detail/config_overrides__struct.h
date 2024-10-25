// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ConfigOverrides.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOURCE_TYPE_MODE'.
enum
{
  px4_msgs__msg__ConfigOverrides__SOURCE_TYPE_MODE = 0
};

/// Constant 'SOURCE_TYPE_MODE_EXECUTOR'.
enum
{
  px4_msgs__msg__ConfigOverrides__SOURCE_TYPE_MODE_EXECUTOR = 1
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__ConfigOverrides__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/ConfigOverrides in the package px4_msgs.
/**
  * Configurable overrides by (external) modes or mode executors
 */
typedef struct px4_msgs__msg__ConfigOverrides
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Prevent the drone from automatically disarming after landing (if configured)
  bool disable_auto_disarm;
  /// Defer all failsafes that can be deferred (until the flag is cleared)
  bool defer_failsafes;
  /// Maximum time a failsafe can be deferred. 0 = system default, -1 = no timeout
  int16_t defer_failsafes_timeout_s;
  int8_t source_type;
  /// ID depending on source_type
  uint8_t source_id;
} px4_msgs__msg__ConfigOverrides;

// Struct for a sequence of px4_msgs__msg__ConfigOverrides.
typedef struct px4_msgs__msg__ConfigOverrides__Sequence
{
  px4_msgs__msg__ConfigOverrides * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ConfigOverrides__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__STRUCT_H_
