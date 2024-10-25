// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/arming_check_reply__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmingCheckReply_mode_req_manual_control
{
public:
  explicit Init_ArmingCheckReply_mode_req_manual_control(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ArmingCheckReply mode_req_manual_control(::px4_msgs::msg::ArmingCheckReply::_mode_req_manual_control_type arg)
  {
    msg_.mode_req_manual_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_prevent_arming
{
public:
  explicit Init_ArmingCheckReply_mode_req_prevent_arming(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_manual_control mode_req_prevent_arming(::px4_msgs::msg::ArmingCheckReply::_mode_req_prevent_arming_type arg)
  {
    msg_.mode_req_prevent_arming = std::move(arg);
    return Init_ArmingCheckReply_mode_req_manual_control(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_home_position
{
public:
  explicit Init_ArmingCheckReply_mode_req_home_position(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_prevent_arming mode_req_home_position(::px4_msgs::msg::ArmingCheckReply::_mode_req_home_position_type arg)
  {
    msg_.mode_req_home_position = std::move(arg);
    return Init_ArmingCheckReply_mode_req_prevent_arming(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_mission
{
public:
  explicit Init_ArmingCheckReply_mode_req_mission(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_home_position mode_req_mission(::px4_msgs::msg::ArmingCheckReply::_mode_req_mission_type arg)
  {
    msg_.mode_req_mission = std::move(arg);
    return Init_ArmingCheckReply_mode_req_home_position(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_global_position
{
public:
  explicit Init_ArmingCheckReply_mode_req_global_position(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_mission mode_req_global_position(::px4_msgs::msg::ArmingCheckReply::_mode_req_global_position_type arg)
  {
    msg_.mode_req_global_position = std::move(arg);
    return Init_ArmingCheckReply_mode_req_mission(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_local_position_relaxed
{
public:
  explicit Init_ArmingCheckReply_mode_req_local_position_relaxed(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_global_position mode_req_local_position_relaxed(::px4_msgs::msg::ArmingCheckReply::_mode_req_local_position_relaxed_type arg)
  {
    msg_.mode_req_local_position_relaxed = std::move(arg);
    return Init_ArmingCheckReply_mode_req_global_position(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_local_position
{
public:
  explicit Init_ArmingCheckReply_mode_req_local_position(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_local_position_relaxed mode_req_local_position(::px4_msgs::msg::ArmingCheckReply::_mode_req_local_position_type arg)
  {
    msg_.mode_req_local_position = std::move(arg);
    return Init_ArmingCheckReply_mode_req_local_position_relaxed(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_local_alt
{
public:
  explicit Init_ArmingCheckReply_mode_req_local_alt(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_local_position mode_req_local_alt(::px4_msgs::msg::ArmingCheckReply::_mode_req_local_alt_type arg)
  {
    msg_.mode_req_local_alt = std::move(arg);
    return Init_ArmingCheckReply_mode_req_local_position(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_attitude
{
public:
  explicit Init_ArmingCheckReply_mode_req_attitude(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_local_alt mode_req_attitude(::px4_msgs::msg::ArmingCheckReply::_mode_req_attitude_type arg)
  {
    msg_.mode_req_attitude = std::move(arg);
    return Init_ArmingCheckReply_mode_req_local_alt(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_mode_req_angular_velocity
{
public:
  explicit Init_ArmingCheckReply_mode_req_angular_velocity(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_attitude mode_req_angular_velocity(::px4_msgs::msg::ArmingCheckReply::_mode_req_angular_velocity_type arg)
  {
    msg_.mode_req_angular_velocity = std::move(arg);
    return Init_ArmingCheckReply_mode_req_attitude(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_events
{
public:
  explicit Init_ArmingCheckReply_events(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_mode_req_angular_velocity events(::px4_msgs::msg::ArmingCheckReply::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_ArmingCheckReply_mode_req_angular_velocity(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_num_events
{
public:
  explicit Init_ArmingCheckReply_num_events(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_events num_events(::px4_msgs::msg::ArmingCheckReply::_num_events_type arg)
  {
    msg_.num_events = std::move(arg);
    return Init_ArmingCheckReply_events(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_can_arm_and_run
{
public:
  explicit Init_ArmingCheckReply_can_arm_and_run(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_num_events can_arm_and_run(::px4_msgs::msg::ArmingCheckReply::_can_arm_and_run_type arg)
  {
    msg_.can_arm_and_run = std::move(arg);
    return Init_ArmingCheckReply_num_events(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_health_component_error
{
public:
  explicit Init_ArmingCheckReply_health_component_error(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_can_arm_and_run health_component_error(::px4_msgs::msg::ArmingCheckReply::_health_component_error_type arg)
  {
    msg_.health_component_error = std::move(arg);
    return Init_ArmingCheckReply_can_arm_and_run(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_health_component_warning
{
public:
  explicit Init_ArmingCheckReply_health_component_warning(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_health_component_error health_component_warning(::px4_msgs::msg::ArmingCheckReply::_health_component_warning_type arg)
  {
    msg_.health_component_warning = std::move(arg);
    return Init_ArmingCheckReply_health_component_error(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_health_component_is_present
{
public:
  explicit Init_ArmingCheckReply_health_component_is_present(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_health_component_warning health_component_is_present(::px4_msgs::msg::ArmingCheckReply::_health_component_is_present_type arg)
  {
    msg_.health_component_is_present = std::move(arg);
    return Init_ArmingCheckReply_health_component_warning(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_health_component_index
{
public:
  explicit Init_ArmingCheckReply_health_component_index(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_health_component_is_present health_component_index(::px4_msgs::msg::ArmingCheckReply::_health_component_index_type arg)
  {
    msg_.health_component_index = std::move(arg);
    return Init_ArmingCheckReply_health_component_is_present(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_registration_id
{
public:
  explicit Init_ArmingCheckReply_registration_id(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_health_component_index registration_id(::px4_msgs::msg::ArmingCheckReply::_registration_id_type arg)
  {
    msg_.registration_id = std::move(arg);
    return Init_ArmingCheckReply_health_component_index(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_request_id
{
public:
  explicit Init_ArmingCheckReply_request_id(::px4_msgs::msg::ArmingCheckReply & msg)
  : msg_(msg)
  {}
  Init_ArmingCheckReply_registration_id request_id(::px4_msgs::msg::ArmingCheckReply::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_ArmingCheckReply_registration_id(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

class Init_ArmingCheckReply_timestamp
{
public:
  Init_ArmingCheckReply_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmingCheckReply_request_id timestamp(::px4_msgs::msg::ArmingCheckReply::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ArmingCheckReply_request_id(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckReply msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ArmingCheckReply>()
{
  return px4_msgs::msg::builder::Init_ArmingCheckReply_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__BUILDER_HPP_
