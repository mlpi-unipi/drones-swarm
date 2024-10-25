// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GeneratorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/generator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeneratorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: battery_current
  {
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << ", ";
  }

  // member: load_current
  {
    out << "load_current: ";
    rosidl_generator_traits::value_to_yaml(msg.load_current, out);
    out << ", ";
  }

  // member: power_generated
  {
    out << "power_generated: ";
    rosidl_generator_traits::value_to_yaml(msg.power_generated, out);
    out << ", ";
  }

  // member: bus_voltage
  {
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << ", ";
  }

  // member: bat_current_setpoint
  {
    out << "bat_current_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_current_setpoint, out);
    out << ", ";
  }

  // member: runtime
  {
    out << "runtime: ";
    rosidl_generator_traits::value_to_yaml(msg.runtime, out);
    out << ", ";
  }

  // member: time_until_maintenance
  {
    out << "time_until_maintenance: ";
    rosidl_generator_traits::value_to_yaml(msg.time_until_maintenance, out);
    out << ", ";
  }

  // member: generator_speed
  {
    out << "generator_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.generator_speed, out);
    out << ", ";
  }

  // member: rectifier_temperature
  {
    out << "rectifier_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rectifier_temperature, out);
    out << ", ";
  }

  // member: generator_temperature
  {
    out << "generator_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.generator_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeneratorStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: battery_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_current: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_current, out);
    out << "\n";
  }

  // member: load_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_current: ";
    rosidl_generator_traits::value_to_yaml(msg.load_current, out);
    out << "\n";
  }

  // member: power_generated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_generated: ";
    rosidl_generator_traits::value_to_yaml(msg.power_generated, out);
    out << "\n";
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }

  // member: bat_current_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bat_current_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.bat_current_setpoint, out);
    out << "\n";
  }

  // member: runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "runtime: ";
    rosidl_generator_traits::value_to_yaml(msg.runtime, out);
    out << "\n";
  }

  // member: time_until_maintenance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_until_maintenance: ";
    rosidl_generator_traits::value_to_yaml(msg.time_until_maintenance, out);
    out << "\n";
  }

  // member: generator_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.generator_speed, out);
    out << "\n";
  }

  // member: rectifier_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rectifier_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rectifier_temperature, out);
    out << "\n";
  }

  // member: generator_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "generator_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.generator_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeneratorStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::GeneratorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::GeneratorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::GeneratorStatus>()
{
  return "px4_msgs::msg::GeneratorStatus";
}

template<>
inline const char * name<px4_msgs::msg::GeneratorStatus>()
{
  return "px4_msgs/msg/GeneratorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::GeneratorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GeneratorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GeneratorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__TRAITS_HPP_
