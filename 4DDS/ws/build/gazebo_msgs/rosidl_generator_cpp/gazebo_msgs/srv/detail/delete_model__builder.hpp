// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/DeleteModel.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__DELETE_MODEL__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__DELETE_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/delete_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteModel_Request_model_name
{
public:
  Init_DeleteModel_Request_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gazebo_msgs::srv::DeleteModel_Request model_name(::gazebo_msgs::srv::DeleteModel_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::DeleteModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::DeleteModel_Request>()
{
  return gazebo_msgs::srv::builder::Init_DeleteModel_Request_model_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_DeleteModel_Response_status_message
{
public:
  explicit Init_DeleteModel_Response_status_message(::gazebo_msgs::srv::DeleteModel_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::DeleteModel_Response status_message(::gazebo_msgs::srv::DeleteModel_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::DeleteModel_Response msg_;
};

class Init_DeleteModel_Response_success
{
public:
  Init_DeleteModel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteModel_Response_status_message success(::gazebo_msgs::srv::DeleteModel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeleteModel_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::DeleteModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::DeleteModel_Response>()
{
  return gazebo_msgs::srv::builder::Init_DeleteModel_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__DELETE_MODEL__BUILDER_HPP_
