// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorGps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GPS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensor_gps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorGps_rtcm_msg_used
{
public:
  explicit Init_SensorGps_rtcm_msg_used(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorGps rtcm_msg_used(::px4_msgs::msg::SensorGps::_rtcm_msg_used_type arg)
  {
    msg_.rtcm_msg_used = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_rtcm_crc_failed
{
public:
  explicit Init_SensorGps_rtcm_crc_failed(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_rtcm_msg_used rtcm_crc_failed(::px4_msgs::msg::SensorGps::_rtcm_crc_failed_type arg)
  {
    msg_.rtcm_crc_failed = std::move(arg);
    return Init_SensorGps_rtcm_msg_used(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_selected_rtcm_instance
{
public:
  explicit Init_SensorGps_selected_rtcm_instance(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_rtcm_crc_failed selected_rtcm_instance(::px4_msgs::msg::SensorGps::_selected_rtcm_instance_type arg)
  {
    msg_.selected_rtcm_instance = std::move(arg);
    return Init_SensorGps_rtcm_crc_failed(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_rtcm_injection_rate
{
public:
  explicit Init_SensorGps_rtcm_injection_rate(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_selected_rtcm_instance rtcm_injection_rate(::px4_msgs::msg::SensorGps::_rtcm_injection_rate_type arg)
  {
    msg_.rtcm_injection_rate = std::move(arg);
    return Init_SensorGps_selected_rtcm_instance(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_heading_accuracy
{
public:
  explicit Init_SensorGps_heading_accuracy(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_rtcm_injection_rate heading_accuracy(::px4_msgs::msg::SensorGps::_heading_accuracy_type arg)
  {
    msg_.heading_accuracy = std::move(arg);
    return Init_SensorGps_rtcm_injection_rate(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_heading_offset
{
public:
  explicit Init_SensorGps_heading_offset(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_heading_accuracy heading_offset(::px4_msgs::msg::SensorGps::_heading_offset_type arg)
  {
    msg_.heading_offset = std::move(arg);
    return Init_SensorGps_heading_accuracy(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_heading
{
public:
  explicit Init_SensorGps_heading(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_heading_offset heading(::px4_msgs::msg::SensorGps::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SensorGps_heading_offset(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_satellites_used
{
public:
  explicit Init_SensorGps_satellites_used(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_heading satellites_used(::px4_msgs::msg::SensorGps::_satellites_used_type arg)
  {
    msg_.satellites_used = std::move(arg);
    return Init_SensorGps_heading(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_time_utc_usec
{
public:
  explicit Init_SensorGps_time_utc_usec(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_satellites_used time_utc_usec(::px4_msgs::msg::SensorGps::_time_utc_usec_type arg)
  {
    msg_.time_utc_usec = std::move(arg);
    return Init_SensorGps_satellites_used(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_timestamp_time_relative
{
public:
  explicit Init_SensorGps_timestamp_time_relative(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_time_utc_usec timestamp_time_relative(::px4_msgs::msg::SensorGps::_timestamp_time_relative_type arg)
  {
    msg_.timestamp_time_relative = std::move(arg);
    return Init_SensorGps_time_utc_usec(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_vel_ned_valid
{
public:
  explicit Init_SensorGps_vel_ned_valid(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_timestamp_time_relative vel_ned_valid(::px4_msgs::msg::SensorGps::_vel_ned_valid_type arg)
  {
    msg_.vel_ned_valid = std::move(arg);
    return Init_SensorGps_timestamp_time_relative(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_cog_rad
{
public:
  explicit Init_SensorGps_cog_rad(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_vel_ned_valid cog_rad(::px4_msgs::msg::SensorGps::_cog_rad_type arg)
  {
    msg_.cog_rad = std::move(arg);
    return Init_SensorGps_vel_ned_valid(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_vel_d_m_s
{
public:
  explicit Init_SensorGps_vel_d_m_s(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_cog_rad vel_d_m_s(::px4_msgs::msg::SensorGps::_vel_d_m_s_type arg)
  {
    msg_.vel_d_m_s = std::move(arg);
    return Init_SensorGps_cog_rad(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_vel_e_m_s
{
public:
  explicit Init_SensorGps_vel_e_m_s(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_vel_d_m_s vel_e_m_s(::px4_msgs::msg::SensorGps::_vel_e_m_s_type arg)
  {
    msg_.vel_e_m_s = std::move(arg);
    return Init_SensorGps_vel_d_m_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_vel_n_m_s
{
public:
  explicit Init_SensorGps_vel_n_m_s(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_vel_e_m_s vel_n_m_s(::px4_msgs::msg::SensorGps::_vel_n_m_s_type arg)
  {
    msg_.vel_n_m_s = std::move(arg);
    return Init_SensorGps_vel_e_m_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_vel_m_s
{
public:
  explicit Init_SensorGps_vel_m_s(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_vel_n_m_s vel_m_s(::px4_msgs::msg::SensorGps::_vel_m_s_type arg)
  {
    msg_.vel_m_s = std::move(arg);
    return Init_SensorGps_vel_n_m_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_spoofing_state
{
public:
  explicit Init_SensorGps_spoofing_state(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_vel_m_s spoofing_state(::px4_msgs::msg::SensorGps::_spoofing_state_type arg)
  {
    msg_.spoofing_state = std::move(arg);
    return Init_SensorGps_vel_m_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_jamming_indicator
{
public:
  explicit Init_SensorGps_jamming_indicator(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_spoofing_state jamming_indicator(::px4_msgs::msg::SensorGps::_jamming_indicator_type arg)
  {
    msg_.jamming_indicator = std::move(arg);
    return Init_SensorGps_spoofing_state(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_jamming_state
{
public:
  explicit Init_SensorGps_jamming_state(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_jamming_indicator jamming_state(::px4_msgs::msg::SensorGps::_jamming_state_type arg)
  {
    msg_.jamming_state = std::move(arg);
    return Init_SensorGps_jamming_indicator(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_automatic_gain_control
{
public:
  explicit Init_SensorGps_automatic_gain_control(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_jamming_state automatic_gain_control(::px4_msgs::msg::SensorGps::_automatic_gain_control_type arg)
  {
    msg_.automatic_gain_control = std::move(arg);
    return Init_SensorGps_jamming_state(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_noise_per_ms
{
public:
  explicit Init_SensorGps_noise_per_ms(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_automatic_gain_control noise_per_ms(::px4_msgs::msg::SensorGps::_noise_per_ms_type arg)
  {
    msg_.noise_per_ms = std::move(arg);
    return Init_SensorGps_automatic_gain_control(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_vdop
{
public:
  explicit Init_SensorGps_vdop(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_noise_per_ms vdop(::px4_msgs::msg::SensorGps::_vdop_type arg)
  {
    msg_.vdop = std::move(arg);
    return Init_SensorGps_noise_per_ms(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_hdop
{
public:
  explicit Init_SensorGps_hdop(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_vdop hdop(::px4_msgs::msg::SensorGps::_hdop_type arg)
  {
    msg_.hdop = std::move(arg);
    return Init_SensorGps_vdop(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_epv
{
public:
  explicit Init_SensorGps_epv(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_hdop epv(::px4_msgs::msg::SensorGps::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_SensorGps_hdop(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_eph
{
public:
  explicit Init_SensorGps_eph(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_epv eph(::px4_msgs::msg::SensorGps::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_SensorGps_epv(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_fix_type
{
public:
  explicit Init_SensorGps_fix_type(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_eph fix_type(::px4_msgs::msg::SensorGps::_fix_type_type arg)
  {
    msg_.fix_type = std::move(arg);
    return Init_SensorGps_eph(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_c_variance_rad
{
public:
  explicit Init_SensorGps_c_variance_rad(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_fix_type c_variance_rad(::px4_msgs::msg::SensorGps::_c_variance_rad_type arg)
  {
    msg_.c_variance_rad = std::move(arg);
    return Init_SensorGps_fix_type(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_s_variance_m_s
{
public:
  explicit Init_SensorGps_s_variance_m_s(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_c_variance_rad s_variance_m_s(::px4_msgs::msg::SensorGps::_s_variance_m_s_type arg)
  {
    msg_.s_variance_m_s = std::move(arg);
    return Init_SensorGps_c_variance_rad(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_altitude_ellipsoid_m
{
public:
  explicit Init_SensorGps_altitude_ellipsoid_m(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_s_variance_m_s altitude_ellipsoid_m(::px4_msgs::msg::SensorGps::_altitude_ellipsoid_m_type arg)
  {
    msg_.altitude_ellipsoid_m = std::move(arg);
    return Init_SensorGps_s_variance_m_s(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_altitude_msl_m
{
public:
  explicit Init_SensorGps_altitude_msl_m(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_altitude_ellipsoid_m altitude_msl_m(::px4_msgs::msg::SensorGps::_altitude_msl_m_type arg)
  {
    msg_.altitude_msl_m = std::move(arg);
    return Init_SensorGps_altitude_ellipsoid_m(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_longitude_deg
{
public:
  explicit Init_SensorGps_longitude_deg(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_altitude_msl_m longitude_deg(::px4_msgs::msg::SensorGps::_longitude_deg_type arg)
  {
    msg_.longitude_deg = std::move(arg);
    return Init_SensorGps_altitude_msl_m(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_latitude_deg
{
public:
  explicit Init_SensorGps_latitude_deg(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_longitude_deg latitude_deg(::px4_msgs::msg::SensorGps::_latitude_deg_type arg)
  {
    msg_.latitude_deg = std::move(arg);
    return Init_SensorGps_longitude_deg(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_device_id
{
public:
  explicit Init_SensorGps_device_id(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_latitude_deg device_id(::px4_msgs::msg::SensorGps::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_SensorGps_latitude_deg(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_timestamp_sample
{
public:
  explicit Init_SensorGps_timestamp_sample(::px4_msgs::msg::SensorGps & msg)
  : msg_(msg)
  {}
  Init_SensorGps_device_id timestamp_sample(::px4_msgs::msg::SensorGps::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_SensorGps_device_id(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

class Init_SensorGps_timestamp
{
public:
  Init_SensorGps_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorGps_timestamp_sample timestamp(::px4_msgs::msg::SensorGps::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorGps_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::SensorGps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorGps>()
{
  return px4_msgs::msg::builder::Init_SensorGps_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GPS__BUILDER_HPP_
