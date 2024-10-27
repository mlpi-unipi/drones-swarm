// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INPUT_RC__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__INPUT_RC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RC_INPUT_SOURCE_UNKNOWN'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_UNKNOWN = 0
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_PPM'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_PPM = 1
};

/// Constant 'RC_INPUT_SOURCE_PX4IO_PPM'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4IO_PPM = 2
};

/// Constant 'RC_INPUT_SOURCE_PX4IO_SPEKTRUM'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4IO_SPEKTRUM = 3
};

/// Constant 'RC_INPUT_SOURCE_PX4IO_SBUS'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4IO_SBUS = 4
};

/// Constant 'RC_INPUT_SOURCE_PX4IO_ST24'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4IO_ST24 = 5
};

/// Constant 'RC_INPUT_SOURCE_MAVLINK'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_MAVLINK = 6
};

/// Constant 'RC_INPUT_SOURCE_QURT'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_QURT = 7
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_SPEKTRUM'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_SPEKTRUM = 8
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_SBUS'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_SBUS = 9
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_ST24'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_ST24 = 10
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_SUMD'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_SUMD = 11
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_DSM'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_DSM = 12
};

/// Constant 'RC_INPUT_SOURCE_PX4IO_SUMD'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4IO_SUMD = 13
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_CRSF'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_CRSF = 14
};

/// Constant 'RC_INPUT_SOURCE_PX4FMU_GHST'.
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_SOURCE_PX4FMU_GHST = 15
};

/// Constant 'RC_INPUT_MAX_CHANNELS'.
/**
  * Maximum number of R/C input channels in the system. S.Bus has up to 18 channels.
 */
enum
{
  px4_msgs__msg__InputRc__RC_INPUT_MAX_CHANNELS = 18
};

/// Constant 'RSSI_MAX'.
enum
{
  px4_msgs__msg__InputRc__RSSI_MAX = 100
};

/// Struct defined in msg/InputRc in the package px4_msgs.
typedef struct px4_msgs__msg__InputRc
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// last valid reception time
  uint64_t timestamp_last_signal;
  /// number of channels actually being seen
  uint8_t channel_count;
  /// receive signal strength indicator (RSSI): < 0: Undefined, 0: no signal, 100: full reception
  int32_t rssi;
  /// explicit failsafe flag: true on TX failure or TX out of range , false otherwise. Only the true state is reliable, as there are some (PPM) receivers on the market going into failsafe without telling us explicitly.
  bool rc_failsafe;
  /// RC receiver connection status: True,if no frame has arrived in the expected time, false otherwise. True usually means that the receiver has been disconnected, but can also indicate a radio link loss on "stupid" systems. Will remain false, if a RX with failsafe option continues to transmit frames after a link loss.
  bool rc_lost;
  /// Number of lost RC frames. Note: intended purpose: observe the radio link quality if RSSI is not available. This value must not be used to trigger any failsafe-alike functionality.
  uint16_t rc_lost_frame_count;
  /// Number of total RC frames. Note: intended purpose: observe the radio link quality if RSSI is not available. This value must not be used to trigger any failsafe-alike functionality.
  uint16_t rc_total_frame_count;
  /// Length of a single PPM frame. Zero for non-PPM systems
  uint16_t rc_ppm_frame_length;
  /// Input source
  uint8_t input_source;
  /// measured pulse widths for each of the supported channels
  uint16_t values[18];
  /// link quality. Percentage 0-100%. -1 = invalid
  int8_t link_quality;
  /// Actual rssi in units of dBm. NaN = invalid
  float rssi_dbm;
} px4_msgs__msg__InputRc;

// Struct for a sequence of px4_msgs__msg__InputRc.
typedef struct px4_msgs__msg__InputRc__Sequence
{
  px4_msgs__msg__InputRc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__InputRc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__INPUT_RC__STRUCT_H_
