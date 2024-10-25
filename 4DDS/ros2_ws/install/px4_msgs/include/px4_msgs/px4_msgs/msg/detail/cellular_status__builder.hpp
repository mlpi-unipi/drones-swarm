// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CellularStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/cellular_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CellularStatus_lac
{
public:
  explicit Init_CellularStatus_lac(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CellularStatus lac(::px4_msgs::msg::CellularStatus::_lac_type arg)
  {
    msg_.lac = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_mnc
{
public:
  explicit Init_CellularStatus_mnc(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_lac mnc(::px4_msgs::msg::CellularStatus::_mnc_type arg)
  {
    msg_.mnc = std::move(arg);
    return Init_CellularStatus_lac(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_mcc
{
public:
  explicit Init_CellularStatus_mcc(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_mnc mcc(::px4_msgs::msg::CellularStatus::_mcc_type arg)
  {
    msg_.mcc = std::move(arg);
    return Init_CellularStatus_mnc(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_quality
{
public:
  explicit Init_CellularStatus_quality(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_mcc quality(::px4_msgs::msg::CellularStatus::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_CellularStatus_mcc(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_type
{
public:
  explicit Init_CellularStatus_type(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_quality type(::px4_msgs::msg::CellularStatus::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CellularStatus_quality(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_failure_reason
{
public:
  explicit Init_CellularStatus_failure_reason(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_type failure_reason(::px4_msgs::msg::CellularStatus::_failure_reason_type arg)
  {
    msg_.failure_reason = std::move(arg);
    return Init_CellularStatus_type(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_status
{
public:
  explicit Init_CellularStatus_status(::px4_msgs::msg::CellularStatus & msg)
  : msg_(msg)
  {}
  Init_CellularStatus_failure_reason status(::px4_msgs::msg::CellularStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CellularStatus_failure_reason(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

class Init_CellularStatus_timestamp
{
public:
  Init_CellularStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CellularStatus_status timestamp(::px4_msgs::msg::CellularStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CellularStatus_status(msg_);
  }

private:
  ::px4_msgs::msg::CellularStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CellularStatus>()
{
  return px4_msgs::msg::builder::Init_CellularStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__CELLULAR_STATUS__BUILDER_HPP_
