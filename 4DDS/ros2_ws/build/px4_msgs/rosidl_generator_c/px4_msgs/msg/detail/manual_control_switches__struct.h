// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SWITCH_POS_NONE'.
/**
  * switch is not mapped
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__SWITCH_POS_NONE = 0
};

/// Constant 'SWITCH_POS_ON'.
/**
  * switch activated (value = 1)
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__SWITCH_POS_ON = 1
};

/// Constant 'SWITCH_POS_MIDDLE'.
/**
  * middle position (value = 0)
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__SWITCH_POS_MIDDLE = 2
};

/// Constant 'SWITCH_POS_OFF'.
/**
  * switch not activated (value = -1)
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__SWITCH_POS_OFF = 3
};

/// Constant 'MODE_SLOT_NONE'.
/**
  * no mode slot assigned
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_NONE = 0
};

/// Constant 'MODE_SLOT_1'.
/**
  * mode slot 1 selected
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_1 = 1
};

/// Constant 'MODE_SLOT_2'.
/**
  * mode slot 2 selected
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_2 = 2
};

/// Constant 'MODE_SLOT_3'.
/**
  * mode slot 3 selected
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_3 = 3
};

/// Constant 'MODE_SLOT_4'.
/**
  * mode slot 4 selected
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_4 = 4
};

/// Constant 'MODE_SLOT_5'.
/**
  * mode slot 5 selected
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_5 = 5
};

/// Constant 'MODE_SLOT_6'.
/**
  * mode slot 6 selected
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_6 = 6
};

/// Constant 'MODE_SLOT_NUM'.
/**
  * number of slots
 */
enum
{
  px4_msgs__msg__ManualControlSwitches__MODE_SLOT_NUM = 6
};

/// Struct defined in msg/ManualControlSwitches in the package px4_msgs.
typedef struct px4_msgs__msg__ManualControlSwitches
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// the slot a specific model selector is in
  uint8_t mode_slot;
  /// arm/disarm switch: _DISARMED_, ARMED
  uint8_t arm_switch;
  /// return to launch 2 position switch (mandatory): _NORMAL_, RTL
  uint8_t return_switch;
  /// loiter 2 position switch (optional): _MISSION_, LOITER
  uint8_t loiter_switch;
  /// offboard 2 position switch (optional): _NORMAL_, OFFBOARD
  uint8_t offboard_switch;
  /// throttle kill: _NORMAL_, KILL
  uint8_t kill_switch;
  /// landing gear switch: _DOWN_, UP
  uint8_t gear_switch;
  /// VTOL transition switch: _HOVER, FORWARD_FLIGHT
  uint8_t transition_switch;
  /// Photo trigger switch
  uint8_t photo_switch;
  /// Photo trigger switch
  uint8_t video_switch;
  /// Engage the main motor (for helicopters)
  uint8_t engage_main_motor_switch;
  /// number of switch changes
  uint32_t switch_changes;
} px4_msgs__msg__ManualControlSwitches;

// Struct for a sequence of px4_msgs__msg__ManualControlSwitches.
typedef struct px4_msgs__msg__ManualControlSwitches__Sequence
{
  px4_msgs__msg__ManualControlSwitches * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ManualControlSwitches__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__STRUCT_H_
