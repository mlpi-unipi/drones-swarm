// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorEventFlags __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorEventFlags __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorEventFlags_
{
  using Type = EstimatorEventFlags_<ContainerAllocator>;

  explicit EstimatorEventFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->information_event_changes = 0ul;
      this->gps_checks_passed = false;
      this->reset_vel_to_gps = false;
      this->reset_vel_to_flow = false;
      this->reset_vel_to_vision = false;
      this->reset_vel_to_zero = false;
      this->reset_pos_to_last_known = false;
      this->reset_pos_to_gps = false;
      this->reset_pos_to_vision = false;
      this->starting_gps_fusion = false;
      this->starting_vision_pos_fusion = false;
      this->starting_vision_vel_fusion = false;
      this->starting_vision_yaw_fusion = false;
      this->yaw_aligned_to_imu_gps = false;
      this->reset_hgt_to_baro = false;
      this->reset_hgt_to_gps = false;
      this->reset_hgt_to_rng = false;
      this->reset_hgt_to_ev = false;
      this->warning_event_changes = 0ul;
      this->gps_quality_poor = false;
      this->gps_fusion_timout = false;
      this->gps_data_stopped = false;
      this->gps_data_stopped_using_alternate = false;
      this->height_sensor_timeout = false;
      this->stopping_navigation = false;
      this->invalid_accel_bias_cov_reset = false;
      this->bad_yaw_using_gps_course = false;
      this->stopping_mag_use = false;
      this->vision_data_stopped = false;
      this->emergency_yaw_reset_mag_stopped = false;
      this->emergency_yaw_reset_gps_yaw_stopped = false;
    }
  }

  explicit EstimatorEventFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->information_event_changes = 0ul;
      this->gps_checks_passed = false;
      this->reset_vel_to_gps = false;
      this->reset_vel_to_flow = false;
      this->reset_vel_to_vision = false;
      this->reset_vel_to_zero = false;
      this->reset_pos_to_last_known = false;
      this->reset_pos_to_gps = false;
      this->reset_pos_to_vision = false;
      this->starting_gps_fusion = false;
      this->starting_vision_pos_fusion = false;
      this->starting_vision_vel_fusion = false;
      this->starting_vision_yaw_fusion = false;
      this->yaw_aligned_to_imu_gps = false;
      this->reset_hgt_to_baro = false;
      this->reset_hgt_to_gps = false;
      this->reset_hgt_to_rng = false;
      this->reset_hgt_to_ev = false;
      this->warning_event_changes = 0ul;
      this->gps_quality_poor = false;
      this->gps_fusion_timout = false;
      this->gps_data_stopped = false;
      this->gps_data_stopped_using_alternate = false;
      this->height_sensor_timeout = false;
      this->stopping_navigation = false;
      this->invalid_accel_bias_cov_reset = false;
      this->bad_yaw_using_gps_course = false;
      this->stopping_mag_use = false;
      this->vision_data_stopped = false;
      this->emergency_yaw_reset_mag_stopped = false;
      this->emergency_yaw_reset_gps_yaw_stopped = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _information_event_changes_type =
    uint32_t;
  _information_event_changes_type information_event_changes;
  using _gps_checks_passed_type =
    bool;
  _gps_checks_passed_type gps_checks_passed;
  using _reset_vel_to_gps_type =
    bool;
  _reset_vel_to_gps_type reset_vel_to_gps;
  using _reset_vel_to_flow_type =
    bool;
  _reset_vel_to_flow_type reset_vel_to_flow;
  using _reset_vel_to_vision_type =
    bool;
  _reset_vel_to_vision_type reset_vel_to_vision;
  using _reset_vel_to_zero_type =
    bool;
  _reset_vel_to_zero_type reset_vel_to_zero;
  using _reset_pos_to_last_known_type =
    bool;
  _reset_pos_to_last_known_type reset_pos_to_last_known;
  using _reset_pos_to_gps_type =
    bool;
  _reset_pos_to_gps_type reset_pos_to_gps;
  using _reset_pos_to_vision_type =
    bool;
  _reset_pos_to_vision_type reset_pos_to_vision;
  using _starting_gps_fusion_type =
    bool;
  _starting_gps_fusion_type starting_gps_fusion;
  using _starting_vision_pos_fusion_type =
    bool;
  _starting_vision_pos_fusion_type starting_vision_pos_fusion;
  using _starting_vision_vel_fusion_type =
    bool;
  _starting_vision_vel_fusion_type starting_vision_vel_fusion;
  using _starting_vision_yaw_fusion_type =
    bool;
  _starting_vision_yaw_fusion_type starting_vision_yaw_fusion;
  using _yaw_aligned_to_imu_gps_type =
    bool;
  _yaw_aligned_to_imu_gps_type yaw_aligned_to_imu_gps;
  using _reset_hgt_to_baro_type =
    bool;
  _reset_hgt_to_baro_type reset_hgt_to_baro;
  using _reset_hgt_to_gps_type =
    bool;
  _reset_hgt_to_gps_type reset_hgt_to_gps;
  using _reset_hgt_to_rng_type =
    bool;
  _reset_hgt_to_rng_type reset_hgt_to_rng;
  using _reset_hgt_to_ev_type =
    bool;
  _reset_hgt_to_ev_type reset_hgt_to_ev;
  using _warning_event_changes_type =
    uint32_t;
  _warning_event_changes_type warning_event_changes;
  using _gps_quality_poor_type =
    bool;
  _gps_quality_poor_type gps_quality_poor;
  using _gps_fusion_timout_type =
    bool;
  _gps_fusion_timout_type gps_fusion_timout;
  using _gps_data_stopped_type =
    bool;
  _gps_data_stopped_type gps_data_stopped;
  using _gps_data_stopped_using_alternate_type =
    bool;
  _gps_data_stopped_using_alternate_type gps_data_stopped_using_alternate;
  using _height_sensor_timeout_type =
    bool;
  _height_sensor_timeout_type height_sensor_timeout;
  using _stopping_navigation_type =
    bool;
  _stopping_navigation_type stopping_navigation;
  using _invalid_accel_bias_cov_reset_type =
    bool;
  _invalid_accel_bias_cov_reset_type invalid_accel_bias_cov_reset;
  using _bad_yaw_using_gps_course_type =
    bool;
  _bad_yaw_using_gps_course_type bad_yaw_using_gps_course;
  using _stopping_mag_use_type =
    bool;
  _stopping_mag_use_type stopping_mag_use;
  using _vision_data_stopped_type =
    bool;
  _vision_data_stopped_type vision_data_stopped;
  using _emergency_yaw_reset_mag_stopped_type =
    bool;
  _emergency_yaw_reset_mag_stopped_type emergency_yaw_reset_mag_stopped;
  using _emergency_yaw_reset_gps_yaw_stopped_type =
    bool;
  _emergency_yaw_reset_gps_yaw_stopped_type emergency_yaw_reset_gps_yaw_stopped;

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
  Type & set__information_event_changes(
    const uint32_t & _arg)
  {
    this->information_event_changes = _arg;
    return *this;
  }
  Type & set__gps_checks_passed(
    const bool & _arg)
  {
    this->gps_checks_passed = _arg;
    return *this;
  }
  Type & set__reset_vel_to_gps(
    const bool & _arg)
  {
    this->reset_vel_to_gps = _arg;
    return *this;
  }
  Type & set__reset_vel_to_flow(
    const bool & _arg)
  {
    this->reset_vel_to_flow = _arg;
    return *this;
  }
  Type & set__reset_vel_to_vision(
    const bool & _arg)
  {
    this->reset_vel_to_vision = _arg;
    return *this;
  }
  Type & set__reset_vel_to_zero(
    const bool & _arg)
  {
    this->reset_vel_to_zero = _arg;
    return *this;
  }
  Type & set__reset_pos_to_last_known(
    const bool & _arg)
  {
    this->reset_pos_to_last_known = _arg;
    return *this;
  }
  Type & set__reset_pos_to_gps(
    const bool & _arg)
  {
    this->reset_pos_to_gps = _arg;
    return *this;
  }
  Type & set__reset_pos_to_vision(
    const bool & _arg)
  {
    this->reset_pos_to_vision = _arg;
    return *this;
  }
  Type & set__starting_gps_fusion(
    const bool & _arg)
  {
    this->starting_gps_fusion = _arg;
    return *this;
  }
  Type & set__starting_vision_pos_fusion(
    const bool & _arg)
  {
    this->starting_vision_pos_fusion = _arg;
    return *this;
  }
  Type & set__starting_vision_vel_fusion(
    const bool & _arg)
  {
    this->starting_vision_vel_fusion = _arg;
    return *this;
  }
  Type & set__starting_vision_yaw_fusion(
    const bool & _arg)
  {
    this->starting_vision_yaw_fusion = _arg;
    return *this;
  }
  Type & set__yaw_aligned_to_imu_gps(
    const bool & _arg)
  {
    this->yaw_aligned_to_imu_gps = _arg;
    return *this;
  }
  Type & set__reset_hgt_to_baro(
    const bool & _arg)
  {
    this->reset_hgt_to_baro = _arg;
    return *this;
  }
  Type & set__reset_hgt_to_gps(
    const bool & _arg)
  {
    this->reset_hgt_to_gps = _arg;
    return *this;
  }
  Type & set__reset_hgt_to_rng(
    const bool & _arg)
  {
    this->reset_hgt_to_rng = _arg;
    return *this;
  }
  Type & set__reset_hgt_to_ev(
    const bool & _arg)
  {
    this->reset_hgt_to_ev = _arg;
    return *this;
  }
  Type & set__warning_event_changes(
    const uint32_t & _arg)
  {
    this->warning_event_changes = _arg;
    return *this;
  }
  Type & set__gps_quality_poor(
    const bool & _arg)
  {
    this->gps_quality_poor = _arg;
    return *this;
  }
  Type & set__gps_fusion_timout(
    const bool & _arg)
  {
    this->gps_fusion_timout = _arg;
    return *this;
  }
  Type & set__gps_data_stopped(
    const bool & _arg)
  {
    this->gps_data_stopped = _arg;
    return *this;
  }
  Type & set__gps_data_stopped_using_alternate(
    const bool & _arg)
  {
    this->gps_data_stopped_using_alternate = _arg;
    return *this;
  }
  Type & set__height_sensor_timeout(
    const bool & _arg)
  {
    this->height_sensor_timeout = _arg;
    return *this;
  }
  Type & set__stopping_navigation(
    const bool & _arg)
  {
    this->stopping_navigation = _arg;
    return *this;
  }
  Type & set__invalid_accel_bias_cov_reset(
    const bool & _arg)
  {
    this->invalid_accel_bias_cov_reset = _arg;
    return *this;
  }
  Type & set__bad_yaw_using_gps_course(
    const bool & _arg)
  {
    this->bad_yaw_using_gps_course = _arg;
    return *this;
  }
  Type & set__stopping_mag_use(
    const bool & _arg)
  {
    this->stopping_mag_use = _arg;
    return *this;
  }
  Type & set__vision_data_stopped(
    const bool & _arg)
  {
    this->vision_data_stopped = _arg;
    return *this;
  }
  Type & set__emergency_yaw_reset_mag_stopped(
    const bool & _arg)
  {
    this->emergency_yaw_reset_mag_stopped = _arg;
    return *this;
  }
  Type & set__emergency_yaw_reset_gps_yaw_stopped(
    const bool & _arg)
  {
    this->emergency_yaw_reset_gps_yaw_stopped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorEventFlags
    std::shared_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorEventFlags
    std::shared_ptr<px4_msgs::msg::EstimatorEventFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorEventFlags_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->information_event_changes != other.information_event_changes) {
      return false;
    }
    if (this->gps_checks_passed != other.gps_checks_passed) {
      return false;
    }
    if (this->reset_vel_to_gps != other.reset_vel_to_gps) {
      return false;
    }
    if (this->reset_vel_to_flow != other.reset_vel_to_flow) {
      return false;
    }
    if (this->reset_vel_to_vision != other.reset_vel_to_vision) {
      return false;
    }
    if (this->reset_vel_to_zero != other.reset_vel_to_zero) {
      return false;
    }
    if (this->reset_pos_to_last_known != other.reset_pos_to_last_known) {
      return false;
    }
    if (this->reset_pos_to_gps != other.reset_pos_to_gps) {
      return false;
    }
    if (this->reset_pos_to_vision != other.reset_pos_to_vision) {
      return false;
    }
    if (this->starting_gps_fusion != other.starting_gps_fusion) {
      return false;
    }
    if (this->starting_vision_pos_fusion != other.starting_vision_pos_fusion) {
      return false;
    }
    if (this->starting_vision_vel_fusion != other.starting_vision_vel_fusion) {
      return false;
    }
    if (this->starting_vision_yaw_fusion != other.starting_vision_yaw_fusion) {
      return false;
    }
    if (this->yaw_aligned_to_imu_gps != other.yaw_aligned_to_imu_gps) {
      return false;
    }
    if (this->reset_hgt_to_baro != other.reset_hgt_to_baro) {
      return false;
    }
    if (this->reset_hgt_to_gps != other.reset_hgt_to_gps) {
      return false;
    }
    if (this->reset_hgt_to_rng != other.reset_hgt_to_rng) {
      return false;
    }
    if (this->reset_hgt_to_ev != other.reset_hgt_to_ev) {
      return false;
    }
    if (this->warning_event_changes != other.warning_event_changes) {
      return false;
    }
    if (this->gps_quality_poor != other.gps_quality_poor) {
      return false;
    }
    if (this->gps_fusion_timout != other.gps_fusion_timout) {
      return false;
    }
    if (this->gps_data_stopped != other.gps_data_stopped) {
      return false;
    }
    if (this->gps_data_stopped_using_alternate != other.gps_data_stopped_using_alternate) {
      return false;
    }
    if (this->height_sensor_timeout != other.height_sensor_timeout) {
      return false;
    }
    if (this->stopping_navigation != other.stopping_navigation) {
      return false;
    }
    if (this->invalid_accel_bias_cov_reset != other.invalid_accel_bias_cov_reset) {
      return false;
    }
    if (this->bad_yaw_using_gps_course != other.bad_yaw_using_gps_course) {
      return false;
    }
    if (this->stopping_mag_use != other.stopping_mag_use) {
      return false;
    }
    if (this->vision_data_stopped != other.vision_data_stopped) {
      return false;
    }
    if (this->emergency_yaw_reset_mag_stopped != other.emergency_yaw_reset_mag_stopped) {
      return false;
    }
    if (this->emergency_yaw_reset_gps_yaw_stopped != other.emergency_yaw_reset_gps_yaw_stopped) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorEventFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorEventFlags_

// alias to use template instance with default allocator
using EstimatorEventFlags =
  px4_msgs::msg::EstimatorEventFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__STRUCT_HPP_
