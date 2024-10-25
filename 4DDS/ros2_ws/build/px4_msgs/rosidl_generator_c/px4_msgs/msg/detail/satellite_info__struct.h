// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SatelliteInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SAT_INFO_MAX_SATELLITES'.
enum
{
  px4_msgs__msg__SatelliteInfo__SAT_INFO_MAX_SATELLITES = 20
};

/// Struct defined in msg/SatelliteInfo in the package px4_msgs.
typedef struct px4_msgs__msg__SatelliteInfo
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Number of satellites visible to the receiver
  uint8_t count;
  /// Space vehicle ID, see scheme below
  uint8_t svid[20];
  /// 0: Satellite not used, 1: used for navigation
  uint8_t used[20];
  /// Elevation (0: right on top of receiver, 90: on the horizon) of satellite
  uint8_t elevation[20];
  /// Direction of satellite, 0: 0 deg, 255: 360 deg.
  uint8_t azimuth[20];
  /// dBHz, Signal to noise ratio of satellite C/N0, range 0..99, zero when not tracking this satellite.
  uint8_t snr[20];
  /// Satellite PRN code assignment, (psuedorandom number SBAS, valid codes are 120-144)
  uint8_t prn[20];
} px4_msgs__msg__SatelliteInfo;

// Struct for a sequence of px4_msgs__msg__SatelliteInfo.
typedef struct px4_msgs__msg__SatelliteInfo__Sequence
{
  px4_msgs__msg__SatelliteInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SatelliteInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__STRUCT_H_
