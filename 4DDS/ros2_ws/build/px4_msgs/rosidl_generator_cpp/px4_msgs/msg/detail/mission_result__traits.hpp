// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MISSION_RESULT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MISSION_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/mission_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << ", ";
  }

  // member: geofence_id
  {
    out << "geofence_id: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_id, out);
    out << ", ";
  }

  // member: home_position_counter
  {
    out << "home_position_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.home_position_counter, out);
    out << ", ";
  }

  // member: seq_reached
  {
    out << "seq_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_reached, out);
    out << ", ";
  }

  // member: seq_current
  {
    out << "seq_current: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_current, out);
    out << ", ";
  }

  // member: seq_total
  {
    out << "seq_total: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_total, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: warning
  {
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << ", ";
  }

  // member: finished
  {
    out << "finished: ";
    rosidl_generator_traits::value_to_yaml(msg.finished, out);
    out << ", ";
  }

  // member: failure
  {
    out << "failure: ";
    rosidl_generator_traits::value_to_yaml(msg.failure, out);
    out << ", ";
  }

  // member: item_do_jump_changed
  {
    out << "item_do_jump_changed: ";
    rosidl_generator_traits::value_to_yaml(msg.item_do_jump_changed, out);
    out << ", ";
  }

  // member: item_changed_index
  {
    out << "item_changed_index: ";
    rosidl_generator_traits::value_to_yaml(msg.item_changed_index, out);
    out << ", ";
  }

  // member: item_do_jump_remaining
  {
    out << "item_do_jump_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.item_do_jump_remaining, out);
    out << ", ";
  }

  // member: execution_mode
  {
    out << "execution_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionResult & msg,
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

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }

  // member: geofence_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_id: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_id, out);
    out << "\n";
  }

  // member: home_position_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_position_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.home_position_counter, out);
    out << "\n";
  }

  // member: seq_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_reached, out);
    out << "\n";
  }

  // member: seq_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_current: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_current, out);
    out << "\n";
  }

  // member: seq_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq_total: ";
    rosidl_generator_traits::value_to_yaml(msg.seq_total, out);
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

  // member: warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warning: ";
    rosidl_generator_traits::value_to_yaml(msg.warning, out);
    out << "\n";
  }

  // member: finished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finished: ";
    rosidl_generator_traits::value_to_yaml(msg.finished, out);
    out << "\n";
  }

  // member: failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure: ";
    rosidl_generator_traits::value_to_yaml(msg.failure, out);
    out << "\n";
  }

  // member: item_do_jump_changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_do_jump_changed: ";
    rosidl_generator_traits::value_to_yaml(msg.item_do_jump_changed, out);
    out << "\n";
  }

  // member: item_changed_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_changed_index: ";
    rosidl_generator_traits::value_to_yaml(msg.item_changed_index, out);
    out << "\n";
  }

  // member: item_do_jump_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "item_do_jump_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.item_do_jump_remaining, out);
    out << "\n";
  }

  // member: execution_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionResult & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::MissionResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::MissionResult & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::MissionResult>()
{
  return "px4_msgs::msg::MissionResult";
}

template<>
inline const char * name<px4_msgs::msg::MissionResult>()
{
  return "px4_msgs/msg/MissionResult";
}

template<>
struct has_fixed_size<px4_msgs::msg::MissionResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MissionResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MissionResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MISSION_RESULT__TRAITS_HPP_
