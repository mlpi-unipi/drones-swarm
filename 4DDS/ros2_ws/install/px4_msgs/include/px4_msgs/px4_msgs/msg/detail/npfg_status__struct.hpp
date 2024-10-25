// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/NpfgStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NPFG_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__NPFG_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__NpfgStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__NpfgStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NpfgStatus_
{
  using Type = NpfgStatus_<ContainerAllocator>;

  explicit NpfgStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->wind_est_valid = 0;
      this->lat_accel = 0.0f;
      this->lat_accel_ff = 0.0f;
      this->bearing_feas = 0.0f;
      this->bearing_feas_on_track = 0.0f;
      this->signed_track_error = 0.0f;
      this->track_error_bound = 0.0f;
      this->airspeed_ref = 0.0f;
      this->bearing = 0.0f;
      this->heading_ref = 0.0f;
      this->min_ground_speed_ref = 0.0f;
      this->adapted_period = 0.0f;
      this->p_gain = 0.0f;
      this->time_const = 0.0f;
      this->can_run_factor = 0.0f;
    }
  }

  explicit NpfgStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->wind_est_valid = 0;
      this->lat_accel = 0.0f;
      this->lat_accel_ff = 0.0f;
      this->bearing_feas = 0.0f;
      this->bearing_feas_on_track = 0.0f;
      this->signed_track_error = 0.0f;
      this->track_error_bound = 0.0f;
      this->airspeed_ref = 0.0f;
      this->bearing = 0.0f;
      this->heading_ref = 0.0f;
      this->min_ground_speed_ref = 0.0f;
      this->adapted_period = 0.0f;
      this->p_gain = 0.0f;
      this->time_const = 0.0f;
      this->can_run_factor = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _wind_est_valid_type =
    uint8_t;
  _wind_est_valid_type wind_est_valid;
  using _lat_accel_type =
    float;
  _lat_accel_type lat_accel;
  using _lat_accel_ff_type =
    float;
  _lat_accel_ff_type lat_accel_ff;
  using _bearing_feas_type =
    float;
  _bearing_feas_type bearing_feas;
  using _bearing_feas_on_track_type =
    float;
  _bearing_feas_on_track_type bearing_feas_on_track;
  using _signed_track_error_type =
    float;
  _signed_track_error_type signed_track_error;
  using _track_error_bound_type =
    float;
  _track_error_bound_type track_error_bound;
  using _airspeed_ref_type =
    float;
  _airspeed_ref_type airspeed_ref;
  using _bearing_type =
    float;
  _bearing_type bearing;
  using _heading_ref_type =
    float;
  _heading_ref_type heading_ref;
  using _min_ground_speed_ref_type =
    float;
  _min_ground_speed_ref_type min_ground_speed_ref;
  using _adapted_period_type =
    float;
  _adapted_period_type adapted_period;
  using _p_gain_type =
    float;
  _p_gain_type p_gain;
  using _time_const_type =
    float;
  _time_const_type time_const;
  using _can_run_factor_type =
    float;
  _can_run_factor_type can_run_factor;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__wind_est_valid(
    const uint8_t & _arg)
  {
    this->wind_est_valid = _arg;
    return *this;
  }
  Type & set__lat_accel(
    const float & _arg)
  {
    this->lat_accel = _arg;
    return *this;
  }
  Type & set__lat_accel_ff(
    const float & _arg)
  {
    this->lat_accel_ff = _arg;
    return *this;
  }
  Type & set__bearing_feas(
    const float & _arg)
  {
    this->bearing_feas = _arg;
    return *this;
  }
  Type & set__bearing_feas_on_track(
    const float & _arg)
  {
    this->bearing_feas_on_track = _arg;
    return *this;
  }
  Type & set__signed_track_error(
    const float & _arg)
  {
    this->signed_track_error = _arg;
    return *this;
  }
  Type & set__track_error_bound(
    const float & _arg)
  {
    this->track_error_bound = _arg;
    return *this;
  }
  Type & set__airspeed_ref(
    const float & _arg)
  {
    this->airspeed_ref = _arg;
    return *this;
  }
  Type & set__bearing(
    const float & _arg)
  {
    this->bearing = _arg;
    return *this;
  }
  Type & set__heading_ref(
    const float & _arg)
  {
    this->heading_ref = _arg;
    return *this;
  }
  Type & set__min_ground_speed_ref(
    const float & _arg)
  {
    this->min_ground_speed_ref = _arg;
    return *this;
  }
  Type & set__adapted_period(
    const float & _arg)
  {
    this->adapted_period = _arg;
    return *this;
  }
  Type & set__p_gain(
    const float & _arg)
  {
    this->p_gain = _arg;
    return *this;
  }
  Type & set__time_const(
    const float & _arg)
  {
    this->time_const = _arg;
    return *this;
  }
  Type & set__can_run_factor(
    const float & _arg)
  {
    this->can_run_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::NpfgStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::NpfgStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NpfgStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::NpfgStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__NpfgStatus
    std::shared_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__NpfgStatus
    std::shared_ptr<px4_msgs::msg::NpfgStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NpfgStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->wind_est_valid != other.wind_est_valid) {
      return false;
    }
    if (this->lat_accel != other.lat_accel) {
      return false;
    }
    if (this->lat_accel_ff != other.lat_accel_ff) {
      return false;
    }
    if (this->bearing_feas != other.bearing_feas) {
      return false;
    }
    if (this->bearing_feas_on_track != other.bearing_feas_on_track) {
      return false;
    }
    if (this->signed_track_error != other.signed_track_error) {
      return false;
    }
    if (this->track_error_bound != other.track_error_bound) {
      return false;
    }
    if (this->airspeed_ref != other.airspeed_ref) {
      return false;
    }
    if (this->bearing != other.bearing) {
      return false;
    }
    if (this->heading_ref != other.heading_ref) {
      return false;
    }
    if (this->min_ground_speed_ref != other.min_ground_speed_ref) {
      return false;
    }
    if (this->adapted_period != other.adapted_period) {
      return false;
    }
    if (this->p_gain != other.p_gain) {
      return false;
    }
    if (this->time_const != other.time_const) {
      return false;
    }
    if (this->can_run_factor != other.can_run_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const NpfgStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NpfgStatus_

// alias to use template instance with default allocator
using NpfgStatus =
  px4_msgs::msg::NpfgStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__NPFG_STATUS__STRUCT_HPP_
