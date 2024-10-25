// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: param1
  {
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << ", ";
  }

  // member: param2
  {
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << ", ";
  }

  // member: param3
  {
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << ", ";
  }

  // member: param4
  {
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << ", ";
  }

  // member: param5
  {
    out << "param5: ";
    rosidl_generator_traits::value_to_yaml(msg.param5, out);
    out << ", ";
  }

  // member: param6
  {
    out << "param6: ";
    rosidl_generator_traits::value_to_yaml(msg.param6, out);
    out << ", ";
  }

  // member: param7
  {
    out << "param7: ";
    rosidl_generator_traits::value_to_yaml(msg.param7, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: target_system
  {
    out << "target_system: ";
    rosidl_generator_traits::value_to_yaml(msg.target_system, out);
    out << ", ";
  }

  // member: target_component
  {
    out << "target_component: ";
    rosidl_generator_traits::value_to_yaml(msg.target_component, out);
    out << ", ";
  }

  // member: source_system
  {
    out << "source_system: ";
    rosidl_generator_traits::value_to_yaml(msg.source_system, out);
    out << ", ";
  }

  // member: source_component
  {
    out << "source_component: ";
    rosidl_generator_traits::value_to_yaml(msg.source_component, out);
    out << ", ";
  }

  // member: confirmation
  {
    out << "confirmation: ";
    rosidl_generator_traits::value_to_yaml(msg.confirmation, out);
    out << ", ";
  }

  // member: from_external
  {
    out << "from_external: ";
    rosidl_generator_traits::value_to_yaml(msg.from_external, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleCommand & msg,
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

  // member: param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << "\n";
  }

  // member: param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << "\n";
  }

  // member: param3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << "\n";
  }

  // member: param4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << "\n";
  }

  // member: param5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param5: ";
    rosidl_generator_traits::value_to_yaml(msg.param5, out);
    out << "\n";
  }

  // member: param6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param6: ";
    rosidl_generator_traits::value_to_yaml(msg.param6, out);
    out << "\n";
  }

  // member: param7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param7: ";
    rosidl_generator_traits::value_to_yaml(msg.param7, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: target_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_system: ";
    rosidl_generator_traits::value_to_yaml(msg.target_system, out);
    out << "\n";
  }

  // member: target_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_component: ";
    rosidl_generator_traits::value_to_yaml(msg.target_component, out);
    out << "\n";
  }

  // member: source_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_system: ";
    rosidl_generator_traits::value_to_yaml(msg.source_system, out);
    out << "\n";
  }

  // member: source_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_component: ";
    rosidl_generator_traits::value_to_yaml(msg.source_component, out);
    out << "\n";
  }

  // member: confirmation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirmation: ";
    rosidl_generator_traits::value_to_yaml(msg.confirmation, out);
    out << "\n";
  }

  // member: from_external
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_external: ";
    rosidl_generator_traits::value_to_yaml(msg.from_external, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleCommand & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleCommand & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleCommand>()
{
  return "px4_msgs::msg::VehicleCommand";
}

template<>
inline const char * name<px4_msgs::msg::VehicleCommand>()
{
  return "px4_msgs/msg/VehicleCommand";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_
