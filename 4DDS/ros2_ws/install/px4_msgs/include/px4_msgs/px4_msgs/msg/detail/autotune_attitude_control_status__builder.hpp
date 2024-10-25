// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/autotune_attitude_control_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_AutotuneAttitudeControlStatus_state
{
public:
  explicit Init_AutotuneAttitudeControlStatus_state(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::AutotuneAttitudeControlStatus state(::px4_msgs::msg::AutotuneAttitudeControlStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_y_filt
{
public:
  explicit Init_AutotuneAttitudeControlStatus_y_filt(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_state y_filt(::px4_msgs::msg::AutotuneAttitudeControlStatus::_y_filt_type arg)
  {
    msg_.y_filt = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_state(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_u_filt
{
public:
  explicit Init_AutotuneAttitudeControlStatus_u_filt(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_y_filt u_filt(::px4_msgs::msg::AutotuneAttitudeControlStatus::_u_filt_type arg)
  {
    msg_.u_filt = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_y_filt(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_rate_sp
{
public:
  explicit Init_AutotuneAttitudeControlStatus_rate_sp(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_u_filt rate_sp(::px4_msgs::msg::AutotuneAttitudeControlStatus::_rate_sp_type arg)
  {
    msg_.rate_sp = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_u_filt(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_att_p
{
public:
  explicit Init_AutotuneAttitudeControlStatus_att_p(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_rate_sp att_p(::px4_msgs::msg::AutotuneAttitudeControlStatus::_att_p_type arg)
  {
    msg_.att_p = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_rate_sp(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_kff
{
public:
  explicit Init_AutotuneAttitudeControlStatus_kff(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_att_p kff(::px4_msgs::msg::AutotuneAttitudeControlStatus::_kff_type arg)
  {
    msg_.kff = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_att_p(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_kd
{
public:
  explicit Init_AutotuneAttitudeControlStatus_kd(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_kff kd(::px4_msgs::msg::AutotuneAttitudeControlStatus::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_kff(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_ki
{
public:
  explicit Init_AutotuneAttitudeControlStatus_ki(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_kd ki(::px4_msgs::msg::AutotuneAttitudeControlStatus::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_kd(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_kc
{
public:
  explicit Init_AutotuneAttitudeControlStatus_kc(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_ki kc(::px4_msgs::msg::AutotuneAttitudeControlStatus::_kc_type arg)
  {
    msg_.kc = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_ki(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_dt_model
{
public:
  explicit Init_AutotuneAttitudeControlStatus_dt_model(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_kc dt_model(::px4_msgs::msg::AutotuneAttitudeControlStatus::_dt_model_type arg)
  {
    msg_.dt_model = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_kc(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_innov
{
public:
  explicit Init_AutotuneAttitudeControlStatus_innov(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_dt_model innov(::px4_msgs::msg::AutotuneAttitudeControlStatus::_innov_type arg)
  {
    msg_.innov = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_dt_model(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_fitness
{
public:
  explicit Init_AutotuneAttitudeControlStatus_fitness(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_innov fitness(::px4_msgs::msg::AutotuneAttitudeControlStatus::_fitness_type arg)
  {
    msg_.fitness = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_innov(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_coeff_var
{
public:
  explicit Init_AutotuneAttitudeControlStatus_coeff_var(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_fitness coeff_var(::px4_msgs::msg::AutotuneAttitudeControlStatus::_coeff_var_type arg)
  {
    msg_.coeff_var = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_fitness(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_coeff
{
public:
  explicit Init_AutotuneAttitudeControlStatus_coeff(::px4_msgs::msg::AutotuneAttitudeControlStatus & msg)
  : msg_(msg)
  {}
  Init_AutotuneAttitudeControlStatus_coeff_var coeff(::px4_msgs::msg::AutotuneAttitudeControlStatus::_coeff_type arg)
  {
    msg_.coeff = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_coeff_var(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

class Init_AutotuneAttitudeControlStatus_timestamp
{
public:
  Init_AutotuneAttitudeControlStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutotuneAttitudeControlStatus_coeff timestamp(::px4_msgs::msg::AutotuneAttitudeControlStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AutotuneAttitudeControlStatus_coeff(msg_);
  }

private:
  ::px4_msgs::msg::AutotuneAttitudeControlStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::AutotuneAttitudeControlStatus>()
{
  return px4_msgs::msg::builder::Init_AutotuneAttitudeControlStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__BUILDER_HPP_
