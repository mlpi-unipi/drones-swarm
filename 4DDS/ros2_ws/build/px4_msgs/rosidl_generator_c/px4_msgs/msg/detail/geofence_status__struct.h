// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GeofenceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GEOFENCE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GEOFENCE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GF_STATUS_LOADING'.
enum
{
  px4_msgs__msg__GeofenceStatus__GF_STATUS_LOADING = 0
};

/// Constant 'GF_STATUS_READY'.
enum
{
  px4_msgs__msg__GeofenceStatus__GF_STATUS_READY = 1
};

/// Struct defined in msg/GeofenceStatus in the package px4_msgs.
typedef struct px4_msgs__msg__GeofenceStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// loaded geofence id
  uint32_t geofence_id;
  /// Current geofence status
  uint8_t status;
} px4_msgs__msg__GeofenceStatus;

// Struct for a sequence of px4_msgs__msg__GeofenceStatus.
typedef struct px4_msgs__msg__GeofenceStatus__Sequence
{
  px4_msgs__msg__GeofenceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GeofenceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GEOFENCE_STATUS__STRUCT_H_
