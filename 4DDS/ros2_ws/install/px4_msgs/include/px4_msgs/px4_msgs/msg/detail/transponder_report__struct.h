// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PX4_ADSB_FLAGS_VALID_COORDS'.
/**
  * ADSB flags
 */
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_COORDS = 1
};

/// Constant 'PX4_ADSB_FLAGS_VALID_ALTITUDE'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_ALTITUDE = 2
};

/// Constant 'PX4_ADSB_FLAGS_VALID_HEADING'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_HEADING = 4
};

/// Constant 'PX4_ADSB_FLAGS_VALID_VELOCITY'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_VELOCITY = 8
};

/// Constant 'PX4_ADSB_FLAGS_VALID_CALLSIGN'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_CALLSIGN = 16
};

/// Constant 'PX4_ADSB_FLAGS_VALID_SQUAWK'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_VALID_SQUAWK = 32
};

/// Constant 'PX4_ADSB_FLAGS_RETRANSLATE'.
enum
{
  px4_msgs__msg__TransponderReport__PX4_ADSB_FLAGS_RETRANSLATE = 256
};

/// Constant 'ADSB_EMITTER_TYPE_NO_INFO'.
/**
  * ADSB Emitter Data:
  * from mavlink/v2.0/common/common.h
 */
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_NO_INFO = 0
};

/// Constant 'ADSB_EMITTER_TYPE_LIGHT'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_LIGHT = 1
};

/// Constant 'ADSB_EMITTER_TYPE_SMALL'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_SMALL = 2
};

/// Constant 'ADSB_EMITTER_TYPE_LARGE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_LARGE = 3
};

/// Constant 'ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE = 4
};

/// Constant 'ADSB_EMITTER_TYPE_HEAVY'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_HEAVY = 5
};

/// Constant 'ADSB_EMITTER_TYPE_HIGHLY_MANUV'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_HIGHLY_MANUV = 6
};

/// Constant 'ADSB_EMITTER_TYPE_ROTOCRAFT'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_ROTOCRAFT = 7
};

/// Constant 'ADSB_EMITTER_TYPE_UNASSIGNED'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UNASSIGNED = 8
};

/// Constant 'ADSB_EMITTER_TYPE_GLIDER'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_GLIDER = 9
};

/// Constant 'ADSB_EMITTER_TYPE_LIGHTER_AIR'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_LIGHTER_AIR = 10
};

/// Constant 'ADSB_EMITTER_TYPE_PARACHUTE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_PARACHUTE = 11
};

/// Constant 'ADSB_EMITTER_TYPE_ULTRA_LIGHT'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_ULTRA_LIGHT = 12
};

/// Constant 'ADSB_EMITTER_TYPE_UNASSIGNED2'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UNASSIGNED2 = 13
};

/// Constant 'ADSB_EMITTER_TYPE_UAV'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UAV = 14
};

/// Constant 'ADSB_EMITTER_TYPE_SPACE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_SPACE = 15
};

/// Constant 'ADSB_EMITTER_TYPE_UNASSGINED3'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_UNASSGINED3 = 16
};

/// Constant 'ADSB_EMITTER_TYPE_EMERGENCY_SURFACE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_EMERGENCY_SURFACE = 17
};

/// Constant 'ADSB_EMITTER_TYPE_SERVICE_SURFACE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_SERVICE_SURFACE = 18
};

/// Constant 'ADSB_EMITTER_TYPE_POINT_OBSTACLE'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_POINT_OBSTACLE = 19
};

/// Constant 'ADSB_EMITTER_TYPE_ENUM_END'.
enum
{
  px4_msgs__msg__TransponderReport__ADSB_EMITTER_TYPE_ENUM_END = 20
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__TransponderReport__ORB_QUEUE_LENGTH = 16
};

/// Struct defined in msg/TransponderReport in the package px4_msgs.
typedef struct px4_msgs__msg__TransponderReport
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// ICAO address
  uint32_t icao_address;
  /// Latitude, expressed as degrees
  double lat;
  /// Longitude, expressed as degrees
  double lon;
  /// Type from ADSB_ALTITUDE_TYPE enum
  uint8_t altitude_type;
  /// Altitude(ASL) in meters
  float altitude;
  /// Course over ground in radians, -pi to +pi, 0 is north
  float heading;
  /// The horizontal velocity in m/s
  float hor_velocity;
  /// The vertical velocity in m/s, positive is up
  float ver_velocity;
  /// The callsign, 8+null
  uint8_t callsign[9];
  /// Type from ADSB_EMITTER_TYPE enum
  uint8_t emitter_type;
  /// Time since last communication in seconds
  uint8_t tslc;
  /// Flags to indicate various statuses including valid data fields
  uint16_t flags;
  /// Squawk code
  uint16_t squawk;
  /// Unique UAS ID
  uint8_t uas_id[18];
} px4_msgs__msg__TransponderReport;

// Struct for a sequence of px4_msgs__msg__TransponderReport.
typedef struct px4_msgs__msg__TransponderReport__Sequence
{
  px4_msgs__msg__TransponderReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TransponderReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_H_
