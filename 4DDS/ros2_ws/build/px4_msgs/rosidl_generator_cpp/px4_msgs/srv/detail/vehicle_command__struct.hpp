// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:srv/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__SRV__DETAIL__VEHICLE_COMMAND__STRUCT_HPP_
#define PX4_MSGS__SRV__DETAIL__VEHICLE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "px4_msgs/msg/detail/vehicle_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__srv__VehicleCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__srv__VehicleCommand_Request __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VehicleCommand_Request_
{
  using Type = VehicleCommand_Request_<ContainerAllocator>;

  explicit VehicleCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit VehicleCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    px4_msgs::msg::VehicleCommand_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const px4_msgs::msg::VehicleCommand_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__srv__VehicleCommand_Request
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__srv__VehicleCommand_Request
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleCommand_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleCommand_Request_

// alias to use template instance with default allocator
using VehicleCommand_Request =
  px4_msgs::srv::VehicleCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace px4_msgs


// Include directives for member types
// Member 'reply'
#include "px4_msgs/msg/detail/vehicle_command_ack__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__px4_msgs__srv__VehicleCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__srv__VehicleCommand_Response __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct VehicleCommand_Response_
{
  using Type = VehicleCommand_Response_<ContainerAllocator>;

  explicit VehicleCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reply(_init)
  {
    (void)_init;
  }

  explicit VehicleCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reply(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _reply_type =
    px4_msgs::msg::VehicleCommandAck_<ContainerAllocator>;
  _reply_type reply;

  // setters for named parameter idiom
  Type & set__reply(
    const px4_msgs::msg::VehicleCommandAck_<ContainerAllocator> & _arg)
  {
    this->reply = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__srv__VehicleCommand_Response
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__srv__VehicleCommand_Response
    std::shared_ptr<px4_msgs::srv::VehicleCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleCommand_Response_ & other) const
  {
    if (this->reply != other.reply) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleCommand_Response_

// alias to use template instance with default allocator
using VehicleCommand_Response =
  px4_msgs::srv::VehicleCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace px4_msgs

namespace px4_msgs
{

namespace srv
{

struct VehicleCommand
{
  using Request = px4_msgs::srv::VehicleCommand_Request;
  using Response = px4_msgs::srv::VehicleCommand_Response;
};

}  // namespace srv

}  // namespace px4_msgs

#endif  // PX4_MSGS__SRV__DETAIL__VEHICLE_COMMAND__STRUCT_HPP_
