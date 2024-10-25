// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gazebo_msgs:srv/SpawnEntity.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gazebo_msgs/srv/detail/spawn_entity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntity_Request_reference_frame
{
public:
  explicit Init_SpawnEntity_Request_reference_frame(::gazebo_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SpawnEntity_Request reference_frame(::gazebo_msgs::srv::SpawnEntity_Request::_reference_frame_type arg)
  {
    msg_.reference_frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_initial_pose
{
public:
  explicit Init_SpawnEntity_Request_initial_pose(::gazebo_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_reference_frame initial_pose(::gazebo_msgs::srv::SpawnEntity_Request::_initial_pose_type arg)
  {
    msg_.initial_pose = std::move(arg);
    return Init_SpawnEntity_Request_reference_frame(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_robot_namespace
{
public:
  explicit Init_SpawnEntity_Request_robot_namespace(::gazebo_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_initial_pose robot_namespace(::gazebo_msgs::srv::SpawnEntity_Request::_robot_namespace_type arg)
  {
    msg_.robot_namespace = std::move(arg);
    return Init_SpawnEntity_Request_initial_pose(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_xml
{
public:
  explicit Init_SpawnEntity_Request_xml(::gazebo_msgs::srv::SpawnEntity_Request & msg)
  : msg_(msg)
  {}
  Init_SpawnEntity_Request_robot_namespace xml(::gazebo_msgs::srv::SpawnEntity_Request::_xml_type arg)
  {
    msg_.xml = std::move(arg);
    return Init_SpawnEntity_Request_robot_namespace(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Request msg_;
};

class Init_SpawnEntity_Request_name
{
public:
  Init_SpawnEntity_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_Request_xml name(::gazebo_msgs::srv::SpawnEntity_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SpawnEntity_Request_xml(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SpawnEntity_Request>()
{
  return gazebo_msgs::srv::builder::Init_SpawnEntity_Request_name();
}

}  // namespace gazebo_msgs


namespace gazebo_msgs
{

namespace srv
{

namespace builder
{

class Init_SpawnEntity_Response_status_message
{
public:
  explicit Init_SpawnEntity_Response_status_message(::gazebo_msgs::srv::SpawnEntity_Response & msg)
  : msg_(msg)
  {}
  ::gazebo_msgs::srv::SpawnEntity_Response status_message(::gazebo_msgs::srv::SpawnEntity_Response::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Response msg_;
};

class Init_SpawnEntity_Response_success
{
public:
  Init_SpawnEntity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpawnEntity_Response_status_message success(::gazebo_msgs::srv::SpawnEntity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SpawnEntity_Response_status_message(msg_);
  }

private:
  ::gazebo_msgs::srv::SpawnEntity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gazebo_msgs::srv::SpawnEntity_Response>()
{
  return gazebo_msgs::srv::builder::Init_SpawnEntity_Response_success();
}

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SPAWN_ENTITY__BUILDER_HPP_
