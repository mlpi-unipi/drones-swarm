// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorGpsStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorGpsStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorGpsStatus_
{
  using Type = EstimatorGpsStatus_<ContainerAllocator>;

  explicit EstimatorGpsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->checks_passed = false;
      this->check_fail_gps_fix = false;
      this->check_fail_min_sat_count = false;
      this->check_fail_max_pdop = false;
      this->check_fail_max_horz_err = false;
      this->check_fail_max_vert_err = false;
      this->check_fail_max_spd_err = false;
      this->check_fail_max_horz_drift = false;
      this->check_fail_max_vert_drift = false;
      this->check_fail_max_horz_spd_err = false;
      this->check_fail_max_vert_spd_err = false;
      this->position_drift_rate_horizontal_m_s = 0.0f;
      this->position_drift_rate_vertical_m_s = 0.0f;
      this->filtered_horizontal_speed_m_s = 0.0f;
    }
  }

  explicit EstimatorGpsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->checks_passed = false;
      this->check_fail_gps_fix = false;
      this->check_fail_min_sat_count = false;
      this->check_fail_max_pdop = false;
      this->check_fail_max_horz_err = false;
      this->check_fail_max_vert_err = false;
      this->check_fail_max_spd_err = false;
      this->check_fail_max_horz_drift = false;
      this->check_fail_max_vert_drift = false;
      this->check_fail_max_horz_spd_err = false;
      this->check_fail_max_vert_spd_err = false;
      this->position_drift_rate_horizontal_m_s = 0.0f;
      this->position_drift_rate_vertical_m_s = 0.0f;
      this->filtered_horizontal_speed_m_s = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _checks_passed_type =
    bool;
  _checks_passed_type checks_passed;
  using _check_fail_gps_fix_type =
    bool;
  _check_fail_gps_fix_type check_fail_gps_fix;
  using _check_fail_min_sat_count_type =
    bool;
  _check_fail_min_sat_count_type check_fail_min_sat_count;
  using _check_fail_max_pdop_type =
    bool;
  _check_fail_max_pdop_type check_fail_max_pdop;
  using _check_fail_max_horz_err_type =
    bool;
  _check_fail_max_horz_err_type check_fail_max_horz_err;
  using _check_fail_max_vert_err_type =
    bool;
  _check_fail_max_vert_err_type check_fail_max_vert_err;
  using _check_fail_max_spd_err_type =
    bool;
  _check_fail_max_spd_err_type check_fail_max_spd_err;
  using _check_fail_max_horz_drift_type =
    bool;
  _check_fail_max_horz_drift_type check_fail_max_horz_drift;
  using _check_fail_max_vert_drift_type =
    bool;
  _check_fail_max_vert_drift_type check_fail_max_vert_drift;
  using _check_fail_max_horz_spd_err_type =
    bool;
  _check_fail_max_horz_spd_err_type check_fail_max_horz_spd_err;
  using _check_fail_max_vert_spd_err_type =
    bool;
  _check_fail_max_vert_spd_err_type check_fail_max_vert_spd_err;
  using _position_drift_rate_horizontal_m_s_type =
    float;
  _position_drift_rate_horizontal_m_s_type position_drift_rate_horizontal_m_s;
  using _position_drift_rate_vertical_m_s_type =
    float;
  _position_drift_rate_vertical_m_s_type position_drift_rate_vertical_m_s;
  using _filtered_horizontal_speed_m_s_type =
    float;
  _filtered_horizontal_speed_m_s_type filtered_horizontal_speed_m_s;

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
  Type & set__checks_passed(
    const bool & _arg)
  {
    this->checks_passed = _arg;
    return *this;
  }
  Type & set__check_fail_gps_fix(
    const bool & _arg)
  {
    this->check_fail_gps_fix = _arg;
    return *this;
  }
  Type & set__check_fail_min_sat_count(
    const bool & _arg)
  {
    this->check_fail_min_sat_count = _arg;
    return *this;
  }
  Type & set__check_fail_max_pdop(
    const bool & _arg)
  {
    this->check_fail_max_pdop = _arg;
    return *this;
  }
  Type & set__check_fail_max_horz_err(
    const bool & _arg)
  {
    this->check_fail_max_horz_err = _arg;
    return *this;
  }
  Type & set__check_fail_max_vert_err(
    const bool & _arg)
  {
    this->check_fail_max_vert_err = _arg;
    return *this;
  }
  Type & set__check_fail_max_spd_err(
    const bool & _arg)
  {
    this->check_fail_max_spd_err = _arg;
    return *this;
  }
  Type & set__check_fail_max_horz_drift(
    const bool & _arg)
  {
    this->check_fail_max_horz_drift = _arg;
    return *this;
  }
  Type & set__check_fail_max_vert_drift(
    const bool & _arg)
  {
    this->check_fail_max_vert_drift = _arg;
    return *this;
  }
  Type & set__check_fail_max_horz_spd_err(
    const bool & _arg)
  {
    this->check_fail_max_horz_spd_err = _arg;
    return *this;
  }
  Type & set__check_fail_max_vert_spd_err(
    const bool & _arg)
  {
    this->check_fail_max_vert_spd_err = _arg;
    return *this;
  }
  Type & set__position_drift_rate_horizontal_m_s(
    const float & _arg)
  {
    this->position_drift_rate_horizontal_m_s = _arg;
    return *this;
  }
  Type & set__position_drift_rate_vertical_m_s(
    const float & _arg)
  {
    this->position_drift_rate_vertical_m_s = _arg;
    return *this;
  }
  Type & set__filtered_horizontal_speed_m_s(
    const float & _arg)
  {
    this->filtered_horizontal_speed_m_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorGpsStatus
    std::shared_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorGpsStatus
    std::shared_ptr<px4_msgs::msg::EstimatorGpsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorGpsStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->checks_passed != other.checks_passed) {
      return false;
    }
    if (this->check_fail_gps_fix != other.check_fail_gps_fix) {
      return false;
    }
    if (this->check_fail_min_sat_count != other.check_fail_min_sat_count) {
      return false;
    }
    if (this->check_fail_max_pdop != other.check_fail_max_pdop) {
      return false;
    }
    if (this->check_fail_max_horz_err != other.check_fail_max_horz_err) {
      return false;
    }
    if (this->check_fail_max_vert_err != other.check_fail_max_vert_err) {
      return false;
    }
    if (this->check_fail_max_spd_err != other.check_fail_max_spd_err) {
      return false;
    }
    if (this->check_fail_max_horz_drift != other.check_fail_max_horz_drift) {
      return false;
    }
    if (this->check_fail_max_vert_drift != other.check_fail_max_vert_drift) {
      return false;
    }
    if (this->check_fail_max_horz_spd_err != other.check_fail_max_horz_spd_err) {
      return false;
    }
    if (this->check_fail_max_vert_spd_err != other.check_fail_max_vert_spd_err) {
      return false;
    }
    if (this->position_drift_rate_horizontal_m_s != other.position_drift_rate_horizontal_m_s) {
      return false;
    }
    if (this->position_drift_rate_vertical_m_s != other.position_drift_rate_vertical_m_s) {
      return false;
    }
    if (this->filtered_horizontal_speed_m_s != other.filtered_horizontal_speed_m_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorGpsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorGpsStatus_

// alias to use template instance with default allocator
using EstimatorGpsStatus =
  px4_msgs::msg::EstimatorGpsStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__STRUCT_HPP_
