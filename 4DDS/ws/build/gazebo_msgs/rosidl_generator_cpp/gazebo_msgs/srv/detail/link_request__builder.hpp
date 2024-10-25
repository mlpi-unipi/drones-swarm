// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/LinkRequest.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/link_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_LinkRequest_Request_link_name
{
public:
  Init_LinkRequest_Request_link_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::LinkRequest_Request link_name(::gazebo_msgs::srv::LinkRequest_Request::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::LinkRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::LinkRequest_Request>()
{
  return gazebo_msgs::srv::builder::Init_LinkRequest_Request_link_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::LinkRequest_Response>()
{
  return ::gazebo_msgs::srv::LinkRequest_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__LINK_REQUEST__BUILDER_HPP_
