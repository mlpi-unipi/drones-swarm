// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TuneControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TUNE_ID_STOP'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_STOP = 0
};

/// Constant 'TUNE_ID_STARTUP'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_STARTUP = 1
};

/// Constant 'TUNE_ID_ERROR'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_ERROR = 2
};

/// Constant 'TUNE_ID_NOTIFY_POSITIVE'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_NOTIFY_POSITIVE = 3
};

/// Constant 'TUNE_ID_NOTIFY_NEUTRAL'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_NOTIFY_NEUTRAL = 4
};

/// Constant 'TUNE_ID_NOTIFY_NEGATIVE'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_NOTIFY_NEGATIVE = 5
};

/// Constant 'TUNE_ID_ARMING_WARNING'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_ARMING_WARNING = 6
};

/// Constant 'TUNE_ID_BATTERY_WARNING_SLOW'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_BATTERY_WARNING_SLOW = 7
};

/// Constant 'TUNE_ID_BATTERY_WARNING_FAST'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_BATTERY_WARNING_FAST = 8
};

/// Constant 'TUNE_ID_GPS_WARNING'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_GPS_WARNING = 9
};

/// Constant 'TUNE_ID_ARMING_FAILURE'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_ARMING_FAILURE = 10
};

/// Constant 'TUNE_ID_PARACHUTE_RELEASE'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_PARACHUTE_RELEASE = 11
};

/// Constant 'TUNE_ID_SINGLE_BEEP'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_SINGLE_BEEP = 12
};

/// Constant 'TUNE_ID_HOME_SET'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_HOME_SET = 13
};

/// Constant 'TUNE_ID_SD_INIT'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_SD_INIT = 14
};

/// Constant 'TUNE_ID_SD_ERROR'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_SD_ERROR = 15
};

/// Constant 'TUNE_ID_PROG_PX4IO'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_PROG_PX4IO = 16
};

/// Constant 'TUNE_ID_PROG_PX4IO_OK'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_PROG_PX4IO_OK = 17
};

/// Constant 'TUNE_ID_PROG_PX4IO_ERR'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_PROG_PX4IO_ERR = 18
};

/// Constant 'TUNE_ID_POWER_OFF'.
enum
{
  px4_msgs__msg__TuneControl__TUNE_ID_POWER_OFF = 19
};

/// Constant 'NUMBER_OF_TUNES'.
enum
{
  px4_msgs__msg__TuneControl__NUMBER_OF_TUNES = 20
};

/// Constant 'VOLUME_LEVEL_MIN'.
enum
{
  px4_msgs__msg__TuneControl__VOLUME_LEVEL_MIN = 0
};

/// Constant 'VOLUME_LEVEL_DEFAULT'.
enum
{
  px4_msgs__msg__TuneControl__VOLUME_LEVEL_DEFAULT = 20
};

/// Constant 'VOLUME_LEVEL_MAX'.
enum
{
  px4_msgs__msg__TuneControl__VOLUME_LEVEL_MAX = 100
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__TuneControl__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/TuneControl in the package px4_msgs.
/**
  * This message is used to control the tunes, when the tune_id is set to CUSTOM
  * then the frequency, duration are used otherwise those values are ignored.
 */
typedef struct px4_msgs__msg__TuneControl
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// tune_id corresponding to TuneID::* from the tune_defaults.h in the tunes library
  uint8_t tune_id;
  /// if true the tune which is playing will be stopped and the new started
  bool tune_override;
  /// in Hz
  uint16_t frequency;
  /// in us
  uint32_t duration;
  /// in us
  uint32_t silence;
  /// value between 0-100 if supported by backend
  uint8_t volume;
} px4_msgs__msg__TuneControl;

// Struct for a sequence of px4_msgs__msg__TuneControl.
typedef struct px4_msgs__msg__TuneControl__Sequence
{
  px4_msgs__msg__TuneControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TuneControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__STRUCT_H_
