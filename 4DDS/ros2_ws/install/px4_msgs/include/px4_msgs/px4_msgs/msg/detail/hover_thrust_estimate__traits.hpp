// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/HoverThrustEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/hover_thrust_estimate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HoverThrustEstimate & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: hover_thrust
  {
    out << "hover_thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.hover_thrust, out);
    out << ", ";
  }

  // member: hover_thrust_var
  {
    out << "hover_thrust_var: ";
    rosidl_generator_traits::value_to_yaml(msg.hover_thrust_var, out);
    out << ", ";
  }

  // member: accel_innov
  {
    out << "accel_innov: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_innov, out);
    out << ", ";
  }

  // member: accel_innov_var
  {
    out << "accel_innov_var: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_innov_var, out);
    out << ", ";
  }

  // member: accel_innov_test_ratio
  {
    out << "accel_innov_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_innov_test_ratio, out);
    out << ", ";
  }

  // member: accel_noise_var
  {
    out << "accel_noise_var: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_noise_var, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HoverThrustEstimate & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: hover_thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hover_thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.hover_thrust, out);
    out << "\n";
  }

  // member: hover_thrust_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hover_thrust_var: ";
    rosidl_generator_traits::value_to_yaml(msg.hover_thrust_var, out);
    out << "\n";
  }

  // member: accel_innov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_innov: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_innov, out);
    out << "\n";
  }

  // member: accel_innov_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_innov_var: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_innov_var, out);
    out << "\n";
  }

  // member: accel_innov_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_innov_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_innov_test_ratio, out);
    out << "\n";
  }

  // member: accel_noise_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_noise_var: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_noise_var, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HoverThrustEstimate & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::HoverThrustEstimate & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::HoverThrustEstimate & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::HoverThrustEstimate>()
{
  return "px4_msgs::msg::HoverThrustEstimate";
}

template<>
inline const char * name<px4_msgs::msg::HoverThrustEstimate>()
{
  return "px4_msgs/msg/HoverThrustEstimate";
}

template<>
struct has_fixed_size<px4_msgs::msg::HoverThrustEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::HoverThrustEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::HoverThrustEstimate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__TRAITS_HPP_
