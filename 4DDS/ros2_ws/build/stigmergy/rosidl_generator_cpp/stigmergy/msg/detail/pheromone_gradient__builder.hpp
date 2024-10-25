// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stigmergy:msg/PheromoneGradient.idl
// generated code does not contain a copyright notice

#ifndef STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__BUILDER_HPP_
#define STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stigmergy/msg/detail/pheromone_gradient__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stigmergy
{

namespace msg
{

namespace builder
{

class Init_PheromoneGradient_dy
{
public:
  explicit Init_PheromoneGradient_dy(::stigmergy::msg::PheromoneGradient & msg)
  : msg_(msg)
  {}
  ::stigmergy::msg::PheromoneGradient dy(::stigmergy::msg::PheromoneGradient::_dy_type arg)
  {
    msg_.dy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stigmergy::msg::PheromoneGradient msg_;
};

class Init_PheromoneGradient_dx
{
public:
  Init_PheromoneGradient_dx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PheromoneGradient_dy dx(::stigmergy::msg::PheromoneGradient::_dx_type arg)
  {
    msg_.dx = std::move(arg);
    return Init_PheromoneGradient_dy(msg_);
  }

private:
  ::stigmergy::msg::PheromoneGradient msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stigmergy::msg::PheromoneGradient>()
{
  return stigmergy::msg::builder::Init_PheromoneGradient_dx();
}

}  // namespace stigmergy

#endif  // STIGMERGY__MSG__DETAIL__PHEROMONE_GRADIENT__BUILDER_HPP_
