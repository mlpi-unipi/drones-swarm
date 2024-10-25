// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/IrlockReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__IRLOCK_REPORT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__IRLOCK_REPORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/irlock_report__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_IrlockReport_size_y
{
public:
  explicit Init_IrlockReport_size_y(::px4_msgs::msg::IrlockReport & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::IrlockReport size_y(::px4_msgs::msg::IrlockReport::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::IrlockReport msg_;
};

class Init_IrlockReport_size_x
{
public:
  explicit Init_IrlockReport_size_x(::px4_msgs::msg::IrlockReport & msg)
  : msg_(msg)
  {}
  Init_IrlockReport_size_y size_x(::px4_msgs::msg::IrlockReport::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_IrlockReport_size_y(msg_);
  }

private:
  ::px4_msgs::msg::IrlockReport msg_;
};

class Init_IrlockReport_pos_y
{
public:
  explicit Init_IrlockReport_pos_y(::px4_msgs::msg::IrlockReport & msg)
  : msg_(msg)
  {}
  Init_IrlockReport_size_x pos_y(::px4_msgs::msg::IrlockReport::_pos_y_type arg)
  {
    msg_.pos_y = std::move(arg);
    return Init_IrlockReport_size_x(msg_);
  }

private:
  ::px4_msgs::msg::IrlockReport msg_;
};

class Init_IrlockReport_pos_x
{
public:
  explicit Init_IrlockReport_pos_x(::px4_msgs::msg::IrlockReport & msg)
  : msg_(msg)
  {}
  Init_IrlockReport_pos_y pos_x(::px4_msgs::msg::IrlockReport::_pos_x_type arg)
  {
    msg_.pos_x = std::move(arg);
    return Init_IrlockReport_pos_y(msg_);
  }

private:
  ::px4_msgs::msg::IrlockReport msg_;
};

class Init_IrlockReport_signature
{
public:
  explicit Init_IrlockReport_signature(::px4_msgs::msg::IrlockReport & msg)
  : msg_(msg)
  {}
  Init_IrlockReport_pos_x signature(::px4_msgs::msg::IrlockReport::_signature_type arg)
  {
    msg_.signature = std::move(arg);
    return Init_IrlockReport_pos_x(msg_);
  }

private:
  ::px4_msgs::msg::IrlockReport msg_;
};

class Init_IrlockReport_timestamp
{
public:
  Init_IrlockReport_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrlockReport_signature timestamp(::px4_msgs::msg::IrlockReport::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_IrlockReport_signature(msg_);
  }

private:
  ::px4_msgs::msg::IrlockReport msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::IrlockReport>()
{
  return px4_msgs::msg::builder::Init_IrlockReport_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__IRLOCK_REPORT__BUILDER_HPP_
