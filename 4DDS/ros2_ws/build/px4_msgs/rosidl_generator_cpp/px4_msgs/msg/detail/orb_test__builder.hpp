// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OrbTest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/orb_test__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OrbTest_val
{
public:
  explicit Init_OrbTest_val(::px4_msgs::msg::OrbTest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OrbTest val(::px4_msgs::msg::OrbTest::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OrbTest msg_;
};

class Init_OrbTest_timestamp
{
public:
  Init_OrbTest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrbTest_val timestamp(::px4_msgs::msg::OrbTest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OrbTest_val(msg_);
  }

private:
  ::px4_msgs::msg::OrbTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OrbTest>()
{
  return px4_msgs::msg::builder::Init_OrbTest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST__BUILDER_HPP_
