// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__ODEJointProperties __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__ODEJointProperties __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODEJointProperties_
{
  using Type = ODEJointProperties_<ContainerAllocator>;

  explicit ODEJointProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ODEJointProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _damping_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _damping_type damping;
  using _hi_stop_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _hi_stop_type hi_stop;
  using _lo_stop_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lo_stop_type lo_stop;
  using _erp_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _erp_type erp;
  using _cfm_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cfm_type cfm;
  using _stop_erp_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _stop_erp_type stop_erp;
  using _stop_cfm_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _stop_cfm_type stop_cfm;
  using _fudge_factor_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _fudge_factor_type fudge_factor;
  using _fmax_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _fmax_type fmax;
  using _vel_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _vel_type vel;

  // setters for named parameter idiom
  Type & set__damping(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->damping = _arg;
    return *this;
  }
  Type & set__hi_stop(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->hi_stop = _arg;
    return *this;
  }
  Type & set__lo_stop(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lo_stop = _arg;
    return *this;
  }
  Type & set__erp(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->erp = _arg;
    return *this;
  }
  Type & set__cfm(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cfm = _arg;
    return *this;
  }
  Type & set__stop_erp(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->stop_erp = _arg;
    return *this;
  }
  Type & set__stop_cfm(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->stop_cfm = _arg;
    return *this;
  }
  Type & set__fudge_factor(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->fudge_factor = _arg;
    return *this;
  }
  Type & set__fmax(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->fmax = _arg;
    return *this;
  }
  Type & set__vel(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__ODEJointProperties
    std::shared_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__ODEJointProperties
    std::shared_ptr<gazebo_msgs::msg::ODEJointProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODEJointProperties_ & other) const
  {
    if (this->damping != other.damping) {
      return false;
    }
    if (this->hi_stop != other.hi_stop) {
      return false;
    }
    if (this->lo_stop != other.lo_stop) {
      return false;
    }
    if (this->erp != other.erp) {
      return false;
    }
    if (this->cfm != other.cfm) {
      return false;
    }
    if (this->stop_erp != other.stop_erp) {
      return false;
    }
    if (this->stop_cfm != other.stop_cfm) {
      return false;
    }
    if (this->fudge_factor != other.fudge_factor) {
      return false;
    }
    if (this->fmax != other.fmax) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODEJointProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODEJointProperties_

// alias to use template instance with default allocator
using ODEJointProperties =
  gazebo_msgs::msg::ODEJointProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__STRUCT_HPP_
