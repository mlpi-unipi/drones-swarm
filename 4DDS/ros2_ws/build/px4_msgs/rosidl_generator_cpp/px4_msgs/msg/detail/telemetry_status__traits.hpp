// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/telemetry_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TelemetryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: flow_control
  {
    out << "flow_control: ";
    rosidl_generator_traits::value_to_yaml(msg.flow_control, out);
    out << ", ";
  }

  // member: forwarding
  {
    out << "forwarding: ";
    rosidl_generator_traits::value_to_yaml(msg.forwarding, out);
    out << ", ";
  }

  // member: mavlink_v2
  {
    out << "mavlink_v2: ";
    rosidl_generator_traits::value_to_yaml(msg.mavlink_v2, out);
    out << ", ";
  }

  // member: ftp
  {
    out << "ftp: ";
    rosidl_generator_traits::value_to_yaml(msg.ftp, out);
    out << ", ";
  }

  // member: streams
  {
    out << "streams: ";
    rosidl_generator_traits::value_to_yaml(msg.streams, out);
    out << ", ";
  }

  // member: data_rate
  {
    out << "data_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.data_rate, out);
    out << ", ";
  }

  // member: rate_multiplier
  {
    out << "rate_multiplier: ";
    rosidl_generator_traits::value_to_yaml(msg.rate_multiplier, out);
    out << ", ";
  }

  // member: tx_rate_avg
  {
    out << "tx_rate_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_rate_avg, out);
    out << ", ";
  }

  // member: tx_error_rate_avg
  {
    out << "tx_error_rate_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_error_rate_avg, out);
    out << ", ";
  }

  // member: tx_message_count
  {
    out << "tx_message_count: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_message_count, out);
    out << ", ";
  }

  // member: tx_buffer_overruns
  {
    out << "tx_buffer_overruns: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_buffer_overruns, out);
    out << ", ";
  }

  // member: rx_rate_avg
  {
    out << "rx_rate_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_rate_avg, out);
    out << ", ";
  }

  // member: rx_message_count
  {
    out << "rx_message_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_message_count, out);
    out << ", ";
  }

  // member: rx_message_lost_count
  {
    out << "rx_message_lost_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_message_lost_count, out);
    out << ", ";
  }

  // member: rx_buffer_overruns
  {
    out << "rx_buffer_overruns: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_buffer_overruns, out);
    out << ", ";
  }

  // member: rx_parse_errors
  {
    out << "rx_parse_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_parse_errors, out);
    out << ", ";
  }

  // member: rx_packet_drop_count
  {
    out << "rx_packet_drop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_packet_drop_count, out);
    out << ", ";
  }

  // member: rx_message_lost_rate
  {
    out << "rx_message_lost_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_message_lost_rate, out);
    out << ", ";
  }

  // member: heartbeat_type_antenna_tracker
  {
    out << "heartbeat_type_antenna_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_antenna_tracker, out);
    out << ", ";
  }

  // member: heartbeat_type_gcs
  {
    out << "heartbeat_type_gcs: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_gcs, out);
    out << ", ";
  }

  // member: heartbeat_type_onboard_controller
  {
    out << "heartbeat_type_onboard_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_onboard_controller, out);
    out << ", ";
  }

  // member: heartbeat_type_gimbal
  {
    out << "heartbeat_type_gimbal: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_gimbal, out);
    out << ", ";
  }

  // member: heartbeat_type_adsb
  {
    out << "heartbeat_type_adsb: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_adsb, out);
    out << ", ";
  }

  // member: heartbeat_type_camera
  {
    out << "heartbeat_type_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_camera, out);
    out << ", ";
  }

  // member: heartbeat_type_parachute
  {
    out << "heartbeat_type_parachute: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_parachute, out);
    out << ", ";
  }

  // member: heartbeat_type_open_drone_id
  {
    out << "heartbeat_type_open_drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_open_drone_id, out);
    out << ", ";
  }

  // member: heartbeat_component_telemetry_radio
  {
    out << "heartbeat_component_telemetry_radio: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_telemetry_radio, out);
    out << ", ";
  }

  // member: heartbeat_component_log
  {
    out << "heartbeat_component_log: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_log, out);
    out << ", ";
  }

  // member: heartbeat_component_osd
  {
    out << "heartbeat_component_osd: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_osd, out);
    out << ", ";
  }

  // member: heartbeat_component_obstacle_avoidance
  {
    out << "heartbeat_component_obstacle_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_obstacle_avoidance, out);
    out << ", ";
  }

  // member: heartbeat_component_vio
  {
    out << "heartbeat_component_vio: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_vio, out);
    out << ", ";
  }

  // member: heartbeat_component_pairing_manager
  {
    out << "heartbeat_component_pairing_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_pairing_manager, out);
    out << ", ";
  }

  // member: heartbeat_component_udp_bridge
  {
    out << "heartbeat_component_udp_bridge: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_udp_bridge, out);
    out << ", ";
  }

  // member: heartbeat_component_uart_bridge
  {
    out << "heartbeat_component_uart_bridge: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_uart_bridge, out);
    out << ", ";
  }

  // member: avoidance_system_healthy
  {
    out << "avoidance_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_healthy, out);
    out << ", ";
  }

  // member: open_drone_id_system_healthy
  {
    out << "open_drone_id_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.open_drone_id_system_healthy, out);
    out << ", ";
  }

  // member: parachute_system_healthy
  {
    out << "parachute_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_healthy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TelemetryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: flow_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flow_control: ";
    rosidl_generator_traits::value_to_yaml(msg.flow_control, out);
    out << "\n";
  }

  // member: forwarding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forwarding: ";
    rosidl_generator_traits::value_to_yaml(msg.forwarding, out);
    out << "\n";
  }

  // member: mavlink_v2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mavlink_v2: ";
    rosidl_generator_traits::value_to_yaml(msg.mavlink_v2, out);
    out << "\n";
  }

  // member: ftp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ftp: ";
    rosidl_generator_traits::value_to_yaml(msg.ftp, out);
    out << "\n";
  }

  // member: streams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "streams: ";
    rosidl_generator_traits::value_to_yaml(msg.streams, out);
    out << "\n";
  }

  // member: data_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.data_rate, out);
    out << "\n";
  }

  // member: rate_multiplier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate_multiplier: ";
    rosidl_generator_traits::value_to_yaml(msg.rate_multiplier, out);
    out << "\n";
  }

  // member: tx_rate_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_rate_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_rate_avg, out);
    out << "\n";
  }

  // member: tx_error_rate_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_error_rate_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_error_rate_avg, out);
    out << "\n";
  }

  // member: tx_message_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_message_count: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_message_count, out);
    out << "\n";
  }

  // member: tx_buffer_overruns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_buffer_overruns: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_buffer_overruns, out);
    out << "\n";
  }

  // member: rx_rate_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_rate_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_rate_avg, out);
    out << "\n";
  }

  // member: rx_message_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_message_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_message_count, out);
    out << "\n";
  }

  // member: rx_message_lost_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_message_lost_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_message_lost_count, out);
    out << "\n";
  }

  // member: rx_buffer_overruns
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_buffer_overruns: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_buffer_overruns, out);
    out << "\n";
  }

  // member: rx_parse_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_parse_errors: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_parse_errors, out);
    out << "\n";
  }

  // member: rx_packet_drop_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_packet_drop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_packet_drop_count, out);
    out << "\n";
  }

  // member: rx_message_lost_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_message_lost_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_message_lost_rate, out);
    out << "\n";
  }

  // member: heartbeat_type_antenna_tracker
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_antenna_tracker: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_antenna_tracker, out);
    out << "\n";
  }

  // member: heartbeat_type_gcs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_gcs: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_gcs, out);
    out << "\n";
  }

  // member: heartbeat_type_onboard_controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_onboard_controller: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_onboard_controller, out);
    out << "\n";
  }

  // member: heartbeat_type_gimbal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_gimbal: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_gimbal, out);
    out << "\n";
  }

  // member: heartbeat_type_adsb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_adsb: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_adsb, out);
    out << "\n";
  }

  // member: heartbeat_type_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_camera: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_camera, out);
    out << "\n";
  }

  // member: heartbeat_type_parachute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_parachute: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_parachute, out);
    out << "\n";
  }

  // member: heartbeat_type_open_drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_type_open_drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_type_open_drone_id, out);
    out << "\n";
  }

  // member: heartbeat_component_telemetry_radio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_telemetry_radio: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_telemetry_radio, out);
    out << "\n";
  }

  // member: heartbeat_component_log
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_log: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_log, out);
    out << "\n";
  }

  // member: heartbeat_component_osd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_osd: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_osd, out);
    out << "\n";
  }

  // member: heartbeat_component_obstacle_avoidance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_obstacle_avoidance: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_obstacle_avoidance, out);
    out << "\n";
  }

  // member: heartbeat_component_vio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_vio: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_vio, out);
    out << "\n";
  }

  // member: heartbeat_component_pairing_manager
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_pairing_manager: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_pairing_manager, out);
    out << "\n";
  }

  // member: heartbeat_component_udp_bridge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_udp_bridge: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_udp_bridge, out);
    out << "\n";
  }

  // member: heartbeat_component_uart_bridge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heartbeat_component_uart_bridge: ";
    rosidl_generator_traits::value_to_yaml(msg.heartbeat_component_uart_bridge, out);
    out << "\n";
  }

  // member: avoidance_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_healthy, out);
    out << "\n";
  }

  // member: open_drone_id_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open_drone_id_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.open_drone_id_system_healthy, out);
    out << "\n";
  }

  // member: parachute_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_healthy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TelemetryStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::TelemetryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::TelemetryStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::TelemetryStatus>()
{
  return "px4_msgs::msg::TelemetryStatus";
}

template<>
inline const char * name<px4_msgs::msg::TelemetryStatus>()
{
  return "px4_msgs/msg/TelemetryStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::TelemetryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TelemetryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TelemetryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TELEMETRY_STATUS__TRAITS_HPP_
