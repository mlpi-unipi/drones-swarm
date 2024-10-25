// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorOutputs.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_outputs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorOutputs_output
{
public:
  explicit Init_ActuatorOutputs_output(::px4_msgs::msg::ActuatorOutputs & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorOutputs output(::px4_msgs::msg::ActuatorOutputs::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorOutputs msg_;
};

class Init_ActuatorOutputs_noutputs
{
public:
  explicit Init_ActuatorOutputs_noutputs(::px4_msgs::msg::ActuatorOutputs & msg)
  : msg_(msg)
  {}
  Init_ActuatorOutputs_output noutputs(::px4_msgs::msg::ActuatorOutputs::_noutputs_type arg)
  {
    msg_.noutputs = std::move(arg);
    return Init_ActuatorOutputs_output(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorOutputs msg_;
};

class Init_ActuatorOutputs_timestamp
{
public:
  Init_ActuatorOutputs_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorOutputs_noutputs timestamp(::px4_msgs::msg::ActuatorOutputs::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorOutputs_noutputs(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorOutputs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorOutputs>()
{
  return px4_msgs::msg::builder::Init_ActuatorOutputs_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS__BUILDER_HPP_
