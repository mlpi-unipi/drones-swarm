// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TaskStackInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/task_stack_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskStackInfo_task_name
{
public:
  explicit Init_TaskStackInfo_task_name(::px4_msgs::msg::TaskStackInfo & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TaskStackInfo task_name(::px4_msgs::msg::TaskStackInfo::_task_name_type arg)
  {
    msg_.task_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TaskStackInfo msg_;
};

class Init_TaskStackInfo_stack_free
{
public:
  explicit Init_TaskStackInfo_stack_free(::px4_msgs::msg::TaskStackInfo & msg)
  : msg_(msg)
  {}
  Init_TaskStackInfo_task_name stack_free(::px4_msgs::msg::TaskStackInfo::_stack_free_type arg)
  {
    msg_.stack_free = std::move(arg);
    return Init_TaskStackInfo_task_name(msg_);
  }

private:
  ::px4_msgs::msg::TaskStackInfo msg_;
};

class Init_TaskStackInfo_timestamp
{
public:
  Init_TaskStackInfo_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskStackInfo_stack_free timestamp(::px4_msgs::msg::TaskStackInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TaskStackInfo_stack_free(msg_);
  }

private:
  ::px4_msgs::msg::TaskStackInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TaskStackInfo>()
{
  return px4_msgs::msg::builder::Init_TaskStackInfo_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TASK_STACK_INFO__BUILDER_HPP_
