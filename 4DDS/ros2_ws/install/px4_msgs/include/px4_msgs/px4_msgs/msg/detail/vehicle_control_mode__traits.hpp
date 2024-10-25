// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleControlMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: flag_armed
  {
    out << "flag_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_armed, out);
    out << ", ";
  }

  // member: flag_multicopter_position_control_enabled
  {
    out << "flag_multicopter_position_control_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_multicopter_position_control_enabled, out);
    out << ", ";
  }

  // member: flag_control_manual_enabled
  {
    out << "flag_control_manual_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_manual_enabled, out);
    out << ", ";
  }

  // member: flag_control_auto_enabled
  {
    out << "flag_control_auto_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_auto_enabled, out);
    out << ", ";
  }

  // member: flag_control_offboard_enabled
  {
    out << "flag_control_offboard_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_offboard_enabled, out);
    out << ", ";
  }

  // member: flag_control_position_enabled
  {
    out << "flag_control_position_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_position_enabled, out);
    out << ", ";
  }

  // member: flag_control_velocity_enabled
  {
    out << "flag_control_velocity_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_velocity_enabled, out);
    out << ", ";
  }

  // member: flag_control_altitude_enabled
  {
    out << "flag_control_altitude_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_altitude_enabled, out);
    out << ", ";
  }

  // member: flag_control_climb_rate_enabled
  {
    out << "flag_control_climb_rate_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_climb_rate_enabled, out);
    out << ", ";
  }

  // member: flag_control_acceleration_enabled
  {
    out << "flag_control_acceleration_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_acceleration_enabled, out);
    out << ", ";
  }

  // member: flag_control_attitude_enabled
  {
    out << "flag_control_attitude_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_attitude_enabled, out);
    out << ", ";
  }

  // member: flag_control_rates_enabled
  {
    out << "flag_control_rates_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_rates_enabled, out);
    out << ", ";
  }

  // member: flag_control_allocation_enabled
  {
    out << "flag_control_allocation_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_allocation_enabled, out);
    out << ", ";
  }

  // member: flag_control_termination_enabled
  {
    out << "flag_control_termination_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_termination_enabled, out);
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
  const VehicleControlMode & msg,
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

  // member: flag_armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_armed: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_armed, out);
    out << "\n";
  }

  // member: flag_multicopter_position_control_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_multicopter_position_control_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_multicopter_position_control_enabled, out);
    out << "\n";
  }

  // member: flag_control_manual_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_manual_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_manual_enabled, out);
    out << "\n";
  }

  // member: flag_control_auto_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_auto_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_auto_enabled, out);
    out << "\n";
  }

  // member: flag_control_offboard_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_offboard_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_offboard_enabled, out);
    out << "\n";
  }

  // member: flag_control_position_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_position_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_position_enabled, out);
    out << "\n";
  }

  // member: flag_control_velocity_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_velocity_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_velocity_enabled, out);
    out << "\n";
  }

  // member: flag_control_altitude_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_altitude_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_altitude_enabled, out);
    out << "\n";
  }

  // member: flag_control_climb_rate_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_climb_rate_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_climb_rate_enabled, out);
    out << "\n";
  }

  // member: flag_control_acceleration_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_acceleration_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_acceleration_enabled, out);
    out << "\n";
  }

  // member: flag_control_attitude_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_attitude_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_attitude_enabled, out);
    out << "\n";
  }

  // member: flag_control_rates_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_rates_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_rates_enabled, out);
    out << "\n";
  }

  // member: flag_control_allocation_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_allocation_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_allocation_enabled, out);
    out << "\n";
  }

  // member: flag_control_termination_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_termination_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_termination_enabled, out);
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

inline std::string to_yaml(const VehicleControlMode & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleControlMode & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleControlMode>()
{
  return "px4_msgs::msg::VehicleControlMode";
}

template<>
inline const char * name<px4_msgs::msg::VehicleControlMode>()
{
  return "px4_msgs/msg/VehicleControlMode";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__TRAITS_HPP_
