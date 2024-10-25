// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/OrbTestLarge.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/orb_test_large__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_OrbTestLarge_junk
{
public:
  explicit Init_OrbTestLarge_junk(::px4_msgs::msg::OrbTestLarge & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::OrbTestLarge junk(::px4_msgs::msg::OrbTestLarge::_junk_type arg)
  {
    msg_.junk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestLarge msg_;
};

class Init_OrbTestLarge_val
{
public:
  explicit Init_OrbTestLarge_val(::px4_msgs::msg::OrbTestLarge & msg)
  : msg_(msg)
  {}
  Init_OrbTestLarge_junk val(::px4_msgs::msg::OrbTestLarge::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_OrbTestLarge_junk(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestLarge msg_;
};

class Init_OrbTestLarge_timestamp
{
public:
  Init_OrbTestLarge_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrbTestLarge_val timestamp(::px4_msgs::msg::OrbTestLarge::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OrbTestLarge_val(msg_);
  }

private:
  ::px4_msgs::msg::OrbTestLarge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::OrbTestLarge>()
{
  return px4_msgs::msg::builder::Init_OrbTestLarge_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__BUILDER_HPP_
