// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TECS_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TECS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/tecs_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TecsStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: altitude_sp
  {
    out << "altitude_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_sp, out);
    out << ", ";
  }

  // member: altitude_reference
  {
    out << "altitude_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_reference, out);
    out << ", ";
  }

  // member: height_rate_reference
  {
    out << "height_rate_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate_reference, out);
    out << ", ";
  }

  // member: height_rate_direct
  {
    out << "height_rate_direct: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate_direct, out);
    out << ", ";
  }

  // member: height_rate_setpoint
  {
    out << "height_rate_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate_setpoint, out);
    out << ", ";
  }

  // member: height_rate
  {
    out << "height_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate, out);
    out << ", ";
  }

  // member: equivalent_airspeed_sp
  {
    out << "equivalent_airspeed_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.equivalent_airspeed_sp, out);
    out << ", ";
  }

  // member: true_airspeed_sp
  {
    out << "true_airspeed_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_sp, out);
    out << ", ";
  }

  // member: true_airspeed_filtered
  {
    out << "true_airspeed_filtered: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_filtered, out);
    out << ", ";
  }

  // member: true_airspeed_derivative_sp
  {
    out << "true_airspeed_derivative_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_derivative_sp, out);
    out << ", ";
  }

  // member: true_airspeed_derivative
  {
    out << "true_airspeed_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_derivative, out);
    out << ", ";
  }

  // member: true_airspeed_derivative_raw
  {
    out << "true_airspeed_derivative_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_derivative_raw, out);
    out << ", ";
  }

  // member: total_energy_rate_sp
  {
    out << "total_energy_rate_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_rate_sp, out);
    out << ", ";
  }

  // member: total_energy_rate
  {
    out << "total_energy_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_rate, out);
    out << ", ";
  }

  // member: total_energy_balance_rate_sp
  {
    out << "total_energy_balance_rate_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_balance_rate_sp, out);
    out << ", ";
  }

  // member: total_energy_balance_rate
  {
    out << "total_energy_balance_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_balance_rate, out);
    out << ", ";
  }

  // member: throttle_integ
  {
    out << "throttle_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_integ, out);
    out << ", ";
  }

  // member: pitch_integ
  {
    out << "pitch_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_integ, out);
    out << ", ";
  }

  // member: throttle_sp
  {
    out << "throttle_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_sp, out);
    out << ", ";
  }

  // member: pitch_sp_rad
  {
    out << "pitch_sp_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_sp_rad, out);
    out << ", ";
  }

  // member: throttle_trim
  {
    out << "throttle_trim: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_trim, out);
    out << ", ";
  }

  // member: underspeed_ratio
  {
    out << "underspeed_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.underspeed_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TecsStatus & msg,
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

  // member: altitude_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_sp, out);
    out << "\n";
  }

  // member: altitude_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_reference, out);
    out << "\n";
  }

  // member: height_rate_reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate_reference: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate_reference, out);
    out << "\n";
  }

  // member: height_rate_direct
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate_direct: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate_direct, out);
    out << "\n";
  }

  // member: height_rate_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate_setpoint, out);
    out << "\n";
  }

  // member: height_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.height_rate, out);
    out << "\n";
  }

  // member: equivalent_airspeed_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "equivalent_airspeed_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.equivalent_airspeed_sp, out);
    out << "\n";
  }

  // member: true_airspeed_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_sp, out);
    out << "\n";
  }

  // member: true_airspeed_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_filtered: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_filtered, out);
    out << "\n";
  }

  // member: true_airspeed_derivative_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_derivative_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_derivative_sp, out);
    out << "\n";
  }

  // member: true_airspeed_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_derivative: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_derivative, out);
    out << "\n";
  }

  // member: true_airspeed_derivative_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "true_airspeed_derivative_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.true_airspeed_derivative_raw, out);
    out << "\n";
  }

  // member: total_energy_rate_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_rate_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_rate_sp, out);
    out << "\n";
  }

  // member: total_energy_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_rate, out);
    out << "\n";
  }

  // member: total_energy_balance_rate_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_balance_rate_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_balance_rate_sp, out);
    out << "\n";
  }

  // member: total_energy_balance_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_energy_balance_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.total_energy_balance_rate, out);
    out << "\n";
  }

  // member: throttle_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_integ, out);
    out << "\n";
  }

  // member: pitch_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_integ, out);
    out << "\n";
  }

  // member: throttle_sp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_sp: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_sp, out);
    out << "\n";
  }

  // member: pitch_sp_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_sp_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_sp_rad, out);
    out << "\n";
  }

  // member: throttle_trim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_trim: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_trim, out);
    out << "\n";
  }

  // member: underspeed_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "underspeed_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.underspeed_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TecsStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::TecsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::TecsStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::TecsStatus>()
{
  return "px4_msgs::msg::TecsStatus";
}

template<>
inline const char * name<px4_msgs::msg::TecsStatus>()
{
  return "px4_msgs/msg/TecsStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::TecsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TecsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TecsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TECS_STATUS__TRAITS_HPP_
