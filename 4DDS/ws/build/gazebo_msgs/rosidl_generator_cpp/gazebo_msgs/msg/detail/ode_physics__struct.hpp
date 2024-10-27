// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__ODEPhysics __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__ODEPhysics __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODEPhysics_
{
  using Type = ODEPhysics_<ContainerAllocator>;

  explicit ODEPhysics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_disable_bodies = false;
      this->sor_pgs_precon_iters = 0ul;
      this->sor_pgs_iters = 0ul;
      this->sor_pgs_w = 0.0;
      this->sor_pgs_rms_error_tol = 0.0;
      this->contact_surface_layer = 0.0;
      this->contact_max_correcting_vel = 0.0;
      this->cfm = 0.0;
      this->erp = 0.0;
      this->max_contacts = 0ul;
    }
  }

  explicit ODEPhysics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->auto_disable_bodies = false;
      this->sor_pgs_precon_iters = 0ul;
      this->sor_pgs_iters = 0ul;
      this->sor_pgs_w = 0.0;
      this->sor_pgs_rms_error_tol = 0.0;
      this->contact_surface_layer = 0.0;
      this->contact_max_correcting_vel = 0.0;
      this->cfm = 0.0;
      this->erp = 0.0;
      this->max_contacts = 0ul;
    }
  }

  // field types and members
  using _auto_disable_bodies_type =
    bool;
  _auto_disable_bodies_type auto_disable_bodies;
  using _sor_pgs_precon_iters_type =
    uint32_t;
  _sor_pgs_precon_iters_type sor_pgs_precon_iters;
  using _sor_pgs_iters_type =
    uint32_t;
  _sor_pgs_iters_type sor_pgs_iters;
  using _sor_pgs_w_type =
    double;
  _sor_pgs_w_type sor_pgs_w;
  using _sor_pgs_rms_error_tol_type =
    double;
  _sor_pgs_rms_error_tol_type sor_pgs_rms_error_tol;
  using _contact_surface_layer_type =
    double;
  _contact_surface_layer_type contact_surface_layer;
  using _contact_max_correcting_vel_type =
    double;
  _contact_max_correcting_vel_type contact_max_correcting_vel;
  using _cfm_type =
    double;
  _cfm_type cfm;
  using _erp_type =
    double;
  _erp_type erp;
  using _max_contacts_type =
    uint32_t;
  _max_contacts_type max_contacts;

  // setters for named parameter idiom
  Type & set__auto_disable_bodies(
    const bool & _arg)
  {
    this->auto_disable_bodies = _arg;
    return *this;
  }
  Type & set__sor_pgs_precon_iters(
    const uint32_t & _arg)
  {
    this->sor_pgs_precon_iters = _arg;
    return *this;
  }
  Type & set__sor_pgs_iters(
    const uint32_t & _arg)
  {
    this->sor_pgs_iters = _arg;
    return *this;
  }
  Type & set__sor_pgs_w(
    const double & _arg)
  {
    this->sor_pgs_w = _arg;
    return *this;
  }
  Type & set__sor_pgs_rms_error_tol(
    const double & _arg)
  {
    this->sor_pgs_rms_error_tol = _arg;
    return *this;
  }
  Type & set__contact_surface_layer(
    const double & _arg)
  {
    this->contact_surface_layer = _arg;
    return *this;
  }
  Type & set__contact_max_correcting_vel(
    const double & _arg)
  {
    this->contact_max_correcting_vel = _arg;
    return *this;
  }
  Type & set__cfm(
    const double & _arg)
  {
    this->cfm = _arg;
    return *this;
  }
  Type & set__erp(
    const double & _arg)
  {
    this->erp = _arg;
    return *this;
  }
  Type & set__max_contacts(
    const uint32_t & _arg)
  {
    this->max_contacts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__ODEPhysics
    std::shared_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__ODEPhysics
    std::shared_ptr<gazebo_msgs::msg::ODEPhysics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODEPhysics_ & other) const
  {
    if (this->auto_disable_bodies != other.auto_disable_bodies) {
      return false;
    }
    if (this->sor_pgs_precon_iters != other.sor_pgs_precon_iters) {
      return false;
    }
    if (this->sor_pgs_iters != other.sor_pgs_iters) {
      return false;
    }
    if (this->sor_pgs_w != other.sor_pgs_w) {
      return false;
    }
    if (this->sor_pgs_rms_error_tol != other.sor_pgs_rms_error_tol) {
      return false;
    }
    if (this->contact_surface_layer != other.contact_surface_layer) {
      return false;
    }
    if (this->contact_max_correcting_vel != other.contact_max_correcting_vel) {
      return false;
    }
    if (this->cfm != other.cfm) {
      return false;
    }
    if (this->erp != other.erp) {
      return false;
    }
    if (this->max_contacts != other.max_contacts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODEPhysics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODEPhysics_

// alias to use template instance with default allocator
using ODEPhysics =
  gazebo_msgs::msg::ODEPhysics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_PHYSICS__STRUCT_HPP_
