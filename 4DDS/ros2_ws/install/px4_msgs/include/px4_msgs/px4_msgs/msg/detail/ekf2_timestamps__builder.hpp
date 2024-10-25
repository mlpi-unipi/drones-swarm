// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/ekf2_timestamps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Ekf2Timestamps_visual_odometry_timestamp_rel
{
public:
  explicit Init_Ekf2Timestamps_visual_odometry_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Ekf2Timestamps visual_odometry_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps::_visual_odometry_timestamp_rel_type arg)
  {
    msg_.visual_odometry_timestamp_rel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

class Init_Ekf2Timestamps_vehicle_magnetometer_timestamp_rel
{
public:
  explicit Init_Ekf2Timestamps_vehicle_magnetometer_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps & msg)
  : msg_(msg)
  {}
  Init_Ekf2Timestamps_visual_odometry_timestamp_rel vehicle_magnetometer_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps::_vehicle_magnetometer_timestamp_rel_type arg)
  {
    msg_.vehicle_magnetometer_timestamp_rel = std::move(arg);
    return Init_Ekf2Timestamps_visual_odometry_timestamp_rel(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

class Init_Ekf2Timestamps_vehicle_air_data_timestamp_rel
{
public:
  explicit Init_Ekf2Timestamps_vehicle_air_data_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps & msg)
  : msg_(msg)
  {}
  Init_Ekf2Timestamps_vehicle_magnetometer_timestamp_rel vehicle_air_data_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps::_vehicle_air_data_timestamp_rel_type arg)
  {
    msg_.vehicle_air_data_timestamp_rel = std::move(arg);
    return Init_Ekf2Timestamps_vehicle_magnetometer_timestamp_rel(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

class Init_Ekf2Timestamps_optical_flow_timestamp_rel
{
public:
  explicit Init_Ekf2Timestamps_optical_flow_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps & msg)
  : msg_(msg)
  {}
  Init_Ekf2Timestamps_vehicle_air_data_timestamp_rel optical_flow_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps::_optical_flow_timestamp_rel_type arg)
  {
    msg_.optical_flow_timestamp_rel = std::move(arg);
    return Init_Ekf2Timestamps_vehicle_air_data_timestamp_rel(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

class Init_Ekf2Timestamps_distance_sensor_timestamp_rel
{
public:
  explicit Init_Ekf2Timestamps_distance_sensor_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps & msg)
  : msg_(msg)
  {}
  Init_Ekf2Timestamps_optical_flow_timestamp_rel distance_sensor_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps::_distance_sensor_timestamp_rel_type arg)
  {
    msg_.distance_sensor_timestamp_rel = std::move(arg);
    return Init_Ekf2Timestamps_optical_flow_timestamp_rel(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

class Init_Ekf2Timestamps_airspeed_timestamp_rel
{
public:
  explicit Init_Ekf2Timestamps_airspeed_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps & msg)
  : msg_(msg)
  {}
  Init_Ekf2Timestamps_distance_sensor_timestamp_rel airspeed_timestamp_rel(::px4_msgs::msg::Ekf2Timestamps::_airspeed_timestamp_rel_type arg)
  {
    msg_.airspeed_timestamp_rel = std::move(arg);
    return Init_Ekf2Timestamps_distance_sensor_timestamp_rel(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

class Init_Ekf2Timestamps_timestamp
{
public:
  Init_Ekf2Timestamps_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ekf2Timestamps_airspeed_timestamp_rel timestamp(::px4_msgs::msg::Ekf2Timestamps::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Ekf2Timestamps_airspeed_timestamp_rel(msg_);
  }

private:
  ::px4_msgs::msg::Ekf2Timestamps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Ekf2Timestamps>()
{
  return px4_msgs::msg::builder::Init_Ekf2Timestamps_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__BUILDER_HPP_
