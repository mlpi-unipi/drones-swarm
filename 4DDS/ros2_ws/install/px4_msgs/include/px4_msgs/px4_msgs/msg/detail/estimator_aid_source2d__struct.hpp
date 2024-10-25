// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorAidSource2d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE2D__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE2D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorAidSource2d __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorAidSource2d __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorAidSource2d_
{
  using Type = EstimatorAidSource2d_<ContainerAllocator>;

  explicit EstimatorAidSource2d_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->estimator_instance = 0;
      this->device_id = 0ul;
      this->time_last_fuse = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->observation.begin(), this->observation.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->observation_variance.begin(), this->observation_variance.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->innovation.begin(), this->innovation.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->innovation_variance.begin(), this->innovation_variance.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->test_ratio.begin(), this->test_ratio.end(), 0.0f);
      this->innovation_rejected = false;
      this->fused = false;
    }
  }

  explicit EstimatorAidSource2d_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : observation(_alloc),
    observation_variance(_alloc),
    innovation(_alloc),
    innovation_variance(_alloc),
    test_ratio(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->estimator_instance = 0;
      this->device_id = 0ul;
      this->time_last_fuse = 0ull;
      std::fill<typename std::array<float, 2>::iterator, float>(this->observation.begin(), this->observation.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->observation_variance.begin(), this->observation_variance.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->innovation.begin(), this->innovation.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->innovation_variance.begin(), this->innovation_variance.end(), 0.0f);
      std::fill<typename std::array<float, 2>::iterator, float>(this->test_ratio.begin(), this->test_ratio.end(), 0.0f);
      this->innovation_rejected = false;
      this->fused = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _estimator_instance_type =
    uint8_t;
  _estimator_instance_type estimator_instance;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _time_last_fuse_type =
    uint64_t;
  _time_last_fuse_type time_last_fuse;
  using _observation_type =
    std::array<float, 2>;
  _observation_type observation;
  using _observation_variance_type =
    std::array<float, 2>;
  _observation_variance_type observation_variance;
  using _innovation_type =
    std::array<float, 2>;
  _innovation_type innovation;
  using _innovation_variance_type =
    std::array<float, 2>;
  _innovation_variance_type innovation_variance;
  using _test_ratio_type =
    std::array<float, 2>;
  _test_ratio_type test_ratio;
  using _innovation_rejected_type =
    bool;
  _innovation_rejected_type innovation_rejected;
  using _fused_type =
    bool;
  _fused_type fused;

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
  Type & set__estimator_instance(
    const uint8_t & _arg)
  {
    this->estimator_instance = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__time_last_fuse(
    const uint64_t & _arg)
  {
    this->time_last_fuse = _arg;
    return *this;
  }
  Type & set__observation(
    const std::array<float, 2> & _arg)
  {
    this->observation = _arg;
    return *this;
  }
  Type & set__observation_variance(
    const std::array<float, 2> & _arg)
  {
    this->observation_variance = _arg;
    return *this;
  }
  Type & set__innovation(
    const std::array<float, 2> & _arg)
  {
    this->innovation = _arg;
    return *this;
  }
  Type & set__innovation_variance(
    const std::array<float, 2> & _arg)
  {
    this->innovation_variance = _arg;
    return *this;
  }
  Type & set__test_ratio(
    const std::array<float, 2> & _arg)
  {
    this->test_ratio = _arg;
    return *this;
  }
  Type & set__innovation_rejected(
    const bool & _arg)
  {
    this->innovation_rejected = _arg;
    return *this;
  }
  Type & set__fused(
    const bool & _arg)
  {
    this->fused = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorAidSource2d
    std::shared_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorAidSource2d
    std::shared_ptr<px4_msgs::msg::EstimatorAidSource2d_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorAidSource2d_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->estimator_instance != other.estimator_instance) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->time_last_fuse != other.time_last_fuse) {
      return false;
    }
    if (this->observation != other.observation) {
      return false;
    }
    if (this->observation_variance != other.observation_variance) {
      return false;
    }
    if (this->innovation != other.innovation) {
      return false;
    }
    if (this->innovation_variance != other.innovation_variance) {
      return false;
    }
    if (this->test_ratio != other.test_ratio) {
      return false;
    }
    if (this->innovation_rejected != other.innovation_rejected) {
      return false;
    }
    if (this->fused != other.fused) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorAidSource2d_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorAidSource2d_

// alias to use template instance with default allocator
using EstimatorAidSource2d =
  px4_msgs::msg::EstimatorAidSource2d_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE2D__STRUCT_HPP_
