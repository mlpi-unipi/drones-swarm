// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__GEO_PING__STRUCT_H_
#define FDDS_MESSAGES__MSG__DETAIL__GEO_PING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GeoPing in the package fdds_messages.
typedef struct fdds_messages__msg__GeoPing
{
  uint8_t vehicle_id;
  double latitude_m;
  double longitude_m;
  float speed_north_m_s;
  float speed_east_m_s;
} fdds_messages__msg__GeoPing;

// Struct for a sequence of fdds_messages__msg__GeoPing.
typedef struct fdds_messages__msg__GeoPing__Sequence
{
  fdds_messages__msg__GeoPing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fdds_messages__msg__GeoPing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FDDS_MESSAGES__MSG__DETAIL__GEO_PING__STRUCT_H_
