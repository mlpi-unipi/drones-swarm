// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/SetJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ode_joint_config'
#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetJointProperties_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetJointProperties_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointProperties_Request_
{
  using Type = SetJointProperties_Request_<ContainerAllocator>;

  explicit SetJointProperties_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ode_joint_config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  explicit SetJointProperties_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint_name(_alloc),
    ode_joint_config(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_name_type joint_name;
  using _ode_joint_config_type =
    gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>;
  _ode_joint_config_type ode_joint_config;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }
  Type & set__ode_joint_config(
    const gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> & _arg)
  {
    this->ode_joint_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetJointProperties_Request
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetJointProperties_Request
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointProperties_Request_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    if (this->ode_joint_config != other.ode_joint_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointProperties_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointProperties_Request_

// alias to use template instance with default allocator
using SetJointProperties_Request =
  gazebo_msgs::srv::SetJointProperties_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetJointProperties_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetJointProperties_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetJointProperties_Response_
{
  using Type = SetJointProperties_Response_<ContainerAllocator>;

  explicit SetJointProperties_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit SetJointProperties_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetJointProperties_Response
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetJointProperties_Response
    std::shared_ptr<gazebo_msgs::srv::SetJointProperties_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetJointProperties_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetJointProperties_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetJointProperties_Response_

// alias to use template instance with default allocator
using SetJointProperties_Response =
  gazebo_msgs::srv::SetJointProperties_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct SetJointProperties
{
  using Request = gazebo_msgs::srv::SetJointProperties_Request;
  using Response = gazebo_msgs::srv::SetJointProperties_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_JOINT_PROPERTIES__STRUCT_HPP_
