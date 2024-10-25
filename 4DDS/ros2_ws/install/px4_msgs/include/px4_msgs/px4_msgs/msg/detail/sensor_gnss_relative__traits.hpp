// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_gnss_relative__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorGnssRelative & msg,
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

  // member: time_utc_usec
  {
    out << "time_utc_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_utc_usec, out);
    out << ", ";
  }

  // member: reference_station_id
  {
    out << "reference_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_station_id, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_accuracy
  {
    if (msg.position_accuracy.size() == 0) {
      out << "position_accuracy: []";
    } else {
      out << "position_accuracy: [";
      size_t pending_items = msg.position_accuracy.size();
      for (auto item : msg.position_accuracy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_accuracy
  {
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << ", ";
  }

  // member: position_length
  {
    out << "position_length: ";
    rosidl_generator_traits::value_to_yaml(msg.position_length, out);
    out << ", ";
  }

  // member: accuracy_length
  {
    out << "accuracy_length: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy_length, out);
    out << ", ";
  }

  // member: gnss_fix_ok
  {
    out << "gnss_fix_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_ok, out);
    out << ", ";
  }

  // member: differential_solution
  {
    out << "differential_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.differential_solution, out);
    out << ", ";
  }

  // member: relative_position_valid
  {
    out << "relative_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_position_valid, out);
    out << ", ";
  }

  // member: carrier_solution_floating
  {
    out << "carrier_solution_floating: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_solution_floating, out);
    out << ", ";
  }

  // member: carrier_solution_fixed
  {
    out << "carrier_solution_fixed: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_solution_fixed, out);
    out << ", ";
  }

  // member: moving_base_mode
  {
    out << "moving_base_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_base_mode, out);
    out << ", ";
  }

  // member: reference_position_miss
  {
    out << "reference_position_miss: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_position_miss, out);
    out << ", ";
  }

  // member: reference_observations_miss
  {
    out << "reference_observations_miss: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_observations_miss, out);
    out << ", ";
  }

  // member: heading_valid
  {
    out << "heading_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_valid, out);
    out << ", ";
  }

  // member: relative_position_normalized
  {
    out << "relative_position_normalized: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_position_normalized, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorGnssRelative & msg,
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

  // member: time_utc_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_utc_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_utc_usec, out);
    out << "\n";
  }

  // member: reference_station_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_station_id: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_station_id, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_accuracy.size() == 0) {
      out << "position_accuracy: []\n";
    } else {
      out << "position_accuracy:\n";
      for (auto item : msg.position_accuracy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << "\n";
  }

  // member: position_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_length: ";
    rosidl_generator_traits::value_to_yaml(msg.position_length, out);
    out << "\n";
  }

  // member: accuracy_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy_length: ";
    rosidl_generator_traits::value_to_yaml(msg.accuracy_length, out);
    out << "\n";
  }

  // member: gnss_fix_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_fix_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_fix_ok, out);
    out << "\n";
  }

  // member: differential_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "differential_solution: ";
    rosidl_generator_traits::value_to_yaml(msg.differential_solution, out);
    out << "\n";
  }

  // member: relative_position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_position_valid, out);
    out << "\n";
  }

  // member: carrier_solution_floating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_solution_floating: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_solution_floating, out);
    out << "\n";
  }

  // member: carrier_solution_fixed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "carrier_solution_fixed: ";
    rosidl_generator_traits::value_to_yaml(msg.carrier_solution_fixed, out);
    out << "\n";
  }

  // member: moving_base_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_base_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_base_mode, out);
    out << "\n";
  }

  // member: reference_position_miss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_position_miss: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_position_miss, out);
    out << "\n";
  }

  // member: reference_observations_miss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_observations_miss: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_observations_miss, out);
    out << "\n";
  }

  // member: heading_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_valid, out);
    out << "\n";
  }

  // member: relative_position_normalized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_position_normalized: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_position_normalized, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorGnssRelative & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorGnssRelative & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorGnssRelative & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorGnssRelative>()
{
  return "px4_msgs::msg::SensorGnssRelative";
}

template<>
inline const char * name<px4_msgs::msg::SensorGnssRelative>()
{
  return "px4_msgs/msg/SensorGnssRelative";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorGnssRelative>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorGnssRelative>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorGnssRelative>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__TRAITS_HPP_
