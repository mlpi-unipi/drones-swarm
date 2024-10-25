// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/FollowTargetStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/follow_target_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FollowTargetStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: tracked_target_course
  {
    out << "tracked_target_course: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_target_course, out);
    out << ", ";
  }

  // member: follow_angle
  {
    out << "follow_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.follow_angle, out);
    out << ", ";
  }

  // member: orbit_angle_setpoint
  {
    out << "orbit_angle_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.orbit_angle_setpoint, out);
    out << ", ";
  }

  // member: angular_rate_setpoint
  {
    out << "angular_rate_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_setpoint, out);
    out << ", ";
  }

  // member: desired_position_raw
  {
    if (msg.desired_position_raw.size() == 0) {
      out << "desired_position_raw: []";
    } else {
      out << "desired_position_raw: [";
      size_t pending_items = msg.desired_position_raw.size();
      for (auto item : msg.desired_position_raw) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: in_emergency_ascent
  {
    out << "in_emergency_ascent: ";
    rosidl_generator_traits::value_to_yaml(msg.in_emergency_ascent, out);
    out << ", ";
  }

  // member: gimbal_pitch
  {
    out << "gimbal_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_pitch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FollowTargetStatus & msg,
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

  // member: tracked_target_course
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_target_course: ";
    rosidl_generator_traits::value_to_yaml(msg.tracked_target_course, out);
    out << "\n";
  }

  // member: follow_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "follow_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.follow_angle, out);
    out << "\n";
  }

  // member: orbit_angle_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orbit_angle_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.orbit_angle_setpoint, out);
    out << "\n";
  }

  // member: angular_rate_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_rate_setpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_rate_setpoint, out);
    out << "\n";
  }

  // member: desired_position_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired_position_raw.size() == 0) {
      out << "desired_position_raw: []\n";
    } else {
      out << "desired_position_raw:\n";
      for (auto item : msg.desired_position_raw) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: in_emergency_ascent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_emergency_ascent: ";
    rosidl_generator_traits::value_to_yaml(msg.in_emergency_ascent, out);
    out << "\n";
  }

  // member: gimbal_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_pitch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FollowTargetStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::FollowTargetStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::FollowTargetStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::FollowTargetStatus>()
{
  return "px4_msgs::msg::FollowTargetStatus";
}

template<>
inline const char * name<px4_msgs::msg::FollowTargetStatus>()
{
  return "px4_msgs/msg/FollowTargetStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::FollowTargetStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::FollowTargetStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::FollowTargetStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_STATUS__TRAITS_HPP_
