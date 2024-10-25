// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/CollisionReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__CollisionReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__CollisionReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionReport_
{
  using Type = CollisionReport_<ContainerAllocator>;

  explicit CollisionReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->src = 0;
      this->id = 0ul;
      this->action = 0;
      this->threat_level = 0;
      this->time_to_minimum_delta = 0.0f;
      this->altitude_minimum_delta = 0.0f;
      this->horizontal_minimum_delta = 0.0f;
    }
  }

  explicit CollisionReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->src = 0;
      this->id = 0ul;
      this->action = 0;
      this->threat_level = 0;
      this->time_to_minimum_delta = 0.0f;
      this->altitude_minimum_delta = 0.0f;
      this->horizontal_minimum_delta = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _src_type =
    uint8_t;
  _src_type src;
  using _id_type =
    uint32_t;
  _id_type id;
  using _action_type =
    uint8_t;
  _action_type action;
  using _threat_level_type =
    uint8_t;
  _threat_level_type threat_level;
  using _time_to_minimum_delta_type =
    float;
  _time_to_minimum_delta_type time_to_minimum_delta;
  using _altitude_minimum_delta_type =
    float;
  _altitude_minimum_delta_type altitude_minimum_delta;
  using _horizontal_minimum_delta_type =
    float;
  _horizontal_minimum_delta_type horizontal_minimum_delta;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__src(
    const uint8_t & _arg)
  {
    this->src = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__threat_level(
    const uint8_t & _arg)
  {
    this->threat_level = _arg;
    return *this;
  }
  Type & set__time_to_minimum_delta(
    const float & _arg)
  {
    this->time_to_minimum_delta = _arg;
    return *this;
  }
  Type & set__altitude_minimum_delta(
    const float & _arg)
  {
    this->altitude_minimum_delta = _arg;
    return *this;
  }
  Type & set__horizontal_minimum_delta(
    const float & _arg)
  {
    this->horizontal_minimum_delta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::CollisionReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::CollisionReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CollisionReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::CollisionReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__CollisionReport
    std::shared_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__CollisionReport
    std::shared_ptr<px4_msgs::msg::CollisionReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->src != other.src) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->threat_level != other.threat_level) {
      return false;
    }
    if (this->time_to_minimum_delta != other.time_to_minimum_delta) {
      return false;
    }
    if (this->altitude_minimum_delta != other.altitude_minimum_delta) {
      return false;
    }
    if (this->horizontal_minimum_delta != other.horizontal_minimum_delta) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionReport_

// alias to use template instance with default allocator
using CollisionReport =
  px4_msgs::msg::CollisionReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COLLISION_REPORT__STRUCT_HPP_
