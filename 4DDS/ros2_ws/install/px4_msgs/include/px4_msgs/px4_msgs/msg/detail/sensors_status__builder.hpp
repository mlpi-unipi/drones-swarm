// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/sensors_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorsStatus_external
{
public:
  explicit Init_SensorsStatus_external(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::SensorsStatus external(::px4_msgs::msg::SensorsStatus::_external_type arg)
  {
    msg_.external = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_enabled
{
public:
  explicit Init_SensorsStatus_enabled(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  Init_SensorsStatus_external enabled(::px4_msgs::msg::SensorsStatus::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_SensorsStatus_external(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_priority
{
public:
  explicit Init_SensorsStatus_priority(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  Init_SensorsStatus_enabled priority(::px4_msgs::msg::SensorsStatus::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_SensorsStatus_enabled(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_healthy
{
public:
  explicit Init_SensorsStatus_healthy(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  Init_SensorsStatus_priority healthy(::px4_msgs::msg::SensorsStatus::_healthy_type arg)
  {
    msg_.healthy = std::move(arg);
    return Init_SensorsStatus_priority(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_inconsistency
{
public:
  explicit Init_SensorsStatus_inconsistency(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  Init_SensorsStatus_healthy inconsistency(::px4_msgs::msg::SensorsStatus::_inconsistency_type arg)
  {
    msg_.inconsistency = std::move(arg);
    return Init_SensorsStatus_healthy(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_device_ids
{
public:
  explicit Init_SensorsStatus_device_ids(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  Init_SensorsStatus_inconsistency device_ids(::px4_msgs::msg::SensorsStatus::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return Init_SensorsStatus_inconsistency(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_device_id_primary
{
public:
  explicit Init_SensorsStatus_device_id_primary(::px4_msgs::msg::SensorsStatus & msg)
  : msg_(msg)
  {}
  Init_SensorsStatus_device_ids device_id_primary(::px4_msgs::msg::SensorsStatus::_device_id_primary_type arg)
  {
    msg_.device_id_primary = std::move(arg);
    return Init_SensorsStatus_device_ids(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

class Init_SensorsStatus_timestamp
{
public:
  Init_SensorsStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorsStatus_device_id_primary timestamp(::px4_msgs::msg::SensorsStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SensorsStatus_device_id_primary(msg_);
  }

private:
  ::px4_msgs::msg::SensorsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::SensorsStatus>()
{
  return px4_msgs::msg::builder::Init_SensorsStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__BUILDER_HPP_
