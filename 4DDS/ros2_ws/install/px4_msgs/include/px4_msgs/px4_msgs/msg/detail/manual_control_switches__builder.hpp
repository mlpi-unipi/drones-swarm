// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/manual_control_switches__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ManualControlSwitches_switch_changes
{
public:
  explicit Init_ManualControlSwitches_switch_changes(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ManualControlSwitches switch_changes(::px4_msgs::msg::ManualControlSwitches::_switch_changes_type arg)
  {
    msg_.switch_changes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_engage_main_motor_switch
{
public:
  explicit Init_ManualControlSwitches_engage_main_motor_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_switch_changes engage_main_motor_switch(::px4_msgs::msg::ManualControlSwitches::_engage_main_motor_switch_type arg)
  {
    msg_.engage_main_motor_switch = std::move(arg);
    return Init_ManualControlSwitches_switch_changes(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_video_switch
{
public:
  explicit Init_ManualControlSwitches_video_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_engage_main_motor_switch video_switch(::px4_msgs::msg::ManualControlSwitches::_video_switch_type arg)
  {
    msg_.video_switch = std::move(arg);
    return Init_ManualControlSwitches_engage_main_motor_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_photo_switch
{
public:
  explicit Init_ManualControlSwitches_photo_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_video_switch photo_switch(::px4_msgs::msg::ManualControlSwitches::_photo_switch_type arg)
  {
    msg_.photo_switch = std::move(arg);
    return Init_ManualControlSwitches_video_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_transition_switch
{
public:
  explicit Init_ManualControlSwitches_transition_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_photo_switch transition_switch(::px4_msgs::msg::ManualControlSwitches::_transition_switch_type arg)
  {
    msg_.transition_switch = std::move(arg);
    return Init_ManualControlSwitches_photo_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_gear_switch
{
public:
  explicit Init_ManualControlSwitches_gear_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_transition_switch gear_switch(::px4_msgs::msg::ManualControlSwitches::_gear_switch_type arg)
  {
    msg_.gear_switch = std::move(arg);
    return Init_ManualControlSwitches_transition_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_kill_switch
{
public:
  explicit Init_ManualControlSwitches_kill_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_gear_switch kill_switch(::px4_msgs::msg::ManualControlSwitches::_kill_switch_type arg)
  {
    msg_.kill_switch = std::move(arg);
    return Init_ManualControlSwitches_gear_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_offboard_switch
{
public:
  explicit Init_ManualControlSwitches_offboard_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_kill_switch offboard_switch(::px4_msgs::msg::ManualControlSwitches::_offboard_switch_type arg)
  {
    msg_.offboard_switch = std::move(arg);
    return Init_ManualControlSwitches_kill_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_loiter_switch
{
public:
  explicit Init_ManualControlSwitches_loiter_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_offboard_switch loiter_switch(::px4_msgs::msg::ManualControlSwitches::_loiter_switch_type arg)
  {
    msg_.loiter_switch = std::move(arg);
    return Init_ManualControlSwitches_offboard_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_return_switch
{
public:
  explicit Init_ManualControlSwitches_return_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_loiter_switch return_switch(::px4_msgs::msg::ManualControlSwitches::_return_switch_type arg)
  {
    msg_.return_switch = std::move(arg);
    return Init_ManualControlSwitches_loiter_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_arm_switch
{
public:
  explicit Init_ManualControlSwitches_arm_switch(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_return_switch arm_switch(::px4_msgs::msg::ManualControlSwitches::_arm_switch_type arg)
  {
    msg_.arm_switch = std::move(arg);
    return Init_ManualControlSwitches_return_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_mode_slot
{
public:
  explicit Init_ManualControlSwitches_mode_slot(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_arm_switch mode_slot(::px4_msgs::msg::ManualControlSwitches::_mode_slot_type arg)
  {
    msg_.mode_slot = std::move(arg);
    return Init_ManualControlSwitches_arm_switch(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_timestamp_sample
{
public:
  explicit Init_ManualControlSwitches_timestamp_sample(::px4_msgs::msg::ManualControlSwitches & msg)
  : msg_(msg)
  {}
  Init_ManualControlSwitches_mode_slot timestamp_sample(::px4_msgs::msg::ManualControlSwitches::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ManualControlSwitches_mode_slot(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

class Init_ManualControlSwitches_timestamp
{
public:
  Init_ManualControlSwitches_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManualControlSwitches_timestamp_sample timestamp(::px4_msgs::msg::ManualControlSwitches::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ManualControlSwitches_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlSwitches msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ManualControlSwitches>()
{
  return px4_msgs::msg::builder::Init_ManualControlSwitches_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__BUILDER_HPP_
