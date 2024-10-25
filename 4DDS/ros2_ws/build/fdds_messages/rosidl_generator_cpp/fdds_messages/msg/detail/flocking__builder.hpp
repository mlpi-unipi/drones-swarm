// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fdds_messages:msg/Flocking.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__FLOCKING__BUILDER_HPP_
#define FDDS_MESSAGES__MSG__DETAIL__FLOCKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fdds_messages/msg/detail/flocking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fdds_messages
{

namespace msg
{

namespace builder
{

class Init_Flocking_separation_y
{
public:
  explicit Init_Flocking_separation_y(::fdds_messages::msg::Flocking & msg)
  : msg_(msg)
  {}
  ::fdds_messages::msg::Flocking separation_y(::fdds_messages::msg::Flocking::_separation_y_type arg)
  {
    msg_.separation_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fdds_messages::msg::Flocking msg_;
};

class Init_Flocking_separation_x
{
public:
  explicit Init_Flocking_separation_x(::fdds_messages::msg::Flocking & msg)
  : msg_(msg)
  {}
  Init_Flocking_separation_y separation_x(::fdds_messages::msg::Flocking::_separation_x_type arg)
  {
    msg_.separation_x = std::move(arg);
    return Init_Flocking_separation_y(msg_);
  }

private:
  ::fdds_messages::msg::Flocking msg_;
};

class Init_Flocking_alignment_y
{
public:
  explicit Init_Flocking_alignment_y(::fdds_messages::msg::Flocking & msg)
  : msg_(msg)
  {}
  Init_Flocking_separation_x alignment_y(::fdds_messages::msg::Flocking::_alignment_y_type arg)
  {
    msg_.alignment_y = std::move(arg);
    return Init_Flocking_separation_x(msg_);
  }

private:
  ::fdds_messages::msg::Flocking msg_;
};

class Init_Flocking_alignment_x
{
public:
  explicit Init_Flocking_alignment_x(::fdds_messages::msg::Flocking & msg)
  : msg_(msg)
  {}
  Init_Flocking_alignment_y alignment_x(::fdds_messages::msg::Flocking::_alignment_x_type arg)
  {
    msg_.alignment_x = std::move(arg);
    return Init_Flocking_alignment_y(msg_);
  }

private:
  ::fdds_messages::msg::Flocking msg_;
};

class Init_Flocking_cohesion_y
{
public:
  explicit Init_Flocking_cohesion_y(::fdds_messages::msg::Flocking & msg)
  : msg_(msg)
  {}
  Init_Flocking_alignment_x cohesion_y(::fdds_messages::msg::Flocking::_cohesion_y_type arg)
  {
    msg_.cohesion_y = std::move(arg);
    return Init_Flocking_alignment_x(msg_);
  }

private:
  ::fdds_messages::msg::Flocking msg_;
};

class Init_Flocking_cohesion_x
{
public:
  Init_Flocking_cohesion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Flocking_cohesion_y cohesion_x(::fdds_messages::msg::Flocking::_cohesion_x_type arg)
  {
    msg_.cohesion_x = std::move(arg);
    return Init_Flocking_cohesion_y(msg_);
  }

private:
  ::fdds_messages::msg::Flocking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fdds_messages::msg::Flocking>()
{
  return fdds_messages::msg::builder::Init_Flocking_cohesion_x();
}

}  // namespace fdds_messages

#endif  // FDDS_MESSAGES__MSG__DETAIL__FLOCKING__BUILDER_HPP_
