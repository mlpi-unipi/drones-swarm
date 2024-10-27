// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_sensor_bias__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorSensorBias_mag_bias_stable
{
public:
  explicit Init_EstimatorSensorBias_mag_bias_stable(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorSensorBias mag_bias_stable(::px4_msgs::msg::EstimatorSensorBias::_mag_bias_stable_type arg)
  {
    msg_.mag_bias_stable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_mag_bias_valid
{
public:
  explicit Init_EstimatorSensorBias_mag_bias_valid(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_mag_bias_stable mag_bias_valid(::px4_msgs::msg::EstimatorSensorBias::_mag_bias_valid_type arg)
  {
    msg_.mag_bias_valid = std::move(arg);
    return Init_EstimatorSensorBias_mag_bias_stable(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_mag_bias_variance
{
public:
  explicit Init_EstimatorSensorBias_mag_bias_variance(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_mag_bias_valid mag_bias_variance(::px4_msgs::msg::EstimatorSensorBias::_mag_bias_variance_type arg)
  {
    msg_.mag_bias_variance = std::move(arg);
    return Init_EstimatorSensorBias_mag_bias_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_mag_bias_limit
{
public:
  explicit Init_EstimatorSensorBias_mag_bias_limit(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_mag_bias_variance mag_bias_limit(::px4_msgs::msg::EstimatorSensorBias::_mag_bias_limit_type arg)
  {
    msg_.mag_bias_limit = std::move(arg);
    return Init_EstimatorSensorBias_mag_bias_variance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_mag_bias
{
public:
  explicit Init_EstimatorSensorBias_mag_bias(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_mag_bias_limit mag_bias(::px4_msgs::msg::EstimatorSensorBias::_mag_bias_type arg)
  {
    msg_.mag_bias = std::move(arg);
    return Init_EstimatorSensorBias_mag_bias_limit(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_mag_device_id
{
public:
  explicit Init_EstimatorSensorBias_mag_device_id(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_mag_bias mag_device_id(::px4_msgs::msg::EstimatorSensorBias::_mag_device_id_type arg)
  {
    msg_.mag_device_id = std::move(arg);
    return Init_EstimatorSensorBias_mag_bias(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_accel_bias_stable
{
public:
  explicit Init_EstimatorSensorBias_accel_bias_stable(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_mag_device_id accel_bias_stable(::px4_msgs::msg::EstimatorSensorBias::_accel_bias_stable_type arg)
  {
    msg_.accel_bias_stable = std::move(arg);
    return Init_EstimatorSensorBias_mag_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_accel_bias_valid
{
public:
  explicit Init_EstimatorSensorBias_accel_bias_valid(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_accel_bias_stable accel_bias_valid(::px4_msgs::msg::EstimatorSensorBias::_accel_bias_valid_type arg)
  {
    msg_.accel_bias_valid = std::move(arg);
    return Init_EstimatorSensorBias_accel_bias_stable(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_accel_bias_variance
{
public:
  explicit Init_EstimatorSensorBias_accel_bias_variance(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_accel_bias_valid accel_bias_variance(::px4_msgs::msg::EstimatorSensorBias::_accel_bias_variance_type arg)
  {
    msg_.accel_bias_variance = std::move(arg);
    return Init_EstimatorSensorBias_accel_bias_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_accel_bias_limit
{
public:
  explicit Init_EstimatorSensorBias_accel_bias_limit(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_accel_bias_variance accel_bias_limit(::px4_msgs::msg::EstimatorSensorBias::_accel_bias_limit_type arg)
  {
    msg_.accel_bias_limit = std::move(arg);
    return Init_EstimatorSensorBias_accel_bias_variance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_accel_bias
{
public:
  explicit Init_EstimatorSensorBias_accel_bias(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_accel_bias_limit accel_bias(::px4_msgs::msg::EstimatorSensorBias::_accel_bias_type arg)
  {
    msg_.accel_bias = std::move(arg);
    return Init_EstimatorSensorBias_accel_bias_limit(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_accel_device_id
{
public:
  explicit Init_EstimatorSensorBias_accel_device_id(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_accel_bias accel_device_id(::px4_msgs::msg::EstimatorSensorBias::_accel_device_id_type arg)
  {
    msg_.accel_device_id = std::move(arg);
    return Init_EstimatorSensorBias_accel_bias(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_gyro_bias_stable
{
public:
  explicit Init_EstimatorSensorBias_gyro_bias_stable(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_accel_device_id gyro_bias_stable(::px4_msgs::msg::EstimatorSensorBias::_gyro_bias_stable_type arg)
  {
    msg_.gyro_bias_stable = std::move(arg);
    return Init_EstimatorSensorBias_accel_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_gyro_bias_valid
{
public:
  explicit Init_EstimatorSensorBias_gyro_bias_valid(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_gyro_bias_stable gyro_bias_valid(::px4_msgs::msg::EstimatorSensorBias::_gyro_bias_valid_type arg)
  {
    msg_.gyro_bias_valid = std::move(arg);
    return Init_EstimatorSensorBias_gyro_bias_stable(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_gyro_bias_variance
{
public:
  explicit Init_EstimatorSensorBias_gyro_bias_variance(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_gyro_bias_valid gyro_bias_variance(::px4_msgs::msg::EstimatorSensorBias::_gyro_bias_variance_type arg)
  {
    msg_.gyro_bias_variance = std::move(arg);
    return Init_EstimatorSensorBias_gyro_bias_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_gyro_bias_limit
{
public:
  explicit Init_EstimatorSensorBias_gyro_bias_limit(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_gyro_bias_variance gyro_bias_limit(::px4_msgs::msg::EstimatorSensorBias::_gyro_bias_limit_type arg)
  {
    msg_.gyro_bias_limit = std::move(arg);
    return Init_EstimatorSensorBias_gyro_bias_variance(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_gyro_bias
{
public:
  explicit Init_EstimatorSensorBias_gyro_bias(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_gyro_bias_limit gyro_bias(::px4_msgs::msg::EstimatorSensorBias::_gyro_bias_type arg)
  {
    msg_.gyro_bias = std::move(arg);
    return Init_EstimatorSensorBias_gyro_bias_limit(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_gyro_device_id
{
public:
  explicit Init_EstimatorSensorBias_gyro_device_id(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_gyro_bias gyro_device_id(::px4_msgs::msg::EstimatorSensorBias::_gyro_device_id_type arg)
  {
    msg_.gyro_device_id = std::move(arg);
    return Init_EstimatorSensorBias_gyro_bias(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_timestamp_sample
{
public:
  explicit Init_EstimatorSensorBias_timestamp_sample(::px4_msgs::msg::EstimatorSensorBias & msg)
  : msg_(msg)
  {}
  Init_EstimatorSensorBias_gyro_device_id timestamp_sample(::px4_msgs::msg::EstimatorSensorBias::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorSensorBias_gyro_device_id(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

class Init_EstimatorSensorBias_timestamp
{
public:
  Init_EstimatorSensorBias_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorSensorBias_timestamp_sample timestamp(::px4_msgs::msg::EstimatorSensorBias::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorSensorBias_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorSensorBias msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorSensorBias>()
{
  return px4_msgs::msg::builder::Init_EstimatorSensorBias_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__BUILDER_HPP_
