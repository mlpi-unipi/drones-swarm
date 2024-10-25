// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensors_status_imu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorsStatusImu & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: accel_device_id_primary
  {
    out << "accel_device_id_primary: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_device_id_primary, out);
    out << ", ";
  }

  // member: accel_device_ids
  {
    if (msg.accel_device_ids.size() == 0) {
      out << "accel_device_ids: []";
    } else {
      out << "accel_device_ids: [";
      size_t pending_items = msg.accel_device_ids.size();
      for (auto item : msg.accel_device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_inconsistency_m_s_s
  {
    if (msg.accel_inconsistency_m_s_s.size() == 0) {
      out << "accel_inconsistency_m_s_s: []";
    } else {
      out << "accel_inconsistency_m_s_s: [";
      size_t pending_items = msg.accel_inconsistency_m_s_s.size();
      for (auto item : msg.accel_inconsistency_m_s_s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_healthy
  {
    if (msg.accel_healthy.size() == 0) {
      out << "accel_healthy: []";
    } else {
      out << "accel_healthy: [";
      size_t pending_items = msg.accel_healthy.size();
      for (auto item : msg.accel_healthy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_priority
  {
    if (msg.accel_priority.size() == 0) {
      out << "accel_priority: []";
    } else {
      out << "accel_priority: [";
      size_t pending_items = msg.accel_priority.size();
      for (auto item : msg.accel_priority) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_device_id_primary
  {
    out << "gyro_device_id_primary: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_device_id_primary, out);
    out << ", ";
  }

  // member: gyro_device_ids
  {
    if (msg.gyro_device_ids.size() == 0) {
      out << "gyro_device_ids: []";
    } else {
      out << "gyro_device_ids: [";
      size_t pending_items = msg.gyro_device_ids.size();
      for (auto item : msg.gyro_device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_inconsistency_rad_s
  {
    if (msg.gyro_inconsistency_rad_s.size() == 0) {
      out << "gyro_inconsistency_rad_s: []";
    } else {
      out << "gyro_inconsistency_rad_s: [";
      size_t pending_items = msg.gyro_inconsistency_rad_s.size();
      for (auto item : msg.gyro_inconsistency_rad_s) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_healthy
  {
    if (msg.gyro_healthy.size() == 0) {
      out << "gyro_healthy: []";
    } else {
      out << "gyro_healthy: [";
      size_t pending_items = msg.gyro_healthy.size();
      for (auto item : msg.gyro_healthy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_priority
  {
    if (msg.gyro_priority.size() == 0) {
      out << "gyro_priority: []";
    } else {
      out << "gyro_priority: [";
      size_t pending_items = msg.gyro_priority.size();
      for (auto item : msg.gyro_priority) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorsStatusImu & msg,
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

  // member: accel_device_id_primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_device_id_primary: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_device_id_primary, out);
    out << "\n";
  }

  // member: accel_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_device_ids.size() == 0) {
      out << "accel_device_ids: []\n";
    } else {
      out << "accel_device_ids:\n";
      for (auto item : msg.accel_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_inconsistency_m_s_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_inconsistency_m_s_s.size() == 0) {
      out << "accel_inconsistency_m_s_s: []\n";
    } else {
      out << "accel_inconsistency_m_s_s:\n";
      for (auto item : msg.accel_inconsistency_m_s_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_healthy.size() == 0) {
      out << "accel_healthy: []\n";
    } else {
      out << "accel_healthy:\n";
      for (auto item : msg.accel_healthy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_priority.size() == 0) {
      out << "accel_priority: []\n";
    } else {
      out << "accel_priority:\n";
      for (auto item : msg.accel_priority) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_device_id_primary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_device_id_primary: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_device_id_primary, out);
    out << "\n";
  }

  // member: gyro_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_device_ids.size() == 0) {
      out << "gyro_device_ids: []\n";
    } else {
      out << "gyro_device_ids:\n";
      for (auto item : msg.gyro_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_inconsistency_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_inconsistency_rad_s.size() == 0) {
      out << "gyro_inconsistency_rad_s: []\n";
    } else {
      out << "gyro_inconsistency_rad_s:\n";
      for (auto item : msg.gyro_inconsistency_rad_s) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_healthy.size() == 0) {
      out << "gyro_healthy: []\n";
    } else {
      out << "gyro_healthy:\n";
      for (auto item : msg.gyro_healthy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_priority.size() == 0) {
      out << "gyro_priority: []\n";
    } else {
      out << "gyro_priority:\n";
      for (auto item : msg.gyro_priority) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorsStatusImu & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorsStatusImu & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorsStatusImu & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorsStatusImu>()
{
  return "px4_msgs::msg::SensorsStatusImu";
}

template<>
inline const char * name<px4_msgs::msg::SensorsStatusImu>()
{
  return "px4_msgs/msg/SensorsStatusImu";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorsStatusImu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorsStatusImu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorsStatusImu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__TRAITS_HPP_
