// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_correction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorCorrection & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
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

  // member: accel_temperature
  {
    if (msg.accel_temperature.size() == 0) {
      out << "accel_temperature: []";
    } else {
      out << "accel_temperature: [";
      size_t pending_items = msg.accel_temperature.size();
      for (auto item : msg.accel_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_offset_0
  {
    if (msg.accel_offset_0.size() == 0) {
      out << "accel_offset_0: []";
    } else {
      out << "accel_offset_0: [";
      size_t pending_items = msg.accel_offset_0.size();
      for (auto item : msg.accel_offset_0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_offset_1
  {
    if (msg.accel_offset_1.size() == 0) {
      out << "accel_offset_1: []";
    } else {
      out << "accel_offset_1: [";
      size_t pending_items = msg.accel_offset_1.size();
      for (auto item : msg.accel_offset_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_offset_2
  {
    if (msg.accel_offset_2.size() == 0) {
      out << "accel_offset_2: []";
    } else {
      out << "accel_offset_2: [";
      size_t pending_items = msg.accel_offset_2.size();
      for (auto item : msg.accel_offset_2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel_offset_3
  {
    if (msg.accel_offset_3.size() == 0) {
      out << "accel_offset_3: []";
    } else {
      out << "accel_offset_3: [";
      size_t pending_items = msg.accel_offset_3.size();
      for (auto item : msg.accel_offset_3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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

  // member: gyro_temperature
  {
    if (msg.gyro_temperature.size() == 0) {
      out << "gyro_temperature: []";
    } else {
      out << "gyro_temperature: [";
      size_t pending_items = msg.gyro_temperature.size();
      for (auto item : msg.gyro_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_offset_0
  {
    if (msg.gyro_offset_0.size() == 0) {
      out << "gyro_offset_0: []";
    } else {
      out << "gyro_offset_0: [";
      size_t pending_items = msg.gyro_offset_0.size();
      for (auto item : msg.gyro_offset_0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_offset_1
  {
    if (msg.gyro_offset_1.size() == 0) {
      out << "gyro_offset_1: []";
    } else {
      out << "gyro_offset_1: [";
      size_t pending_items = msg.gyro_offset_1.size();
      for (auto item : msg.gyro_offset_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_offset_2
  {
    if (msg.gyro_offset_2.size() == 0) {
      out << "gyro_offset_2: []";
    } else {
      out << "gyro_offset_2: [";
      size_t pending_items = msg.gyro_offset_2.size();
      for (auto item : msg.gyro_offset_2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_offset_3
  {
    if (msg.gyro_offset_3.size() == 0) {
      out << "gyro_offset_3: []";
    } else {
      out << "gyro_offset_3: [";
      size_t pending_items = msg.gyro_offset_3.size();
      for (auto item : msg.gyro_offset_3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag_device_ids
  {
    if (msg.mag_device_ids.size() == 0) {
      out << "mag_device_ids: []";
    } else {
      out << "mag_device_ids: [";
      size_t pending_items = msg.mag_device_ids.size();
      for (auto item : msg.mag_device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag_temperature
  {
    if (msg.mag_temperature.size() == 0) {
      out << "mag_temperature: []";
    } else {
      out << "mag_temperature: [";
      size_t pending_items = msg.mag_temperature.size();
      for (auto item : msg.mag_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag_offset_0
  {
    if (msg.mag_offset_0.size() == 0) {
      out << "mag_offset_0: []";
    } else {
      out << "mag_offset_0: [";
      size_t pending_items = msg.mag_offset_0.size();
      for (auto item : msg.mag_offset_0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag_offset_1
  {
    if (msg.mag_offset_1.size() == 0) {
      out << "mag_offset_1: []";
    } else {
      out << "mag_offset_1: [";
      size_t pending_items = msg.mag_offset_1.size();
      for (auto item : msg.mag_offset_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag_offset_2
  {
    if (msg.mag_offset_2.size() == 0) {
      out << "mag_offset_2: []";
    } else {
      out << "mag_offset_2: [";
      size_t pending_items = msg.mag_offset_2.size();
      for (auto item : msg.mag_offset_2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mag_offset_3
  {
    if (msg.mag_offset_3.size() == 0) {
      out << "mag_offset_3: []";
    } else {
      out << "mag_offset_3: [";
      size_t pending_items = msg.mag_offset_3.size();
      for (auto item : msg.mag_offset_3) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: baro_device_ids
  {
    if (msg.baro_device_ids.size() == 0) {
      out << "baro_device_ids: []";
    } else {
      out << "baro_device_ids: [";
      size_t pending_items = msg.baro_device_ids.size();
      for (auto item : msg.baro_device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: baro_temperature
  {
    if (msg.baro_temperature.size() == 0) {
      out << "baro_temperature: []";
    } else {
      out << "baro_temperature: [";
      size_t pending_items = msg.baro_temperature.size();
      for (auto item : msg.baro_temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: baro_offset_0
  {
    out << "baro_offset_0: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_0, out);
    out << ", ";
  }

  // member: baro_offset_1
  {
    out << "baro_offset_1: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_1, out);
    out << ", ";
  }

  // member: baro_offset_2
  {
    out << "baro_offset_2: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_2, out);
    out << ", ";
  }

  // member: baro_offset_3
  {
    out << "baro_offset_3: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorCorrection & msg,
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

  // member: accel_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_temperature.size() == 0) {
      out << "accel_temperature: []\n";
    } else {
      out << "accel_temperature:\n";
      for (auto item : msg.accel_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_0.size() == 0) {
      out << "accel_offset_0: []\n";
    } else {
      out << "accel_offset_0:\n";
      for (auto item : msg.accel_offset_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_1.size() == 0) {
      out << "accel_offset_1: []\n";
    } else {
      out << "accel_offset_1:\n";
      for (auto item : msg.accel_offset_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_2.size() == 0) {
      out << "accel_offset_2: []\n";
    } else {
      out << "accel_offset_2:\n";
      for (auto item : msg.accel_offset_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel_offset_3.size() == 0) {
      out << "accel_offset_3: []\n";
    } else {
      out << "accel_offset_3:\n";
      for (auto item : msg.accel_offset_3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: gyro_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_temperature.size() == 0) {
      out << "gyro_temperature: []\n";
    } else {
      out << "gyro_temperature:\n";
      for (auto item : msg.gyro_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_0.size() == 0) {
      out << "gyro_offset_0: []\n";
    } else {
      out << "gyro_offset_0:\n";
      for (auto item : msg.gyro_offset_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_1.size() == 0) {
      out << "gyro_offset_1: []\n";
    } else {
      out << "gyro_offset_1:\n";
      for (auto item : msg.gyro_offset_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_2.size() == 0) {
      out << "gyro_offset_2: []\n";
    } else {
      out << "gyro_offset_2:\n";
      for (auto item : msg.gyro_offset_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_offset_3.size() == 0) {
      out << "gyro_offset_3: []\n";
    } else {
      out << "gyro_offset_3:\n";
      for (auto item : msg.gyro_offset_3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_device_ids.size() == 0) {
      out << "mag_device_ids: []\n";
    } else {
      out << "mag_device_ids:\n";
      for (auto item : msg.mag_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_temperature.size() == 0) {
      out << "mag_temperature: []\n";
    } else {
      out << "mag_temperature:\n";
      for (auto item : msg.mag_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_offset_0.size() == 0) {
      out << "mag_offset_0: []\n";
    } else {
      out << "mag_offset_0:\n";
      for (auto item : msg.mag_offset_0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_offset_1.size() == 0) {
      out << "mag_offset_1: []\n";
    } else {
      out << "mag_offset_1:\n";
      for (auto item : msg.mag_offset_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_offset_2.size() == 0) {
      out << "mag_offset_2: []\n";
    } else {
      out << "mag_offset_2:\n";
      for (auto item : msg.mag_offset_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mag_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_offset_3.size() == 0) {
      out << "mag_offset_3: []\n";
    } else {
      out << "mag_offset_3:\n";
      for (auto item : msg.mag_offset_3) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.baro_device_ids.size() == 0) {
      out << "baro_device_ids: []\n";
    } else {
      out << "baro_device_ids:\n";
      for (auto item : msg.baro_device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.baro_temperature.size() == 0) {
      out << "baro_temperature: []\n";
    } else {
      out << "baro_temperature:\n";
      for (auto item : msg.baro_temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: baro_offset_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_0: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_0, out);
    out << "\n";
  }

  // member: baro_offset_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_1: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_1, out);
    out << "\n";
  }

  // member: baro_offset_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_2: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_2, out);
    out << "\n";
  }

  // member: baro_offset_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_offset_3: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_offset_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorCorrection & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorCorrection & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorCorrection & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorCorrection>()
{
  return "px4_msgs::msg::SensorCorrection";
}

template<>
inline const char * name<px4_msgs::msg::SensorCorrection>()
{
  return "px4_msgs/msg/SensorCorrection";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorCorrection>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorCorrection>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorCorrection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__TRAITS_HPP_
