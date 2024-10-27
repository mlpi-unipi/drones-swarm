// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GpioOut.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPIO_OUT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GPIO_OUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/gpio_out__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GpioOut_state
{
public:
  explicit Init_GpioOut_state(::px4_msgs::msg::GpioOut & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GpioOut state(::px4_msgs::msg::GpioOut::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GpioOut msg_;
};

class Init_GpioOut_mask
{
public:
  explicit Init_GpioOut_mask(::px4_msgs::msg::GpioOut & msg)
  : msg_(msg)
  {}
  Init_GpioOut_state mask(::px4_msgs::msg::GpioOut::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_GpioOut_state(msg_);
  }

private:
  ::px4_msgs::msg::GpioOut msg_;
};

class Init_GpioOut_device_id
{
public:
  explicit Init_GpioOut_device_id(::px4_msgs::msg::GpioOut & msg)
  : msg_(msg)
  {}
  Init_GpioOut_mask device_id(::px4_msgs::msg::GpioOut::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_GpioOut_mask(msg_);
  }

private:
  ::px4_msgs::msg::GpioOut msg_;
};

class Init_GpioOut_timestamp
{
public:
  Init_GpioOut_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GpioOut_device_id timestamp(::px4_msgs::msg::GpioOut::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GpioOut_device_id(msg_);
  }

private:
  ::px4_msgs::msg::GpioOut msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GpioOut>()
{
  return px4_msgs::msg::builder::Init_GpioOut_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GPIO_OUT__BUILDER_HPP_
