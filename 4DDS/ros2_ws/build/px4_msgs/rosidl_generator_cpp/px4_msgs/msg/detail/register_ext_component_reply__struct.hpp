// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RegisterExtComponentReply __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RegisterExtComponentReply __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegisterExtComponentReply_
{
  using Type = RegisterExtComponentReply_<ContainerAllocator>;

  explicit RegisterExtComponentReply_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0ull;
      std::fill<typename std::array<uint8_t, 25>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      this->px4_ros2_api_version = 0;
      this->success = false;
      this->arming_check_id = 0;
      this->mode_id = 0;
      this->mode_executor_id = 0;
    }
  }

  explicit RegisterExtComponentReply_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0ull;
      std::fill<typename std::array<uint8_t, 25>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      this->px4_ros2_api_version = 0;
      this->success = false;
      this->arming_check_id = 0;
      this->mode_id = 0;
      this->mode_executor_id = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _request_id_type =
    uint64_t;
  _request_id_type request_id;
  using _name_type =
    std::array<uint8_t, 25>;
  _name_type name;
  using _px4_ros2_api_version_type =
    uint16_t;
  _px4_ros2_api_version_type px4_ros2_api_version;
  using _success_type =
    bool;
  _success_type success;
  using _arming_check_id_type =
    int8_t;
  _arming_check_id_type arming_check_id;
  using _mode_id_type =
    int8_t;
  _mode_id_type mode_id;
  using _mode_executor_id_type =
    int8_t;
  _mode_executor_id_type mode_executor_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint64_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::array<uint8_t, 25> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__px4_ros2_api_version(
    const uint16_t & _arg)
  {
    this->px4_ros2_api_version = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__arming_check_id(
    const int8_t & _arg)
  {
    this->arming_check_id = _arg;
    return *this;
  }
  Type & set__mode_id(
    const int8_t & _arg)
  {
    this->mode_id = _arg;
    return *this;
  }
  Type & set__mode_executor_id(
    const int8_t & _arg)
  {
    this->mode_executor_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RegisterExtComponentReply
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RegisterExtComponentReply
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentReply_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterExtComponentReply_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->px4_ros2_api_version != other.px4_ros2_api_version) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->arming_check_id != other.arming_check_id) {
      return false;
    }
    if (this->mode_id != other.mode_id) {
      return false;
    }
    if (this->mode_executor_id != other.mode_executor_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterExtComponentReply_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterExtComponentReply_

// alias to use template instance with default allocator
using RegisterExtComponentReply =
  px4_msgs::msg::RegisterExtComponentReply_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RegisterExtComponentReply_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__STRUCT_HPP_
