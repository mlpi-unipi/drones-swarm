// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_selector_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorSelectorStatus_accel_fault_detected
{
public:
  explicit Init_EstimatorSelectorStatus_accel_fault_detected(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorSelectorStatus accel_fault_detected(::px4_msgs::msg::EstimatorSelectorStatus::_accel_fault_detected_type arg)
  {
    msg_.accel_fault_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_gyro_fault_detected
{
public:
  explicit Init_EstimatorSelectorStatus_gyro_fault_detected(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_accel_fault_detected gyro_fault_detected(::px4_msgs::msg::EstimatorSelectorStatus::_gyro_fault_detected_type arg)
  {
    msg_.gyro_fault_detected = std::move(arg);
    return Init_EstimatorSelectorStatus_accel_fault_detected(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_accumulated_accel_error
{
public:
  explicit Init_EstimatorSelectorStatus_accumulated_accel_error(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_gyro_fault_detected accumulated_accel_error(::px4_msgs::msg::EstimatorSelectorStatus::_accumulated_accel_error_type arg)
  {
    msg_.accumulated_accel_error = std::move(arg);
    return Init_EstimatorSelectorStatus_gyro_fault_detected(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_accumulated_gyro_error
{
public:
  explicit Init_EstimatorSelectorStatus_accumulated_gyro_error(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_accumulated_accel_error accumulated_gyro_error(::px4_msgs::msg::EstimatorSelectorStatus::_accumulated_gyro_error_type arg)
  {
    msg_.accumulated_gyro_error = std::move(arg);
    return Init_EstimatorSelectorStatus_accumulated_accel_error(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_healthy
{
public:
  explicit Init_EstimatorSelectorStatus_healthy(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_accumulated_gyro_error healthy(::px4_msgs::msg::EstimatorSelectorStatus::_healthy_type arg)
  {
    msg_.healthy = std::move(arg);
    return Init_EstimatorSelectorStatus_accumulated_gyro_error(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_relative_test_ratio
{
public:
  explicit Init_EstimatorSelectorStatus_relative_test_ratio(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_healthy relative_test_ratio(::px4_msgs::msg::EstimatorSelectorStatus::_relative_test_ratio_type arg)
  {
    msg_.relative_test_ratio = std::move(arg);
    return Init_EstimatorSelectorStatus_healthy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_combined_test_ratio
{
public:
  explicit Init_EstimatorSelectorStatus_combined_test_ratio(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_relative_test_ratio combined_test_ratio(::px4_msgs::msg::EstimatorSelectorStatus::_combined_test_ratio_type arg)
  {
    msg_.combined_test_ratio = std::move(arg);
    return Init_EstimatorSelectorStatus_relative_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_mag_device_id
{
public:
  explicit Init_EstimatorSelectorStatus_mag_device_id(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_combined_test_ratio mag_device_id(::px4_msgs::msg::EstimatorSelectorStatus::_mag_device_id_type arg)
  {
    msg_.mag_device_id = std::move(arg);
    return Init_EstimatorSelectorStatus_combined_test_ratio(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_gyro_device_id
{
public:
  explicit Init_EstimatorSelectorStatus_gyro_device_id(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_mag_device_id gyro_device_id(::px4_msgs::msg::EstimatorSelectorStatus::_gyro_device_id_type arg)
  {
    msg_.gyro_device_id = std::move(arg);
    return Init_EstimatorSelectorStatus_mag_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_baro_device_id
{
public:
  explicit Init_EstimatorSelectorStatus_baro_device_id(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_gyro_device_id baro_device_id(::px4_msgs::msg::EstimatorSelectorStatus::_baro_device_id_type arg)
  {
    msg_.baro_device_id = std::move(arg);
    return Init_EstimatorSelectorStatus_gyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_accel_device_id
{
public:
  explicit Init_EstimatorSelectorStatus_accel_device_id(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_baro_device_id accel_device_id(::px4_msgs::msg::EstimatorSelectorStatus::_accel_device_id_type arg)
  {
    msg_.accel_device_id = std::move(arg);
    return Init_EstimatorSelectorStatus_baro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_last_instance_change
{
public:
  explicit Init_EstimatorSelectorStatus_last_instance_change(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_accel_device_id last_instance_change(::px4_msgs::msg::EstimatorSelectorStatus::_last_instance_change_type arg)
  {
    msg_.last_instance_change = std::move(arg);
    return Init_EstimatorSelectorStatus_accel_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_instance_changed_count
{
public:
  explicit Init_EstimatorSelectorStatus_instance_changed_count(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_last_instance_change instance_changed_count(::px4_msgs::msg::EstimatorSelectorStatus::_instance_changed_count_type arg)
  {
    msg_.instance_changed_count = std::move(arg);
    return Init_EstimatorSelectorStatus_last_instance_change(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_instances_available
{
public:
  explicit Init_EstimatorSelectorStatus_instances_available(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_instance_changed_count instances_available(::px4_msgs::msg::EstimatorSelectorStatus::_instances_available_type arg)
  {
    msg_.instances_available = std::move(arg);
    return Init_EstimatorSelectorStatus_instance_changed_count(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_primary_instance
{
public:
  explicit Init_EstimatorSelectorStatus_primary_instance(::px4_msgs::msg::EstimatorSelectorStatus & msg)
  : msg_(msg)
  {}
  Init_EstimatorSelectorStatus_instances_available primary_instance(::px4_msgs::msg::EstimatorSelectorStatus::_primary_instance_type arg)
  {
    msg_.primary_instance = std::move(arg);
    return Init_EstimatorSelectorStatus_instances_available(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

class Init_EstimatorSelectorStatus_timestamp
{
public:
  Init_EstimatorSelectorStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorSelectorStatus_primary_instance timestamp(::px4_msgs::msg::EstimatorSelectorStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorSelectorStatus_primary_instance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSelectorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorSelectorStatus>()
{
  return px4_msgs::msg::builder::Init_EstimatorSelectorStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SELECTOR_STATUS__BUILDER_HPP_
