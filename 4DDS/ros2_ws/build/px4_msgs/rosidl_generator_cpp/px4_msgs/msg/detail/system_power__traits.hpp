// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/system_power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemPower & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: voltage5v_v
  {
    out << "voltage5v_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage5v_v, out);
    out << ", ";
  }

  // member: sensors3v3
  {
    if (msg.sensors3v3.size() == 0) {
      out << "sensors3v3: []";
    } else {
      out << "sensors3v3: [";
      size_t pending_items = msg.sensors3v3.size();
      for (auto item : msg.sensors3v3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sensors3v3_valid
  {
    out << "sensors3v3_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.sensors3v3_valid, out);
    out << ", ";
  }

  // member: usb_connected
  {
    out << "usb_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_connected, out);
    out << ", ";
  }

  // member: brick_valid
  {
    out << "brick_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.brick_valid, out);
    out << ", ";
  }

  // member: usb_valid
  {
    out << "usb_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_valid, out);
    out << ", ";
  }

  // member: servo_valid
  {
    out << "servo_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_valid, out);
    out << ", ";
  }

  // member: periph_5v_oc
  {
    out << "periph_5v_oc: ";
    rosidl_generator_traits::value_to_yaml(msg.periph_5v_oc, out);
    out << ", ";
  }

  // member: hipower_5v_oc
  {
    out << "hipower_5v_oc: ";
    rosidl_generator_traits::value_to_yaml(msg.hipower_5v_oc, out);
    out << ", ";
  }

  // member: comp_5v_valid
  {
    out << "comp_5v_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.comp_5v_valid, out);
    out << ", ";
  }

  // member: can1_gps1_5v_valid
  {
    out << "can1_gps1_5v_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.can1_gps1_5v_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemPower & msg,
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

  // member: voltage5v_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage5v_v: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage5v_v, out);
    out << "\n";
  }

  // member: sensors3v3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors3v3.size() == 0) {
      out << "sensors3v3: []\n";
    } else {
      out << "sensors3v3:\n";
      for (auto item : msg.sensors3v3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sensors3v3_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensors3v3_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.sensors3v3_valid, out);
    out << "\n";
  }

  // member: usb_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_connected, out);
    out << "\n";
  }

  // member: brick_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brick_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.brick_valid, out);
    out << "\n";
  }

  // member: usb_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_valid, out);
    out << "\n";
  }

  // member: servo_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_valid, out);
    out << "\n";
  }

  // member: periph_5v_oc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "periph_5v_oc: ";
    rosidl_generator_traits::value_to_yaml(msg.periph_5v_oc, out);
    out << "\n";
  }

  // member: hipower_5v_oc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hipower_5v_oc: ";
    rosidl_generator_traits::value_to_yaml(msg.hipower_5v_oc, out);
    out << "\n";
  }

  // member: comp_5v_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comp_5v_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.comp_5v_valid, out);
    out << "\n";
  }

  // member: can1_gps1_5v_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can1_gps1_5v_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.can1_gps1_5v_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemPower & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SystemPower & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SystemPower & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SystemPower>()
{
  return "px4_msgs::msg::SystemPower";
}

template<>
inline const char * name<px4_msgs::msg::SystemPower>()
{
  return "px4_msgs/msg/SystemPower";
}

template<>
struct has_fixed_size<px4_msgs::msg::SystemPower>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SystemPower>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SystemPower>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SYSTEM_POWER__TRAITS_HPP_
