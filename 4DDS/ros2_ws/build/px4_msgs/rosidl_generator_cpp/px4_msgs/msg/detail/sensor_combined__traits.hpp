// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorCombined.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_combined__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorCombined & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: gyro_rad
  {
    if (msg.gyro_rad.size() == 0) {
      out << "gyro_rad: []";
    } else {
      out << "gyro_rad: [";
      size_t pending_items = msg.gyro_rad.size();
      for (auto item : msg.gyro_rad) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_integral_dt
  {
    out << "gyro_integral_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_integral_dt, out);
    out << ", ";
  }

  // member: accelerometer_timestamp_relative
  {
    out << "accelerometer_timestamp_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_timestamp_relative, out);
    out << ", ";
  }

  // member: accelerometer_m_s2
  {
    if (msg.accelerometer_m_s2.size() == 0) {
      out << "accelerometer_m_s2: []";
    } else {
      out << "accelerometer_m_s2: [";
      size_t pending_items = msg.accelerometer_m_s2.size();
      for (auto item : msg.accelerometer_m_s2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accelerometer_integral_dt
  {
    out << "accelerometer_integral_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_integral_dt, out);
    out << ", ";
  }

  // member: accelerometer_clipping
  {
    out << "accelerometer_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_clipping, out);
    out << ", ";
  }

  // member: gyro_clipping
  {
    out << "gyro_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_clipping, out);
    out << ", ";
  }

  // member: accel_calibration_count
  {
    out << "accel_calibration_count: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_calibration_count, out);
    out << ", ";
  }

  // member: gyro_calibration_count
  {
    out << "gyro_calibration_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_calibration_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorCombined & msg,
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

  // member: gyro_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_rad.size() == 0) {
      out << "gyro_rad: []\n";
    } else {
      out << "gyro_rad:\n";
      for (auto item : msg.gyro_rad) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_integral_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_integral_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_integral_dt, out);
    out << "\n";
  }

  // member: accelerometer_timestamp_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_timestamp_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_timestamp_relative, out);
    out << "\n";
  }

  // member: accelerometer_m_s2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerometer_m_s2.size() == 0) {
      out << "accelerometer_m_s2: []\n";
    } else {
      out << "accelerometer_m_s2:\n";
      for (auto item : msg.accelerometer_m_s2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accelerometer_integral_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_integral_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_integral_dt, out);
    out << "\n";
  }

  // member: accelerometer_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.accelerometer_clipping, out);
    out << "\n";
  }

  // member: gyro_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_clipping, out);
    out << "\n";
  }

  // member: accel_calibration_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_calibration_count: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_calibration_count, out);
    out << "\n";
  }

  // member: gyro_calibration_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_calibration_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_calibration_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorCombined & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorCombined & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorCombined & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorCombined>()
{
  return "px4_msgs::msg::SensorCombined";
}

template<>
inline const char * name<px4_msgs::msg::SensorCombined>()
{
  return "px4_msgs/msg/SensorCombined";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorCombined>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorCombined>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorCombined>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__TRAITS_HPP_
