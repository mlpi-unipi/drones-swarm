// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/BodyRequest.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/body_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_BodyRequest_Request_body_name
{
public:
  Init_BodyRequest_Request_body_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::BodyRequest_Request body_name(::gazebo_msgs::srv::BodyRequest_Request::_body_name_type arg)
  {
    msg_.body_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::BodyRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::BodyRequest_Request>()
{
  return gazebo_msgs::srv::builder::Init_BodyRequest_Request_body_name();
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
auto build<::gazebo_msgs::srv::BodyRequest_Response>()
{
  return ::gazebo_msgs::srv::BodyRequest_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__BUILDER_HPP_
