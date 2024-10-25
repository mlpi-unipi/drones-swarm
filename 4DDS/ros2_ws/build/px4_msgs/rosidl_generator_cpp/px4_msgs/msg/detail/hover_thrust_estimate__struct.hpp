// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/HoverThrustEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__HoverThrustEstimate __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__HoverThrustEstimate __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HoverThrustEstimate_
{
  using Type = HoverThrustEstimate_<ContainerAllocator>;

  explicit HoverThrustEstimate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->hover_thrust = 0.0f;
      this->hover_thrust_var = 0.0f;
      this->accel_innov = 0.0f;
      this->accel_innov_var = 0.0f;
      this->accel_innov_test_ratio = 0.0f;
      this->accel_noise_var = 0.0f;
      this->valid = false;
    }
  }

  explicit HoverThrustEstimate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->hover_thrust = 0.0f;
      this->hover_thrust_var = 0.0f;
      this->accel_innov = 0.0f;
      this->accel_innov_var = 0.0f;
      this->accel_innov_test_ratio = 0.0f;
      this->accel_noise_var = 0.0f;
      this->valid = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _hover_thrust_type =
    float;
  _hover_thrust_type hover_thrust;
  using _hover_thrust_var_type =
    float;
  _hover_thrust_var_type hover_thrust_var;
  using _accel_innov_type =
    float;
  _accel_innov_type accel_innov;
  using _accel_innov_var_type =
    float;
  _accel_innov_var_type accel_innov_var;
  using _accel_innov_test_ratio_type =
    float;
  _accel_innov_test_ratio_type accel_innov_test_ratio;
  using _accel_noise_var_type =
    float;
  _accel_noise_var_type accel_noise_var;
  using _valid_type =
    bool;
  _valid_type valid;

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
  Type & set__hover_thrust(
    const float & _arg)
  {
    this->hover_thrust = _arg;
    return *this;
  }
  Type & set__hover_thrust_var(
    const float & _arg)
  {
    this->hover_thrust_var = _arg;
    return *this;
  }
  Type & set__accel_innov(
    const float & _arg)
  {
    this->accel_innov = _arg;
    return *this;
  }
  Type & set__accel_innov_var(
    const float & _arg)
  {
    this->accel_innov_var = _arg;
    return *this;
  }
  Type & set__accel_innov_test_ratio(
    const float & _arg)
  {
    this->accel_innov_test_ratio = _arg;
    return *this;
  }
  Type & set__accel_noise_var(
    const float & _arg)
  {
    this->accel_noise_var = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__HoverThrustEstimate
    std::shared_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__HoverThrustEstimate
    std::shared_ptr<px4_msgs::msg::HoverThrustEstimate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HoverThrustEstimate_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->hover_thrust != other.hover_thrust) {
      return false;
    }
    if (this->hover_thrust_var != other.hover_thrust_var) {
      return false;
    }
    if (this->accel_innov != other.accel_innov) {
      return false;
    }
    if (this->accel_innov_var != other.accel_innov_var) {
      return false;
    }
    if (this->accel_innov_test_ratio != other.accel_innov_test_ratio) {
      return false;
    }
    if (this->accel_noise_var != other.accel_noise_var) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const HoverThrustEstimate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HoverThrustEstimate_

// alias to use template instance with default allocator
using HoverThrustEstimate =
  px4_msgs::msg::HoverThrustEstimate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__STRUCT_HPP_
