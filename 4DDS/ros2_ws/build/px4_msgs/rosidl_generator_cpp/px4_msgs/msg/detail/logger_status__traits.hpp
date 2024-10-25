// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LoggerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/logger_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoggerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: backend
  {
    out << "backend: ";
    rosidl_generator_traits::value_to_yaml(msg.backend, out);
    out << ", ";
  }

  // member: total_written_kb
  {
    out << "total_written_kb: ";
    rosidl_generator_traits::value_to_yaml(msg.total_written_kb, out);
    out << ", ";
  }

  // member: write_rate_kb_s
  {
    out << "write_rate_kb_s: ";
    rosidl_generator_traits::value_to_yaml(msg.write_rate_kb_s, out);
    out << ", ";
  }

  // member: dropouts
  {
    out << "dropouts: ";
    rosidl_generator_traits::value_to_yaml(msg.dropouts, out);
    out << ", ";
  }

  // member: message_gaps
  {
    out << "message_gaps: ";
    rosidl_generator_traits::value_to_yaml(msg.message_gaps, out);
    out << ", ";
  }

  // member: buffer_used_bytes
  {
    out << "buffer_used_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_used_bytes, out);
    out << ", ";
  }

  // member: buffer_size_bytes
  {
    out << "buffer_size_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_size_bytes, out);
    out << ", ";
  }

  // member: num_messages
  {
    out << "num_messages: ";
    rosidl_generator_traits::value_to_yaml(msg.num_messages, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoggerStatus & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: backend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "backend: ";
    rosidl_generator_traits::value_to_yaml(msg.backend, out);
    out << "\n";
  }

  // member: total_written_kb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_written_kb: ";
    rosidl_generator_traits::value_to_yaml(msg.total_written_kb, out);
    out << "\n";
  }

  // member: write_rate_kb_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "write_rate_kb_s: ";
    rosidl_generator_traits::value_to_yaml(msg.write_rate_kb_s, out);
    out << "\n";
  }

  // member: dropouts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropouts: ";
    rosidl_generator_traits::value_to_yaml(msg.dropouts, out);
    out << "\n";
  }

  // member: message_gaps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_gaps: ";
    rosidl_generator_traits::value_to_yaml(msg.message_gaps, out);
    out << "\n";
  }

  // member: buffer_used_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buffer_used_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_used_bytes, out);
    out << "\n";
  }

  // member: buffer_size_bytes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buffer_size_bytes: ";
    rosidl_generator_traits::value_to_yaml(msg.buffer_size_bytes, out);
    out << "\n";
  }

  // member: num_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_messages: ";
    rosidl_generator_traits::value_to_yaml(msg.num_messages, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoggerStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::LoggerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::LoggerStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::LoggerStatus>()
{
  return "px4_msgs::msg::LoggerStatus";
}

template<>
inline const char * name<px4_msgs::msg::LoggerStatus>()
{
  return "px4_msgs/msg/LoggerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::LoggerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LoggerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LoggerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LOGGER_STATUS__TRAITS_HPP_
