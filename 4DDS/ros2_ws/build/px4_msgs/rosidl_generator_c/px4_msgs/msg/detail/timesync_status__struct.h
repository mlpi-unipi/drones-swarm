// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TimesyncStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOURCE_PROTOCOL_UNKNOWN'.
enum
{
  px4_msgs__msg__TimesyncStatus__SOURCE_PROTOCOL_UNKNOWN = 0
};

/// Constant 'SOURCE_PROTOCOL_MAVLINK'.
enum
{
  px4_msgs__msg__TimesyncStatus__SOURCE_PROTOCOL_MAVLINK = 1
};

/// Constant 'SOURCE_PROTOCOL_DDS'.
enum
{
  px4_msgs__msg__TimesyncStatus__SOURCE_PROTOCOL_DDS = 2
};

/// Struct defined in msg/TimesyncStatus in the package px4_msgs.
typedef struct px4_msgs__msg__TimesyncStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// timesync source
  uint8_t source_protocol;
  /// remote system timestamp (microseconds)
  uint64_t remote_timestamp;
  /// raw time offset directly observed from this timesync packet (microseconds)
  int64_t observed_offset;
  /// smoothed time offset between companion system and PX4 (microseconds)
  int64_t estimated_offset;
  /// round trip time of this timesync packet (microseconds)
  uint32_t round_trip_time;
} px4_msgs__msg__TimesyncStatus;

// Struct for a sequence of px4_msgs__msg__TimesyncStatus.
typedef struct px4_msgs__msg__TimesyncStatus__Sequence
{
  px4_msgs__msg__TimesyncStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TimesyncStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TIMESYNC_STATUS__STRUCT_H_
