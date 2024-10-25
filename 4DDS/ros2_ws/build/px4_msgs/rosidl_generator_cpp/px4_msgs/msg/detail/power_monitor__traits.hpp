// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PowerMonitor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POWER_MONITOR__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POWER_MONITOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/power_monitor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerMonitor & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: voltage_v
  {
    out << "voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_v, out);
    out << ", ";
  }

  // member: current_a
  {
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << ", ";
  }

  // member: power_w
  {
    out << "power_w: ";
    rosidl_generator_traits::value_to_yaml(msg.power_w, out);
    out << ", ";
  }

  // member: rconf
  {
    out << "rconf: ";
    rosidl_generator_traits::value_to_yaml(msg.rconf, out);
    out << ", ";
  }

  // member: rsv
  {
    out << "rsv: ";
    rosidl_generator_traits::value_to_yaml(msg.rsv, out);
    out << ", ";
  }

  // member: rbv
  {
    out << "rbv: ";
    rosidl_generator_traits::value_to_yaml(msg.rbv, out);
    out << ", ";
  }

  // member: rp
  {
    out << "rp: ";
    rosidl_generator_traits::value_to_yaml(msg.rp, out);
    out << ", ";
  }

  // member: rc
  {
    out << "rc: ";
    rosidl_generator_traits::value_to_yaml(msg.rc, out);
    out << ", ";
  }

  // member: rcal
  {
    out << "rcal: ";
    rosidl_generator_traits::value_to_yaml(msg.rcal, out);
    out << ", ";
  }

  // member: me
  {
    out << "me: ";
    rosidl_generator_traits::value_to_yaml(msg.me, out);
    out << ", ";
  }

  // member: al
  {
    out << "al: ";
    rosidl_generator_traits::value_to_yaml(msg.al, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PowerMonitor & msg,
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

  // member: voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage_v, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: power_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_w: ";
    rosidl_generator_traits::value_to_yaml(msg.power_w, out);
    out << "\n";
  }

  // member: rconf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rconf: ";
    rosidl_generator_traits::value_to_yaml(msg.rconf, out);
    out << "\n";
  }

  // member: rsv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsv: ";
    rosidl_generator_traits::value_to_yaml(msg.rsv, out);
    out << "\n";
  }

  // member: rbv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rbv: ";
    rosidl_generator_traits::value_to_yaml(msg.rbv, out);
    out << "\n";
  }

  // member: rp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rp: ";
    rosidl_generator_traits::value_to_yaml(msg.rp, out);
    out << "\n";
  }

  // member: rc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc: ";
    rosidl_generator_traits::value_to_yaml(msg.rc, out);
    out << "\n";
  }

  // member: rcal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcal: ";
    rosidl_generator_traits::value_to_yaml(msg.rcal, out);
    out << "\n";
  }

  // member: me
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "me: ";
    rosidl_generator_traits::value_to_yaml(msg.me, out);
    out << "\n";
  }

  // member: al
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "al: ";
    rosidl_generator_traits::value_to_yaml(msg.al, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PowerMonitor & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::PowerMonitor & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PowerMonitor & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PowerMonitor>()
{
  return "px4_msgs::msg::PowerMonitor";
}

template<>
inline const char * name<px4_msgs::msg::PowerMonitor>()
{
  return "px4_msgs/msg/PowerMonitor";
}

template<>
struct has_fixed_size<px4_msgs::msg::PowerMonitor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PowerMonitor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PowerMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POWER_MONITOR__TRAITS_HPP_
