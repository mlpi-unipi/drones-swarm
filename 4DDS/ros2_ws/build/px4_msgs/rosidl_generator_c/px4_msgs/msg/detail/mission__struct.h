// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Mission in the package px4_msgs.
typedef struct px4_msgs__msg__Mission
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// default 0, there are two offboard storage places in the dataman: 0 or 1
  uint8_t mission_dataman_id;
  /// default 0, there are two offboard storage places in the dataman: 0 or 1
  uint8_t fence_dataman_id;
  /// default 0, there are two offboard storage places in the dataman: 0 or 1
  uint8_t safepoint_dataman_id;
  /// count of the missions stored in the dataman
  uint16_t count;
  /// default -1, start at the one changed latest
  int32_t current_seq;
  /// Index of the land start marker, if unavailable index of the land item, -1 otherwise
  int32_t land_start_index;
  /// Index of the land item, -1 otherwise
  int32_t land_index;
  /// indicates updates to the mission, reload from dataman if changed
  uint32_t mission_id;
  /// indicates updates to the geofence, reload from dataman if changed
  uint32_t geofence_id;
  /// indicates updates to the safe points, reload from dataman if changed
  uint32_t safe_points_id;
} px4_msgs__msg__Mission;

// Struct for a sequence of px4_msgs__msg__Mission.
typedef struct px4_msgs__msg__Mission__Sequence
{
  px4_msgs__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__MISSION__STRUCT_H_
