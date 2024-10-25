// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__AutotuneAttitudeControlStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__AutotuneAttitudeControlStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutotuneAttitudeControlStatus_
{
  using Type = AutotuneAttitudeControlStatus_<ContainerAllocator>;

  explicit AutotuneAttitudeControlStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 5>::iterator, float>(this->coeff.begin(), this->coeff.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->coeff_var.begin(), this->coeff_var.end(), 0.0f);
      this->fitness = 0.0f;
      this->innov = 0.0f;
      this->dt_model = 0.0f;
      this->kc = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
      this->kff = 0.0f;
      this->att_p = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rate_sp.begin(), this->rate_sp.end(), 0.0f);
      this->u_filt = 0.0f;
      this->y_filt = 0.0f;
      this->state = 0;
    }
  }

  explicit AutotuneAttitudeControlStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coeff(_alloc),
    coeff_var(_alloc),
    rate_sp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 5>::iterator, float>(this->coeff.begin(), this->coeff.end(), 0.0f);
      std::fill<typename std::array<float, 5>::iterator, float>(this->coeff_var.begin(), this->coeff_var.end(), 0.0f);
      this->fitness = 0.0f;
      this->innov = 0.0f;
      this->dt_model = 0.0f;
      this->kc = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
      this->kff = 0.0f;
      this->att_p = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rate_sp.begin(), this->rate_sp.end(), 0.0f);
      this->u_filt = 0.0f;
      this->y_filt = 0.0f;
      this->state = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _coeff_type =
    std::array<float, 5>;
  _coeff_type coeff;
  using _coeff_var_type =
    std::array<float, 5>;
  _coeff_var_type coeff_var;
  using _fitness_type =
    float;
  _fitness_type fitness;
  using _innov_type =
    float;
  _innov_type innov;
  using _dt_model_type =
    float;
  _dt_model_type dt_model;
  using _kc_type =
    float;
  _kc_type kc;
  using _ki_type =
    float;
  _ki_type ki;
  using _kd_type =
    float;
  _kd_type kd;
  using _kff_type =
    float;
  _kff_type kff;
  using _att_p_type =
    float;
  _att_p_type att_p;
  using _rate_sp_type =
    std::array<float, 3>;
  _rate_sp_type rate_sp;
  using _u_filt_type =
    float;
  _u_filt_type u_filt;
  using _y_filt_type =
    float;
  _y_filt_type y_filt;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__coeff(
    const std::array<float, 5> & _arg)
  {
    this->coeff = _arg;
    return *this;
  }
  Type & set__coeff_var(
    const std::array<float, 5> & _arg)
  {
    this->coeff_var = _arg;
    return *this;
  }
  Type & set__fitness(
    const float & _arg)
  {
    this->fitness = _arg;
    return *this;
  }
  Type & set__innov(
    const float & _arg)
  {
    this->innov = _arg;
    return *this;
  }
  Type & set__dt_model(
    const float & _arg)
  {
    this->dt_model = _arg;
    return *this;
  }
  Type & set__kc(
    const float & _arg)
  {
    this->kc = _arg;
    return *this;
  }
  Type & set__ki(
    const float & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__kff(
    const float & _arg)
  {
    this->kff = _arg;
    return *this;
  }
  Type & set__att_p(
    const float & _arg)
  {
    this->att_p = _arg;
    return *this;
  }
  Type & set__rate_sp(
    const std::array<float, 3> & _arg)
  {
    this->rate_sp = _arg;
    return *this;
  }
  Type & set__u_filt(
    const float & _arg)
  {
    this->u_filt = _arg;
    return *this;
  }
  Type & set__y_filt(
    const float & _arg)
  {
    this->y_filt = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_IDLE =
    0u;
  static constexpr uint8_t STATE_INIT =
    1u;
  static constexpr uint8_t STATE_ROLL =
    2u;
  static constexpr uint8_t STATE_ROLL_PAUSE =
    3u;
  static constexpr uint8_t STATE_PITCH =
    4u;
  static constexpr uint8_t STATE_PITCH_PAUSE =
    5u;
  static constexpr uint8_t STATE_YAW =
    6u;
  static constexpr uint8_t STATE_YAW_PAUSE =
    7u;
  static constexpr uint8_t STATE_VERIFICATION =
    8u;
  static constexpr uint8_t STATE_APPLY =
    9u;
  static constexpr uint8_t STATE_TEST =
    10u;
  static constexpr uint8_t STATE_COMPLETE =
    11u;
  static constexpr uint8_t STATE_FAIL =
    12u;
  static constexpr uint8_t STATE_WAIT_FOR_DISARM =
    13u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__AutotuneAttitudeControlStatus
    std::shared_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__AutotuneAttitudeControlStatus
    std::shared_ptr<px4_msgs::msg::AutotuneAttitudeControlStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutotuneAttitudeControlStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->coeff != other.coeff) {
      return false;
    }
    if (this->coeff_var != other.coeff_var) {
      return false;
    }
    if (this->fitness != other.fitness) {
      return false;
    }
    if (this->innov != other.innov) {
      return false;
    }
    if (this->dt_model != other.dt_model) {
      return false;
    }
    if (this->kc != other.kc) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->kff != other.kff) {
      return false;
    }
    if (this->att_p != other.att_p) {
      return false;
    }
    if (this->rate_sp != other.rate_sp) {
      return false;
    }
    if (this->u_filt != other.u_filt) {
      return false;
    }
    if (this->y_filt != other.y_filt) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutotuneAttitudeControlStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutotuneAttitudeControlStatus_

// alias to use template instance with default allocator
using AutotuneAttitudeControlStatus =
  px4_msgs::msg::AutotuneAttitudeControlStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_INIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_ROLL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_ROLL_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_PITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_PITCH_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_YAW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_YAW_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_VERIFICATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_APPLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_TEST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_COMPLETE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_FAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutotuneAttitudeControlStatus_<ContainerAllocator>::STATE_WAIT_FOR_DISARM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__AUTOTUNE_ATTITUDE_CONTROL_STATUS__STRUCT_HPP_
