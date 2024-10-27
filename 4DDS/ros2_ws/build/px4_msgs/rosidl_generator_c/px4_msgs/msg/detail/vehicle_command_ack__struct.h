// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleCommandAck.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_CMD_RESULT_ACCEPTED'.
/**
  * Result cases. This follows the MAVLink MAV_RESULT enum definition
  * Command ACCEPTED and EXECUTED |
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_ACCEPTED = 0
};

/// Constant 'VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED'.
/**
  * Command TEMPORARY REJECTED/DENIED |
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED = 1
};

/// Constant 'VEHICLE_CMD_RESULT_DENIED'.
/**
  * Command PERMANENTLY DENIED |
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_DENIED = 2
};

/// Constant 'VEHICLE_CMD_RESULT_UNSUPPORTED'.
/**
  * Command UNKNOWN/UNSUPPORTED |
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_UNSUPPORTED = 3
};

/// Constant 'VEHICLE_CMD_RESULT_FAILED'.
/**
  * Command executed, but failed |
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_FAILED = 4
};

/// Constant 'VEHICLE_CMD_RESULT_IN_PROGRESS'.
/**
  * Command being executed |
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_IN_PROGRESS = 5
};

/// Constant 'VEHICLE_CMD_RESULT_CANCELLED'.
/**
  * Command Canceled
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__VEHICLE_CMD_RESULT_CANCELLED = 6
};

/// Constant 'ARM_AUTH_DENIED_REASON_GENERIC'.
/**
  * Arming denied specific cases
 */
enum
{
  px4_msgs__msg__VehicleCommandAck__ARM_AUTH_DENIED_REASON_GENERIC = 0
};

/// Constant 'ARM_AUTH_DENIED_REASON_NONE'.
enum
{
  px4_msgs__msg__VehicleCommandAck__ARM_AUTH_DENIED_REASON_NONE = 1
};

/// Constant 'ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT'.
enum
{
  px4_msgs__msg__VehicleCommandAck__ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT = 2
};

/// Constant 'ARM_AUTH_DENIED_REASON_TIMEOUT'.
enum
{
  px4_msgs__msg__VehicleCommandAck__ARM_AUTH_DENIED_REASON_TIMEOUT = 3
};

/// Constant 'ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE'.
enum
{
  px4_msgs__msg__VehicleCommandAck__ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE = 4
};

/// Constant 'ARM_AUTH_DENIED_REASON_BAD_WEATHER'.
enum
{
  px4_msgs__msg__VehicleCommandAck__ARM_AUTH_DENIED_REASON_BAD_WEATHER = 5
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__VehicleCommandAck__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/VehicleCommandAck in the package px4_msgs.
/**
  * Vehicle Command Ackonwledgement uORB message.
  * Used for acknowledging the vehicle command being received.
  * Follows the MAVLink COMMAND_ACK message definition
 */
typedef struct px4_msgs__msg__VehicleCommandAck
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Command that is being acknowledged
  uint32_t command;
  /// Command result
  uint8_t result;
  /// Also used as progress, it can be set with the reason why the command was denied, or the progress percentage when result is MAV_RESULT_IN_PROGRESS
  uint8_t result_param1;
  /// Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
  int32_t result_param2;
  uint8_t target_system;
  /// Target component / mode executor
  uint16_t target_component;
  /// Indicates if the command came from an external source
  bool from_external;
} px4_msgs__msg__VehicleCommandAck;

// Struct for a sequence of px4_msgs__msg__VehicleCommandAck.
typedef struct px4_msgs__msg__VehicleCommandAck__Sequence
{
  px4_msgs__msg__VehicleCommandAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleCommandAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND_ACK__STRUCT_H_
