// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SpawnModel.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SPAWN_MODEL__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SPAWN_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/spawn_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnModel_Request_reference_frame
{
public:
  explicit Init_SpawnModel_Request_reference_frame(::gazebo_msgs::srv::SpawnModel_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SpawnModel_Request reference_frame(::gazebo_msgs::srv::SpawnModel_Request::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Request msg_;
};

class Init_SpawnModel_Request_initial_pose
{
public:
  explicit Init_SpawnModel_Request_initial_pose(::gazebo_msgs::srv::SpawnModel_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnModel_Request_reference_frame initial_pose(::gazebo_msgs::srv::SpawnModel_Request::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return Init_SpawnModel_Request_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Request msg_;
};

class Init_SpawnModel_Request_robot_namespace
{
public:
  explicit Init_SpawnModel_Request_robot_namespace(::gazebo_msgs::srv::SpawnModel_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnModel_Request_initial_pose robot_namespace(::gazebo_msgs::srv::SpawnModel_Request::_robot_namespace_type arg)
  {
    msg_.robot_namespace = std::move(arg);
    return Init_SpawnModel_Request_initial_pose(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Request msg_;
};

class Init_SpawnModel_Request_model_xml
{
public:
  explicit Init_SpawnModel_Request_model_xml(::gazebo_msgs::srv::SpawnModel_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnModel_Request_robot_namespace model_xml(::gazebo_msgs::srv::SpawnModel_Request::_model_xml_type arg)
  {
    msg_.model_xml = std::move(arg);
    return Init_SpawnModel_Request_robot_namespace(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Request msg_;
};

class Init_SpawnModel_Request_model_name
{
public:
  Init_SpawnModel_Request_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnModel_Request_model_xml model_name(::gazebo_msgs::srv::SpawnModel_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_SpawnModel_Request_model_xml(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SpawnModel_Request>()
{
  return gazebo_msgs::srv::builder::Init_SpawnModel_Request_model_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnModel_Response_status_message
{
public:
  explicit Init_SpawnModel_Response_status_message(::gazebo_msgs::srv::SpawnModel_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SpawnModel_Response status_message(::gazebo_msgs::srv::SpawnModel_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Response msg_;
};

class Init_SpawnModel_Response_success
{
public:
  Init_SpawnModel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnModel_Response_status_message success(::gazebo_msgs::srv::SpawnModel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnModel_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SpawnModel_Response>()
{
  return gazebo_msgs::srv::builder::Init_SpawnModel_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SPAWN_MODEL__BUILDER_HPP_
