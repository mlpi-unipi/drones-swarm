// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleImu & msg,
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

  // member: accel_device_id
  {
    out << "accel_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_device_id, out);
    out << ", ";
  }

  // member: gyro_device_id
  {
    out << "gyro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_device_id, out);
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

  // member: delta_velocity
  {
    if (msg.delta_velocity.size() == 0) {
      out << "delta_velocity: []";
    } else {
      out << "delta_velocity: [";
      size_t pending_items = msg.delta_velocity.size();
      for (auto item : msg.delta_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delta_angle_dt
  {
    out << "delta_angle_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_angle_dt, out);
    out << ", ";
  }

  // member: delta_velocity_dt
  {
    out << "delta_velocity_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_velocity_dt, out);
    out << ", ";
  }

  // member: delta_angle_clipping
  {
    out << "delta_angle_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_angle_clipping, out);
    out << ", ";
  }

  // member: delta_velocity_clipping
  {
    out << "delta_velocity_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_velocity_clipping, out);
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
  const VehicleImu & msg,
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

  // member: accel_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_device_id, out);
    out << "\n";
  }

  // member: gyro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_device_id, out);
    out << "\n";
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

  // member: delta_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_velocity.size() == 0) {
      out << "delta_velocity: []\n";
    } else {
      out << "delta_velocity:\n";
      for (auto item : msg.delta_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delta_angle_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_angle_dt, out);
    out << "\n";
  }

  // member: delta_velocity_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_velocity_dt: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_velocity_dt, out);
    out << "\n";
  }

  // member: delta_angle_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_angle_clipping, out);
    out << "\n";
  }

  // member: delta_velocity_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_velocity_clipping: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_velocity_clipping, out);
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

inline std::string to_yaml(const VehicleImu & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleImu & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleImu & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleImu>()
{
  return "px4_msgs::msg::VehicleImu";
}

template<>
inline const char * name<px4_msgs::msg::VehicleImu>()
{
  return "px4_msgs/msg/VehicleImu";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleImu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleImu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleImu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__TRAITS_HPP_
