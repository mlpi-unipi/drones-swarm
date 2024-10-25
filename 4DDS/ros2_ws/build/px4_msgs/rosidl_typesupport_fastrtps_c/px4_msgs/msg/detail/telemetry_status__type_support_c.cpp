// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/telemetry_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/telemetry_status__struct.h"
#include "px4_msgs/msg/detail/telemetry_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TelemetryStatus__ros_msg_type = px4_msgs__msg__TelemetryStatus;

static bool _TelemetryStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TelemetryStatus__ros_msg_type * ros_message = static_cast<const _TelemetryStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: flow_control
  {
    cdr << (ros_message->flow_control ? true : false);
  }

  // Field name: forwarding
  {
    cdr << (ros_message->forwarding ? true : false);
  }

  // Field name: mavlink_v2
  {
    cdr << (ros_message->mavlink_v2 ? true : false);
  }

  // Field name: ftp
  {
    cdr << (ros_message->ftp ? true : false);
  }

  // Field name: streams
  {
    cdr << ros_message->streams;
  }

  // Field name: data_rate
  {
    cdr << ros_message->data_rate;
  }

  // Field name: rate_multiplier
  {
    cdr << ros_message->rate_multiplier;
  }

  // Field name: tx_rate_avg
  {
    cdr << ros_message->tx_rate_avg;
  }

  // Field name: tx_error_rate_avg
  {
    cdr << ros_message->tx_error_rate_avg;
  }

  // Field name: tx_message_count
  {
    cdr << ros_message->tx_message_count;
  }

  // Field name: tx_buffer_overruns
  {
    cdr << ros_message->tx_buffer_overruns;
  }

  // Field name: rx_rate_avg
  {
    cdr << ros_message->rx_rate_avg;
  }

  // Field name: rx_message_count
  {
    cdr << ros_message->rx_message_count;
  }

  // Field name: rx_message_lost_count
  {
    cdr << ros_message->rx_message_lost_count;
  }

  // Field name: rx_buffer_overruns
  {
    cdr << ros_message->rx_buffer_overruns;
  }

  // Field name: rx_parse_errors
  {
    cdr << ros_message->rx_parse_errors;
  }

  // Field name: rx_packet_drop_count
  {
    cdr << ros_message->rx_packet_drop_count;
  }

  // Field name: rx_message_lost_rate
  {
    cdr << ros_message->rx_message_lost_rate;
  }

  // Field name: heartbeat_type_antenna_tracker
  {
    cdr << (ros_message->heartbeat_type_antenna_tracker ? true : false);
  }

  // Field name: heartbeat_type_gcs
  {
    cdr << (ros_message->heartbeat_type_gcs ? true : false);
  }

  // Field name: heartbeat_type_onboard_controller
  {
    cdr << (ros_message->heartbeat_type_onboard_controller ? true : false);
  }

  // Field name: heartbeat_type_gimbal
  {
    cdr << (ros_message->heartbeat_type_gimbal ? true : false);
  }

  // Field name: heartbeat_type_adsb
  {
    cdr << (ros_message->heartbeat_type_adsb ? true : false);
  }

  // Field name: heartbeat_type_camera
  {
    cdr << (ros_message->heartbeat_type_camera ? true : false);
  }

  // Field name: heartbeat_type_parachute
  {
    cdr << (ros_message->heartbeat_type_parachute ? true : false);
  }

  // Field name: heartbeat_type_open_drone_id
  {
    cdr << (ros_message->heartbeat_type_open_drone_id ? true : false);
  }

  // Field name: heartbeat_component_telemetry_radio
  {
    cdr << (ros_message->heartbeat_component_telemetry_radio ? true : false);
  }

  // Field name: heartbeat_component_log
  {
    cdr << (ros_message->heartbeat_component_log ? true : false);
  }

  // Field name: heartbeat_component_osd
  {
    cdr << (ros_message->heartbeat_component_osd ? true : false);
  }

  // Field name: heartbeat_component_obstacle_avoidance
  {
    cdr << (ros_message->heartbeat_component_obstacle_avoidance ? true : false);
  }

  // Field name: heartbeat_component_vio
  {
    cdr << (ros_message->heartbeat_component_vio ? true : false);
  }

  // Field name: heartbeat_component_pairing_manager
  {
    cdr << (ros_message->heartbeat_component_pairing_manager ? true : false);
  }

  // Field name: heartbeat_component_udp_bridge
  {
    cdr << (ros_message->heartbeat_component_udp_bridge ? true : false);
  }

  // Field name: heartbeat_component_uart_bridge
  {
    cdr << (ros_message->heartbeat_component_uart_bridge ? true : false);
  }

  // Field name: avoidance_system_healthy
  {
    cdr << (ros_message->avoidance_system_healthy ? true : false);
  }

  // Field name: open_drone_id_system_healthy
  {
    cdr << (ros_message->open_drone_id_system_healthy ? true : false);
  }

  // Field name: parachute_system_healthy
  {
    cdr << (ros_message->parachute_system_healthy ? true : false);
  }

  return true;
}

static bool _TelemetryStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TelemetryStatus__ros_msg_type * ros_message = static_cast<_TelemetryStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: flow_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flow_control = tmp ? true : false;
  }

  // Field name: forwarding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->forwarding = tmp ? true : false;
  }

  // Field name: mavlink_v2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mavlink_v2 = tmp ? true : false;
  }

  // Field name: ftp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ftp = tmp ? true : false;
  }

  // Field name: streams
  {
    cdr >> ros_message->streams;
  }

  // Field name: data_rate
  {
    cdr >> ros_message->data_rate;
  }

  // Field name: rate_multiplier
  {
    cdr >> ros_message->rate_multiplier;
  }

  // Field name: tx_rate_avg
  {
    cdr >> ros_message->tx_rate_avg;
  }

  // Field name: tx_error_rate_avg
  {
    cdr >> ros_message->tx_error_rate_avg;
  }

  // Field name: tx_message_count
  {
    cdr >> ros_message->tx_message_count;
  }

  // Field name: tx_buffer_overruns
  {
    cdr >> ros_message->tx_buffer_overruns;
  }

  // Field name: rx_rate_avg
  {
    cdr >> ros_message->rx_rate_avg;
  }

  // Field name: rx_message_count
  {
    cdr >> ros_message->rx_message_count;
  }

  // Field name: rx_message_lost_count
  {
    cdr >> ros_message->rx_message_lost_count;
  }

  // Field name: rx_buffer_overruns
  {
    cdr >> ros_message->rx_buffer_overruns;
  }

  // Field name: rx_parse_errors
  {
    cdr >> ros_message->rx_parse_errors;
  }

  // Field name: rx_packet_drop_count
  {
    cdr >> ros_message->rx_packet_drop_count;
  }

  // Field name: rx_message_lost_rate
  {
    cdr >> ros_message->rx_message_lost_rate;
  }

  // Field name: heartbeat_type_antenna_tracker
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_antenna_tracker = tmp ? true : false;
  }

  // Field name: heartbeat_type_gcs
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_gcs = tmp ? true : false;
  }

  // Field name: heartbeat_type_onboard_controller
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_onboard_controller = tmp ? true : false;
  }

  // Field name: heartbeat_type_gimbal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_gimbal = tmp ? true : false;
  }

  // Field name: heartbeat_type_adsb
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_adsb = tmp ? true : false;
  }

  // Field name: heartbeat_type_camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_camera = tmp ? true : false;
  }

  // Field name: heartbeat_type_parachute
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_parachute = tmp ? true : false;
  }

  // Field name: heartbeat_type_open_drone_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_type_open_drone_id = tmp ? true : false;
  }

  // Field name: heartbeat_component_telemetry_radio
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_telemetry_radio = tmp ? true : false;
  }

  // Field name: heartbeat_component_log
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_log = tmp ? true : false;
  }

  // Field name: heartbeat_component_osd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_osd = tmp ? true : false;
  }

  // Field name: heartbeat_component_obstacle_avoidance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_obstacle_avoidance = tmp ? true : false;
  }

  // Field name: heartbeat_component_vio
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_vio = tmp ? true : false;
  }

  // Field name: heartbeat_component_pairing_manager
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_pairing_manager = tmp ? true : false;
  }

  // Field name: heartbeat_component_udp_bridge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_udp_bridge = tmp ? true : false;
  }

  // Field name: heartbeat_component_uart_bridge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heartbeat_component_uart_bridge = tmp ? true : false;
  }

  // Field name: avoidance_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoidance_system_healthy = tmp ? true : false;
  }

  // Field name: open_drone_id_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->open_drone_id_system_healthy = tmp ? true : false;
  }

  // Field name: parachute_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->parachute_system_healthy = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__TelemetryStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelemetryStatus__ros_msg_type * ros_message = static_cast<const _TelemetryStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flow_control
  {
    size_t item_size = sizeof(ros_message->flow_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forwarding
  {
    size_t item_size = sizeof(ros_message->forwarding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mavlink_v2
  {
    size_t item_size = sizeof(ros_message->mavlink_v2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ftp
  {
    size_t item_size = sizeof(ros_message->ftp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name streams
  {
    size_t item_size = sizeof(ros_message->streams);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_rate
  {
    size_t item_size = sizeof(ros_message->data_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rate_multiplier
  {
    size_t item_size = sizeof(ros_message->rate_multiplier);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_rate_avg
  {
    size_t item_size = sizeof(ros_message->tx_rate_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_error_rate_avg
  {
    size_t item_size = sizeof(ros_message->tx_error_rate_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_message_count
  {
    size_t item_size = sizeof(ros_message->tx_message_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_buffer_overruns
  {
    size_t item_size = sizeof(ros_message->tx_buffer_overruns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_rate_avg
  {
    size_t item_size = sizeof(ros_message->rx_rate_avg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_message_count
  {
    size_t item_size = sizeof(ros_message->rx_message_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_message_lost_count
  {
    size_t item_size = sizeof(ros_message->rx_message_lost_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_buffer_overruns
  {
    size_t item_size = sizeof(ros_message->rx_buffer_overruns);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_parse_errors
  {
    size_t item_size = sizeof(ros_message->rx_parse_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_packet_drop_count
  {
    size_t item_size = sizeof(ros_message->rx_packet_drop_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rx_message_lost_rate
  {
    size_t item_size = sizeof(ros_message->rx_message_lost_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_antenna_tracker
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_antenna_tracker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_gcs
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_gcs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_onboard_controller
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_onboard_controller);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_gimbal
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_gimbal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_adsb
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_adsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_camera
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_parachute
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_parachute);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_type_open_drone_id
  {
    size_t item_size = sizeof(ros_message->heartbeat_type_open_drone_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_telemetry_radio
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_telemetry_radio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_log
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_log);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_osd
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_osd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_obstacle_avoidance
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_obstacle_avoidance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_vio
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_vio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_pairing_manager
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_pairing_manager);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_udp_bridge
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_udp_bridge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heartbeat_component_uart_bridge
  {
    size_t item_size = sizeof(ros_message->heartbeat_component_uart_bridge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avoidance_system_healthy
  {
    size_t item_size = sizeof(ros_message->avoidance_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name open_drone_id_system_healthy
  {
    size_t item_size = sizeof(ros_message->open_drone_id_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parachute_system_healthy
  {
    size_t item_size = sizeof(ros_message->parachute_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TelemetryStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__TelemetryStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__TelemetryStatus(
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

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flow_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: forwarding
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mavlink_v2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ftp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: streams
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rate_multiplier
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tx_rate_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tx_error_rate_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tx_message_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tx_buffer_overruns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_rate_avg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_message_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_message_lost_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_buffer_overruns
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_parse_errors
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_packet_drop_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rx_message_lost_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heartbeat_type_antenna_tracker
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_gcs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_onboard_controller
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_gimbal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_adsb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_camera
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_parachute
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_type_open_drone_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_telemetry_radio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_log
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_osd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_obstacle_avoidance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_vio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_pairing_manager
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_udp_bridge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heartbeat_component_uart_bridge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avoidance_system_healthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: open_drone_id_system_healthy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parachute_system_healthy
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
    using DataType = px4_msgs__msg__TelemetryStatus;
    is_plain =
      (
      offsetof(DataType, parachute_system_healthy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TelemetryStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__TelemetryStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TelemetryStatus = {
  "px4_msgs::msg",
  "TelemetryStatus",
  _TelemetryStatus__cdr_serialize,
  _TelemetryStatus__cdr_deserialize,
  _TelemetryStatus__get_serialized_size,
  _TelemetryStatus__max_serialized_size
};

static rosidl_message_type_support_t _TelemetryStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TelemetryStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, TelemetryStatus)() {
  return &_TelemetryStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
