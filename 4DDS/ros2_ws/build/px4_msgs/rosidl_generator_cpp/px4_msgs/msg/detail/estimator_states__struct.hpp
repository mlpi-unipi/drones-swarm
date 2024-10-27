// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorStates __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorStates __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorStates_
{
  using Type = EstimatorStates_<ContainerAllocator>;

  explicit EstimatorStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 24>::iterator, float>(this->states.begin(), this->states.end(), 0.0f);
      this->n_states = 0;
      std::fill<typename std::array<float, 23>::iterator, float>(this->covariances.begin(), this->covariances.end(), 0.0f);
    }
  }

  explicit EstimatorStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : states(_alloc),
    covariances(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 24>::iterator, float>(this->states.begin(), this->states.end(), 0.0f);
      this->n_states = 0;
      std::fill<typename std::array<float, 23>::iterator, float>(this->covariances.begin(), this->covariances.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _states_type =
    std::array<float, 24>;
  _states_type states;
  using _n_states_type =
    uint8_t;
  _n_states_type n_states;
  using _covariances_type =
    std::array<float, 23>;
  _covariances_type covariances;

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
  Type & set__states(
    const std::array<float, 24> & _arg)
  {
    this->states = _arg;
    return *this;
  }
  Type & set__n_states(
    const uint8_t & _arg)
  {
    this->n_states = _arg;
    return *this;
  }
  Type & set__covariances(
    const std::array<float, 23> & _arg)
  {
    this->covariances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorStates
    std::shared_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorStates
    std::shared_ptr<px4_msgs::msg::EstimatorStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorStates_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    if (this->n_states != other.n_states) {
      return false;
    }
    if (this->covariances != other.covariances) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorStates_

// alias to use template instance with default allocator
using EstimatorStates =
  px4_msgs::msg::EstimatorStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__STRUCT_HPP_
