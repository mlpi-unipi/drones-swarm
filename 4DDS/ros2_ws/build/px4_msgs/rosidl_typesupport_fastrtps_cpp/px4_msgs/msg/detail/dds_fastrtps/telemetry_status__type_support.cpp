// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/telemetry_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/telemetry_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::TelemetryStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: type
  cdr << ros_message.type;
  // Member: mode
  cdr << ros_message.mode;
  // Member: flow_control
  cdr << (ros_message.flow_control ? true : false);
  // Member: forwarding
  cdr << (ros_message.forwarding ? true : false);
  // Member: mavlink_v2
  cdr << (ros_message.mavlink_v2 ? true : false);
  // Member: ftp
  cdr << (ros_message.ftp ? true : false);
  // Member: streams
  cdr << ros_message.streams;
  // Member: data_rate
  cdr << ros_message.data_rate;
  // Member: rate_multiplier
  cdr << ros_message.rate_multiplier;
  // Member: tx_rate_avg
  cdr << ros_message.tx_rate_avg;
  // Member: tx_error_rate_avg
  cdr << ros_message.tx_error_rate_avg;
  // Member: tx_message_count
  cdr << ros_message.tx_message_count;
  // Member: tx_buffer_overruns
  cdr << ros_message.tx_buffer_overruns;
  // Member: rx_rate_avg
  cdr << ros_message.rx_rate_avg;
  // Member: rx_message_count
  cdr << ros_message.rx_message_count;
  // Member: rx_message_lost_count
  cdr << ros_message.rx_message_lost_count;
  // Member: rx_buffer_overruns
  cdr << ros_message.rx_buffer_overruns;
  // Member: rx_parse_errors
  cdr << ros_message.rx_parse_errors;
  // Member: rx_packet_drop_count
  cdr << ros_message.rx_packet_drop_count;
  // Member: rx_message_lost_rate
  cdr << ros_message.rx_message_lost_rate;
  // Member: heartbeat_type_antenna_tracker
  cdr << (ros_message.heartbeat_type_antenna_tracker ? true : false);
  // Member: heartbeat_type_gcs
  cdr << (ros_message.heartbeat_type_gcs ? true : false);
  // Member: heartbeat_type_onboard_controller
  cdr << (ros_message.heartbeat_type_onboard_controller ? true : false);
  // Member: heartbeat_type_gimbal
  cdr << (ros_message.heartbeat_type_gimbal ? true : false);
  // Member: heartbeat_type_adsb
  cdr << (ros_message.heartbeat_type_adsb ? true : false);
  // Member: heartbeat_type_camera
  cdr << (ros_message.heartbeat_type_camera ? true : false);
  // Member: heartbeat_type_parachute
  cdr << (ros_message.heartbeat_type_parachute ? true : false);
  // Member: heartbeat_type_open_drone_id
  cdr << (ros_message.heartbeat_type_open_drone_id ? true : false);
  // Member: heartbeat_component_telemetry_radio
  cdr << (ros_message.heartbeat_component_telemetry_radio ? true : false);
  // Member: heartbeat_component_log
  cdr << (ros_message.heartbeat_component_log ? true : false);
  // Member: heartbeat_component_osd
  cdr << (ros_message.heartbeat_component_osd ? true : false);
  // Member: heartbeat_component_obstacle_avoidance
  cdr << (ros_message.heartbeat_component_obstacle_avoidance ? true : false);
  // Member: heartbeat_component_vio
  cdr << (ros_message.heartbeat_component_vio ? true : false);
  // Member: heartbeat_component_pairing_manager
  cdr << (ros_message.heartbeat_component_pairing_manager ? true : false);
  // Member: heartbeat_component_udp_bridge
  cdr << (ros_message.heartbeat_component_udp_bridge ? true : false);
  // Member: heartbeat_component_uart_bridge
  cdr << (ros_message.heartbeat_component_uart_bridge ? true : false);
  // Member: avoidance_system_healthy
  cdr << (ros_message.avoidance_system_healthy ? true : false);
  // Member: open_drone_id_system_healthy
  cdr << (ros_message.open_drone_id_system_healthy ? true : false);
  // Member: parachute_system_healthy
  cdr << (ros_message.parachute_system_healthy ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::TelemetryStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: type
  cdr >> ros_message.type;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: flow_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flow_control = tmp ? true : false;
  }

  // Member: forwarding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.forwarding = tmp ? true : false;
  }

  // Member: mavlink_v2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mavlink_v2 = tmp ? true : false;
  }

  // Member: ftp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ftp = tmp ? true : false;
  }

  // Member: streams
  cdr >> ros_message.streams;

  // Member: data_rate
  cdr >> ros_message.data_rate;

  // Member: rate_multiplier
  cdr >> ros_message.rate_multiplier;

  // Member: tx_rate_avg
  cdr >> ros_message.tx_rate_avg;

  // Member: tx_error_rate_avg
  cdr >> ros_message.tx_error_rate_avg;

  // Member: tx_message_count
  cdr >> ros_message.tx_message_count;

  // Member: tx_buffer_overruns
  cdr >> ros_message.tx_buffer_overruns;

  // Member: rx_rate_avg
  cdr >> ros_message.rx_rate_avg;

  // Member: rx_message_count
  cdr >> ros_message.rx_message_count;

  // Member: rx_message_lost_count
  cdr >> ros_message.rx_message_lost_count;

  // Member: rx_buffer_overruns
  cdr >> ros_message.rx_buffer_overruns;

  // Member: rx_parse_errors
  cdr >> ros_message.rx_parse_errors;

  // Member: rx_packet_drop_count
  cdr >> ros_message.rx_packet_drop_count;

  // Member: rx_message_lost_rate
  cdr >> ros_message.rx_message_lost_rate;

  // Member: heartbeat_type_antenna_tracker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_antenna_tracker = tmp ? true : false;
  }

  // Member: heartbeat_type_gcs
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_gcs = tmp ? true : false;
  }

  // Member: heartbeat_type_onboard_controller
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_onboard_controller = tmp ? true : false;
  }

  // Member: heartbeat_type_gimbal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_gimbal = tmp ? true : false;
  }

  // Member: heartbeat_type_adsb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_adsb = tmp ? true : false;
  }

  // Member: heartbeat_type_camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_camera = tmp ? true : false;
  }

  // Member: heartbeat_type_parachute
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_parachute = tmp ? true : false;
  }

  // Member: heartbeat_type_open_drone_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_type_open_drone_id = tmp ? true : false;
  }

  // Member: heartbeat_component_telemetry_radio
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_telemetry_radio = tmp ? true : false;
  }

  // Member: heartbeat_component_log
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_log = tmp ? true : false;
  }

  // Member: heartbeat_component_osd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_osd = tmp ? true : false;
  }

  // Member: heartbeat_component_obstacle_avoidance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_obstacle_avoidance = tmp ? true : false;
  }

  // Member: heartbeat_component_vio
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_vio = tmp ? true : false;
  }

  // Member: heartbeat_component_pairing_manager
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_pairing_manager = tmp ? true : false;
  }

  // Member: heartbeat_component_udp_bridge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_udp_bridge = tmp ? true : false;
  }

  // Member: heartbeat_component_uart_bridge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.heartbeat_component_uart_bridge = tmp ? true : false;
  }

  // Member: avoidance_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_healthy = tmp ? true : false;
  }

  // Member: open_drone_id_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.open_drone_id_system_healthy = tmp ? true : false;
  }

  // Member: parachute_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.parachute_system_healthy = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::TelemetryStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flow_control
  {
    size_t item_size = sizeof(ros_message.flow_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forwarding
  {
    size_t item_size = sizeof(ros_message.forwarding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mavlink_v2
  {
    size_t item_size = sizeof(ros_message.mavlink_v2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ftp
  {
    size_t item_size = sizeof(ros_message.ftp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: streams
  {
    size_t item_size = sizeof(ros_message.streams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data_rate
  {
    size_t item_size = sizeof(ros_message.data_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rate_multiplier
  {
    size_t item_size = sizeof(ros_message.rate_multiplier);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_rate_avg
  {
    size_t item_size = sizeof(ros_message.tx_rate_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_error_rate_avg
  {
    size_t item_size = sizeof(ros_message.tx_error_rate_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_message_count
  {
    size_t item_size = sizeof(ros_message.tx_message_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_buffer_overruns
  {
    size_t item_size = sizeof(ros_message.tx_buffer_overruns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_rate_avg
  {
    size_t item_size = sizeof(ros_message.rx_rate_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_message_count
  {
    size_t item_size = sizeof(ros_message.rx_message_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_message_lost_count
  {
    size_t item_size = sizeof(ros_message.rx_message_lost_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_buffer_overruns
  {
    size_t item_size = sizeof(ros_message.rx_buffer_overruns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_parse_errors
  {
    size_t item_size = sizeof(ros_message.rx_parse_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_packet_drop_count
  {
    size_t item_size = sizeof(ros_message.rx_packet_drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rx_message_lost_rate
  {
    size_t item_size = sizeof(ros_message.rx_message_lost_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_antenna_tracker
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_antenna_tracker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_gcs
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_gcs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_onboard_controller
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_onboard_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_gimbal
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_gimbal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_adsb
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_adsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_camera
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_parachute
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_parachute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_type_open_drone_id
  {
    size_t item_size = sizeof(ros_message.heartbeat_type_open_drone_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_telemetry_radio
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_telemetry_radio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_log
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_log);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_osd
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_osd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_obstacle_avoidance
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_obstacle_avoidance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_vio
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_vio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_pairing_manager
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_pairing_manager);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_udp_bridge
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_udp_bridge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heartbeat_component_uart_bridge
  {
    size_t item_size = sizeof(ros_message.heartbeat_component_uart_bridge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_healthy
  {
    size_t item_size = sizeof(ros_message.avoidance_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: open_drone_id_system_healthy
  {
    size_t item_size = sizeof(ros_message.open_drone_id_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parachute_system_healthy
  {
    size_t item_size = sizeof(ros_message.parachute_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_TelemetryStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flow_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: forwarding
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mavlink_v2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ftp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: streams
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rate_multiplier
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tx_rate_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tx_error_rate_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tx_message_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tx_buffer_overruns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_rate_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_message_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_message_lost_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_buffer_overruns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_parse_errors
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_packet_drop_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rx_message_lost_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: heartbeat_type_antenna_tracker
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_gcs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_onboard_controller
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_gimbal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_adsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_camera
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_parachute
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_type_open_drone_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_telemetry_radio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_log
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_osd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_obstacle_avoidance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_vio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_pairing_manager
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_udp_bridge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: heartbeat_component_uart_bridge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoidance_system_healthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: open_drone_id_system_healthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parachute_system_healthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs::msg::TelemetryStatus;
    is_plain =
      (
      offsetof(DataType, parachute_system_healthy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TelemetryStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::TelemetryStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TelemetryStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::TelemetryStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TelemetryStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::TelemetryStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TelemetryStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TelemetryStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TelemetryStatus__callbacks = {
  "px4_msgs::msg",
  "TelemetryStatus",
  _TelemetryStatus__cdr_serialize,
  _TelemetryStatus__cdr_deserialize,
  _TelemetryStatus__get_serialized_size,
  _TelemetryStatus__max_serialized_size
};

static rosidl_message_type_support_t _TelemetryStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TelemetryStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::TelemetryStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_TelemetryStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, TelemetryStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_TelemetryStatus__handle;
}

#ifdef __cplusplus
}
#endif
