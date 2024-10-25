// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Ping.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PING__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/ping__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ping & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: ping_time
  {
    out << "ping_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_time, out);
    out << ", ";
  }

  // member: ping_sequence
  {
    out << "ping_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_sequence, out);
    out << ", ";
  }

  // member: dropped_packets
  {
    out << "dropped_packets: ";
    rosidl_generator_traits::value_to_yaml(msg.dropped_packets, out);
    out << ", ";
  }

  // member: rtt_ms
  {
    out << "rtt_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_ms, out);
    out << ", ";
  }

  // member: system_id
  {
    out << "system_id: ";
    rosidl_generator_traits::value_to_yaml(msg.system_id, out);
    out << ", ";
  }

  // member: component_id
  {
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ping & msg,
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

  // member: ping_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_time: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_time, out);
    out << "\n";
  }

  // member: ping_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ping_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.ping_sequence, out);
    out << "\n";
  }

  // member: dropped_packets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropped_packets: ";
    rosidl_generator_traits::value_to_yaml(msg.dropped_packets, out);
    out << "\n";
  }

  // member: rtt_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtt_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_ms, out);
    out << "\n";
  }

  // member: system_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_id: ";
    rosidl_generator_traits::value_to_yaml(msg.system_id, out);
    out << "\n";
  }

  // member: component_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ping & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::Ping & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::Ping & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::Ping>()
{
  return "px4_msgs::msg::Ping";
}

template<>
inline const char * name<px4_msgs::msg::Ping>()
{
  return "px4_msgs/msg/Ping";
}

template<>
struct has_fixed_size<px4_msgs::msg::Ping>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Ping>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Ping>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PING__TRAITS_HPP_
