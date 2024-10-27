// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/SetModelConfiguration.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetModelConfiguration_Request_
{
  using Type = SetModelConfiguration_Request_<ContainerAllocator>;

  explicit SetModelConfiguration_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->urdf_param_name = "";
    }
  }

  explicit SetModelConfiguration_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model_name(_alloc),
    urdf_param_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->urdf_param_name = "";
    }
  }

  // field types and members
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _urdf_param_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _urdf_param_name_type urdf_param_name;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _joint_names_type joint_names;
  using _joint_positions_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_positions_type joint_positions;

  // setters for named parameter idiom
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__urdf_param_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->urdf_param_name = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__joint_positions(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Request
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Request
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetModelConfiguration_Request_ & other) const
  {
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->urdf_param_name != other.urdf_param_name) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->joint_positions != other.joint_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetModelConfiguration_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetModelConfiguration_Request_

// alias to use template instance with default allocator
using SetModelConfiguration_Request =
  gazebo_msgs::srv::SetModelConfiguration_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetModelConfiguration_Response_
{
  using Type = SetModelConfiguration_Response_<ContainerAllocator>;

  explicit SetModelConfiguration_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit SetModelConfiguration_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Response
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetModelConfiguration_Response
    std::shared_ptr<gazebo_msgs::srv::SetModelConfiguration_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetModelConfiguration_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetModelConfiguration_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetModelConfiguration_Response_

// alias to use template instance with default allocator
using SetModelConfiguration_Response =
  gazebo_msgs::srv::SetModelConfiguration_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct SetModelConfiguration
{
  using Request = gazebo_msgs::srv::SetModelConfiguration_Request;
  using Response = gazebo_msgs::srv::SetModelConfiguration_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_MODEL_CONFIGURATION__STRUCT_HPP_
