// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_pre_flight_checks_pass
{
public:
  explicit Init_VehicleStatus_pre_flight_checks_pass(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleStatus pre_flight_checks_pass(::px4_msgs::msg::VehicleStatus::_pre_flight_checks_pass_type arg)
  {
    msg_.pre_flight_checks_pass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_calibration_enabled
{
public:
  explicit Init_VehicleStatus_calibration_enabled(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_pre_flight_checks_pass calibration_enabled(::px4_msgs::msg::VehicleStatus::_calibration_enabled_type arg)
  {
    msg_.calibration_enabled = std::move(arg);
    return Init_VehicleStatus_pre_flight_checks_pass(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_rc_calibration_in_progress
{
public:
  explicit Init_VehicleStatus_rc_calibration_in_progress(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_calibration_enabled rc_calibration_in_progress(::px4_msgs::msg::VehicleStatus::_rc_calibration_in_progress_type arg)
  {
    msg_.rc_calibration_in_progress = std::move(arg);
    return Init_VehicleStatus_calibration_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_avoidance_system_valid
{
public:
  explicit Init_VehicleStatus_avoidance_system_valid(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_rc_calibration_in_progress avoidance_system_valid(::px4_msgs::msg::VehicleStatus::_avoidance_system_valid_type arg)
  {
    msg_.avoidance_system_valid = std::move(arg);
    return Init_VehicleStatus_rc_calibration_in_progress(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_avoidance_system_required
{
public:
  explicit Init_VehicleStatus_avoidance_system_required(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_avoidance_system_valid avoidance_system_required(::px4_msgs::msg::VehicleStatus::_avoidance_system_required_type arg)
  {
    msg_.avoidance_system_required = std::move(arg);
    return Init_VehicleStatus_avoidance_system_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_parachute_system_healthy
{
public:
  explicit Init_VehicleStatus_parachute_system_healthy(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_avoidance_system_required parachute_system_healthy(::px4_msgs::msg::VehicleStatus::_parachute_system_healthy_type arg)
  {
    msg_.parachute_system_healthy = std::move(arg);
    return Init_VehicleStatus_avoidance_system_required(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_parachute_system_present
{
public:
  explicit Init_VehicleStatus_parachute_system_present(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_parachute_system_healthy parachute_system_present(::px4_msgs::msg::VehicleStatus::_parachute_system_present_type arg)
  {
    msg_.parachute_system_present = std::move(arg);
    return Init_VehicleStatus_parachute_system_healthy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_open_drone_id_system_healthy
{
public:
  explicit Init_VehicleStatus_open_drone_id_system_healthy(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_parachute_system_present open_drone_id_system_healthy(::px4_msgs::msg::VehicleStatus::_open_drone_id_system_healthy_type arg)
  {
    msg_.open_drone_id_system_healthy = std::move(arg);
    return Init_VehicleStatus_parachute_system_present(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_open_drone_id_system_present
{
public:
  explicit Init_VehicleStatus_open_drone_id_system_present(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_open_drone_id_system_healthy open_drone_id_system_present(::px4_msgs::msg::VehicleStatus::_open_drone_id_system_present_type arg)
  {
    msg_.open_drone_id_system_present = std::move(arg);
    return Init_VehicleStatus_open_drone_id_system_healthy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_usb_connected
{
public:
  explicit Init_VehicleStatus_usb_connected(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_open_drone_id_system_present usb_connected(::px4_msgs::msg::VehicleStatus::_usb_connected_type arg)
  {
    msg_.usb_connected = std::move(arg);
    return Init_VehicleStatus_open_drone_id_system_present(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_power_input_valid
{
public:
  explicit Init_VehicleStatus_power_input_valid(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_usb_connected power_input_valid(::px4_msgs::msg::VehicleStatus::_power_input_valid_type arg)
  {
    msg_.power_input_valid = std::move(arg);
    return Init_VehicleStatus_usb_connected(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_safety_off
{
public:
  explicit Init_VehicleStatus_safety_off(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_power_input_valid safety_off(::px4_msgs::msg::VehicleStatus::_safety_off_type arg)
  {
    msg_.safety_off = std::move(arg);
    return Init_VehicleStatus_power_input_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_safety_button_available
{
public:
  explicit Init_VehicleStatus_safety_button_available(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_safety_off safety_button_available(::px4_msgs::msg::VehicleStatus::_safety_button_available_type arg)
  {
    msg_.safety_button_available = std::move(arg);
    return Init_VehicleStatus_safety_off(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_component_id
{
public:
  explicit Init_VehicleStatus_component_id(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_safety_button_available component_id(::px4_msgs::msg::VehicleStatus::_component_id_type arg)
  {
    msg_.component_id = std::move(arg);
    return Init_VehicleStatus_safety_button_available(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_system_id
{
public:
  explicit Init_VehicleStatus_system_id(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_component_id system_id(::px4_msgs::msg::VehicleStatus::_system_id_type arg)
  {
    msg_.system_id = std::move(arg);
    return Init_VehicleStatus_component_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_system_type
{
public:
  explicit Init_VehicleStatus_system_type(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_system_id system_type(::px4_msgs::msg::VehicleStatus::_system_type_type arg)
  {
    msg_.system_type = std::move(arg);
    return Init_VehicleStatus_system_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_in_transition_to_fw
{
public:
  explicit Init_VehicleStatus_in_transition_to_fw(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_system_type in_transition_to_fw(::px4_msgs::msg::VehicleStatus::_in_transition_to_fw_type arg)
  {
    msg_.in_transition_to_fw = std::move(arg);
    return Init_VehicleStatus_system_type(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_in_transition_mode
{
public:
  explicit Init_VehicleStatus_in_transition_mode(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_in_transition_to_fw in_transition_mode(::px4_msgs::msg::VehicleStatus::_in_transition_mode_type arg)
  {
    msg_.in_transition_mode = std::move(arg);
    return Init_VehicleStatus_in_transition_to_fw(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_vtol_tailsitter
{
public:
  explicit Init_VehicleStatus_is_vtol_tailsitter(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_in_transition_mode is_vtol_tailsitter(::px4_msgs::msg::VehicleStatus::_is_vtol_tailsitter_type arg)
  {
    msg_.is_vtol_tailsitter = std::move(arg);
    return Init_VehicleStatus_in_transition_mode(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_vtol
{
public:
  explicit Init_VehicleStatus_is_vtol(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_vtol_tailsitter is_vtol(::px4_msgs::msg::VehicleStatus::_is_vtol_type arg)
  {
    msg_.is_vtol = std::move(arg);
    return Init_VehicleStatus_is_vtol_tailsitter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_high_latency_data_link_lost
{
public:
  explicit Init_VehicleStatus_high_latency_data_link_lost(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_vtol high_latency_data_link_lost(::px4_msgs::msg::VehicleStatus::_high_latency_data_link_lost_type arg)
  {
    msg_.high_latency_data_link_lost = std::move(arg);
    return Init_VehicleStatus_is_vtol(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_gcs_connection_lost_counter
{
public:
  explicit Init_VehicleStatus_gcs_connection_lost_counter(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_high_latency_data_link_lost gcs_connection_lost_counter(::px4_msgs::msg::VehicleStatus::_gcs_connection_lost_counter_type arg)
  {
    msg_.gcs_connection_lost_counter = std::move(arg);
    return Init_VehicleStatus_high_latency_data_link_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_gcs_connection_lost
{
public:
  explicit Init_VehicleStatus_gcs_connection_lost(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_gcs_connection_lost_counter gcs_connection_lost(::px4_msgs::msg::VehicleStatus::_gcs_connection_lost_type arg)
  {
    msg_.gcs_connection_lost = std::move(arg);
    return Init_VehicleStatus_gcs_connection_lost_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failsafe_defer_state
{
public:
  explicit Init_VehicleStatus_failsafe_defer_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_gcs_connection_lost failsafe_defer_state(::px4_msgs::msg::VehicleStatus::_failsafe_defer_state_type arg)
  {
    msg_.failsafe_defer_state = std::move(arg);
    return Init_VehicleStatus_gcs_connection_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failsafe_and_user_took_over
{
public:
  explicit Init_VehicleStatus_failsafe_and_user_took_over(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failsafe_defer_state failsafe_and_user_took_over(::px4_msgs::msg::VehicleStatus::_failsafe_and_user_took_over_type arg)
  {
    msg_.failsafe_and_user_took_over = std::move(arg);
    return Init_VehicleStatus_failsafe_defer_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failsafe
{
public:
  explicit Init_VehicleStatus_failsafe(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failsafe_and_user_took_over failsafe(::px4_msgs::msg::VehicleStatus::_failsafe_type arg)
  {
    msg_.failsafe = std::move(arg);
    return Init_VehicleStatus_failsafe_and_user_took_over(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_vehicle_type
{
public:
  explicit Init_VehicleStatus_vehicle_type(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failsafe vehicle_type(::px4_msgs::msg::VehicleStatus::_vehicle_type_type arg)
  {
    msg_.vehicle_type = std::move(arg);
    return Init_VehicleStatus_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_hil_state
{
public:
  explicit Init_VehicleStatus_hil_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_vehicle_type hil_state(::px4_msgs::msg::VehicleStatus::_hil_state_type arg)
  {
    msg_.hil_state = std::move(arg);
    return Init_VehicleStatus_vehicle_type(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failure_detector_status
{
public:
  explicit Init_VehicleStatus_failure_detector_status(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_hil_state failure_detector_status(::px4_msgs::msg::VehicleStatus::_failure_detector_status_type arg)
  {
    msg_.failure_detector_status = std::move(arg);
    return Init_VehicleStatus_hil_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_can_set_nav_states_mask
{
public:
  explicit Init_VehicleStatus_can_set_nav_states_mask(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failure_detector_status can_set_nav_states_mask(::px4_msgs::msg::VehicleStatus::_can_set_nav_states_mask_type arg)
  {
    msg_.can_set_nav_states_mask = std::move(arg);
    return Init_VehicleStatus_failure_detector_status(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_valid_nav_states_mask
{
public:
  explicit Init_VehicleStatus_valid_nav_states_mask(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_can_set_nav_states_mask valid_nav_states_mask(::px4_msgs::msg::VehicleStatus::_valid_nav_states_mask_type arg)
  {
    msg_.valid_nav_states_mask = std::move(arg);
    return Init_VehicleStatus_can_set_nav_states_mask(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_executor_in_charge
{
public:
  explicit Init_VehicleStatus_executor_in_charge(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_valid_nav_states_mask executor_in_charge(::px4_msgs::msg::VehicleStatus::_executor_in_charge_type arg)
  {
    msg_.executor_in_charge = std::move(arg);
    return Init_VehicleStatus_valid_nav_states_mask(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_nav_state
{
public:
  explicit Init_VehicleStatus_nav_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_executor_in_charge nav_state(::px4_msgs::msg::VehicleStatus::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return Init_VehicleStatus_executor_in_charge(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_nav_state_user_intention
{
public:
  explicit Init_VehicleStatus_nav_state_user_intention(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_nav_state nav_state_user_intention(::px4_msgs::msg::VehicleStatus::_nav_state_user_intention_type arg)
  {
    msg_.nav_state_user_intention = std::move(arg);
    return Init_VehicleStatus_nav_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_nav_state_timestamp
{
public:
  explicit Init_VehicleStatus_nav_state_timestamp(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_nav_state_user_intention nav_state_timestamp(::px4_msgs::msg::VehicleStatus::_nav_state_timestamp_type arg)
  {
    msg_.nav_state_timestamp = std::move(arg);
    return Init_VehicleStatus_nav_state_user_intention(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_latest_disarming_reason
{
public:
  explicit Init_VehicleStatus_latest_disarming_reason(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_nav_state_timestamp latest_disarming_reason(::px4_msgs::msg::VehicleStatus::_latest_disarming_reason_type arg)
  {
    msg_.latest_disarming_reason = std::move(arg);
    return Init_VehicleStatus_nav_state_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_latest_arming_reason
{
public:
  explicit Init_VehicleStatus_latest_arming_reason(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_latest_disarming_reason latest_arming_reason(::px4_msgs::msg::VehicleStatus::_latest_arming_reason_type arg)
  {
    msg_.latest_arming_reason = std::move(arg);
    return Init_VehicleStatus_latest_disarming_reason(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_arming_state
{
public:
  explicit Init_VehicleStatus_arming_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_latest_arming_reason arming_state(::px4_msgs::msg::VehicleStatus::_arming_state_type arg)
  {
    msg_.arming_state = std::move(arg);
    return Init_VehicleStatus_latest_arming_reason(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_takeoff_time
{
public:
  explicit Init_VehicleStatus_takeoff_time(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_arming_state takeoff_time(::px4_msgs::msg::VehicleStatus::_takeoff_time_type arg)
  {
    msg_.takeoff_time = std::move(arg);
    return Init_VehicleStatus_arming_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_armed_time
{
public:
  explicit Init_VehicleStatus_armed_time(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_takeoff_time armed_time(::px4_msgs::msg::VehicleStatus::_armed_time_type arg)
  {
    msg_.armed_time = std::move(arg);
    return Init_VehicleStatus_takeoff_time(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_timestamp
{
public:
  Init_VehicleStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_armed_time timestamp(::px4_msgs::msg::VehicleStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleStatus_armed_time(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleStatus>()
{
  return px4_msgs::msg::builder::Init_VehicleStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
