// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleOpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_optical_flow__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleOpticalFlow & msg,
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

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: pixel_flow
  {
    if (msg.pixel_flow.size() == 0) {
      out << "pixel_flow: []";
    } else {
      out << "pixel_flow: [";
      size_t pending_items = msg.pixel_flow.size();
      for (auto item : msg.pixel_flow) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delta_angle
  {
    if (msg.delta_angle.size() == 0) {
      out << "delta_angle: []";
    } else {
      out << "delta_angle: [";
      size_t pending_items = msg.delta_angle.size();
      for (auto item : msg.delta_angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: distance_m
  {
    out << "distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_m, out);
    out << ", ";
  }

  // member: integration_timespan_us
  {
    out << "integration_timespan_us: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_timespan_us, out);
    out << ", ";
  }

  // member: quality
  {
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << ", ";
  }

  // member: max_flow_rate
  {
    out << "max_flow_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flow_rate, out);
    out << ", ";
  }

  // member: min_ground_distance
  {
    out << "min_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_ground_distance, out);
    out << ", ";
  }

  // member: max_ground_distance
  {
    out << "max_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_ground_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleOpticalFlow & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: pixel_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pixel_flow.size() == 0) {
      out << "pixel_flow: []\n";
    } else {
      out << "pixel_flow:\n";
      for (auto item : msg.pixel_flow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_angle.size() == 0) {
      out << "delta_angle: []\n";
    } else {
      out << "delta_angle:\n";
      for (auto item : msg.delta_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: distance_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_m: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_m, out);
    out << "\n";
  }

  // member: integration_timespan_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integration_timespan_us: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_timespan_us, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    rosidl_generator_traits::value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: max_flow_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_flow_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_flow_rate, out);
    out << "\n";
  }

  // member: min_ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.min_ground_distance, out);
    out << "\n";
  }

  // member: max_ground_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_ground_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.max_ground_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleOpticalFlow & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleOpticalFlow & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleOpticalFlow & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleOpticalFlow>()
{
  return "px4_msgs::msg::VehicleOpticalFlow";
}

template<>
inline const char * name<px4_msgs::msg::VehicleOpticalFlow>()
{
  return "px4_msgs/msg/VehicleOpticalFlow";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleOpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleOpticalFlow>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleOpticalFlow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_OPTICAL_FLOW__TRAITS_HPP_
