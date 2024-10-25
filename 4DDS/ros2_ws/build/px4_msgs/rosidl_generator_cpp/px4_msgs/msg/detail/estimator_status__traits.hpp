// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorStatus & msg,
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

  // member: output_tracking_error
  {
    if (msg.output_tracking_error.size() == 0) {
      out << "output_tracking_error: []";
    } else {
      out << "output_tracking_error: [";
      size_t pending_items = msg.output_tracking_error.size();
      for (auto item : msg.output_tracking_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gps_check_fail_flags
  {
    out << "gps_check_fail_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_check_fail_flags, out);
    out << ", ";
  }

  // member: control_mode_flags
  {
    out << "control_mode_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode_flags, out);
    out << ", ";
  }

  // member: filter_fault_flags
  {
    out << "filter_fault_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_fault_flags, out);
    out << ", ";
  }

  // member: pos_horiz_accuracy
  {
    out << "pos_horiz_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_horiz_accuracy, out);
    out << ", ";
  }

  // member: pos_vert_accuracy
  {
    out << "pos_vert_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_vert_accuracy, out);
    out << ", ";
  }

  // member: innovation_check_flags
  {
    out << "innovation_check_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_check_flags, out);
    out << ", ";
  }

  // member: mag_test_ratio
  {
    out << "mag_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_test_ratio, out);
    out << ", ";
  }

  // member: vel_test_ratio
  {
    out << "vel_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_test_ratio, out);
    out << ", ";
  }

  // member: pos_test_ratio
  {
    out << "pos_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_test_ratio, out);
    out << ", ";
  }

  // member: hgt_test_ratio
  {
    out << "hgt_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.hgt_test_ratio, out);
    out << ", ";
  }

  // member: tas_test_ratio
  {
    out << "tas_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.tas_test_ratio, out);
    out << ", ";
  }

  // member: hagl_test_ratio
  {
    out << "hagl_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_test_ratio, out);
    out << ", ";
  }

  // member: beta_test_ratio
  {
    out << "beta_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_test_ratio, out);
    out << ", ";
  }

  // member: solution_status_flags
  {
    out << "solution_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status_flags, out);
    out << ", ";
  }

  // member: reset_count_vel_ne
  {
    out << "reset_count_vel_ne: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_vel_ne, out);
    out << ", ";
  }

  // member: reset_count_vel_d
  {
    out << "reset_count_vel_d: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_vel_d, out);
    out << ", ";
  }

  // member: reset_count_pos_ne
  {
    out << "reset_count_pos_ne: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_pos_ne, out);
    out << ", ";
  }

  // member: reset_count_pod_d
  {
    out << "reset_count_pod_d: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_pod_d, out);
    out << ", ";
  }

  // member: reset_count_quat
  {
    out << "reset_count_quat: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_quat, out);
    out << ", ";
  }

  // member: time_slip
  {
    out << "time_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.time_slip, out);
    out << ", ";
  }

  // member: pre_flt_fail_innov_heading
  {
    out << "pre_flt_fail_innov_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_heading, out);
    out << ", ";
  }

  // member: pre_flt_fail_innov_vel_horiz
  {
    out << "pre_flt_fail_innov_vel_horiz: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_vel_horiz, out);
    out << ", ";
  }

  // member: pre_flt_fail_innov_vel_vert
  {
    out << "pre_flt_fail_innov_vel_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_vel_vert, out);
    out << ", ";
  }

  // member: pre_flt_fail_innov_height
  {
    out << "pre_flt_fail_innov_height: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_height, out);
    out << ", ";
  }

  // member: pre_flt_fail_mag_field_disturbed
  {
    out << "pre_flt_fail_mag_field_disturbed: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_mag_field_disturbed, out);
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

  // member: baro_device_id
  {
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << ", ";
  }

  // member: mag_device_id
  {
    out << "mag_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_device_id, out);
    out << ", ";
  }

  // member: health_flags
  {
    out << "health_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.health_flags, out);
    out << ", ";
  }

  // member: timeout_flags
  {
    out << "timeout_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_flags, out);
    out << ", ";
  }

  // member: mag_inclination_deg
  {
    out << "mag_inclination_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_inclination_deg, out);
    out << ", ";
  }

  // member: mag_inclination_ref_deg
  {
    out << "mag_inclination_ref_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_inclination_ref_deg, out);
    out << ", ";
  }

  // member: mag_strength_gs
  {
    out << "mag_strength_gs: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_strength_gs, out);
    out << ", ";
  }

  // member: mag_strength_ref_gs
  {
    out << "mag_strength_ref_gs: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_strength_ref_gs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorStatus & msg,
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

  // member: output_tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_tracking_error.size() == 0) {
      out << "output_tracking_error: []\n";
    } else {
      out << "output_tracking_error:\n";
      for (auto item : msg.output_tracking_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gps_check_fail_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_check_fail_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_check_fail_flags, out);
    out << "\n";
  }

  // member: control_mode_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode_flags, out);
    out << "\n";
  }

  // member: filter_fault_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_fault_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_fault_flags, out);
    out << "\n";
  }

  // member: pos_horiz_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_horiz_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_horiz_accuracy, out);
    out << "\n";
  }

  // member: pos_vert_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_vert_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_vert_accuracy, out);
    out << "\n";
  }

  // member: innovation_check_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "innovation_check_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.innovation_check_flags, out);
    out << "\n";
  }

  // member: mag_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_test_ratio, out);
    out << "\n";
  }

  // member: vel_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_test_ratio, out);
    out << "\n";
  }

  // member: pos_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_test_ratio, out);
    out << "\n";
  }

  // member: hgt_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hgt_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.hgt_test_ratio, out);
    out << "\n";
  }

  // member: tas_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tas_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.tas_test_ratio, out);
    out << "\n";
  }

  // member: hagl_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_test_ratio, out);
    out << "\n";
  }

  // member: beta_test_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta_test_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.beta_test_ratio, out);
    out << "\n";
  }

  // member: solution_status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_status_flags, out);
    out << "\n";
  }

  // member: reset_count_vel_ne
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_count_vel_ne: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_vel_ne, out);
    out << "\n";
  }

  // member: reset_count_vel_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_count_vel_d: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_vel_d, out);
    out << "\n";
  }

  // member: reset_count_pos_ne
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_count_pos_ne: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_pos_ne, out);
    out << "\n";
  }

  // member: reset_count_pod_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_count_pod_d: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_pod_d, out);
    out << "\n";
  }

  // member: reset_count_quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_count_quat: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_count_quat, out);
    out << "\n";
  }

  // member: time_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.time_slip, out);
    out << "\n";
  }

  // member: pre_flt_fail_innov_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flt_fail_innov_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_heading, out);
    out << "\n";
  }

  // member: pre_flt_fail_innov_vel_horiz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flt_fail_innov_vel_horiz: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_vel_horiz, out);
    out << "\n";
  }

  // member: pre_flt_fail_innov_vel_vert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flt_fail_innov_vel_vert: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_vel_vert, out);
    out << "\n";
  }

  // member: pre_flt_fail_innov_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flt_fail_innov_height: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_innov_height, out);
    out << "\n";
  }

  // member: pre_flt_fail_mag_field_disturbed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_flt_fail_mag_field_disturbed: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_flt_fail_mag_field_disturbed, out);
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

  // member: baro_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_device_id, out);
    out << "\n";
  }

  // member: mag_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_device_id, out);
    out << "\n";
  }

  // member: health_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "health_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.health_flags, out);
    out << "\n";
  }

  // member: timeout_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_flags, out);
    out << "\n";
  }

  // member: mag_inclination_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_inclination_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_inclination_deg, out);
    out << "\n";
  }

  // member: mag_inclination_ref_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_inclination_ref_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_inclination_ref_deg, out);
    out << "\n";
  }

  // member: mag_strength_gs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_strength_gs: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_strength_gs, out);
    out << "\n";
  }

  // member: mag_strength_ref_gs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_strength_ref_gs: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_strength_ref_gs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EstimatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorStatus>()
{
  return "px4_msgs::msg::EstimatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorStatus>()
{
  return "px4_msgs/msg/EstimatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__TRAITS_HPP_
