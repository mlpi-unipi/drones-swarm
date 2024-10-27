// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorGnssRelative __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorGnssRelative __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorGnssRelative_
{
  using Type = SensorGnssRelative_<ContainerAllocator>;

  explicit SensorGnssRelative_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->time_utc_usec = 0ull;
      this->reference_station_id = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->position_accuracy.begin(), this->position_accuracy.end(), 0.0f);
      this->heading = 0.0f;
      this->heading_accuracy = 0.0f;
      this->position_length = 0.0f;
      this->accuracy_length = 0.0f;
      this->gnss_fix_ok = false;
      this->differential_solution = false;
      this->relative_position_valid = false;
      this->carrier_solution_floating = false;
      this->carrier_solution_fixed = false;
      this->moving_base_mode = false;
      this->reference_position_miss = false;
      this->reference_observations_miss = false;
      this->heading_valid = false;
      this->relative_position_normalized = false;
    }
  }

  explicit SensorGnssRelative_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    position_accuracy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->time_utc_usec = 0ull;
      this->reference_station_id = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->position_accuracy.begin(), this->position_accuracy.end(), 0.0f);
      this->heading = 0.0f;
      this->heading_accuracy = 0.0f;
      this->position_length = 0.0f;
      this->accuracy_length = 0.0f;
      this->gnss_fix_ok = false;
      this->differential_solution = false;
      this->relative_position_valid = false;
      this->carrier_solution_floating = false;
      this->carrier_solution_fixed = false;
      this->moving_base_mode = false;
      this->reference_position_miss = false;
      this->reference_observations_miss = false;
      this->heading_valid = false;
      this->relative_position_normalized = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;
  using _time_utc_usec_type =
    uint64_t;
  _time_utc_usec_type time_utc_usec;
  using _reference_station_id_type =
    uint16_t;
  _reference_station_id_type reference_station_id;
  using _position_type =
    std::array<float, 3>;
  _position_type position;
  using _position_accuracy_type =
    std::array<float, 3>;
  _position_accuracy_type position_accuracy;
  using _heading_type =
    float;
  _heading_type heading;
  using _heading_accuracy_type =
    float;
  _heading_accuracy_type heading_accuracy;
  using _position_length_type =
    float;
  _position_length_type position_length;
  using _accuracy_length_type =
    float;
  _accuracy_length_type accuracy_length;
  using _gnss_fix_ok_type =
    bool;
  _gnss_fix_ok_type gnss_fix_ok;
  using _differential_solution_type =
    bool;
  _differential_solution_type differential_solution;
  using _relative_position_valid_type =
    bool;
  _relative_position_valid_type relative_position_valid;
  using _carrier_solution_floating_type =
    bool;
  _carrier_solution_floating_type carrier_solution_floating;
  using _carrier_solution_fixed_type =
    bool;
  _carrier_solution_fixed_type carrier_solution_fixed;
  using _moving_base_mode_type =
    bool;
  _moving_base_mode_type moving_base_mode;
  using _reference_position_miss_type =
    bool;
  _reference_position_miss_type reference_position_miss;
  using _reference_observations_miss_type =
    bool;
  _reference_observations_miss_type reference_observations_miss;
  using _heading_valid_type =
    bool;
  _heading_valid_type heading_valid;
  using _relative_position_normalized_type =
    bool;
  _relative_position_normalized_type relative_position_normalized;

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
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__time_utc_usec(
    const uint64_t & _arg)
  {
    this->time_utc_usec = _arg;
    return *this;
  }
  Type & set__reference_station_id(
    const uint16_t & _arg)
  {
    this->reference_station_id = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__position_accuracy(
    const std::array<float, 3> & _arg)
  {
    this->position_accuracy = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_accuracy(
    const float & _arg)
  {
    this->heading_accuracy = _arg;
    return *this;
  }
  Type & set__position_length(
    const float & _arg)
  {
    this->position_length = _arg;
    return *this;
  }
  Type & set__accuracy_length(
    const float & _arg)
  {
    this->accuracy_length = _arg;
    return *this;
  }
  Type & set__gnss_fix_ok(
    const bool & _arg)
  {
    this->gnss_fix_ok = _arg;
    return *this;
  }
  Type & set__differential_solution(
    const bool & _arg)
  {
    this->differential_solution = _arg;
    return *this;
  }
  Type & set__relative_position_valid(
    const bool & _arg)
  {
    this->relative_position_valid = _arg;
    return *this;
  }
  Type & set__carrier_solution_floating(
    const bool & _arg)
  {
    this->carrier_solution_floating = _arg;
    return *this;
  }
  Type & set__carrier_solution_fixed(
    const bool & _arg)
  {
    this->carrier_solution_fixed = _arg;
    return *this;
  }
  Type & set__moving_base_mode(
    const bool & _arg)
  {
    this->moving_base_mode = _arg;
    return *this;
  }
  Type & set__reference_position_miss(
    const bool & _arg)
  {
    this->reference_position_miss = _arg;
    return *this;
  }
  Type & set__reference_observations_miss(
    const bool & _arg)
  {
    this->reference_observations_miss = _arg;
    return *this;
  }
  Type & set__heading_valid(
    const bool & _arg)
  {
    this->heading_valid = _arg;
    return *this;
  }
  Type & set__relative_position_normalized(
    const bool & _arg)
  {
    this->relative_position_normalized = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorGnssRelative_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorGnssRelative_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGnssRelative_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGnssRelative_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorGnssRelative
    std::shared_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorGnssRelative
    std::shared_ptr<px4_msgs::msg::SensorGnssRelative_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorGnssRelative_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->time_utc_usec != other.time_utc_usec) {
      return false;
    }
    if (this->reference_station_id != other.reference_station_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->position_accuracy != other.position_accuracy) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_accuracy != other.heading_accuracy) {
      return false;
    }
    if (this->position_length != other.position_length) {
      return false;
    }
    if (this->accuracy_length != other.accuracy_length) {
      return false;
    }
    if (this->gnss_fix_ok != other.gnss_fix_ok) {
      return false;
    }
    if (this->differential_solution != other.differential_solution) {
      return false;
    }
    if (this->relative_position_valid != other.relative_position_valid) {
      return false;
    }
    if (this->carrier_solution_floating != other.carrier_solution_floating) {
      return false;
    }
    if (this->carrier_solution_fixed != other.carrier_solution_fixed) {
      return false;
    }
    if (this->moving_base_mode != other.moving_base_mode) {
      return false;
    }
    if (this->reference_position_miss != other.reference_position_miss) {
      return false;
    }
    if (this->reference_observations_miss != other.reference_observations_miss) {
      return false;
    }
    if (this->heading_valid != other.heading_valid) {
      return false;
    }
    if (this->relative_position_normalized != other.relative_position_normalized) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorGnssRelative_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorGnssRelative_

// alias to use template instance with default allocator
using SensorGnssRelative =
  px4_msgs::msg::SensorGnssRelative_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GNSS_RELATIVE__STRUCT_HPP_
