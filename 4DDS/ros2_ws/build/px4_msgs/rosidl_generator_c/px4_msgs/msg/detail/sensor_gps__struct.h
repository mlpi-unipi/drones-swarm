// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorGps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GPS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'JAMMING_STATE_UNKNOWN'.
enum
{
  px4_msgs__msg__SensorGps__JAMMING_STATE_UNKNOWN = 0
};

/// Constant 'JAMMING_STATE_OK'.
enum
{
  px4_msgs__msg__SensorGps__JAMMING_STATE_OK = 1
};

/// Constant 'JAMMING_STATE_WARNING'.
enum
{
  px4_msgs__msg__SensorGps__JAMMING_STATE_WARNING = 2
};

/// Constant 'JAMMING_STATE_CRITICAL'.
enum
{
  px4_msgs__msg__SensorGps__JAMMING_STATE_CRITICAL = 3
};

/// Constant 'SPOOFING_STATE_UNKNOWN'.
enum
{
  px4_msgs__msg__SensorGps__SPOOFING_STATE_UNKNOWN = 0
};

/// Constant 'SPOOFING_STATE_NONE'.
enum
{
  px4_msgs__msg__SensorGps__SPOOFING_STATE_NONE = 1
};

/// Constant 'SPOOFING_STATE_INDICATED'.
enum
{
  px4_msgs__msg__SensorGps__SPOOFING_STATE_INDICATED = 2
};

/// Constant 'SPOOFING_STATE_MULTIPLE'.
enum
{
  px4_msgs__msg__SensorGps__SPOOFING_STATE_MULTIPLE = 3
};

/// Constant 'RTCM_MSG_USED_UNKNOWN'.
enum
{
  px4_msgs__msg__SensorGps__RTCM_MSG_USED_UNKNOWN = 0
};

/// Constant 'RTCM_MSG_USED_NOT_USED'.
enum
{
  px4_msgs__msg__SensorGps__RTCM_MSG_USED_NOT_USED = 1
};

/// Constant 'RTCM_MSG_USED_USED'.
enum
{
  px4_msgs__msg__SensorGps__RTCM_MSG_USED_USED = 2
};

/// Struct defined in msg/SensorGps in the package px4_msgs.
/**
  * GPS position in WGS84 coordinates.
  * the field 'timestamp' is for the position & velocity (microseconds)
 */
typedef struct px4_msgs__msg__SensorGps
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// Latitude in degrees, allows centimeter level RTK precision
  double latitude_deg;
  /// Longitude in degrees, allows centimeter level RTK precision
  double longitude_deg;
  /// Altitude above MSL, meters
  double altitude_msl_m;
  /// Altitude above Ellipsoid, meters
  double altitude_ellipsoid_m;
  /// GPS speed accuracy estimate, (metres/sec)
  float s_variance_m_s;
  /// GPS course accuracy estimate, (radians)
  float c_variance_rad;
  /// 0-1: no fix, 2: 2D fix, 3: 3D fix, 4: RTCM code differential, 5: Real-Time Kinematic, float, 6: Real-Time Kinematic, fixed, 8: Extrapolated. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
  uint8_t fix_type;
  /// GPS horizontal position accuracy (metres)
  float eph;
  /// GPS vertical position accuracy (metres)
  float epv;
  /// Horizontal dilution of precision
  float hdop;
  /// Vertical dilution of precision
  float vdop;
  /// GPS noise per millisecond
  int32_t noise_per_ms;
  /// Automatic gain control monitor
  uint16_t automatic_gain_control;
  /// indicates whether jamming has been detected or suspected by the receivers. O: Unknown, 1: OK, 2: Warning, 3: Critical
  uint8_t jamming_state;
  /// indicates jamming is occurring
  int32_t jamming_indicator;
  /// indicates whether spoofing has been detected or suspected by the receivers. O: Unknown, 1: OK, 2: Warning, 3: Critical
  uint8_t spoofing_state;
  /// GPS ground speed, (metres/sec)
  float vel_m_s;
  /// GPS North velocity, (metres/sec)
  float vel_n_m_s;
  /// GPS East velocity, (metres/sec)
  float vel_e_m_s;
  /// GPS Down velocity, (metres/sec)
  float vel_d_m_s;
  /// Course over ground (NOT heading, but direction of movement), -PI..PI, (radians)
  float cog_rad;
  /// True if NED velocity is valid
  bool vel_ned_valid;
  /// timestamp + timestamp_time_relative = Time of the UTC timestamp since system start, (microseconds)
  int32_t timestamp_time_relative;
  /// Timestamp (microseconds, UTC), this is the timestamp which comes from the gps module. It might be unavailable right after cold start, indicated by a value of 0
  uint64_t time_utc_usec;
  /// Number of satellites used
  uint8_t satellites_used;
  /// heading angle of XYZ body frame rel to NED. Set to NaN if not available and updated (used for dual antenna GPS), (rad, [-PI, PI])
  float heading;
  /// heading offset of dual antenna array in body frame. Set to NaN if not applicable. (rad, [-PI, PI])
  float heading_offset;
  /// heading accuracy (rad, [0, 2PI])
  float heading_accuracy;
  /// RTCM message injection rate Hz
  float rtcm_injection_rate;
  /// uorb instance that is being used for RTCM corrections
  uint8_t selected_rtcm_instance;
  /// RTCM message CRC failure detected
  bool rtcm_crc_failed;
  /// Indicates if the RTCM message was used successfully by the receiver
  uint8_t rtcm_msg_used;
} px4_msgs__msg__SensorGps;

// Struct for a sequence of px4_msgs__msg__SensorGps.
typedef struct px4_msgs__msg__SensorGps__Sequence
{
  px4_msgs__msg__SensorGps * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorGps__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GPS__STRUCT_H_
