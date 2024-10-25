// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ConfigOverrides.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/config_overrides__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConfigOverrides & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: disable_auto_disarm
  {
    out << "disable_auto_disarm: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_auto_disarm, out);
    out << ", ";
  }

  // member: defer_failsafes
  {
    out << "defer_failsafes: ";
    rosidl_generator_traits::value_to_yaml(msg.defer_failsafes, out);
    out << ", ";
  }

  // member: defer_failsafes_timeout_s
  {
    out << "defer_failsafes_timeout_s: ";
    rosidl_generator_traits::value_to_yaml(msg.defer_failsafes_timeout_s, out);
    out << ", ";
  }

  // member: source_type
  {
    out << "source_type: ";
    rosidl_generator_traits::value_to_yaml(msg.source_type, out);
    out << ", ";
  }

  // member: source_id
  {
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigOverrides & msg,
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

  // member: disable_auto_disarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_auto_disarm: ";
    rosidl_generator_traits::value_to_yaml(msg.disable_auto_disarm, out);
    out << "\n";
  }

  // member: defer_failsafes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "defer_failsafes: ";
    rosidl_generator_traits::value_to_yaml(msg.defer_failsafes, out);
    out << "\n";
  }

  // member: defer_failsafes_timeout_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "defer_failsafes_timeout_s: ";
    rosidl_generator_traits::value_to_yaml(msg.defer_failsafes_timeout_s, out);
    out << "\n";
  }

  // member: source_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_type: ";
    rosidl_generator_traits::value_to_yaml(msg.source_type, out);
    out << "\n";
  }

  // member: source_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_id: ";
    rosidl_generator_traits::value_to_yaml(msg.source_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigOverrides & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::ConfigOverrides & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ConfigOverrides & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ConfigOverrides>()
{
  return "px4_msgs::msg::ConfigOverrides";
}

template<>
inline const char * name<px4_msgs::msg::ConfigOverrides>()
{
  return "px4_msgs/msg/ConfigOverrides";
}

template<>
struct has_fixed_size<px4_msgs::msg::ConfigOverrides>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ConfigOverrides>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ConfigOverrides>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__CONFIG_OVERRIDES__TRAITS_HPP_
