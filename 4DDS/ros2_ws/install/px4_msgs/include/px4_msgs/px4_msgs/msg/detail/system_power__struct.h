// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BRICK1_VALID_SHIFTS'.
enum
{
  px4_msgs__msg__SystemPower__BRICK1_VALID_SHIFTS = 0
};

/// Constant 'BRICK1_VALID_MASK'.
enum
{
  px4_msgs__msg__SystemPower__BRICK1_VALID_MASK = 1
};

/// Constant 'BRICK2_VALID_SHIFTS'.
enum
{
  px4_msgs__msg__SystemPower__BRICK2_VALID_SHIFTS = 1
};

/// Constant 'BRICK2_VALID_MASK'.
enum
{
  px4_msgs__msg__SystemPower__BRICK2_VALID_MASK = 2
};

/// Constant 'BRICK3_VALID_SHIFTS'.
enum
{
  px4_msgs__msg__SystemPower__BRICK3_VALID_SHIFTS = 2
};

/// Constant 'BRICK3_VALID_MASK'.
enum
{
  px4_msgs__msg__SystemPower__BRICK3_VALID_MASK = 4
};

/// Constant 'BRICK4_VALID_SHIFTS'.
enum
{
  px4_msgs__msg__SystemPower__BRICK4_VALID_SHIFTS = 3
};

/// Constant 'BRICK4_VALID_MASK'.
enum
{
  px4_msgs__msg__SystemPower__BRICK4_VALID_MASK = 8
};

/// Struct defined in msg/SystemPower in the package px4_msgs.
typedef struct px4_msgs__msg__SystemPower
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// peripheral 5V rail voltage
  float voltage5v_v;
  /// Sensors 3V3 rail voltage
  float sensors3v3[4];
  /// Sensors 3V3 rail voltage was read (bitfield).
  uint8_t sensors3v3_valid;
  /// USB is connected when 1
  uint8_t usb_connected;
  /// brick bits power is good when bit 1
  uint8_t brick_valid;
  /// USB is valid when 1
  uint8_t usb_valid;
  /// servo power is good when 1
  uint8_t servo_valid;
  /// peripheral overcurrent when 1
  uint8_t periph_5v_oc;
  /// high power peripheral overcurrent when 1
  uint8_t hipower_5v_oc;
  /// 5V to companion valid
  uint8_t comp_5v_valid;
  /// 5V for CAN1/GPS1 valid
  uint8_t can1_gps1_5v_valid;
} px4_msgs__msg__SystemPower;

// Struct for a sequence of px4_msgs__msg__SystemPower.
typedef struct px4_msgs__msg__SystemPower__Sequence
{
  px4_msgs__msg__SystemPower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SystemPower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__STRUCT_H_
