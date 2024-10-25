// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LINK_TYPE_GENERIC'.
enum
{
  px4_msgs__msg__TelemetryStatus__LINK_TYPE_GENERIC = 0
};

/// Constant 'LINK_TYPE_UBIQUITY_BULLET'.
enum
{
  px4_msgs__msg__TelemetryStatus__LINK_TYPE_UBIQUITY_BULLET = 1
};

/// Constant 'LINK_TYPE_WIRE'.
enum
{
  px4_msgs__msg__TelemetryStatus__LINK_TYPE_WIRE = 2
};

/// Constant 'LINK_TYPE_USB'.
enum
{
  px4_msgs__msg__TelemetryStatus__LINK_TYPE_USB = 3
};

/// Constant 'LINK_TYPE_IRIDIUM'.
enum
{
  px4_msgs__msg__TelemetryStatus__LINK_TYPE_IRIDIUM = 4
};

/// Constant 'HEARTBEAT_TIMEOUT_US'.
/**
  * Heartbeat timeout (tolerate missing 1 + jitter)
 */
enum
{
  px4_msgs__msg__TelemetryStatus__HEARTBEAT_TIMEOUT_US = 2500000ull
};

/// Struct defined in msg/TelemetryStatus in the package px4_msgs.
typedef struct px4_msgs__msg__TelemetryStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// type of the radio hardware (LINK_TYPE_*)
  uint8_t type;
  uint8_t mode;
  bool flow_control;
  bool forwarding;
  bool mavlink_v2;
  bool ftp;
  uint8_t streams;
  /// configured maximum data rate (Bytes/s)
  float data_rate;
  float rate_multiplier;
  /// transmit rate average (Bytes/s)
  float tx_rate_avg;
  /// transmit error rate average (Bytes/s)
  float tx_error_rate_avg;
  /// total message sent count
  uint32_t tx_message_count;
  /// number of TX buffer overruns
  uint32_t tx_buffer_overruns;
  /// transmit rate average (Bytes/s)
  float rx_rate_avg;
  /// count of total messages received
  uint32_t rx_message_count;
  uint32_t rx_message_lost_count;
  /// number of RX buffer overruns
  uint32_t rx_buffer_overruns;
  /// number of parse errors
  uint32_t rx_parse_errors;
  /// number of packet drops
  uint32_t rx_packet_drop_count;
  float rx_message_lost_rate;
  /// Heartbeats per type
  /// MAV_TYPE_ANTENNA_TRACKER
  bool heartbeat_type_antenna_tracker;
  /// MAV_TYPE_GCS
  bool heartbeat_type_gcs;
  /// MAV_TYPE_ONBOARD_CONTROLLER
  bool heartbeat_type_onboard_controller;
  /// MAV_TYPE_GIMBAL
  bool heartbeat_type_gimbal;
  /// MAV_TYPE_ADSB
  bool heartbeat_type_adsb;
  /// MAV_TYPE_CAMERA
  bool heartbeat_type_camera;
  /// MAV_TYPE_PARACHUTE
  bool heartbeat_type_parachute;
  /// MAV_TYPE_ODID
  bool heartbeat_type_open_drone_id;
  /// Heartbeats per component
  /// MAV_COMP_ID_TELEMETRY_RADIO
  bool heartbeat_component_telemetry_radio;
  /// MAV_COMP_ID_LOG
  bool heartbeat_component_log;
  /// MAV_COMP_ID_OSD
  bool heartbeat_component_osd;
  /// MAV_COMP_ID_OBSTACLE_AVOIDANCE
  bool heartbeat_component_obstacle_avoidance;
  /// MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY
  bool heartbeat_component_vio;
  /// MAV_COMP_ID_PAIRING_MANAGER
  bool heartbeat_component_pairing_manager;
  /// MAV_COMP_ID_UDP_BRIDGE
  bool heartbeat_component_udp_bridge;
  /// MAV_COMP_ID_UART_BRIDGE
  bool heartbeat_component_uart_bridge;
  /// Misc component health
  bool avoidance_system_healthy;
  bool open_drone_id_system_healthy;
  bool parachute_system_healthy;
} px4_msgs__msg__TelemetryStatus;

// Struct for a sequence of px4_msgs__msg__TelemetryStatus.
typedef struct px4_msgs__msg__TelemetryStatus__Sequence
{
  px4_msgs__msg__TelemetryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TelemetryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__STRUCT_H_
