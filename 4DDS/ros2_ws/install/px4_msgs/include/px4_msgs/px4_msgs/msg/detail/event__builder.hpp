// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Event_log_levels
{
public:
  explicit Init_Event_log_levels(::px4_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Event log_levels(::px4_msgs::msg::Event::_log_levels_type arg)
  {
    msg_.log_levels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Event msg_;
};

class Init_Event_arguments
{
public:
  explicit Init_Event_arguments(::px4_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_log_levels arguments(::px4_msgs::msg::Event::_arguments_type arg)
  {
    msg_.arguments = std::move(arg);
    return Init_Event_log_levels(msg_);
  }

private:
  ::px4_msgs::msg::Event msg_;
};

class Init_Event_event_sequence
{
public:
  explicit Init_Event_event_sequence(::px4_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_arguments event_sequence(::px4_msgs::msg::Event::_event_sequence_type arg)
  {
    msg_.event_sequence = std::move(arg);
    return Init_Event_arguments(msg_);
  }

private:
  ::px4_msgs::msg::Event msg_;
};

class Init_Event_id
{
public:
  explicit Init_Event_id(::px4_msgs::msg::Event & msg)
  : msg_(msg)
  {}
  Init_Event_event_sequence id(::px4_msgs::msg::Event::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Event_event_sequence(msg_);
  }

private:
  ::px4_msgs::msg::Event msg_;
};

class Init_Event_timestamp
{
public:
  Init_Event_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Event_id timestamp(::px4_msgs::msg::Event::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Event_id(msg_);
  }

private:
  ::px4_msgs::msg::Event msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Event>()
{
  return px4_msgs::msg::builder::Init_Event_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__EVENT__BUILDER_HPP_
