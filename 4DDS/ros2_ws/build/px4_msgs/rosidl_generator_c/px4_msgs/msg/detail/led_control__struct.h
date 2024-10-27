// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/LedControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COLOR_OFF'.
/**
  * colors
  * this is only used in the drivers
 */
enum
{
  px4_msgs__msg__LedControl__COLOR_OFF = 0
};

/// Constant 'COLOR_RED'.
enum
{
  px4_msgs__msg__LedControl__COLOR_RED = 1
};

/// Constant 'COLOR_GREEN'.
enum
{
  px4_msgs__msg__LedControl__COLOR_GREEN = 2
};

/// Constant 'COLOR_BLUE'.
enum
{
  px4_msgs__msg__LedControl__COLOR_BLUE = 3
};

/// Constant 'COLOR_YELLOW'.
enum
{
  px4_msgs__msg__LedControl__COLOR_YELLOW = 4
};

/// Constant 'COLOR_PURPLE'.
enum
{
  px4_msgs__msg__LedControl__COLOR_PURPLE = 5
};

/// Constant 'COLOR_AMBER'.
enum
{
  px4_msgs__msg__LedControl__COLOR_AMBER = 6
};

/// Constant 'COLOR_CYAN'.
enum
{
  px4_msgs__msg__LedControl__COLOR_CYAN = 7
};

/// Constant 'COLOR_WHITE'.
enum
{
  px4_msgs__msg__LedControl__COLOR_WHITE = 8
};

/// Constant 'MODE_OFF'.
/**
  * LED modes definitions
  * turn LED off
 */
enum
{
  px4_msgs__msg__LedControl__MODE_OFF = 0
};

/// Constant 'MODE_ON'.
/**
  * turn LED on
 */
enum
{
  px4_msgs__msg__LedControl__MODE_ON = 1
};

/// Constant 'MODE_DISABLED'.
/**
  * disable this priority (switch to lower priority setting)
 */
enum
{
  px4_msgs__msg__LedControl__MODE_DISABLED = 2
};

/// Constant 'MODE_BLINK_SLOW'.
enum
{
  px4_msgs__msg__LedControl__MODE_BLINK_SLOW = 3
};

/// Constant 'MODE_BLINK_NORMAL'.
enum
{
  px4_msgs__msg__LedControl__MODE_BLINK_NORMAL = 4
};

/// Constant 'MODE_BLINK_FAST'.
enum
{
  px4_msgs__msg__LedControl__MODE_BLINK_FAST = 5
};

/// Constant 'MODE_BREATHE'.
/**
  * continuously increase & decrease brightness (solid color if driver does not support it)
 */
enum
{
  px4_msgs__msg__LedControl__MODE_BREATHE = 6
};

/// Constant 'MODE_FLASH'.
/**
  * two fast blinks (on/off) with timing as in MODE_BLINK_FAST and then off for a while
 */
enum
{
  px4_msgs__msg__LedControl__MODE_FLASH = 7
};

/// Constant 'MAX_PRIORITY'.
/**
  * maximum priority (minimum is 0)
 */
enum
{
  px4_msgs__msg__LedControl__MAX_PRIORITY = 2
};

/// Constant 'ORB_QUEUE_LENGTH'.
/**
  * needs to match BOARD_MAX_LEDS
 */
enum
{
  px4_msgs__msg__LedControl__ORB_QUEUE_LENGTH = 8
};

/// Struct defined in msg/LedControl in the package px4_msgs.
/**
  * LED control: control a single or multiple LED's.
  * These are the externally visible LED's, not the board LED's
 */
typedef struct px4_msgs__msg__LedControl
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// bitmask which LED(s) to control, set to 0xff for all
  uint8_t led_mask;
  /// see COLOR_*
  uint8_t color;
  /// see MODE_*
  uint8_t mode;
  /// how many times to blink (number of on-off cycles if mode is one of MODE_BLINK_*) . Set to 0 for infinite
  /// in MODE_FLASH it is the number of cycles. Max number of blinks: 122 and max number of flash cycles: 20
  uint8_t num_blinks;
  /// priority: higher priority events will override current lower priority events (see MAX_PRIORITY)
  uint8_t priority;
} px4_msgs__msg__LedControl;

// Struct for a sequence of px4_msgs__msg__LedControl.
typedef struct px4_msgs__msg__LedControl__Sequence
{
  px4_msgs__msg__LedControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__LedControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__LED_CONTROL__STRUCT_H_
