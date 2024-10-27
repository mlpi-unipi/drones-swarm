// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__BUILDER_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/msg/detail/contacts_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactsState_states
{
public:
  explicit Init_ContactsState_states(::gazebo_msgs::msg::ContactsState & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::msg::ContactsState states(::gazebo_msgs::msg::ContactsState::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactsState msg_;
};

class Init_ContactsState_header
{
public:
  Init_ContactsState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactsState_states header(::gazebo_msgs::msg::ContactsState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ContactsState_states(msg_);
  }

private:
  ::gazebo_msgs::msg::ContactsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::msg::ContactsState>()
{
  return gazebo_msgs::msg::builder::Init_ContactsState_header();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__BUILDER_HPP_
