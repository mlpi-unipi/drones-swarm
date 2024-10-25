// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_land_detected__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleLandDetected & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: freefall
  {
    out << "freefall: ";
    rosidl_generator_traits::value_to_yaml(msg.freefall, out);
    out << ", ";
  }

  // member: ground_contact
  {
    out << "ground_contact: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_contact, out);
    out << ", ";
  }

  // member: maybe_landed
  {
    out << "maybe_landed: ";
    rosidl_generator_traits::value_to_yaml(msg.maybe_landed, out);
    out << ", ";
  }

  // member: landed
  {
    out << "landed: ";
    rosidl_generator_traits::value_to_yaml(msg.landed, out);
    out << ", ";
  }

  // member: in_ground_effect
  {
    out << "in_ground_effect: ";
    rosidl_generator_traits::value_to_yaml(msg.in_ground_effect, out);
    out << ", ";
  }

  // member: in_descend
  {
    out << "in_descend: ";
    rosidl_generator_traits::value_to_yaml(msg.in_descend, out);
    out << ", ";
  }

  // member: has_low_throttle
  {
    out << "has_low_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.has_low_throttle, out);
    out << ", ";
  }

  // member: vertical_movement
  {
    out << "vertical_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_movement, out);
    out << ", ";
  }

  // member: horizontal_movement
  {
    out << "horizontal_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_movement, out);
    out << ", ";
  }

  // member: rotational_movement
  {
    out << "rotational_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.rotational_movement, out);
    out << ", ";
  }

  // member: close_to_ground_or_skipped_check
  {
    out << "close_to_ground_or_skipped_check: ";
    rosidl_generator_traits::value_to_yaml(msg.close_to_ground_or_skipped_check, out);
    out << ", ";
  }

  // member: at_rest
  {
    out << "at_rest: ";
    rosidl_generator_traits::value_to_yaml(msg.at_rest, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleLandDetected & msg,
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

  // member: freefall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "freefall: ";
    rosidl_generator_traits::value_to_yaml(msg.freefall, out);
    out << "\n";
  }

  // member: ground_contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_contact: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_contact, out);
    out << "\n";
  }

  // member: maybe_landed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maybe_landed: ";
    rosidl_generator_traits::value_to_yaml(msg.maybe_landed, out);
    out << "\n";
  }

  // member: landed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "landed: ";
    rosidl_generator_traits::value_to_yaml(msg.landed, out);
    out << "\n";
  }

  // member: in_ground_effect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_ground_effect: ";
    rosidl_generator_traits::value_to_yaml(msg.in_ground_effect, out);
    out << "\n";
  }

  // member: in_descend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_descend: ";
    rosidl_generator_traits::value_to_yaml(msg.in_descend, out);
    out << "\n";
  }

  // member: has_low_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_low_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.has_low_throttle, out);
    out << "\n";
  }

  // member: vertical_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_movement, out);
    out << "\n";
  }

  // member: horizontal_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.horizontal_movement, out);
    out << "\n";
  }

  // member: rotational_movement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotational_movement: ";
    rosidl_generator_traits::value_to_yaml(msg.rotational_movement, out);
    out << "\n";
  }

  // member: close_to_ground_or_skipped_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "close_to_ground_or_skipped_check: ";
    rosidl_generator_traits::value_to_yaml(msg.close_to_ground_or_skipped_check, out);
    out << "\n";
  }

  // member: at_rest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "at_rest: ";
    rosidl_generator_traits::value_to_yaml(msg.at_rest, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleLandDetected & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleLandDetected & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleLandDetected & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleLandDetected>()
{
  return "px4_msgs::msg::VehicleLandDetected";
}

template<>
inline const char * name<px4_msgs::msg::VehicleLandDetected>()
{
  return "px4_msgs/msg/VehicleLandDetected";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleLandDetected>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleLandDetected>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleLandDetected>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LAND_DETECTED__TRAITS_HPP_
