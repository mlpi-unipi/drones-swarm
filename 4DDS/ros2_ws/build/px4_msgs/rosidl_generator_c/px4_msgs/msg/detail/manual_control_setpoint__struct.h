// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ManualControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOURCE_UNKNOWN'.
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_UNKNOWN = 0
};

/// Constant 'SOURCE_RC'.
/**
  * radio control (input_rc)
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_RC = 1
};

/// Constant 'SOURCE_MAVLINK_0'.
/**
  * mavlink instance 0
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_MAVLINK_0 = 2
};

/// Constant 'SOURCE_MAVLINK_1'.
/**
  * mavlink instance 1
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_MAVLINK_1 = 3
};

/// Constant 'SOURCE_MAVLINK_2'.
/**
  * mavlink instance 2
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_MAVLINK_2 = 4
};

/// Constant 'SOURCE_MAVLINK_3'.
/**
  * mavlink instance 3
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_MAVLINK_3 = 5
};

/// Constant 'SOURCE_MAVLINK_4'.
/**
  * mavlink instance 4
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_MAVLINK_4 = 6
};

/// Constant 'SOURCE_MAVLINK_5'.
/**
  * mavlink instance 5
 */
enum
{
  px4_msgs__msg__ManualControlSetpoint__SOURCE_MAVLINK_5 = 7
};

/// Struct defined in msg/ManualControlSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__ManualControlSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  bool valid;
  uint8_t data_source;
  /// Any of the channels may not be available and be set to NaN
  /// to indicate that it does not contain valid data.
  /// Stick positions [-1,1]
  /// on a common RC mode 1/2/3/4 remote/joystick the stick deflection: -1 is down/left, 1 is up/right
  /// Note: QGC sends throttle/z in range [0,1000] - [0,1]. The MAVLink input conversion [0,1] to [-1,1] is at the moment kept backwards compatible.
  /// Positive values are generally used for:
  /// move right,   positive roll rotation,  right side down
  float roll;
  /// move forward, negative pitch rotation, nose down
  float pitch;
  /// positive yaw rotation,   clockwise when seen top down
  float yaw;
  /// move up,      positive thrust,         -1 is minimum available 0% or -100% +1 is 100% thrust
  float throttle;
  /// position of flaps switch/knob/lever [-1, 1]
  float flaps;
  float aux1;
  float aux2;
  float aux3;
  float aux4;
  float aux5;
  float aux6;
  bool sticks_moving;
} px4_msgs__msg__ManualControlSetpoint;

// Struct for a sequence of px4_msgs__msg__ManualControlSetpoint.
typedef struct px4_msgs__msg__ManualControlSetpoint__Sequence
{
  px4_msgs__msg__ManualControlSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ManualControlSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__STRUCT_H_
