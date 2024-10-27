// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/iridiumsbd_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_IridiumsbdStatus_rx_session_pending
{
public:
  explicit Init_IridiumsbdStatus_rx_session_pending(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::IridiumsbdStatus rx_session_pending(::px4_msgs::msg::IridiumsbdStatus::_rx_session_pending_type arg)
  {
    msg_.rx_session_pending = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_rx_read_pending
{
public:
  explicit Init_IridiumsbdStatus_rx_read_pending(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_rx_session_pending rx_read_pending(::px4_msgs::msg::IridiumsbdStatus::_rx_read_pending_type arg)
  {
    msg_.rx_read_pending = std::move(arg);
    return Init_IridiumsbdStatus_rx_session_pending(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_tx_session_pending
{
public:
  explicit Init_IridiumsbdStatus_tx_session_pending(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_rx_read_pending tx_session_pending(::px4_msgs::msg::IridiumsbdStatus::_tx_session_pending_type arg)
  {
    msg_.tx_session_pending = std::move(arg);
    return Init_IridiumsbdStatus_rx_read_pending(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_tx_buf_write_pending
{
public:
  explicit Init_IridiumsbdStatus_tx_buf_write_pending(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_tx_session_pending tx_buf_write_pending(::px4_msgs::msg::IridiumsbdStatus::_tx_buf_write_pending_type arg)
  {
    msg_.tx_buf_write_pending = std::move(arg);
    return Init_IridiumsbdStatus_tx_session_pending(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_ring_pending
{
public:
  explicit Init_IridiumsbdStatus_ring_pending(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_tx_buf_write_pending ring_pending(::px4_msgs::msg::IridiumsbdStatus::_ring_pending_type arg)
  {
    msg_.ring_pending = std::move(arg);
    return Init_IridiumsbdStatus_tx_buf_write_pending(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_state
{
public:
  explicit Init_IridiumsbdStatus_state(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_ring_pending state(::px4_msgs::msg::IridiumsbdStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_IridiumsbdStatus_ring_pending(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_signal_quality
{
public:
  explicit Init_IridiumsbdStatus_signal_quality(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_state signal_quality(::px4_msgs::msg::IridiumsbdStatus::_signal_quality_type arg)
  {
    msg_.signal_quality = std::move(arg);
    return Init_IridiumsbdStatus_state(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_num_tx_buf_reset
{
public:
  explicit Init_IridiumsbdStatus_num_tx_buf_reset(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_signal_quality num_tx_buf_reset(::px4_msgs::msg::IridiumsbdStatus::_num_tx_buf_reset_type arg)
  {
    msg_.num_tx_buf_reset = std::move(arg);
    return Init_IridiumsbdStatus_signal_quality(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_successful_sbd_sessions
{
public:
  explicit Init_IridiumsbdStatus_successful_sbd_sessions(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_num_tx_buf_reset successful_sbd_sessions(::px4_msgs::msg::IridiumsbdStatus::_successful_sbd_sessions_type arg)
  {
    msg_.successful_sbd_sessions = std::move(arg);
    return Init_IridiumsbdStatus_num_tx_buf_reset(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_failed_sbd_sessions
{
public:
  explicit Init_IridiumsbdStatus_failed_sbd_sessions(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_successful_sbd_sessions failed_sbd_sessions(::px4_msgs::msg::IridiumsbdStatus::_failed_sbd_sessions_type arg)
  {
    msg_.failed_sbd_sessions = std::move(arg);
    return Init_IridiumsbdStatus_successful_sbd_sessions(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_rx_buf_end_index
{
public:
  explicit Init_IridiumsbdStatus_rx_buf_end_index(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_failed_sbd_sessions rx_buf_end_index(::px4_msgs::msg::IridiumsbdStatus::_rx_buf_end_index_type arg)
  {
    msg_.rx_buf_end_index = std::move(arg);
    return Init_IridiumsbdStatus_failed_sbd_sessions(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_rx_buf_read_index
{
public:
  explicit Init_IridiumsbdStatus_rx_buf_read_index(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_rx_buf_end_index rx_buf_read_index(::px4_msgs::msg::IridiumsbdStatus::_rx_buf_read_index_type arg)
  {
    msg_.rx_buf_read_index = std::move(arg);
    return Init_IridiumsbdStatus_rx_buf_end_index(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_tx_buf_write_index
{
public:
  explicit Init_IridiumsbdStatus_tx_buf_write_index(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_rx_buf_read_index tx_buf_write_index(::px4_msgs::msg::IridiumsbdStatus::_tx_buf_write_index_type arg)
  {
    msg_.tx_buf_write_index = std::move(arg);
    return Init_IridiumsbdStatus_rx_buf_read_index(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_last_heartbeat
{
public:
  explicit Init_IridiumsbdStatus_last_heartbeat(::px4_msgs::msg::IridiumsbdStatus & msg)
  : msg_(msg)
  {}
  Init_IridiumsbdStatus_tx_buf_write_index last_heartbeat(::px4_msgs::msg::IridiumsbdStatus::_last_heartbeat_type arg)
  {
    msg_.last_heartbeat = std::move(arg);
    return Init_IridiumsbdStatus_tx_buf_write_index(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

class Init_IridiumsbdStatus_timestamp
{
public:
  Init_IridiumsbdStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IridiumsbdStatus_last_heartbeat timestamp(::px4_msgs::msg::IridiumsbdStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_IridiumsbdStatus_last_heartbeat(msg_);
  }

private:
  ::px4_msgs::msg::IridiumsbdStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::IridiumsbdStatus>()
{
  return px4_msgs::msg::builder::Init_IridiumsbdStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__BUILDER_HPP_
