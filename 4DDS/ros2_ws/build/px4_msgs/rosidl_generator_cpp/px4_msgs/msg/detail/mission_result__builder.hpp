// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION_RESULT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MISSION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/mission_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionResult_execution_mode
{
public:
  explicit Init_MissionResult_execution_mode(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::MissionResult execution_mode(::px4_msgs::msg::MissionResult::_execution_mode_type arg)
  {
    msg_.execution_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_item_do_jump_remaining
{
public:
  explicit Init_MissionResult_item_do_jump_remaining(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_execution_mode item_do_jump_remaining(::px4_msgs::msg::MissionResult::_item_do_jump_remaining_type arg)
  {
    msg_.item_do_jump_remaining = std::move(arg);
    return Init_MissionResult_execution_mode(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_item_changed_index
{
public:
  explicit Init_MissionResult_item_changed_index(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_item_do_jump_remaining item_changed_index(::px4_msgs::msg::MissionResult::_item_changed_index_type arg)
  {
    msg_.item_changed_index = std::move(arg);
    return Init_MissionResult_item_do_jump_remaining(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_item_do_jump_changed
{
public:
  explicit Init_MissionResult_item_do_jump_changed(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_item_changed_index item_do_jump_changed(::px4_msgs::msg::MissionResult::_item_do_jump_changed_type arg)
  {
    msg_.item_do_jump_changed = std::move(arg);
    return Init_MissionResult_item_changed_index(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_failure
{
public:
  explicit Init_MissionResult_failure(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_item_do_jump_changed failure(::px4_msgs::msg::MissionResult::_failure_type arg)
  {
    msg_.failure = std::move(arg);
    return Init_MissionResult_item_do_jump_changed(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_finished
{
public:
  explicit Init_MissionResult_finished(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_failure finished(::px4_msgs::msg::MissionResult::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return Init_MissionResult_failure(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_warning
{
public:
  explicit Init_MissionResult_warning(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_finished warning(::px4_msgs::msg::MissionResult::_warning_type arg)
  {
    msg_.warning = std::move(arg);
    return Init_MissionResult_finished(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_valid
{
public:
  explicit Init_MissionResult_valid(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_warning valid(::px4_msgs::msg::MissionResult::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_MissionResult_warning(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_seq_total
{
public:
  explicit Init_MissionResult_seq_total(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_valid seq_total(::px4_msgs::msg::MissionResult::_seq_total_type arg)
  {
    msg_.seq_total = std::move(arg);
    return Init_MissionResult_valid(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_seq_current
{
public:
  explicit Init_MissionResult_seq_current(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_seq_total seq_current(::px4_msgs::msg::MissionResult::_seq_current_type arg)
  {
    msg_.seq_current = std::move(arg);
    return Init_MissionResult_seq_total(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_seq_reached
{
public:
  explicit Init_MissionResult_seq_reached(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_seq_current seq_reached(::px4_msgs::msg::MissionResult::_seq_reached_type arg)
  {
    msg_.seq_reached = std::move(arg);
    return Init_MissionResult_seq_current(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_home_position_counter
{
public:
  explicit Init_MissionResult_home_position_counter(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_seq_reached home_position_counter(::px4_msgs::msg::MissionResult::_home_position_counter_type arg)
  {
    msg_.home_position_counter = std::move(arg);
    return Init_MissionResult_seq_reached(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_geofence_id
{
public:
  explicit Init_MissionResult_geofence_id(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_home_position_counter geofence_id(::px4_msgs::msg::MissionResult::_geofence_id_type arg)
  {
    msg_.geofence_id = std::move(arg);
    return Init_MissionResult_home_position_counter(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_mission_id
{
public:
  explicit Init_MissionResult_mission_id(::px4_msgs::msg::MissionResult & msg)
  : msg_(msg)
  {}
  Init_MissionResult_geofence_id mission_id(::px4_msgs::msg::MissionResult::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_MissionResult_geofence_id(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

class Init_MissionResult_timestamp
{
public:
  Init_MissionResult_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MissionResult_mission_id timestamp(::px4_msgs::msg::MissionResult::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MissionResult_mission_id(msg_);
  }

private:
  ::px4_msgs::msg::MissionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::MissionResult>()
{
  return px4_msgs::msg::builder::Init_MissionResult_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MISSION_RESULT__BUILDER_HPP_
