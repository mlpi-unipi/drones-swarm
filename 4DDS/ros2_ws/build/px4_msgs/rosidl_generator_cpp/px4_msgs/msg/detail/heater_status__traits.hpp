// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/HeaterStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEATER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__HEATER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/heater_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HeaterStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: heater_on
  {
    out << "heater_on: ";
    rosidl_generator_traits::value_to_yaml(msg.heater_on, out);
    out << ", ";
  }

  // member: temperature_target_met
  {
    out << "temperature_target_met: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_target_met, out);
    out << ", ";
  }

  // member: temperature_sensor
  {
    out << "temperature_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_sensor, out);
    out << ", ";
  }

  // member: temperature_target
  {
    out << "temperature_target: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_target, out);
    out << ", ";
  }

  // member: controller_period_usec
  {
    out << "controller_period_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_period_usec, out);
    out << ", ";
  }

  // member: controller_time_on_usec
  {
    out << "controller_time_on_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_time_on_usec, out);
    out << ", ";
  }

  // member: proportional_value
  {
    out << "proportional_value: ";
    rosidl_generator_traits::value_to_yaml(msg.proportional_value, out);
    out << ", ";
  }

  // member: integrator_value
  {
    out << "integrator_value: ";
    rosidl_generator_traits::value_to_yaml(msg.integrator_value, out);
    out << ", ";
  }

  // member: feed_forward_value
  {
    out << "feed_forward_value: ";
    rosidl_generator_traits::value_to_yaml(msg.feed_forward_value, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HeaterStatus & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: heater_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heater_on: ";
    rosidl_generator_traits::value_to_yaml(msg.heater_on, out);
    out << "\n";
  }

  // member: temperature_target_met
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_target_met: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_target_met, out);
    out << "\n";
  }

  // member: temperature_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_sensor, out);
    out << "\n";
  }

  // member: temperature_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_target: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_target, out);
    out << "\n";
  }

  // member: controller_period_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_period_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_period_usec, out);
    out << "\n";
  }

  // member: controller_time_on_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_time_on_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_time_on_usec, out);
    out << "\n";
  }

  // member: proportional_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proportional_value: ";
    rosidl_generator_traits::value_to_yaml(msg.proportional_value, out);
    out << "\n";
  }

  // member: integrator_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrator_value: ";
    rosidl_generator_traits::value_to_yaml(msg.integrator_value, out);
    out << "\n";
  }

  // member: feed_forward_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feed_forward_value: ";
    rosidl_generator_traits::value_to_yaml(msg.feed_forward_value, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HeaterStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::HeaterStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::HeaterStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::HeaterStatus>()
{
  return "px4_msgs::msg::HeaterStatus";
}

template<>
inline const char * name<px4_msgs::msg::HeaterStatus>()
{
  return "px4_msgs/msg/HeaterStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::HeaterStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::HeaterStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::HeaterStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__HEATER_STATUS__TRAITS_HPP_
