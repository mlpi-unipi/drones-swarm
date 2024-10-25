// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleAngularVelocity.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_VELOCITY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleAngularVelocity __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleAngularVelocity __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleAngularVelocity_
{
  using Type = VehicleAngularVelocity_<ContainerAllocator>;

  explicit VehicleAngularVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->xyz.begin(), this->xyz.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->xyz_derivative.begin(), this->xyz_derivative.end(), 0.0f);
    }
  }

  explicit VehicleAngularVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xyz(_alloc),
    xyz_derivative(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->xyz.begin(), this->xyz.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->xyz_derivative.begin(), this->xyz_derivative.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _xyz_type =
    std::array<float, 3>;
  _xyz_type xyz;
  using _xyz_derivative_type =
    std::array<float, 3>;
  _xyz_derivative_type xyz_derivative;

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
  Type & set__xyz(
    const std::array<float, 3> & _arg)
  {
    this->xyz = _arg;
    return *this;
  }
  Type & set__xyz_derivative(
    const std::array<float, 3> & _arg)
  {
    this->xyz_derivative = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleAngularVelocity
    std::shared_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleAngularVelocity
    std::shared_ptr<px4_msgs::msg::VehicleAngularVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleAngularVelocity_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->xyz != other.xyz) {
      return false;
    }
    if (this->xyz_derivative != other.xyz_derivative) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleAngularVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleAngularVelocity_

// alias to use template instance with default allocator
using VehicleAngularVelocity =
  px4_msgs::msg::VehicleAngularVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_VELOCITY__STRUCT_HPP_
