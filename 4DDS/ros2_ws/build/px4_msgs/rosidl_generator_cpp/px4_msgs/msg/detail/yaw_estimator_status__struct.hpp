// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__YawEstimatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__YawEstimatorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YawEstimatorStatus_
{
  using Type = YawEstimatorStatus_<ContainerAllocator>;

  explicit YawEstimatorStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->yaw_composite = 0.0f;
      this->yaw_variance = 0.0f;
      this->yaw_composite_valid = false;
      std::fill<typename std::array<float, 5>::iterator, float>(this->yaw.begin(), this->yaw.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->innov_vn.begin(), this->innov_vn.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->innov_ve.begin(), this->innov_ve.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->weight.begin(), this->weight.end(), 0.0f);
    }
  }

  explicit YawEstimatorStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : yaw(_alloc),
    innov_vn(_alloc),
    innov_ve(_alloc),
    weight(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->yaw_composite = 0.0f;
      this->yaw_variance = 0.0f;
      this->yaw_composite_valid = false;
      std::fill<typename std::array<float, 5>::iterator, float>(this->yaw.begin(), this->yaw.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->innov_vn.begin(), this->innov_vn.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->innov_ve.begin(), this->innov_ve.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->weight.begin(), this->weight.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _yaw_composite_type =
    float;
  _yaw_composite_type yaw_composite;
  using _yaw_variance_type =
    float;
  _yaw_variance_type yaw_variance;
  using _yaw_composite_valid_type =
    bool;
  _yaw_composite_valid_type yaw_composite_valid;
  using _yaw_type =
    std::array<float, 5>;
  _yaw_type yaw;
  using _innov_vn_type =
    std::array<float, 5>;
  _innov_vn_type innov_vn;
  using _innov_ve_type =
    std::array<float, 5>;
  _innov_ve_type innov_ve;
  using _weight_type =
    std::array<float, 5>;
  _weight_type weight;

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
  Type & set__yaw_composite(
    const float & _arg)
  {
    this->yaw_composite = _arg;
    return *this;
  }
  Type & set__yaw_variance(
    const float & _arg)
  {
    this->yaw_variance = _arg;
    return *this;
  }
  Type & set__yaw_composite_valid(
    const bool & _arg)
  {
    this->yaw_composite_valid = _arg;
    return *this;
  }
  Type & set__yaw(
    const std::array<float, 5> & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__innov_vn(
    const std::array<float, 5> & _arg)
  {
    this->innov_vn = _arg;
    return *this;
  }
  Type & set__innov_ve(
    const std::array<float, 5> & _arg)
  {
    this->innov_ve = _arg;
    return *this;
  }
  Type & set__weight(
    const std::array<float, 5> & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__YawEstimatorStatus
    std::shared_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__YawEstimatorStatus
    std::shared_ptr<px4_msgs::msg::YawEstimatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YawEstimatorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->yaw_composite != other.yaw_composite) {
      return false;
    }
    if (this->yaw_variance != other.yaw_variance) {
      return false;
    }
    if (this->yaw_composite_valid != other.yaw_composite_valid) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->innov_vn != other.innov_vn) {
      return false;
    }
    if (this->innov_ve != other.innov_ve) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const YawEstimatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YawEstimatorStatus_

// alias to use template instance with default allocator
using YawEstimatorStatus =
  px4_msgs::msg::YawEstimatorStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__STRUCT_HPP_
