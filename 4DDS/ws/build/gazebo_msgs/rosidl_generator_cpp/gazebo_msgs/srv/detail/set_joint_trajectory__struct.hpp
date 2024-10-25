// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/SetJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"
// Member 'model_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointTrajectory_Request_
{
  using Type = SetJointTrajectory_Request_<ContainerAllocator>;

  explicit SetJointTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_trajectory(_init),
    model_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->set_model_pose = false;
      this->disable_physics_updates = false;
    }
  }

  explicit SetJointTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model_name(_alloc),
    joint_trajectory(_alloc, _init),
    model_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->set_model_pose = false;
      this->disable_physics_updates = false;
    }
  }

  // field types and members
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _joint_trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _joint_trajectory_type joint_trajectory;
  using _model_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _model_pose_type model_pose;
  using _set_model_pose_type =
    bool;
  _set_model_pose_type set_model_pose;
  using _disable_physics_updates_type =
    bool;
  _disable_physics_updates_type disable_physics_updates;

  // setters for named parameter idiom
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__joint_trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->joint_trajectory = _arg;
    return *this;
  }
  Type & set__model_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->model_pose = _arg;
    return *this;
  }
  Type & set__set_model_pose(
    const bool & _arg)
  {
    this->set_model_pose = _arg;
    return *this;
  }
  Type & set__disable_physics_updates(
    const bool & _arg)
  {
    this->disable_physics_updates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Request
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Request
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointTrajectory_Request_ & other) const
  {
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->joint_trajectory != other.joint_trajectory) {
      return false;
    }
    if (this->model_pose != other.model_pose) {
      return false;
    }
    if (this->set_model_pose != other.set_model_pose) {
      return false;
    }
    if (this->disable_physics_updates != other.disable_physics_updates) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointTrajectory_Request_

// alias to use template instance with default allocator
using SetJointTrajectory_Request =
  gazebo_msgs::srv::SetJointTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointTrajectory_Response_
{
  using Type = SetJointTrajectory_Response_<ContainerAllocator>;

  explicit SetJointTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit SetJointTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Response
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetJointTrajectory_Response
    std::shared_ptr<gazebo_msgs::srv::SetJointTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointTrajectory_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointTrajectory_Response_

// alias to use template instance with default allocator
using SetJointTrajectory_Response =
  gazebo_msgs::srv::SetJointTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct SetJointTrajectory
{
  using Request = gazebo_msgs::srv::SetJointTrajectory_Request;
  using Response = gazebo_msgs::srv::SetJointTrajectory_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_TRAJECTORY__STRUCT_HPP_
