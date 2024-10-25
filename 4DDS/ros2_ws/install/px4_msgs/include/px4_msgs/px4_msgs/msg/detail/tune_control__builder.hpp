// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TuneControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/tune_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TuneControl_volume
{
public:
  explicit Init_TuneControl_volume(::px4_msgs::msg::TuneControl & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TuneControl volume(::px4_msgs::msg::TuneControl::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

class Init_TuneControl_silence
{
public:
  explicit Init_TuneControl_silence(::px4_msgs::msg::TuneControl & msg)
  : msg_(msg)
  {}
  Init_TuneControl_volume silence(::px4_msgs::msg::TuneControl::_silence_type arg)
  {
    msg_.silence = std::move(arg);
    return Init_TuneControl_volume(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

class Init_TuneControl_duration
{
public:
  explicit Init_TuneControl_duration(::px4_msgs::msg::TuneControl & msg)
  : msg_(msg)
  {}
  Init_TuneControl_silence duration(::px4_msgs::msg::TuneControl::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_TuneControl_silence(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

class Init_TuneControl_frequency
{
public:
  explicit Init_TuneControl_frequency(::px4_msgs::msg::TuneControl & msg)
  : msg_(msg)
  {}
  Init_TuneControl_duration frequency(::px4_msgs::msg::TuneControl::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_TuneControl_duration(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

class Init_TuneControl_tune_override
{
public:
  explicit Init_TuneControl_tune_override(::px4_msgs::msg::TuneControl & msg)
  : msg_(msg)
  {}
  Init_TuneControl_frequency tune_override(::px4_msgs::msg::TuneControl::_tune_override_type arg)
  {
    msg_.tune_override = std::move(arg);
    return Init_TuneControl_frequency(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

class Init_TuneControl_tune_id
{
public:
  explicit Init_TuneControl_tune_id(::px4_msgs::msg::TuneControl & msg)
  : msg_(msg)
  {}
  Init_TuneControl_tune_override tune_id(::px4_msgs::msg::TuneControl::_tune_id_type arg)
  {
    msg_.tune_id = std::move(arg);
    return Init_TuneControl_tune_override(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

class Init_TuneControl_timestamp
{
public:
  Init_TuneControl_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TuneControl_tune_id timestamp(::px4_msgs::msg::TuneControl::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TuneControl_tune_id(msg_);
  }

private:
  ::px4_msgs::msg::TuneControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TuneControl>()
{
  return px4_msgs::msg::builder::Init_TuneControl_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__BUILDER_HPP_
