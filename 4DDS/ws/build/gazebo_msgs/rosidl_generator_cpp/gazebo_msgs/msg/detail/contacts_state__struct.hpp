// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__STRUCT_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'states'
#include "gazebo_msgs/msg/detail/contact_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__msg__ContactsState __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__msg__ContactsState __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContactsState_
{
  using Type = ContactsState_<ContainerAllocator>;

  explicit ContactsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ContactsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _states_type =
    std::vector<gazebo_msgs::msg::ContactState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::msg::ContactState_<ContainerAllocator>>>;
  _states_type states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__states(
    const std::vector<gazebo_msgs::msg::ContactState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gazebo_msgs::msg::ContactState_<ContainerAllocator>>> & _arg)
  {
    this->states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::msg::ContactsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::msg::ContactsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ContactsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::msg::ContactsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__msg__ContactsState
    std::shared_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__msg__ContactsState
    std::shared_ptr<gazebo_msgs::msg::ContactsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContactsState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContactsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContactsState_

// alias to use template instance with default allocator
using ContactsState =
  gazebo_msgs::msg::ContactsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__STRUCT_HPP_
