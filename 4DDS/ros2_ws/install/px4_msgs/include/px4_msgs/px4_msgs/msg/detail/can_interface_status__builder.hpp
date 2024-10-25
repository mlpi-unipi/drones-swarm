// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CanInterfaceStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/can_interface_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CanInterfaceStatus_frames_rx
{
public:
  explicit Init_CanInterfaceStatus_frames_rx(::px4_msgs::msg::CanInterfaceStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CanInterfaceStatus frames_rx(::px4_msgs::msg::CanInterfaceStatus::_frames_rx_type arg)
  {
    msg_.frames_rx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CanInterfaceStatus msg_;
};

class Init_CanInterfaceStatus_frames_tx
{
public:
  explicit Init_CanInterfaceStatus_frames_tx(::px4_msgs::msg::CanInterfaceStatus & msg)
  : msg_(msg)
  {}
  Init_CanInterfaceStatus_frames_rx frames_tx(::px4_msgs::msg::CanInterfaceStatus::_frames_tx_type arg)
  {
    msg_.frames_tx = std::move(arg);
    return Init_CanInterfaceStatus_frames_rx(msg_);
  }

private:
  ::px4_msgs::msg::CanInterfaceStatus msg_;
};

class Init_CanInterfaceStatus_io_errors
{
public:
  explicit Init_CanInterfaceStatus_io_errors(::px4_msgs::msg::CanInterfaceStatus & msg)
  : msg_(msg)
  {}
  Init_CanInterfaceStatus_frames_tx io_errors(::px4_msgs::msg::CanInterfaceStatus::_io_errors_type arg)
  {
    msg_.io_errors = std::move(arg);
    return Init_CanInterfaceStatus_frames_tx(msg_);
  }

private:
  ::px4_msgs::msg::CanInterfaceStatus msg_;
};

class Init_CanInterfaceStatus_interface
{
public:
  explicit Init_CanInterfaceStatus_interface(::px4_msgs::msg::CanInterfaceStatus & msg)
  : msg_(msg)
  {}
  Init_CanInterfaceStatus_io_errors interface(::px4_msgs::msg::CanInterfaceStatus::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_CanInterfaceStatus_io_errors(msg_);
  }

private:
  ::px4_msgs::msg::CanInterfaceStatus msg_;
};

class Init_CanInterfaceStatus_timestamp
{
public:
  Init_CanInterfaceStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanInterfaceStatus_interface timestamp(::px4_msgs::msg::CanInterfaceStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CanInterfaceStatus_interface(msg_);
  }

private:
  ::px4_msgs::msg::CanInterfaceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CanInterfaceStatus>()
{
  return px4_msgs::msg::builder::Init_CanInterfaceStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CAN_INTERFACE_STATUS__BUILDER_HPP_
