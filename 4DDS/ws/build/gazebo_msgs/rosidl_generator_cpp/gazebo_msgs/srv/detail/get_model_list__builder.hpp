// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/GetModelList.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/get_model_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetModelList_Request>()
{
  return ::gazebo_msgs::srv::GetModelList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModelList_Response_success
{
public:
  explicit Init_GetModelList_Response_success(::gazebo_msgs::srv::GetModelList_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::GetModelList_Response success(::gazebo_msgs::srv::GetModelList_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelList_Response msg_;
};

class Init_GetModelList_Response_model_names
{
public:
  explicit Init_GetModelList_Response_model_names(::gazebo_msgs::srv::GetModelList_Response & msg)
  : msg_(msg)
  {}
  Init_GetModelList_Response_success model_names(::gazebo_msgs::srv::GetModelList_Response::_model_names_type arg)
  {
    msg_.model_names = std::move(arg);
    return Init_GetModelList_Response_success(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelList_Response msg_;
};

class Init_GetModelList_Response_header
{
public:
  Init_GetModelList_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModelList_Response_model_names header(::gazebo_msgs::srv::GetModelList_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetModelList_Response_model_names(msg_);
  }

private:
  ::gazebo_msgs::srv::GetModelList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::GetModelList_Response>()
{
  return gazebo_msgs::srv::builder::Init_GetModelList_Response_header();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__BUILDER_HPP_
