// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/Airspeed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/airspeed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_Airspeed_confidence
{
public:
  explicit Init_Airspeed_confidence(::px4_msgs::msg::Airspeed & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::Airspeed confidence(::px4_msgs::msg::Airspeed::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::Airspeed msg_;
};

class Init_Airspeed_air_temperature_celsius
{
public:
  explicit Init_Airspeed_air_temperature_celsius(::px4_msgs::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_confidence air_temperature_celsius(::px4_msgs::msg::Airspeed::_air_temperature_celsius_type arg)
  {
    msg_.air_temperature_celsius = std::move(arg);
    return Init_Airspeed_confidence(msg_);
  }

private:
  ::px4_msgs::msg::Airspeed msg_;
};

class Init_Airspeed_true_airspeed_m_s
{
public:
  explicit Init_Airspeed_true_airspeed_m_s(::px4_msgs::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_air_temperature_celsius true_airspeed_m_s(::px4_msgs::msg::Airspeed::_true_airspeed_m_s_type arg)
  {
    msg_.true_airspeed_m_s = std::move(arg);
    return Init_Airspeed_air_temperature_celsius(msg_);
  }

private:
  ::px4_msgs::msg::Airspeed msg_;
};

class Init_Airspeed_indicated_airspeed_m_s
{
public:
  explicit Init_Airspeed_indicated_airspeed_m_s(::px4_msgs::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_true_airspeed_m_s indicated_airspeed_m_s(::px4_msgs::msg::Airspeed::_indicated_airspeed_m_s_type arg)
  {
    msg_.indicated_airspeed_m_s = std::move(arg);
    return Init_Airspeed_true_airspeed_m_s(msg_);
  }

private:
  ::px4_msgs::msg::Airspeed msg_;
};

class Init_Airspeed_timestamp_sample
{
public:
  explicit Init_Airspeed_timestamp_sample(::px4_msgs::msg::Airspeed & msg)
  : msg_(msg)
  {}
  Init_Airspeed_indicated_airspeed_m_s timestamp_sample(::px4_msgs::msg::Airspeed::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_Airspeed_indicated_airspeed_m_s(msg_);
  }

private:
  ::px4_msgs::msg::Airspeed msg_;
};

class Init_Airspeed_timestamp
{
public:
  Init_Airspeed_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Airspeed_timestamp_sample timestamp(::px4_msgs::msg::Airspeed::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Airspeed_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::Airspeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::Airspeed>()
{
  return px4_msgs::msg::builder::Init_Airspeed_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED__BUILDER_HPP_
