// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/IridiumsbdStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/iridiumsbd_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IridiumsbdStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: last_heartbeat
  {
    out << "last_heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.last_heartbeat, out);
    out << ", ";
  }

  // member: tx_buf_write_index
  {
    out << "tx_buf_write_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_buf_write_index, out);
    out << ", ";
  }

  // member: rx_buf_read_index
  {
    out << "rx_buf_read_index: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_buf_read_index, out);
    out << ", ";
  }

  // member: rx_buf_end_index
  {
    out << "rx_buf_end_index: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_buf_end_index, out);
    out << ", ";
  }

  // member: failed_sbd_sessions
  {
    out << "failed_sbd_sessions: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_sbd_sessions, out);
    out << ", ";
  }

  // member: successful_sbd_sessions
  {
    out << "successful_sbd_sessions: ";
    rosidl_generator_traits::value_to_yaml(msg.successful_sbd_sessions, out);
    out << ", ";
  }

  // member: num_tx_buf_reset
  {
    out << "num_tx_buf_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.num_tx_buf_reset, out);
    out << ", ";
  }

  // member: signal_quality
  {
    out << "signal_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_quality, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: ring_pending
  {
    out << "ring_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.ring_pending, out);
    out << ", ";
  }

  // member: tx_buf_write_pending
  {
    out << "tx_buf_write_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_buf_write_pending, out);
    out << ", ";
  }

  // member: tx_session_pending
  {
    out << "tx_session_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_session_pending, out);
    out << ", ";
  }

  // member: rx_read_pending
  {
    out << "rx_read_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_read_pending, out);
    out << ", ";
  }

  // member: rx_session_pending
  {
    out << "rx_session_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_session_pending, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IridiumsbdStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: last_heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.last_heartbeat, out);
    out << "\n";
  }

  // member: tx_buf_write_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_buf_write_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_buf_write_index, out);
    out << "\n";
  }

  // member: rx_buf_read_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_buf_read_index: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_buf_read_index, out);
    out << "\n";
  }

  // member: rx_buf_end_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_buf_end_index: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_buf_end_index, out);
    out << "\n";
  }

  // member: failed_sbd_sessions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failed_sbd_sessions: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_sbd_sessions, out);
    out << "\n";
  }

  // member: successful_sbd_sessions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "successful_sbd_sessions: ";
    rosidl_generator_traits::value_to_yaml(msg.successful_sbd_sessions, out);
    out << "\n";
  }

  // member: num_tx_buf_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_tx_buf_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.num_tx_buf_reset, out);
    out << "\n";
  }

  // member: signal_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_quality, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: ring_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ring_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.ring_pending, out);
    out << "\n";
  }

  // member: tx_buf_write_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_buf_write_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_buf_write_pending, out);
    out << "\n";
  }

  // member: tx_session_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_session_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_session_pending, out);
    out << "\n";
  }

  // member: rx_read_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_read_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_read_pending, out);
    out << "\n";
  }

  // member: rx_session_pending
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rx_session_pending: ";
    rosidl_generator_traits::value_to_yaml(msg.rx_session_pending, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IridiumsbdStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::IridiumsbdStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::IridiumsbdStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::IridiumsbdStatus>()
{
  return "px4_msgs::msg::IridiumsbdStatus";
}

template<>
inline const char * name<px4_msgs::msg::IridiumsbdStatus>()
{
  return "px4_msgs/msg/IridiumsbdStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::IridiumsbdStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::IridiumsbdStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::IridiumsbdStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__IRIDIUMSBD_STATUS__TRAITS_HPP_
