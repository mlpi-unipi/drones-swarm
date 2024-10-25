// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorGnssRelative in the package px4_msgs.
/**
  * GNSS relative positioning information in NED frame. The NED frame is defined as the local topological system at the reference station.
 */
typedef struct px4_msgs__msg__SensorGnssRelative
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// time since system start (microseconds)
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// Timestamp (microseconds, UTC), this is the timestamp which comes from the gps module. It might be unavailable right after cold start, indicated by a value of 0
  uint64_t time_utc_usec;
  /// Reference Station ID
  uint16_t reference_station_id;
  /// GPS NED relative position vector (m)
  float position[3];
  /// Accuracy of relative position (m)
  float position_accuracy[3];
  /// Heading of the relative position vector (radians)
  float heading;
  /// Accuracy of heading of the relative position vector (radians)
  float heading_accuracy;
  /// Length of the position vector (m)
  float position_length;
  /// Accuracy of the position length (m)
  float accuracy_length;
  /// GNSS valid fix (i.e within DOP & accuracy masks)
  bool gnss_fix_ok;
  /// differential corrections were applied
  bool differential_solution;
  bool relative_position_valid;
  /// carrier phase range solution with floating ambiguities
  bool carrier_solution_floating;
  /// carrier phase range solution with fixed ambiguities
  bool carrier_solution_fixed;
  /// if the receiver is operating in moving base mode
  bool moving_base_mode;
  /// extrapolated reference position was used to compute moving base solution this epoch
  bool reference_position_miss;
  /// extrapolated reference observations were used to compute moving base solution this epoch
  bool reference_observations_miss;
  bool heading_valid;
  /// the components of the relative position vector (including the high-precision parts) are normalized
  bool relative_position_normalized;
} px4_msgs__msg__SensorGnssRelative;

// Struct for a sequence of px4_msgs__msg__SensorGnssRelative.
typedef struct px4_msgs__msg__SensorGnssRelative__Sequence
{
  px4_msgs__msg__SensorGnssRelative * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorGnssRelative__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__STRUCT_H_
