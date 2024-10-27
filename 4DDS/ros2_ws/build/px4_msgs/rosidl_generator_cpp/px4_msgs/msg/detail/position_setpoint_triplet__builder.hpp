// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/position_setpoint_triplet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionSetpointTriplet_next
{
public:
  explicit Init_PositionSetpointTriplet_next(::px4_msgs::msg::PositionSetpointTriplet & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PositionSetpointTriplet next(::px4_msgs::msg::PositionSetpointTriplet::_next_type arg)
  {
    msg_.next = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpointTriplet msg_;
};

class Init_PositionSetpointTriplet_current
{
public:
  explicit Init_PositionSetpointTriplet_current(::px4_msgs::msg::PositionSetpointTriplet & msg)
  : msg_(msg)
  {}
  Init_PositionSetpointTriplet_next current(::px4_msgs::msg::PositionSetpointTriplet::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_PositionSetpointTriplet_next(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpointTriplet msg_;
};

class Init_PositionSetpointTriplet_previous
{
public:
  explicit Init_PositionSetpointTriplet_previous(::px4_msgs::msg::PositionSetpointTriplet & msg)
  : msg_(msg)
  {}
  Init_PositionSetpointTriplet_current previous(::px4_msgs::msg::PositionSetpointTriplet::_previous_type arg)
  {
    msg_.previous = std::move(arg);
    return Init_PositionSetpointTriplet_current(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpointTriplet msg_;
};

class Init_PositionSetpointTriplet_timestamp
{
public:
  Init_PositionSetpointTriplet_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionSetpointTriplet_previous timestamp(::px4_msgs::msg::PositionSetpointTriplet::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PositionSetpointTriplet_previous(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpointTriplet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PositionSetpointTriplet>()
{
  return px4_msgs::msg::builder::Init_PositionSetpointTriplet_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT_TRIPLET__BUILDER_HPP_
