// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/estimator_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorStates_covariances
{
public:
  explicit Init_EstimatorStates_covariances(::px4_msgs::msg::EstimatorStates & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorStates covariances(::px4_msgs::msg::EstimatorStates::_covariances_type arg)
  {
    msg_.covariances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStates msg_;
};

class Init_EstimatorStates_n_states
{
public:
  explicit Init_EstimatorStates_n_states(::px4_msgs::msg::EstimatorStates & msg)
  : msg_(msg)
  {}
  Init_EstimatorStates_covariances n_states(::px4_msgs::msg::EstimatorStates::_n_states_type arg)
  {
    msg_.n_states = std::move(arg);
    return Init_EstimatorStates_covariances(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStates msg_;
};

class Init_EstimatorStates_states
{
public:
  explicit Init_EstimatorStates_states(::px4_msgs::msg::EstimatorStates & msg)
  : msg_(msg)
  {}
  Init_EstimatorStates_n_states states(::px4_msgs::msg::EstimatorStates::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_EstimatorStates_n_states(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStates msg_;
};

class Init_EstimatorStates_timestamp_sample
{
public:
  explicit Init_EstimatorStates_timestamp_sample(::px4_msgs::msg::EstimatorStates & msg)
  : msg_(msg)
  {}
  Init_EstimatorStates_states timestamp_sample(::px4_msgs::msg::EstimatorStates::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorStates_states(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStates msg_;
};

class Init_EstimatorStates_timestamp
{
public:
  Init_EstimatorStates_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorStates_timestamp_sample timestamp(::px4_msgs::msg::EstimatorStates::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorStates_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorStates>()
{
  return px4_msgs::msg::builder::Init_EstimatorStates_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__BUILDER_HPP_
