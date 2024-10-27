// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__FollowTargetEstimator __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__FollowTargetEstimator __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FollowTargetEstimator_
{
  using Type = FollowTargetEstimator_<ContainerAllocator>;

  explicit FollowTargetEstimator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->last_filter_reset_timestamp = 0ull;
      this->valid = false;
      this->stale = false;
      this->lat_est = 0.0;
      this->lon_est = 0.0;
      this->alt_est = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->pos_est.begin(), this->pos_est.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->vel_est.begin(), this->vel_est.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acc_est.begin(), this->acc_est.end(), 0.0f);
      this->prediction_count = 0ull;
      this->fusion_count = 0ull;
    }
  }

  explicit FollowTargetEstimator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos_est(_alloc),
    vel_est(_alloc),
    acc_est(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->last_filter_reset_timestamp = 0ull;
      this->valid = false;
      this->stale = false;
      this->lat_est = 0.0;
      this->lon_est = 0.0;
      this->alt_est = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->pos_est.begin(), this->pos_est.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->vel_est.begin(), this->vel_est.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->acc_est.begin(), this->acc_est.end(), 0.0f);
      this->prediction_count = 0ull;
      this->fusion_count = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _last_filter_reset_timestamp_type =
    uint64_t;
  _last_filter_reset_timestamp_type last_filter_reset_timestamp;
  using _valid_type =
    bool;
  _valid_type valid;
  using _stale_type =
    bool;
  _stale_type stale;
  using _lat_est_type =
    double;
  _lat_est_type lat_est;
  using _lon_est_type =
    double;
  _lon_est_type lon_est;
  using _alt_est_type =
    float;
  _alt_est_type alt_est;
  using _pos_est_type =
    std::array<float, 3>;
  _pos_est_type pos_est;
  using _vel_est_type =
    std::array<float, 3>;
  _vel_est_type vel_est;
  using _acc_est_type =
    std::array<float, 3>;
  _acc_est_type acc_est;
  using _prediction_count_type =
    uint64_t;
  _prediction_count_type prediction_count;
  using _fusion_count_type =
    uint64_t;
  _fusion_count_type fusion_count;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__last_filter_reset_timestamp(
    const uint64_t & _arg)
  {
    this->last_filter_reset_timestamp = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__stale(
    const bool & _arg)
  {
    this->stale = _arg;
    return *this;
  }
  Type & set__lat_est(
    const double & _arg)
  {
    this->lat_est = _arg;
    return *this;
  }
  Type & set__lon_est(
    const double & _arg)
  {
    this->lon_est = _arg;
    return *this;
  }
  Type & set__alt_est(
    const float & _arg)
  {
    this->alt_est = _arg;
    return *this;
  }
  Type & set__pos_est(
    const std::array<float, 3> & _arg)
  {
    this->pos_est = _arg;
    return *this;
  }
  Type & set__vel_est(
    const std::array<float, 3> & _arg)
  {
    this->vel_est = _arg;
    return *this;
  }
  Type & set__acc_est(
    const std::array<float, 3> & _arg)
  {
    this->acc_est = _arg;
    return *this;
  }
  Type & set__prediction_count(
    const uint64_t & _arg)
  {
    this->prediction_count = _arg;
    return *this;
  }
  Type & set__fusion_count(
    const uint64_t & _arg)
  {
    this->fusion_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__FollowTargetEstimator
    std::shared_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__FollowTargetEstimator
    std::shared_ptr<px4_msgs::msg::FollowTargetEstimator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FollowTargetEstimator_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->last_filter_reset_timestamp != other.last_filter_reset_timestamp) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->stale != other.stale) {
      return false;
    }
    if (this->lat_est != other.lat_est) {
      return false;
    }
    if (this->lon_est != other.lon_est) {
      return false;
    }
    if (this->alt_est != other.alt_est) {
      return false;
    }
    if (this->pos_est != other.pos_est) {
      return false;
    }
    if (this->vel_est != other.vel_est) {
      return false;
    }
    if (this->acc_est != other.acc_est) {
      return false;
    }
    if (this->prediction_count != other.prediction_count) {
      return false;
    }
    if (this->fusion_count != other.fusion_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const FollowTargetEstimator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FollowTargetEstimator_

// alias to use template instance with default allocator
using FollowTargetEstimator =
  px4_msgs::msg::FollowTargetEstimator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__STRUCT_HPP_
