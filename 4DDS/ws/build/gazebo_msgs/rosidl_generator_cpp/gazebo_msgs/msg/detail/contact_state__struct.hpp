// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/ContactState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wrenches'
// Member 'total_wrench'
#include "geometry_msgs/msg/detail/wrench__struct.hpp"
// Member 'contact_positions'
// Member 'contact_normals'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__ContactState __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__ContactState __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactState_
{
  using Type = ContactState_<ContainerAllocator>;

  explicit ContactState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : total_wrench(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
      this->collision1_name = "";
      this->collision2_name = "";
    }
  }

  explicit ContactState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc),
    collision1_name(_alloc),
    collision2_name(_alloc),
    total_wrench(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
      this->collision1_name = "";
      this->collision2_name = "";
    }
  }

  // field types and members
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;
  using _collision1_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _collision1_name_type collision1_name;
  using _collision2_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _collision2_name_type collision2_name;
  using _wrenches_type =
    std::vector<geometry_msgs::msg::Wrench_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Wrench_<ContainerAllocator>>>;
  _wrenches_type wrenches;
  using _total_wrench_type =
    geometry_msgs::msg::Wrench_<ContainerAllocator>;
  _total_wrench_type total_wrench;
  using _contact_positions_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _contact_positions_type contact_positions;
  using _contact_normals_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _contact_normals_type contact_normals;
  using _depths_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _depths_type depths;

  // setters for named parameter idiom
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__collision1_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->collision1_name = _arg;
    return *this;
  }
  Type & set__collision2_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->collision2_name = _arg;
    return *this;
  }
  Type & set__wrenches(
    const std::vector<geometry_msgs::msg::Wrench_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Wrench_<ContainerAllocator>>> & _arg)
  {
    this->wrenches = _arg;
    return *this;
  }
  Type & set__total_wrench(
    const geometry_msgs::msg::Wrench_<ContainerAllocator> & _arg)
  {
    this->total_wrench = _arg;
    return *this;
  }
  Type & set__contact_positions(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->contact_positions = _arg;
    return *this;
  }
  Type & set__contact_normals(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->contact_normals = _arg;
    return *this;
  }
  Type & set__depths(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->depths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::ContactState_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::ContactState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ContactState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ContactState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__ContactState
    std::shared_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__ContactState
    std::shared_ptr<gazebo_msgs::msg::ContactState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactState_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->collision1_name != other.collision1_name) {
      return false;
    }
    if (this->collision2_name != other.collision2_name) {
      return false;
    }
    if (this->wrenches != other.wrenches) {
      return false;
    }
    if (this->total_wrench != other.total_wrench) {
      return false;
    }
    if (this->contact_positions != other.contact_positions) {
      return false;
    }
    if (this->contact_normals != other.contact_normals) {
      return false;
    }
    if (this->depths != other.depths) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactState_

// alias to use template instance with default allocator
using ContactState =
  gazebo_msgs::msg::ContactState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACT_STATE__STRUCT_HPP_
