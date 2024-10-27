// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_trajectory_bezier__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'control_points'
#include "px4_msgs/msg/detail/trajectory_bezier__traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleTrajectoryBezier & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: control_points
  {
    if (msg.control_points.size() == 0) {
      out << "control_points: []";
    } else {
      out << "control_points: [";
      size_t pending_items = msg.control_points.size();
      for (auto item : msg.control_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bezier_order
  {
    out << "bezier_order: ";
    rosidl_generator_traits::value_to_yaml(msg.bezier_order, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleTrajectoryBezier & msg,
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

  // member: control_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_points.size() == 0) {
      out << "control_points: []\n";
    } else {
      out << "control_points:\n";
      for (auto item : msg.control_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: bezier_order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bezier_order: ";
    rosidl_generator_traits::value_to_yaml(msg.bezier_order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleTrajectoryBezier & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleTrajectoryBezier & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleTrajectoryBezier & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleTrajectoryBezier>()
{
  return "px4_msgs::msg::VehicleTrajectoryBezier";
}

template<>
inline const char * name<px4_msgs::msg::VehicleTrajectoryBezier>()
{
  return "px4_msgs/msg/VehicleTrajectoryBezier";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleTrajectoryBezier>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::TrajectoryBezier>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleTrajectoryBezier>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::TrajectoryBezier>::value> {};

template<>
struct is_message<px4_msgs::msg::VehicleTrajectoryBezier>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_BEZIER__TRAITS_HPP_
