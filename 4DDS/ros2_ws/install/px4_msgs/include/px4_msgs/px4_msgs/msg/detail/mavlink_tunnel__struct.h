// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/MavlinkTunnel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN'.
/**
  * Encoding of payload unknown
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_UNKNOWN = 0
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED0 = 200
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED1 = 201
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED2 = 202
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED3 = 203
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED4 = 204
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED5 = 205
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED6 = 206
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED7 = 207
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED8 = 208
};

/// Constant 'MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9'.
/**
  * Registered for STorM32 gimbal controller
 */
enum
{
  px4_msgs__msg__MavlinkTunnel__MAV_TUNNEL_PAYLOAD_TYPE_STORM32_RESERVED9 = 209
};

/// Struct defined in msg/MavlinkTunnel in the package px4_msgs.
/**
  * MAV_TUNNEL_PAYLOAD_TYPE enum
 */
typedef struct px4_msgs__msg__MavlinkTunnel
{
  /// Time since system start (microseconds)
  uint64_t timestamp;
  /// A code that identifies the content of the payload (0 for unknown, which is the default). If this code is less than 32768, it is a 'registered' payload type and the corresponding code should be added to the MAV_TUNNEL_PAYLOAD_TYPE enum. Software creators can register blocks of types as needed. Codes greater than 32767 are considered local experiments and should not be checked in to any widely distributed codebase.
  uint16_t payload_type;
  /// System ID (can be 0 for broadcast, but this is discouraged)
  uint8_t target_system;
  /// Component ID (can be 0 for broadcast, but this is discouraged)
  uint8_t target_component;
  /// Length of the data transported in payload
  uint8_t payload_length;
  /// Data itself
  uint8_t payload[128];
} px4_msgs__msg__MavlinkTunnel;

// Struct for a sequence of px4_msgs__msg__MavlinkTunnel.
typedef struct px4_msgs__msg__MavlinkTunnel__Sequence
{
  px4_msgs__msg__MavlinkTunnel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__MavlinkTunnel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__MAVLINK_TUNNEL__STRUCT_H_
