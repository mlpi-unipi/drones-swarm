// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/RcParameterMap.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/rc_parameter_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_RcParameterMap_value_max
{
public:
  explicit Init_RcParameterMap_value_max(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::RcParameterMap value_max(::px4_msgs::msg::RcParameterMap::_value_max_type arg)
  {
    msg_.value_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_value_min
{
public:
  explicit Init_RcParameterMap_value_min(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  Init_RcParameterMap_value_max value_min(::px4_msgs::msg::RcParameterMap::_value_min_type arg)
  {
    msg_.value_min = std::move(arg);
    return Init_RcParameterMap_value_max(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_value0
{
public:
  explicit Init_RcParameterMap_value0(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  Init_RcParameterMap_value_min value0(::px4_msgs::msg::RcParameterMap::_value0_type arg)
  {
    msg_.value0 = std::move(arg);
    return Init_RcParameterMap_value_min(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_scale
{
public:
  explicit Init_RcParameterMap_scale(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  Init_RcParameterMap_value0 scale(::px4_msgs::msg::RcParameterMap::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_RcParameterMap_value0(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_param_id
{
public:
  explicit Init_RcParameterMap_param_id(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  Init_RcParameterMap_scale param_id(::px4_msgs::msg::RcParameterMap::_param_id_type arg)
  {
    msg_.param_id = std::move(arg);
    return Init_RcParameterMap_scale(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_param_index
{
public:
  explicit Init_RcParameterMap_param_index(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  Init_RcParameterMap_param_id param_index(::px4_msgs::msg::RcParameterMap::_param_index_type arg)
  {
    msg_.param_index = std::move(arg);
    return Init_RcParameterMap_param_id(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_valid
{
public:
  explicit Init_RcParameterMap_valid(::px4_msgs::msg::RcParameterMap & msg)
  : msg_(msg)
  {}
  Init_RcParameterMap_param_index valid(::px4_msgs::msg::RcParameterMap::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_RcParameterMap_param_index(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

class Init_RcParameterMap_timestamp
{
public:
  Init_RcParameterMap_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RcParameterMap_valid timestamp(::px4_msgs::msg::RcParameterMap::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RcParameterMap_valid(msg_);
  }

private:
  ::px4_msgs::msg::RcParameterMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::RcParameterMap>()
{
  return px4_msgs::msg::builder::Init_RcParameterMap_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__BUILDER_HPP_
