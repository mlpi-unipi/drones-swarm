// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/GetPhysicsProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPhysicsProperties_Request_
{
  using Type = GetPhysicsProperties_Request_<ContainerAllocator>;

  explicit GetPhysicsProperties_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetPhysicsProperties_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Request
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Request
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPhysicsProperties_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPhysicsProperties_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPhysicsProperties_Request_

// alias to use template instance with default allocator
using GetPhysicsProperties_Request =
  gazebo_msgs::srv::GetPhysicsProperties_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


// Include directives for member types
// Member 'gravity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'ode_config'
#include "gazebo_msgs/msg/detail/ode_physics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPhysicsProperties_Response_
{
  using Type = GetPhysicsProperties_Response_<ContainerAllocator>;

  explicit GetPhysicsProperties_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gravity(_init),
    ode_config(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step = 0.0;
      this->pause = false;
      this->max_update_rate = 0.0;
      this->success = false;
      this->status_message = "";
    }
  }

  explicit GetPhysicsProperties_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gravity(_alloc, _init),
    ode_config(_alloc, _init),
    status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step = 0.0;
      this->pause = false;
      this->max_update_rate = 0.0;
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _time_step_type =
    double;
  _time_step_type time_step;
  using _pause_type =
    bool;
  _pause_type pause;
  using _max_update_rate_type =
    double;
  _max_update_rate_type max_update_rate;
  using _gravity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gravity_type gravity;
  using _ode_config_type =
    gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>;
  _ode_config_type ode_config;
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__time_step(
    const double & _arg)
  {
    this->time_step = _arg;
    return *this;
  }
  Type & set__pause(
    const bool & _arg)
  {
    this->pause = _arg;
    return *this;
  }
  Type & set__max_update_rate(
    const double & _arg)
  {
    this->max_update_rate = _arg;
    return *this;
  }
  Type & set__gravity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gravity = _arg;
    return *this;
  }
  Type & set__ode_config(
    const gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> & _arg)
  {
    this->ode_config = _arg;
    return *this;
  }
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
    gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Response
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetPhysicsProperties_Response
    std::shared_ptr<gazebo_msgs::srv::GetPhysicsProperties_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPhysicsProperties_Response_ & other) const
  {
    if (this->time_step != other.time_step) {
      return false;
    }
    if (this->pause != other.pause) {
      return false;
    }
    if (this->max_update_rate != other.max_update_rate) {
      return false;
    }
    if (this->gravity != other.gravity) {
      return false;
    }
    if (this->ode_config != other.ode_config) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPhysicsProperties_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPhysicsProperties_Response_

// alias to use template instance with default allocator
using GetPhysicsProperties_Response =
  gazebo_msgs::srv::GetPhysicsProperties_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct GetPhysicsProperties
{
  using Request = gazebo_msgs::srv::GetPhysicsProperties_Request;
  using Response = gazebo_msgs::srv::GetPhysicsProperties_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__STRUCT_HPP_
