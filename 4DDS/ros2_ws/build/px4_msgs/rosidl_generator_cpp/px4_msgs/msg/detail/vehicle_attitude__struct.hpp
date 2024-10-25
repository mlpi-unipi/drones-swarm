// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleAttitude.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleAttitude __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleAttitude __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleAttitude_
{
  using Type = VehicleAttitude_<ContainerAllocator>;

  explicit VehicleAttitude_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->delta_q_reset.begin(), this->delta_q_reset.end(), 0.0f);
      this->quat_reset_counter = 0;
    }
  }

  explicit VehicleAttitude_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc),
    delta_q_reset(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->delta_q_reset.begin(), this->delta_q_reset.end(), 0.0f);
      this->quat_reset_counter = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _delta_q_reset_type =
    std::array<float, 4>;
  _delta_q_reset_type delta_q_reset;
  using _quat_reset_counter_type =
    uint8_t;
  _quat_reset_counter_type quat_reset_counter;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__delta_q_reset(
    const std::array<float, 4> & _arg)
  {
    this->delta_q_reset = _arg;
    return *this;
  }
  Type & set__quat_reset_counter(
    const uint8_t & _arg)
  {
    this->quat_reset_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleAttitude_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleAttitude_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleAttitude_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleAttitude_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleAttitude
    std::shared_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleAttitude
    std::shared_ptr<px4_msgs::msg::VehicleAttitude_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleAttitude_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->delta_q_reset != other.delta_q_reset) {
      return false;
    }
    if (this->quat_reset_counter != other.quat_reset_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleAttitude_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleAttitude_

// alias to use template instance with default allocator
using VehicleAttitude =
  px4_msgs::msg::VehicleAttitude_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE__STRUCT_HPP_
