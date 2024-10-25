// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_status__struct.hpp"

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
  const px4_msgs::msg::VehicleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: armed_time
  cdr << ros_message.armed_time;
  // Member: takeoff_time
  cdr << ros_message.takeoff_time;
  // Member: arming_state
  cdr << ros_message.arming_state;
  // Member: latest_arming_reason
  cdr << ros_message.latest_arming_reason;
  // Member: latest_disarming_reason
  cdr << ros_message.latest_disarming_reason;
  // Member: nav_state_timestamp
  cdr << ros_message.nav_state_timestamp;
  // Member: nav_state_user_intention
  cdr << ros_message.nav_state_user_intention;
  // Member: nav_state
  cdr << ros_message.nav_state;
  // Member: executor_in_charge
  cdr << ros_message.executor_in_charge;
  // Member: valid_nav_states_mask
  cdr << ros_message.valid_nav_states_mask;
  // Member: can_set_nav_states_mask
  cdr << ros_message.can_set_nav_states_mask;
  // Member: failure_detector_status
  cdr << ros_message.failure_detector_status;
  // Member: hil_state
  cdr << ros_message.hil_state;
  // Member: vehicle_type
  cdr << ros_message.vehicle_type;
  // Member: failsafe
  cdr << (ros_message.failsafe ? true : false);
  // Member: failsafe_and_user_took_over
  cdr << (ros_message.failsafe_and_user_took_over ? true : false);
  // Member: failsafe_defer_state
  cdr << ros_message.failsafe_defer_state;
  // Member: gcs_connection_lost
  cdr << (ros_message.gcs_connection_lost ? true : false);
  // Member: gcs_connection_lost_counter
  cdr << ros_message.gcs_connection_lost_counter;
  // Member: high_latency_data_link_lost
  cdr << (ros_message.high_latency_data_link_lost ? true : false);
  // Member: is_vtol
  cdr << (ros_message.is_vtol ? true : false);
  // Member: is_vtol_tailsitter
  cdr << (ros_message.is_vtol_tailsitter ? true : false);
  // Member: in_transition_mode
  cdr << (ros_message.in_transition_mode ? true : false);
  // Member: in_transition_to_fw
  cdr << (ros_message.in_transition_to_fw ? true : false);
  // Member: system_type
  cdr << ros_message.system_type;
  // Member: system_id
  cdr << ros_message.system_id;
  // Member: component_id
  cdr << ros_message.component_id;
  // Member: safety_button_available
  cdr << (ros_message.safety_button_available ? true : false);
  // Member: safety_off
  cdr << (ros_message.safety_off ? true : false);
  // Member: power_input_valid
  cdr << (ros_message.power_input_valid ? true : false);
  // Member: usb_connected
  cdr << (ros_message.usb_connected ? true : false);
  // Member: open_drone_id_system_present
  cdr << (ros_message.open_drone_id_system_present ? true : false);
  // Member: open_drone_id_system_healthy
  cdr << (ros_message.open_drone_id_system_healthy ? true : false);
  // Member: parachute_system_present
  cdr << (ros_message.parachute_system_present ? true : false);
  // Member: parachute_system_healthy
  cdr << (ros_message.parachute_system_healthy ? true : false);
  // Member: avoidance_system_required
  cdr << (ros_message.avoidance_system_required ? true : false);
  // Member: avoidance_system_valid
  cdr << (ros_message.avoidance_system_valid ? true : false);
  // Member: rc_calibration_in_progress
  cdr << (ros_message.rc_calibration_in_progress ? true : false);
  // Member: calibration_enabled
  cdr << (ros_message.calibration_enabled ? true : false);
  // Member: pre_flight_checks_pass
  cdr << (ros_message.pre_flight_checks_pass ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: armed_time
  cdr >> ros_message.armed_time;

  // Member: takeoff_time
  cdr >> ros_message.takeoff_time;

  // Member: arming_state
  cdr >> ros_message.arming_state;

  // Member: latest_arming_reason
  cdr >> ros_message.latest_arming_reason;

  // Member: latest_disarming_reason
  cdr >> ros_message.latest_disarming_reason;

  // Member: nav_state_timestamp
  cdr >> ros_message.nav_state_timestamp;

  // Member: nav_state_user_intention
  cdr >> ros_message.nav_state_user_intention;

  // Member: nav_state
  cdr >> ros_message.nav_state;

  // Member: executor_in_charge
  cdr >> ros_message.executor_in_charge;

  // Member: valid_nav_states_mask
  cdr >> ros_message.valid_nav_states_mask;

  // Member: can_set_nav_states_mask
  cdr >> ros_message.can_set_nav_states_mask;

  // Member: failure_detector_status
  cdr >> ros_message.failure_detector_status;

  // Member: hil_state
  cdr >> ros_message.hil_state;

  // Member: vehicle_type
  cdr >> ros_message.vehicle_type;

  // Member: failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.failsafe = tmp ? true : false;
  }

  // Member: failsafe_and_user_took_over
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.failsafe_and_user_took_over = tmp ? true : false;
  }

  // Member: failsafe_defer_state
  cdr >> ros_message.failsafe_defer_state;

  // Member: gcs_connection_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gcs_connection_lost = tmp ? true : false;
  }

  // Member: gcs_connection_lost_counter
  cdr >> ros_message.gcs_connection_lost_counter;

  // Member: high_latency_data_link_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.high_latency_data_link_lost = tmp ? true : false;
  }

  // Member: is_vtol
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_vtol = tmp ? true : false;
  }

  // Member: is_vtol_tailsitter
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_vtol_tailsitter = tmp ? true : false;
  }

  // Member: in_transition_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_transition_mode = tmp ? true : false;
  }

  // Member: in_transition_to_fw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_transition_to_fw = tmp ? true : false;
  }

  // Member: system_type
  cdr >> ros_message.system_type;

  // Member: system_id
  cdr >> ros_message.system_id;

  // Member: component_id
  cdr >> ros_message.component_id;

  // Member: safety_button_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safety_button_available = tmp ? true : false;
  }

  // Member: safety_off
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safety_off = tmp ? true : false;
  }

  // Member: power_input_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_input_valid = tmp ? true : false;
  }

  // Member: usb_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.usb_connected = tmp ? true : false;
  }

  // Member: open_drone_id_system_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.open_drone_id_system_present = tmp ? true : false;
  }

  // Member: open_drone_id_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.open_drone_id_system_healthy = tmp ? true : false;
  }

  // Member: parachute_system_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.parachute_system_present = tmp ? true : false;
  }

  // Member: parachute_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.parachute_system_healthy = tmp ? true : false;
  }

  // Member: avoidance_system_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_required = tmp ? true : false;
  }

  // Member: avoidance_system_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_valid = tmp ? true : false;
  }

  // Member: rc_calibration_in_progress
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_calibration_in_progress = tmp ? true : false;
  }

  // Member: calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibration_enabled = tmp ? true : false;
  }

  // Member: pre_flight_checks_pass
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_flight_checks_pass = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleStatus & ros_message,
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
  // Member: armed_time
  {
    size_t item_size = sizeof(ros_message.armed_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: takeoff_time
  {
    size_t item_size = sizeof(ros_message.takeoff_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_state
  {
    size_t item_size = sizeof(ros_message.arming_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latest_arming_reason
  {
    size_t item_size = sizeof(ros_message.latest_arming_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latest_disarming_reason
  {
    size_t item_size = sizeof(ros_message.latest_disarming_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_state_timestamp
  {
    size_t item_size = sizeof(ros_message.nav_state_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_state_user_intention
  {
    size_t item_size = sizeof(ros_message.nav_state_user_intention);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_state
  {
    size_t item_size = sizeof(ros_message.nav_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: executor_in_charge
  {
    size_t item_size = sizeof(ros_message.executor_in_charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid_nav_states_mask
  {
    size_t item_size = sizeof(ros_message.valid_nav_states_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_set_nav_states_mask
  {
    size_t item_size = sizeof(ros_message.can_set_nav_states_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failure_detector_status
  {
    size_t item_size = sizeof(ros_message.failure_detector_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hil_state
  {
    size_t item_size = sizeof(ros_message.hil_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_type
  {
    size_t item_size = sizeof(ros_message.vehicle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe
  {
    size_t item_size = sizeof(ros_message.failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe_and_user_took_over
  {
    size_t item_size = sizeof(ros_message.failsafe_and_user_took_over);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe_defer_state
  {
    size_t item_size = sizeof(ros_message.failsafe_defer_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gcs_connection_lost
  {
    size_t item_size = sizeof(ros_message.gcs_connection_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gcs_connection_lost_counter
  {
    size_t item_size = sizeof(ros_message.gcs_connection_lost_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_latency_data_link_lost
  {
    size_t item_size = sizeof(ros_message.high_latency_data_link_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_vtol
  {
    size_t item_size = sizeof(ros_message.is_vtol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_vtol_tailsitter
  {
    size_t item_size = sizeof(ros_message.is_vtol_tailsitter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_transition_mode
  {
    size_t item_size = sizeof(ros_message.in_transition_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_transition_to_fw
  {
    size_t item_size = sizeof(ros_message.in_transition_to_fw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_type
  {
    size_t item_size = sizeof(ros_message.system_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_id
  {
    size_t item_size = sizeof(ros_message.system_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: component_id
  {
    size_t item_size = sizeof(ros_message.component_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_button_available
  {
    size_t item_size = sizeof(ros_message.safety_button_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_off
  {
    size_t item_size = sizeof(ros_message.safety_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_input_valid
  {
    size_t item_size = sizeof(ros_message.power_input_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usb_connected
  {
    size_t item_size = sizeof(ros_message.usb_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: open_drone_id_system_present
  {
    size_t item_size = sizeof(ros_message.open_drone_id_system_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: open_drone_id_system_healthy
  {
    size_t item_size = sizeof(ros_message.open_drone_id_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parachute_system_present
  {
    size_t item_size = sizeof(ros_message.parachute_system_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parachute_system_healthy
  {
    size_t item_size = sizeof(ros_message.parachute_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_required
  {
    size_t item_size = sizeof(ros_message.avoidance_system_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_valid
  {
    size_t item_size = sizeof(ros_message.avoidance_system_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_calibration_in_progress
  {
    size_t item_size = sizeof(ros_message.rc_calibration_in_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibration_enabled
  {
    size_t item_size = sizeof(ros_message.calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_flight_checks_pass
  {
    size_t item_size = sizeof(ros_message.pre_flight_checks_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleStatus(
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

  // Member: armed_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: takeoff_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: arming_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latest_arming_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latest_disarming_reason
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_state_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nav_state_user_intention
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: executor_in_charge
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: valid_nav_states_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_set_nav_states_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: failure_detector_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hil_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe_and_user_took_over
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe_defer_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gcs_connection_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gcs_connection_lost_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: high_latency_data_link_lost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_vtol
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_vtol_tailsitter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_transition_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_transition_to_fw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: component_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safety_button_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safety_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_input_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usb_connected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: open_drone_id_system_present
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

  // Member: parachute_system_present
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

  // Member: avoidance_system_required
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoidance_system_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_calibration_in_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calibration_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_flight_checks_pass
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
    using DataType = px4_msgs::msg::VehicleStatus;
    is_plain =
      (
      offsetof(DataType, pre_flight_checks_pass) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleStatus__callbacks = {
  "px4_msgs::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatus__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::VehicleStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatus__handle;
}

#ifdef __cplusplus
}
#endif
