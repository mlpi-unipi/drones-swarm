// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/landing_target_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LandingTargetPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: is_static
  {
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << ", ";
  }

  // member: rel_pos_valid
  {
    out << "rel_pos_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_valid, out);
    out << ", ";
  }

  // member: rel_vel_valid
  {
    out << "rel_vel_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_valid, out);
    out << ", ";
  }

  // member: x_rel
  {
    out << "x_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.x_rel, out);
    out << ", ";
  }

  // member: y_rel
  {
    out << "y_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.y_rel, out);
    out << ", ";
  }

  // member: z_rel
  {
    out << "z_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.z_rel, out);
    out << ", ";
  }

  // member: vx_rel
  {
    out << "vx_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_rel, out);
    out << ", ";
  }

  // member: vy_rel
  {
    out << "vy_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_rel, out);
    out << ", ";
  }

  // member: cov_x_rel
  {
    out << "cov_x_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_x_rel, out);
    out << ", ";
  }

  // member: cov_y_rel
  {
    out << "cov_y_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_y_rel, out);
    out << ", ";
  }

  // member: cov_vx_rel
  {
    out << "cov_vx_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vx_rel, out);
    out << ", ";
  }

  // member: cov_vy_rel
  {
    out << "cov_vy_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vy_rel, out);
    out << ", ";
  }

  // member: abs_pos_valid
  {
    out << "abs_pos_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_pos_valid, out);
    out << ", ";
  }

  // member: x_abs
  {
    out << "x_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.x_abs, out);
    out << ", ";
  }

  // member: y_abs
  {
    out << "y_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.y_abs, out);
    out << ", ";
  }

  // member: z_abs
  {
    out << "z_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.z_abs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LandingTargetPose & msg,
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

  // member: is_static
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_static: ";
    rosidl_generator_traits::value_to_yaml(msg.is_static, out);
    out << "\n";
  }

  // member: rel_pos_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_pos_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_pos_valid, out);
    out << "\n";
  }

  // member: rel_vel_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rel_vel_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rel_vel_valid, out);
    out << "\n";
  }

  // member: x_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.x_rel, out);
    out << "\n";
  }

  // member: y_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.y_rel, out);
    out << "\n";
  }

  // member: z_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.z_rel, out);
    out << "\n";
  }

  // member: vx_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vx_rel, out);
    out << "\n";
  }

  // member: vy_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vy_rel, out);
    out << "\n";
  }

  // member: cov_x_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_x_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_x_rel, out);
    out << "\n";
  }

  // member: cov_y_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_y_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_y_rel, out);
    out << "\n";
  }

  // member: cov_vx_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vx_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vx_rel, out);
    out << "\n";
  }

  // member: cov_vy_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cov_vy_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.cov_vy_rel, out);
    out << "\n";
  }

  // member: abs_pos_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_pos_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_pos_valid, out);
    out << "\n";
  }

  // member: x_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.x_abs, out);
    out << "\n";
  }

  // member: y_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.y_abs, out);
    out << "\n";
  }

  // member: z_abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_abs: ";
    rosidl_generator_traits::value_to_yaml(msg.z_abs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LandingTargetPose & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::LandingTargetPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::LandingTargetPose & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::LandingTargetPose>()
{
  return "px4_msgs::msg::LandingTargetPose";
}

template<>
inline const char * name<px4_msgs::msg::LandingTargetPose>()
{
  return "px4_msgs/msg/LandingTargetPose";
}

template<>
struct has_fixed_size<px4_msgs::msg::LandingTargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::LandingTargetPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::LandingTargetPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__LANDING_TARGET_POSE__TRAITS_HPP_
