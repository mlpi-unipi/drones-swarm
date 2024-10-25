// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActuatorTest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/actuator_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActuatorTest_timeout_ms
{
public:
  explicit Init_ActuatorTest_timeout_ms(::px4_msgs::msg::ActuatorTest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActuatorTest timeout_ms(::px4_msgs::msg::ActuatorTest::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorTest msg_;
};

class Init_ActuatorTest_value
{
public:
  explicit Init_ActuatorTest_value(::px4_msgs::msg::ActuatorTest & msg)
  : msg_(msg)
  {}
  Init_ActuatorTest_timeout_ms value(::px4_msgs::msg::ActuatorTest::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_ActuatorTest_timeout_ms(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorTest msg_;
};

class Init_ActuatorTest_function
{
public:
  explicit Init_ActuatorTest_function(::px4_msgs::msg::ActuatorTest & msg)
  : msg_(msg)
  {}
  Init_ActuatorTest_value function(::px4_msgs::msg::ActuatorTest::_function_type arg)
  {
    msg_.function = std::move(arg);
    return Init_ActuatorTest_value(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorTest msg_;
};

class Init_ActuatorTest_action
{
public:
  explicit Init_ActuatorTest_action(::px4_msgs::msg::ActuatorTest & msg)
  : msg_(msg)
  {}
  Init_ActuatorTest_function action(::px4_msgs::msg::ActuatorTest::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ActuatorTest_function(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorTest msg_;
};

class Init_ActuatorTest_timestamp
{
public:
  Init_ActuatorTest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActuatorTest_action timestamp(::px4_msgs::msg::ActuatorTest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActuatorTest_action(msg_);
  }

private:
  ::px4_msgs::msg::ActuatorTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActuatorTest>()
{
  return px4_msgs::msg::builder::Init_ActuatorTest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_TEST__BUILDER_HPP_
