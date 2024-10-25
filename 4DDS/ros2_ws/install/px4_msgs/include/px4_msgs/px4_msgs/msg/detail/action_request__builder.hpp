// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ActionRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/action_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionRequest_mode
{
public:
  explicit Init_ActionRequest_mode(::px4_msgs::msg::ActionRequest & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ActionRequest mode(::px4_msgs::msg::ActionRequest::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ActionRequest msg_;
};

class Init_ActionRequest_source
{
public:
  explicit Init_ActionRequest_source(::px4_msgs::msg::ActionRequest & msg)
  : msg_(msg)
  {}
  Init_ActionRequest_mode source(::px4_msgs::msg::ActionRequest::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_ActionRequest_mode(msg_);
  }

private:
  ::px4_msgs::msg::ActionRequest msg_;
};

class Init_ActionRequest_action
{
public:
  explicit Init_ActionRequest_action(::px4_msgs::msg::ActionRequest & msg)
  : msg_(msg)
  {}
  Init_ActionRequest_source action(::px4_msgs::msg::ActionRequest::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ActionRequest_source(msg_);
  }

private:
  ::px4_msgs::msg::ActionRequest msg_;
};

class Init_ActionRequest_timestamp
{
public:
  Init_ActionRequest_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionRequest_action timestamp(::px4_msgs::msg::ActionRequest::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ActionRequest_action(msg_);
  }

private:
  ::px4_msgs::msg::ActionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ActionRequest>()
{
  return px4_msgs::msg::builder::Init_ActionRequest_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ACTION_REQUEST__BUILDER_HPP_
