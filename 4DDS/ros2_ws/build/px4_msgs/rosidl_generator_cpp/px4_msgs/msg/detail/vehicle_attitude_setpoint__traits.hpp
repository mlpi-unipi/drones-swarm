// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_attitude_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleAttitudeSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: roll_body
  {
    out << "roll_body: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_body, out);
    out << ", ";
  }

  // member: pitch_body
  {
    out << "pitch_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_body, out);
    out << ", ";
  }

  // member: yaw_body
  {
    out << "yaw_body: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_body, out);
    out << ", ";
  }

  // member: yaw_sp_move_rate
  {
    out << "yaw_sp_move_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_sp_move_rate, out);
    out << ", ";
  }

  // member: q_d
  {
    if (msg.q_d.size() == 0) {
      out << "q_d: []";
    } else {
      out << "q_d: [";
      size_t pending_items = msg.q_d.size();
      for (auto item : msg.q_d) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: thrust_body
  {
    if (msg.thrust_body.size() == 0) {
      out << "thrust_body: []";
    } else {
      out << "thrust_body: [";
      size_t pending_items = msg.thrust_body.size();
      for (auto item : msg.thrust_body) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reset_integral
  {
    out << "reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_integral, out);
    out << ", ";
  }

  // member: fw_control_yaw_wheel
  {
    out << "fw_control_yaw_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_control_yaw_wheel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleAttitudeSetpoint & msg,
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

  // member: roll_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_body: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_body, out);
    out << "\n";
  }

  // member: pitch_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_body: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_body, out);
    out << "\n";
  }

  // member: yaw_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_body: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_body, out);
    out << "\n";
  }

  // member: yaw_sp_move_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_sp_move_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_sp_move_rate, out);
    out << "\n";
  }

  // member: q_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_d.size() == 0) {
      out << "q_d: []\n";
    } else {
      out << "q_d:\n";
      for (auto item : msg.q_d) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: thrust_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.thrust_body.size() == 0) {
      out << "thrust_body: []\n";
    } else {
      out << "thrust_body:\n";
      for (auto item : msg.thrust_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reset_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_integral, out);
    out << "\n";
  }

  // member: fw_control_yaw_wheel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fw_control_yaw_wheel: ";
    rosidl_generator_traits::value_to_yaml(msg.fw_control_yaw_wheel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleAttitudeSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleAttitudeSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleAttitudeSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleAttitudeSetpoint>()
{
  return "px4_msgs::msg::VehicleAttitudeSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::VehicleAttitudeSetpoint>()
{
  return "px4_msgs/msg/VehicleAttitudeSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleAttitudeSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleAttitudeSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleAttitudeSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__TRAITS_HPP_
