// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/manual_control_switches__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManualControlSwitches & msg,
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

  // member: mode_slot
  {
    out << "mode_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_slot, out);
    out << ", ";
  }

  // member: arm_switch
  {
    out << "arm_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_switch, out);
    out << ", ";
  }

  // member: return_switch
  {
    out << "return_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.return_switch, out);
    out << ", ";
  }

  // member: loiter_switch
  {
    out << "loiter_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_switch, out);
    out << ", ";
  }

  // member: offboard_switch
  {
    out << "offboard_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard_switch, out);
    out << ", ";
  }

  // member: kill_switch
  {
    out << "kill_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_switch, out);
    out << ", ";
  }

  // member: gear_switch
  {
    out << "gear_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_switch, out);
    out << ", ";
  }

  // member: transition_switch
  {
    out << "transition_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.transition_switch, out);
    out << ", ";
  }

  // member: photo_switch
  {
    out << "photo_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.photo_switch, out);
    out << ", ";
  }

  // member: video_switch
  {
    out << "video_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.video_switch, out);
    out << ", ";
  }

  // member: engage_main_motor_switch
  {
    out << "engage_main_motor_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.engage_main_motor_switch, out);
    out << ", ";
  }

  // member: switch_changes
  {
    out << "switch_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_changes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManualControlSwitches & msg,
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

  // member: mode_slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_slot, out);
    out << "\n";
  }

  // member: arm_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arm_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.arm_switch, out);
    out << "\n";
  }

  // member: return_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.return_switch, out);
    out << "\n";
  }

  // member: loiter_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_switch, out);
    out << "\n";
  }

  // member: offboard_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offboard_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard_switch, out);
    out << "\n";
  }

  // member: kill_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kill_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.kill_switch, out);
    out << "\n";
  }

  // member: gear_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_switch, out);
    out << "\n";
  }

  // member: transition_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transition_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.transition_switch, out);
    out << "\n";
  }

  // member: photo_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "photo_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.photo_switch, out);
    out << "\n";
  }

  // member: video_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "video_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.video_switch, out);
    out << "\n";
  }

  // member: engage_main_motor_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engage_main_motor_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.engage_main_motor_switch, out);
    out << "\n";
  }

  // member: switch_changes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_changes: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_changes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManualControlSwitches & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::ManualControlSwitches & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ManualControlSwitches & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ManualControlSwitches>()
{
  return "px4_msgs::msg::ManualControlSwitches";
}

template<>
inline const char * name<px4_msgs::msg::ManualControlSwitches>()
{
  return "px4_msgs/msg/ManualControlSwitches";
}

template<>
struct has_fixed_size<px4_msgs::msg::ManualControlSwitches>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ManualControlSwitches>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ManualControlSwitches>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SWITCHES__TRAITS_HPP_
