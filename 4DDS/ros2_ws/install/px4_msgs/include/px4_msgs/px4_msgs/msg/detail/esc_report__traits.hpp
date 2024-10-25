// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESC_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESC_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/esc_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EscReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: esc_errorcount
  {
    out << "esc_errorcount: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_errorcount, out);
    out << ", ";
  }

  // member: esc_rpm
  {
    out << "esc_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_rpm, out);
    out << ", ";
  }

  // member: esc_voltage
  {
    out << "esc_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_voltage, out);
    out << ", ";
  }

  // member: esc_current
  {
    out << "esc_current: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_current, out);
    out << ", ";
  }

  // member: esc_temperature
  {
    out << "esc_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_temperature, out);
    out << ", ";
  }

  // member: esc_address
  {
    out << "esc_address: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_address, out);
    out << ", ";
  }

  // member: esc_cmdcount
  {
    out << "esc_cmdcount: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_cmdcount, out);
    out << ", ";
  }

  // member: esc_state
  {
    out << "esc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_state, out);
    out << ", ";
  }

  // member: actuator_function
  {
    out << "actuator_function: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_function, out);
    out << ", ";
  }

  // member: failures
  {
    out << "failures: ";
    rosidl_generator_traits::value_to_yaml(msg.failures, out);
    out << ", ";
  }

  // member: esc_power
  {
    out << "esc_power: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_power, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EscReport & msg,
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

  // member: esc_errorcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_errorcount: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_errorcount, out);
    out << "\n";
  }

  // member: esc_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_rpm, out);
    out << "\n";
  }

  // member: esc_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_voltage, out);
    out << "\n";
  }

  // member: esc_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_current: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_current, out);
    out << "\n";
  }

  // member: esc_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_temperature, out);
    out << "\n";
  }

  // member: esc_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_address: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_address, out);
    out << "\n";
  }

  // member: esc_cmdcount
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_cmdcount: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_cmdcount, out);
    out << "\n";
  }

  // member: esc_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_state, out);
    out << "\n";
  }

  // member: actuator_function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_function: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_function, out);
    out << "\n";
  }

  // member: failures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failures: ";
    rosidl_generator_traits::value_to_yaml(msg.failures, out);
    out << "\n";
  }

  // member: esc_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_power: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EscReport & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EscReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EscReport & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EscReport>()
{
  return "px4_msgs::msg::EscReport";
}

template<>
inline const char * name<px4_msgs::msg::EscReport>()
{
  return "px4_msgs/msg/EscReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::EscReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EscReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EscReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESC_REPORT__TRAITS_HPP_
