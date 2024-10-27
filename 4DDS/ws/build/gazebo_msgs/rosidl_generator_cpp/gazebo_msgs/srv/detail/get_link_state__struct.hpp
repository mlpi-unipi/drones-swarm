// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/GetLinkState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_LINK_STATE__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_LINK_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetLinkState_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetLinkState_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLinkState_Request_
{
  using Type = GetLinkState_Request_<ContainerAllocator>;

  explicit GetLinkState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->reference_frame = "";
    }
  }

  explicit GetLinkState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_name(_alloc),
    reference_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_name = "";
      this->reference_frame = "";
    }
  }

  // field types and members
  using _link_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_name_type link_name;
  using _reference_frame_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_frame_type reference_frame;

  // setters for named parameter idiom
  Type & set__link_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link_name = _arg;
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
    gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkState_Request
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkState_Request
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLinkState_Request_ & other) const
  {
    if (this->link_name != other.link_name) {
      return false;
    }
    if (this->reference_frame != other.reference_frame) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLinkState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLinkState_Request_

// alias to use template instance with default allocator
using GetLinkState_Request =
  gazebo_msgs::srv::GetLinkState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


// Include directives for member types
// Member 'link_state'
#include "gazebo_msgs/msg/detail/link_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetLinkState_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetLinkState_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetLinkState_Response_
{
  using Type = GetLinkState_Response_<ContainerAllocator>;

  explicit GetLinkState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit GetLinkState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_state(_alloc, _init),
    status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _link_state_type =
    gazebo_msgs::msg::LinkState_<ContainerAllocator>;
  _link_state_type link_state;
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__link_state(
    const gazebo_msgs::msg::LinkState_<ContainerAllocator> & _arg)
  {
    this->link_state = _arg;
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
    gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkState_Response
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetLinkState_Response
    std::shared_ptr<gazebo_msgs::srv::GetLinkState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLinkState_Response_ & other) const
  {
    if (this->link_state != other.link_state) {
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
  bool operator!=(const GetLinkState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLinkState_Response_

// alias to use template instance with default allocator
using GetLinkState_Response =
  gazebo_msgs::srv::GetLinkState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct GetLinkState
{
  using Request = gazebo_msgs::srv::GetLinkState_Request;
  using Response = gazebo_msgs::srv::GetLinkState_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_LINK_STATE__STRUCT_HPP_
