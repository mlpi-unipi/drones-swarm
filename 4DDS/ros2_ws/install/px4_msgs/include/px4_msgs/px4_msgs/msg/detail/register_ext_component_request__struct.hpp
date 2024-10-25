// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RegisterExtComponentRequest __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RegisterExtComponentRequest __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegisterExtComponentRequest_
{
  using Type = RegisterExtComponentRequest_<ContainerAllocator>;

  explicit RegisterExtComponentRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0ull;
      std::fill<typename std::array<uint8_t, 25>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      this->px4_ros2_api_version = 0;
      this->register_arming_check = false;
      this->register_mode = false;
      this->register_mode_executor = false;
      this->enable_replace_internal_mode = false;
      this->replace_internal_mode = 0;
      this->activate_mode_immediately = false;
    }
  }

  explicit RegisterExtComponentRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0ull;
      std::fill<typename std::array<uint8_t, 25>::iterator, uint8_t>(this->name.begin(), this->name.end(), 0);
      this->px4_ros2_api_version = 0;
      this->register_arming_check = false;
      this->register_mode = false;
      this->register_mode_executor = false;
      this->enable_replace_internal_mode = false;
      this->replace_internal_mode = 0;
      this->activate_mode_immediately = false;
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
  using _register_arming_check_type =
    bool;
  _register_arming_check_type register_arming_check;
  using _register_mode_type =
    bool;
  _register_mode_type register_mode;
  using _register_mode_executor_type =
    bool;
  _register_mode_executor_type register_mode_executor;
  using _enable_replace_internal_mode_type =
    bool;
  _enable_replace_internal_mode_type enable_replace_internal_mode;
  using _replace_internal_mode_type =
    uint8_t;
  _replace_internal_mode_type replace_internal_mode;
  using _activate_mode_immediately_type =
    bool;
  _activate_mode_immediately_type activate_mode_immediately;

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
  Type & set__register_arming_check(
    const bool & _arg)
  {
    this->register_arming_check = _arg;
    return *this;
  }
  Type & set__register_mode(
    const bool & _arg)
  {
    this->register_mode = _arg;
    return *this;
  }
  Type & set__register_mode_executor(
    const bool & _arg)
  {
    this->register_mode_executor = _arg;
    return *this;
  }
  Type & set__enable_replace_internal_mode(
    const bool & _arg)
  {
    this->enable_replace_internal_mode = _arg;
    return *this;
  }
  Type & set__replace_internal_mode(
    const uint8_t & _arg)
  {
    this->replace_internal_mode = _arg;
    return *this;
  }
  Type & set__activate_mode_immediately(
    const bool & _arg)
  {
    this->activate_mode_immediately = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t LATEST_PX4_ROS2_API_VERSION =
    1u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RegisterExtComponentRequest
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RegisterExtComponentRequest
    std::shared_ptr<px4_msgs::msg::RegisterExtComponentRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegisterExtComponentRequest_ & other) const
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
    if (this->register_arming_check != other.register_arming_check) {
      return false;
    }
    if (this->register_mode != other.register_mode) {
      return false;
    }
    if (this->register_mode_executor != other.register_mode_executor) {
      return false;
    }
    if (this->enable_replace_internal_mode != other.enable_replace_internal_mode) {
      return false;
    }
    if (this->replace_internal_mode != other.replace_internal_mode) {
      return false;
    }
    if (this->activate_mode_immediately != other.activate_mode_immediately) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegisterExtComponentRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegisterExtComponentRequest_

// alias to use template instance with default allocator
using RegisterExtComponentRequest =
  px4_msgs::msg::RegisterExtComponentRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t RegisterExtComponentRequest_<ContainerAllocator>::LATEST_PX4_ROS2_API_VERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RegisterExtComponentRequest_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_HPP_
