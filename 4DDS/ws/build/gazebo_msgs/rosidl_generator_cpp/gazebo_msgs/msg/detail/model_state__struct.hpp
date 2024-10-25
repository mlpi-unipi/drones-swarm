// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/ModelState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__ModelState __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__ModelState __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModelState_
{
  using Type = ModelState_<ContainerAllocator>;

  explicit ModelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->reference_frame = "";
    }
  }

  explicit ModelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model_name(_alloc),
    pose(_alloc, _init),
    twist(_alloc, _init),
    reference_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->reference_frame = "";
    }
  }

  // field types and members
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_frame_type reference_frame;

  // setters for named parameter idiom
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__reference_frame(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reference_frame = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::ModelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::ModelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ModelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ModelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__ModelState
    std::shared_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__ModelState
    std::shared_ptr<gazebo_msgs::msg::ModelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModelState_ & other) const
  {
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModelState_

// alias to use template instance with default allocator
using ModelState =
  gazebo_msgs::msg::ModelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__MODEL_STATE__STRUCT_HPP_
