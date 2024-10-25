// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TECS_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TECS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TecsStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TecsStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TecsStatus_
{
  using Type = TecsStatus_<ContainerAllocator>;

  explicit TecsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->altitude_sp = 0.0f;
      this->altitude_reference = 0.0f;
      this->height_rate_reference = 0.0f;
      this->height_rate_direct = 0.0f;
      this->height_rate_setpoint = 0.0f;
      this->height_rate = 0.0f;
      this->equivalent_airspeed_sp = 0.0f;
      this->true_airspeed_sp = 0.0f;
      this->true_airspeed_filtered = 0.0f;
      this->true_airspeed_derivative_sp = 0.0f;
      this->true_airspeed_derivative = 0.0f;
      this->true_airspeed_derivative_raw = 0.0f;
      this->total_energy_rate_sp = 0.0f;
      this->total_energy_rate = 0.0f;
      this->total_energy_balance_rate_sp = 0.0f;
      this->total_energy_balance_rate = 0.0f;
      this->throttle_integ = 0.0f;
      this->pitch_integ = 0.0f;
      this->throttle_sp = 0.0f;
      this->pitch_sp_rad = 0.0f;
      this->throttle_trim = 0.0f;
      this->underspeed_ratio = 0.0f;
    }
  }

  explicit TecsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->altitude_sp = 0.0f;
      this->altitude_reference = 0.0f;
      this->height_rate_reference = 0.0f;
      this->height_rate_direct = 0.0f;
      this->height_rate_setpoint = 0.0f;
      this->height_rate = 0.0f;
      this->equivalent_airspeed_sp = 0.0f;
      this->true_airspeed_sp = 0.0f;
      this->true_airspeed_filtered = 0.0f;
      this->true_airspeed_derivative_sp = 0.0f;
      this->true_airspeed_derivative = 0.0f;
      this->true_airspeed_derivative_raw = 0.0f;
      this->total_energy_rate_sp = 0.0f;
      this->total_energy_rate = 0.0f;
      this->total_energy_balance_rate_sp = 0.0f;
      this->total_energy_balance_rate = 0.0f;
      this->throttle_integ = 0.0f;
      this->pitch_integ = 0.0f;
      this->throttle_sp = 0.0f;
      this->pitch_sp_rad = 0.0f;
      this->throttle_trim = 0.0f;
      this->underspeed_ratio = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _altitude_sp_type =
    float;
  _altitude_sp_type altitude_sp;
  using _altitude_reference_type =
    float;
  _altitude_reference_type altitude_reference;
  using _height_rate_reference_type =
    float;
  _height_rate_reference_type height_rate_reference;
  using _height_rate_direct_type =
    float;
  _height_rate_direct_type height_rate_direct;
  using _height_rate_setpoint_type =
    float;
  _height_rate_setpoint_type height_rate_setpoint;
  using _height_rate_type =
    float;
  _height_rate_type height_rate;
  using _equivalent_airspeed_sp_type =
    float;
  _equivalent_airspeed_sp_type equivalent_airspeed_sp;
  using _true_airspeed_sp_type =
    float;
  _true_airspeed_sp_type true_airspeed_sp;
  using _true_airspeed_filtered_type =
    float;
  _true_airspeed_filtered_type true_airspeed_filtered;
  using _true_airspeed_derivative_sp_type =
    float;
  _true_airspeed_derivative_sp_type true_airspeed_derivative_sp;
  using _true_airspeed_derivative_type =
    float;
  _true_airspeed_derivative_type true_airspeed_derivative;
  using _true_airspeed_derivative_raw_type =
    float;
  _true_airspeed_derivative_raw_type true_airspeed_derivative_raw;
  using _total_energy_rate_sp_type =
    float;
  _total_energy_rate_sp_type total_energy_rate_sp;
  using _total_energy_rate_type =
    float;
  _total_energy_rate_type total_energy_rate;
  using _total_energy_balance_rate_sp_type =
    float;
  _total_energy_balance_rate_sp_type total_energy_balance_rate_sp;
  using _total_energy_balance_rate_type =
    float;
  _total_energy_balance_rate_type total_energy_balance_rate;
  using _throttle_integ_type =
    float;
  _throttle_integ_type throttle_integ;
  using _pitch_integ_type =
    float;
  _pitch_integ_type pitch_integ;
  using _throttle_sp_type =
    float;
  _throttle_sp_type throttle_sp;
  using _pitch_sp_rad_type =
    float;
  _pitch_sp_rad_type pitch_sp_rad;
  using _throttle_trim_type =
    float;
  _throttle_trim_type throttle_trim;
  using _underspeed_ratio_type =
    float;
  _underspeed_ratio_type underspeed_ratio;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__altitude_sp(
    const float & _arg)
  {
    this->altitude_sp = _arg;
    return *this;
  }
  Type & set__altitude_reference(
    const float & _arg)
  {
    this->altitude_reference = _arg;
    return *this;
  }
  Type & set__height_rate_reference(
    const float & _arg)
  {
    this->height_rate_reference = _arg;
    return *this;
  }
  Type & set__height_rate_direct(
    const float & _arg)
  {
    this->height_rate_direct = _arg;
    return *this;
  }
  Type & set__height_rate_setpoint(
    const float & _arg)
  {
    this->height_rate_setpoint = _arg;
    return *this;
  }
  Type & set__height_rate(
    const float & _arg)
  {
    this->height_rate = _arg;
    return *this;
  }
  Type & set__equivalent_airspeed_sp(
    const float & _arg)
  {
    this->equivalent_airspeed_sp = _arg;
    return *this;
  }
  Type & set__true_airspeed_sp(
    const float & _arg)
  {
    this->true_airspeed_sp = _arg;
    return *this;
  }
  Type & set__true_airspeed_filtered(
    const float & _arg)
  {
    this->true_airspeed_filtered = _arg;
    return *this;
  }
  Type & set__true_airspeed_derivative_sp(
    const float & _arg)
  {
    this->true_airspeed_derivative_sp = _arg;
    return *this;
  }
  Type & set__true_airspeed_derivative(
    const float & _arg)
  {
    this->true_airspeed_derivative = _arg;
    return *this;
  }
  Type & set__true_airspeed_derivative_raw(
    const float & _arg)
  {
    this->true_airspeed_derivative_raw = _arg;
    return *this;
  }
  Type & set__total_energy_rate_sp(
    const float & _arg)
  {
    this->total_energy_rate_sp = _arg;
    return *this;
  }
  Type & set__total_energy_rate(
    const float & _arg)
  {
    this->total_energy_rate = _arg;
    return *this;
  }
  Type & set__total_energy_balance_rate_sp(
    const float & _arg)
  {
    this->total_energy_balance_rate_sp = _arg;
    return *this;
  }
  Type & set__total_energy_balance_rate(
    const float & _arg)
  {
    this->total_energy_balance_rate = _arg;
    return *this;
  }
  Type & set__throttle_integ(
    const float & _arg)
  {
    this->throttle_integ = _arg;
    return *this;
  }
  Type & set__pitch_integ(
    const float & _arg)
  {
    this->pitch_integ = _arg;
    return *this;
  }
  Type & set__throttle_sp(
    const float & _arg)
  {
    this->throttle_sp = _arg;
    return *this;
  }
  Type & set__pitch_sp_rad(
    const float & _arg)
  {
    this->pitch_sp_rad = _arg;
    return *this;
  }
  Type & set__throttle_trim(
    const float & _arg)
  {
    this->throttle_trim = _arg;
    return *this;
  }
  Type & set__underspeed_ratio(
    const float & _arg)
  {
    this->underspeed_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::TecsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TecsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TecsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TecsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TecsStatus
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TecsStatus
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TecsStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->altitude_sp != other.altitude_sp) {
      return false;
    }
    if (this->altitude_reference != other.altitude_reference) {
      return false;
    }
    if (this->height_rate_reference != other.height_rate_reference) {
      return false;
    }
    if (this->height_rate_direct != other.height_rate_direct) {
      return false;
    }
    if (this->height_rate_setpoint != other.height_rate_setpoint) {
      return false;
    }
    if (this->height_rate != other.height_rate) {
      return false;
    }
    if (this->equivalent_airspeed_sp != other.equivalent_airspeed_sp) {
      return false;
    }
    if (this->true_airspeed_sp != other.true_airspeed_sp) {
      return false;
    }
    if (this->true_airspeed_filtered != other.true_airspeed_filtered) {
      return false;
    }
    if (this->true_airspeed_derivative_sp != other.true_airspeed_derivative_sp) {
      return false;
    }
    if (this->true_airspeed_derivative != other.true_airspeed_derivative) {
      return false;
    }
    if (this->true_airspeed_derivative_raw != other.true_airspeed_derivative_raw) {
      return false;
    }
    if (this->total_energy_rate_sp != other.total_energy_rate_sp) {
      return false;
    }
    if (this->total_energy_rate != other.total_energy_rate) {
      return false;
    }
    if (this->total_energy_balance_rate_sp != other.total_energy_balance_rate_sp) {
      return false;
    }
    if (this->total_energy_balance_rate != other.total_energy_balance_rate) {
      return false;
    }
    if (this->throttle_integ != other.throttle_integ) {
      return false;
    }
    if (this->pitch_integ != other.pitch_integ) {
      return false;
    }
    if (this->throttle_sp != other.throttle_sp) {
      return false;
    }
    if (this->pitch_sp_rad != other.pitch_sp_rad) {
      return false;
    }
    if (this->throttle_trim != other.throttle_trim) {
      return false;
    }
    if (this->underspeed_ratio != other.underspeed_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const TecsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TecsStatus_

// alias to use template instance with default allocator
using TecsStatus =
  px4_msgs::msg::TecsStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TECS_STATUS__STRUCT_HPP_
