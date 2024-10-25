// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PwmInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PWM_INPUT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PWM_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/pwm_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PwmInput & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: error_count
  {
    out << "error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count, out);
    out << ", ";
  }

  // member: pulse_width
  {
    out << "pulse_width: ";
    rosidl_generator_traits::value_to_yaml(msg.pulse_width, out);
    out << ", ";
  }

  // member: period
  {
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PwmInput & msg,
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

  // member: error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.error_count, out);
    out << "\n";
  }

  // member: pulse_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pulse_width: ";
    rosidl_generator_traits::value_to_yaml(msg.pulse_width, out);
    out << "\n";
  }

  // member: period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period: ";
    rosidl_generator_traits::value_to_yaml(msg.period, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PwmInput & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::PwmInput & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PwmInput & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PwmInput>()
{
  return "px4_msgs::msg::PwmInput";
}

template<>
inline const char * name<px4_msgs::msg::PwmInput>()
{
  return "px4_msgs/msg/PwmInput";
}

template<>
struct has_fixed_size<px4_msgs::msg::PwmInput>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PwmInput>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PwmInput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PWM_INPUT__TRAITS_HPP_
