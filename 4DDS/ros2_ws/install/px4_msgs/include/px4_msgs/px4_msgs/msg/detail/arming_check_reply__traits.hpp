// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/arming_check_reply__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'events'
#include "px4_msgs/msg/detail/event__traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmingCheckReply & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: registration_id
  {
    out << "registration_id: ";
    rosidl_generator_traits::value_to_yaml(msg.registration_id, out);
    out << ", ";
  }

  // member: health_component_index
  {
    out << "health_component_index: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_index, out);
    out << ", ";
  }

  // member: health_component_is_present
  {
    out << "health_component_is_present: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_is_present, out);
    out << ", ";
  }

  // member: health_component_warning
  {
    out << "health_component_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_warning, out);
    out << ", ";
  }

  // member: health_component_error
  {
    out << "health_component_error: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_error, out);
    out << ", ";
  }

  // member: can_arm_and_run
  {
    out << "can_arm_and_run: ";
    rosidl_generator_traits::value_to_yaml(msg.can_arm_and_run, out);
    out << ", ";
  }

  // member: num_events
  {
    out << "num_events: ";
    rosidl_generator_traits::value_to_yaml(msg.num_events, out);
    out << ", ";
  }

  // member: events
  {
    if (msg.events.size() == 0) {
      out << "events: []";
    } else {
      out << "events: [";
      size_t pending_items = msg.events.size();
      for (auto item : msg.events) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mode_req_angular_velocity
  {
    out << "mode_req_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_angular_velocity, out);
    out << ", ";
  }

  // member: mode_req_attitude
  {
    out << "mode_req_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_attitude, out);
    out << ", ";
  }

  // member: mode_req_local_alt
  {
    out << "mode_req_local_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_alt, out);
    out << ", ";
  }

  // member: mode_req_local_position
  {
    out << "mode_req_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position, out);
    out << ", ";
  }

  // member: mode_req_local_position_relaxed
  {
    out << "mode_req_local_position_relaxed: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position_relaxed, out);
    out << ", ";
  }

  // member: mode_req_global_position
  {
    out << "mode_req_global_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_global_position, out);
    out << ", ";
  }

  // member: mode_req_mission
  {
    out << "mode_req_mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_mission, out);
    out << ", ";
  }

  // member: mode_req_home_position
  {
    out << "mode_req_home_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_home_position, out);
    out << ", ";
  }

  // member: mode_req_prevent_arming
  {
    out << "mode_req_prevent_arming: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_prevent_arming, out);
    out << ", ";
  }

  // member: mode_req_manual_control
  {
    out << "mode_req_manual_control: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_manual_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmingCheckReply & msg,
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

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << "\n";
  }

  // member: registration_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "registration_id: ";
    rosidl_generator_traits::value_to_yaml(msg.registration_id, out);
    out << "\n";
  }

  // member: health_component_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_index: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_index, out);
    out << "\n";
  }

  // member: health_component_is_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_is_present: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_is_present, out);
    out << "\n";
  }

  // member: health_component_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_warning, out);
    out << "\n";
  }

  // member: health_component_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_component_error: ";
    rosidl_generator_traits::value_to_yaml(msg.health_component_error, out);
    out << "\n";
  }

  // member: can_arm_and_run
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_arm_and_run: ";
    rosidl_generator_traits::value_to_yaml(msg.can_arm_and_run, out);
    out << "\n";
  }

  // member: num_events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_events: ";
    rosidl_generator_traits::value_to_yaml(msg.num_events, out);
    out << "\n";
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.events.size() == 0) {
      out << "events: []\n";
    } else {
      out << "events:\n";
      for (auto item : msg.events) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: mode_req_angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_angular_velocity, out);
    out << "\n";
  }

  // member: mode_req_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_attitude, out);
    out << "\n";
  }

  // member: mode_req_local_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_alt, out);
    out << "\n";
  }

  // member: mode_req_local_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position, out);
    out << "\n";
  }

  // member: mode_req_local_position_relaxed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_local_position_relaxed: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_local_position_relaxed, out);
    out << "\n";
  }

  // member: mode_req_global_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_global_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_global_position, out);
    out << "\n";
  }

  // member: mode_req_mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_mission, out);
    out << "\n";
  }

  // member: mode_req_home_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_home_position: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_home_position, out);
    out << "\n";
  }

  // member: mode_req_prevent_arming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_prevent_arming: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_prevent_arming, out);
    out << "\n";
  }

  // member: mode_req_manual_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_req_manual_control: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_req_manual_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmingCheckReply & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::ArmingCheckReply & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ArmingCheckReply & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ArmingCheckReply>()
{
  return "px4_msgs::msg::ArmingCheckReply";
}

template<>
inline const char * name<px4_msgs::msg::ArmingCheckReply>()
{
  return "px4_msgs/msg/ArmingCheckReply";
}

template<>
struct has_fixed_size<px4_msgs::msg::ArmingCheckReply>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::Event>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::ArmingCheckReply>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::Event>::value> {};

template<>
struct is_message<px4_msgs::msg::ArmingCheckReply>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REPLY__TRAITS_HPP_
