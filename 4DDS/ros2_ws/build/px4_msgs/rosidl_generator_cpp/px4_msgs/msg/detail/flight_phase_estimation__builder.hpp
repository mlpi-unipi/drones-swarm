// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/FlightPhaseEstimation.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/flight_phase_estimation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_FlightPhaseEstimation_flight_phase
{
public:
  explicit Init_FlightPhaseEstimation_flight_phase(::px4_msgs::msg::FlightPhaseEstimation & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::FlightPhaseEstimation flight_phase(::px4_msgs::msg::FlightPhaseEstimation::_flight_phase_type arg)
  {
    msg_.flight_phase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::FlightPhaseEstimation msg_;
};

class Init_FlightPhaseEstimation_timestamp
{
public:
  Init_FlightPhaseEstimation_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlightPhaseEstimation_flight_phase timestamp(::px4_msgs::msg::FlightPhaseEstimation::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FlightPhaseEstimation_flight_phase(msg_);
  }

private:
  ::px4_msgs::msg::FlightPhaseEstimation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::FlightPhaseEstimation>()
{
  return px4_msgs::msg::builder::Init_FlightPhaseEstimation_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FLIGHT_PHASE_ESTIMATION__BUILDER_HPP_
