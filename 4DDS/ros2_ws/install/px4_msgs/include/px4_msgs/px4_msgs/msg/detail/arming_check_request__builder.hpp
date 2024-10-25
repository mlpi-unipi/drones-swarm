// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ArmingCheckRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/arming_check_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmingCheckRequest_request_id
{
public:
  explicit Init_ArmingCheckRequest_request_id(::px4_msgs::msg::ArmingCheckRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ArmingCheckRequest request_id(::px4_msgs::msg::ArmingCheckRequest::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckRequest msg_;
};

class Init_ArmingCheckRequest_timestamp
{
public:
  Init_ArmingCheckRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmingCheckRequest_request_id timestamp(::px4_msgs::msg::ArmingCheckRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ArmingCheckRequest_request_id(msg_);
  }

private:
  ::px4_msgs::msg::ArmingCheckRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ArmingCheckRequest>()
{
  return px4_msgs::msg::builder::Init_ArmingCheckRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__BUILDER_HPP_
