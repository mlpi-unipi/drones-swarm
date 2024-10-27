// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TuneControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TuneControl __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TuneControl __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TuneControl_
{
  using Type = TuneControl_<ContainerAllocator>;

  explicit TuneControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->tune_id = 0;
      this->tune_override = false;
      this->frequency = 0;
      this->duration = 0ul;
      this->silence = 0ul;
      this->volume = 0;
    }
  }

  explicit TuneControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->tune_id = 0;
      this->tune_override = false;
      this->frequency = 0;
      this->duration = 0ul;
      this->silence = 0ul;
      this->volume = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _tune_id_type =
    uint8_t;
  _tune_id_type tune_id;
  using _tune_override_type =
    bool;
  _tune_override_type tune_override;
  using _frequency_type =
    uint16_t;
  _frequency_type frequency;
  using _duration_type =
    uint32_t;
  _duration_type duration;
  using _silence_type =
    uint32_t;
  _silence_type silence;
  using _volume_type =
    uint8_t;
  _volume_type volume;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__tune_id(
    const uint8_t & _arg)
  {
    this->tune_id = _arg;
    return *this;
  }
  Type & set__tune_override(
    const bool & _arg)
  {
    this->tune_override = _arg;
    return *this;
  }
  Type & set__frequency(
    const uint16_t & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__duration(
    const uint32_t & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__silence(
    const uint32_t & _arg)
  {
    this->silence = _arg;
    return *this;
  }
  Type & set__volume(
    const uint8_t & _arg)
  {
    this->volume = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TUNE_ID_STOP =
    0u;
  static constexpr uint8_t TUNE_ID_STARTUP =
    1u;
  static constexpr uint8_t TUNE_ID_ERROR =
    2u;
  static constexpr uint8_t TUNE_ID_NOTIFY_POSITIVE =
    3u;
  static constexpr uint8_t TUNE_ID_NOTIFY_NEUTRAL =
    4u;
  static constexpr uint8_t TUNE_ID_NOTIFY_NEGATIVE =
    5u;
  static constexpr uint8_t TUNE_ID_ARMING_WARNING =
    6u;
  static constexpr uint8_t TUNE_ID_BATTERY_WARNING_SLOW =
    7u;
  static constexpr uint8_t TUNE_ID_BATTERY_WARNING_FAST =
    8u;
  static constexpr uint8_t TUNE_ID_GPS_WARNING =
    9u;
  static constexpr uint8_t TUNE_ID_ARMING_FAILURE =
    10u;
  static constexpr uint8_t TUNE_ID_PARACHUTE_RELEASE =
    11u;
  static constexpr uint8_t TUNE_ID_SINGLE_BEEP =
    12u;
  static constexpr uint8_t TUNE_ID_HOME_SET =
    13u;
  static constexpr uint8_t TUNE_ID_SD_INIT =
    14u;
  static constexpr uint8_t TUNE_ID_SD_ERROR =
    15u;
  static constexpr uint8_t TUNE_ID_PROG_PX4IO =
    16u;
  static constexpr uint8_t TUNE_ID_PROG_PX4IO_OK =
    17u;
  static constexpr uint8_t TUNE_ID_PROG_PX4IO_ERR =
    18u;
  static constexpr uint8_t TUNE_ID_POWER_OFF =
    19u;
  static constexpr uint8_t NUMBER_OF_TUNES =
    20u;
  static constexpr uint8_t VOLUME_LEVEL_MIN =
    0u;
  static constexpr uint8_t VOLUME_LEVEL_DEFAULT =
    20u;
  static constexpr uint8_t VOLUME_LEVEL_MAX =
    100u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    4u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TuneControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TuneControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TuneControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TuneControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TuneControl
    std::shared_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TuneControl
    std::shared_ptr<px4_msgs::msg::TuneControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TuneControl_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->tune_id != other.tune_id) {
      return false;
    }
    if (this->tune_override != other.tune_override) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    if (this->silence != other.silence) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    return true;
  }
  bool operator!=(const TuneControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TuneControl_

// alias to use template instance with default allocator
using TuneControl =
  px4_msgs::msg::TuneControl_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_STARTUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_NOTIFY_POSITIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_NOTIFY_NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_NOTIFY_NEGATIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_ARMING_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_BATTERY_WARNING_SLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_BATTERY_WARNING_FAST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_GPS_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_ARMING_FAILURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_PARACHUTE_RELEASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_SINGLE_BEEP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_HOME_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_SD_INIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_SD_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_PROG_PX4IO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_PROG_PX4IO_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_PROG_PX4IO_ERR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::TUNE_ID_POWER_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::NUMBER_OF_TUNES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::VOLUME_LEVEL_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::VOLUME_LEVEL_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::VOLUME_LEVEL_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TuneControl_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TUNE_CONTROL__STRUCT_HPP_
