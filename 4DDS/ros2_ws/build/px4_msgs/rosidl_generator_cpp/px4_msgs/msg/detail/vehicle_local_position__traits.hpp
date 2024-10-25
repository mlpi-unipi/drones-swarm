// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleLocalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_local_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleLocalPosition & msg,
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

  // member: xy_valid
  {
    out << "xy_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_valid, out);
    out << ", ";
  }

  // member: z_valid
  {
    out << "z_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.z_valid, out);
    out << ", ";
  }

  // member: v_xy_valid
  {
    out << "v_xy_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.v_xy_valid, out);
    out << ", ";
  }

  // member: v_z_valid
  {
    out << "v_z_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.v_z_valid, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: delta_xy
  {
    if (msg.delta_xy.size() == 0) {
      out << "delta_xy: []";
    } else {
      out << "delta_xy: [";
      size_t pending_items = msg.delta_xy.size();
      for (auto item : msg.delta_xy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: xy_reset_counter
  {
    out << "xy_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_reset_counter, out);
    out << ", ";
  }

  // member: delta_z
  {
    out << "delta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_z, out);
    out << ", ";
  }

  // member: z_reset_counter
  {
    out << "z_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.z_reset_counter, out);
    out << ", ";
  }

  // member: vx
  {
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << ", ";
  }

  // member: vy
  {
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << ", ";
  }

  // member: vz
  {
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << ", ";
  }

  // member: z_deriv
  {
    out << "z_deriv: ";
    rosidl_generator_traits::value_to_yaml(msg.z_deriv, out);
    out << ", ";
  }

  // member: delta_vxy
  {
    if (msg.delta_vxy.size() == 0) {
      out << "delta_vxy: []";
    } else {
      out << "delta_vxy: [";
      size_t pending_items = msg.delta_vxy.size();
      for (auto item : msg.delta_vxy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vxy_reset_counter
  {
    out << "vxy_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.vxy_reset_counter, out);
    out << ", ";
  }

  // member: delta_vz
  {
    out << "delta_vz: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vz, out);
    out << ", ";
  }

  // member: vz_reset_counter
  {
    out << "vz_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_reset_counter, out);
    out << ", ";
  }

  // member: ax
  {
    out << "ax: ";
    rosidl_generator_traits::value_to_yaml(msg.ax, out);
    out << ", ";
  }

  // member: ay
  {
    out << "ay: ";
    rosidl_generator_traits::value_to_yaml(msg.ay, out);
    out << ", ";
  }

  // member: az
  {
    out << "az: ";
    rosidl_generator_traits::value_to_yaml(msg.az, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_var
  {
    out << "heading_var: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_var, out);
    out << ", ";
  }

  // member: unaided_heading
  {
    out << "unaided_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.unaided_heading, out);
    out << ", ";
  }

  // member: delta_heading
  {
    out << "delta_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_heading, out);
    out << ", ";
  }

  // member: heading_reset_counter
  {
    out << "heading_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_reset_counter, out);
    out << ", ";
  }

  // member: heading_good_for_control
  {
    out << "heading_good_for_control: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_good_for_control, out);
    out << ", ";
  }

  // member: tilt_var
  {
    out << "tilt_var: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_var, out);
    out << ", ";
  }

  // member: xy_global
  {
    out << "xy_global: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_global, out);
    out << ", ";
  }

  // member: z_global
  {
    out << "z_global: ";
    rosidl_generator_traits::value_to_yaml(msg.z_global, out);
    out << ", ";
  }

  // member: ref_timestamp
  {
    out << "ref_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_timestamp, out);
    out << ", ";
  }

  // member: ref_lat
  {
    out << "ref_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lat, out);
    out << ", ";
  }

  // member: ref_lon
  {
    out << "ref_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lon, out);
    out << ", ";
  }

  // member: ref_alt
  {
    out << "ref_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_alt, out);
    out << ", ";
  }

  // member: dist_bottom
  {
    out << "dist_bottom: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_bottom, out);
    out << ", ";
  }

  // member: dist_bottom_valid
  {
    out << "dist_bottom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_bottom_valid, out);
    out << ", ";
  }

  // member: dist_bottom_sensor_bitfield
  {
    out << "dist_bottom_sensor_bitfield: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_bottom_sensor_bitfield, out);
    out << ", ";
  }

  // member: eph
  {
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << ", ";
  }

  // member: epv
  {
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << ", ";
  }

  // member: evh
  {
    out << "evh: ";
    rosidl_generator_traits::value_to_yaml(msg.evh, out);
    out << ", ";
  }

  // member: evv
  {
    out << "evv: ";
    rosidl_generator_traits::value_to_yaml(msg.evv, out);
    out << ", ";
  }

  // member: dead_reckoning
  {
    out << "dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.dead_reckoning, out);
    out << ", ";
  }

  // member: vxy_max
  {
    out << "vxy_max: ";
    rosidl_generator_traits::value_to_yaml(msg.vxy_max, out);
    out << ", ";
  }

  // member: vz_max
  {
    out << "vz_max: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_max, out);
    out << ", ";
  }

  // member: hagl_min
  {
    out << "hagl_min: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_min, out);
    out << ", ";
  }

  // member: hagl_max
  {
    out << "hagl_max: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleLocalPosition & msg,
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

  // member: xy_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_valid, out);
    out << "\n";
  }

  // member: z_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.z_valid, out);
    out << "\n";
  }

  // member: v_xy_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_xy_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.v_xy_valid, out);
    out << "\n";
  }

  // member: v_z_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_z_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.v_z_valid, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: delta_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_xy.size() == 0) {
      out << "delta_xy: []\n";
    } else {
      out << "delta_xy:\n";
      for (auto item : msg.delta_xy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: xy_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_reset_counter, out);
    out << "\n";
  }

  // member: delta_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_z: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_z, out);
    out << "\n";
  }

  // member: z_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.z_reset_counter, out);
    out << "\n";
  }

  // member: vx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vx: ";
    rosidl_generator_traits::value_to_yaml(msg.vx, out);
    out << "\n";
  }

  // member: vy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vy: ";
    rosidl_generator_traits::value_to_yaml(msg.vy, out);
    out << "\n";
  }

  // member: vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz: ";
    rosidl_generator_traits::value_to_yaml(msg.vz, out);
    out << "\n";
  }

  // member: z_deriv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_deriv: ";
    rosidl_generator_traits::value_to_yaml(msg.z_deriv, out);
    out << "\n";
  }

  // member: delta_vxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delta_vxy.size() == 0) {
      out << "delta_vxy: []\n";
    } else {
      out << "delta_vxy:\n";
      for (auto item : msg.delta_vxy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vxy_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vxy_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.vxy_reset_counter, out);
    out << "\n";
  }

  // member: delta_vz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_vz: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_vz, out);
    out << "\n";
  }

  // member: vz_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_reset_counter, out);
    out << "\n";
  }

  // member: ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ax: ";
    rosidl_generator_traits::value_to_yaml(msg.ax, out);
    out << "\n";
  }

  // member: ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ay: ";
    rosidl_generator_traits::value_to_yaml(msg.ay, out);
    out << "\n";
  }

  // member: az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "az: ";
    rosidl_generator_traits::value_to_yaml(msg.az, out);
    out << "\n";
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

  // member: heading_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_var: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_var, out);
    out << "\n";
  }

  // member: unaided_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unaided_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.unaided_heading, out);
    out << "\n";
  }

  // member: delta_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_heading, out);
    out << "\n";
  }

  // member: heading_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_reset_counter, out);
    out << "\n";
  }

  // member: heading_good_for_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_good_for_control: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_good_for_control, out);
    out << "\n";
  }

  // member: tilt_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tilt_var: ";
    rosidl_generator_traits::value_to_yaml(msg.tilt_var, out);
    out << "\n";
  }

  // member: xy_global
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xy_global: ";
    rosidl_generator_traits::value_to_yaml(msg.xy_global, out);
    out << "\n";
  }

  // member: z_global
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_global: ";
    rosidl_generator_traits::value_to_yaml(msg.z_global, out);
    out << "\n";
  }

  // member: ref_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_timestamp, out);
    out << "\n";
  }

  // member: ref_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lat, out);
    out << "\n";
  }

  // member: ref_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_lon, out);
    out << "\n";
  }

  // member: ref_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_alt, out);
    out << "\n";
  }

  // member: dist_bottom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_bottom: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_bottom, out);
    out << "\n";
  }

  // member: dist_bottom_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_bottom_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_bottom_valid, out);
    out << "\n";
  }

  // member: dist_bottom_sensor_bitfield
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_bottom_sensor_bitfield: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_bottom_sensor_bitfield, out);
    out << "\n";
  }

  // member: eph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << "\n";
  }

  // member: epv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << "\n";
  }

  // member: evh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "evh: ";
    rosidl_generator_traits::value_to_yaml(msg.evh, out);
    out << "\n";
  }

  // member: evv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "evv: ";
    rosidl_generator_traits::value_to_yaml(msg.evv, out);
    out << "\n";
  }

  // member: dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.dead_reckoning, out);
    out << "\n";
  }

  // member: vxy_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vxy_max: ";
    rosidl_generator_traits::value_to_yaml(msg.vxy_max, out);
    out << "\n";
  }

  // member: vz_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vz_max: ";
    rosidl_generator_traits::value_to_yaml(msg.vz_max, out);
    out << "\n";
  }

  // member: hagl_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_min: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_min, out);
    out << "\n";
  }

  // member: hagl_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_max: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleLocalPosition & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleLocalPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleLocalPosition & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleLocalPosition>()
{
  return "px4_msgs::msg::VehicleLocalPosition";
}

template<>
inline const char * name<px4_msgs::msg::VehicleLocalPosition>()
{
  return "px4_msgs/msg/VehicleLocalPosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleLocalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleLocalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleLocalPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION__TRAITS_HPP_
