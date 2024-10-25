// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_imu_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleImuStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
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

  // member: accel_clipping
  {
    if (msg.accel_clipping.size() == 0) {
      out << "accel_clipping: []";
    } else {
      out << "accel_clipping: [";
      size_t pending_items = msg.accel_clipping.size();
      for (auto item : msg.accel_clipping) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_clipping
  {
    if (msg.gyro_clipping.size() == 0) {
      out << "gyro_clipping: []";
    } else {
      out << "gyro_clipping: [";
      size_t pending_items = msg.gyro_clipping.size();
      for (auto item : msg.gyro_clipping) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_error_count
  {
    out << "accel_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_error_count, out);
    out << ", ";
  }

  // member: gyro_error_count
  {
    out << "gyro_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_error_count, out);
    out << ", ";
  }

  // member: accel_rate_hz
  {
    out << "accel_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_rate_hz, out);
    out << ", ";
  }

  // member: gyro_rate_hz
  {
    out << "gyro_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_rate_hz, out);
    out << ", ";
  }

  // member: accel_raw_rate_hz
  {
    out << "accel_raw_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_raw_rate_hz, out);
    out << ", ";
  }

  // member: gyro_raw_rate_hz
  {
    out << "gyro_raw_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_raw_rate_hz, out);
    out << ", ";
  }

  // member: accel_vibration_metric
  {
    out << "accel_vibration_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_vibration_metric, out);
    out << ", ";
  }

  // member: gyro_vibration_metric
  {
    out << "gyro_vibration_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_vibration_metric, out);
    out << ", ";
  }

  // member: delta_angle_coning_metric
  {
    out << "delta_angle_coning_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_angle_coning_metric, out);
    out << ", ";
  }

  // member: mean_accel
  {
    if (msg.mean_accel.size() == 0) {
      out << "mean_accel: []";
    } else {
      out << "mean_accel: [";
      size_t pending_items = msg.mean_accel.size();
      for (auto item : msg.mean_accel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mean_gyro
  {
    if (msg.mean_gyro.size() == 0) {
      out << "mean_gyro: []";
    } else {
      out << "mean_gyro: [";
      size_t pending_items = msg.mean_gyro.size();
      for (auto item : msg.mean_gyro) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: var_accel
  {
    if (msg.var_accel.size() == 0) {
      out << "var_accel: []";
    } else {
      out << "var_accel: [";
      size_t pending_items = msg.var_accel.size();
      for (auto item : msg.var_accel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: var_gyro
  {
    if (msg.var_gyro.size() == 0) {
      out << "var_gyro: []";
    } else {
      out << "var_gyro: [";
      size_t pending_items = msg.var_gyro.size();
      for (auto item : msg.var_gyro) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature_accel
  {
    out << "temperature_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_accel, out);
    out << ", ";
  }

  // member: temperature_gyro
  {
    out << "temperature_gyro: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_gyro, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleImuStatus & msg,
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

  // member: accel_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_clipping.size() == 0) {
      out << "accel_clipping: []\n";
    } else {
      out << "accel_clipping:\n";
      for (auto item : msg.accel_clipping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_clipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_clipping.size() == 0) {
      out << "gyro_clipping: []\n";
    } else {
      out << "gyro_clipping:\n";
      for (auto item : msg.gyro_clipping) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_error_count, out);
    out << "\n";
  }

  // member: gyro_error_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_error_count: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_error_count, out);
    out << "\n";
  }

  // member: accel_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_rate_hz, out);
    out << "\n";
  }

  // member: gyro_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_rate_hz, out);
    out << "\n";
  }

  // member: accel_raw_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_raw_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_raw_rate_hz, out);
    out << "\n";
  }

  // member: gyro_raw_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_raw_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_raw_rate_hz, out);
    out << "\n";
  }

  // member: accel_vibration_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_vibration_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_vibration_metric, out);
    out << "\n";
  }

  // member: gyro_vibration_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_vibration_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_vibration_metric, out);
    out << "\n";
  }

  // member: delta_angle_coning_metric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle_coning_metric: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_angle_coning_metric, out);
    out << "\n";
  }

  // member: mean_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mean_accel.size() == 0) {
      out << "mean_accel: []\n";
    } else {
      out << "mean_accel:\n";
      for (auto item : msg.mean_accel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mean_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mean_gyro.size() == 0) {
      out << "mean_gyro: []\n";
    } else {
      out << "mean_gyro:\n";
      for (auto item : msg.mean_gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: var_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.var_accel.size() == 0) {
      out << "var_accel: []\n";
    } else {
      out << "var_accel:\n";
      for (auto item : msg.var_accel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: var_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.var_gyro.size() == 0) {
      out << "var_gyro: []\n";
    } else {
      out << "var_gyro:\n";
      for (auto item : msg.var_gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_accel, out);
    out << "\n";
  }

  // member: temperature_gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_gyro: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_gyro, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleImuStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleImuStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleImuStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleImuStatus>()
{
  return "px4_msgs::msg::VehicleImuStatus";
}

template<>
inline const char * name<px4_msgs::msg::VehicleImuStatus>()
{
  return "px4_msgs/msg/VehicleImuStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleImuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleImuStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleImuStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__TRAITS_HPP_
