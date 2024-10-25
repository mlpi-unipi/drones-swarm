// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INPUT_RC__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__INPUT_RC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__InputRc __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__InputRc __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InputRc_
{
  using Type = InputRc_<ContainerAllocator>;

  explicit InputRc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_last_signal = 0ull;
      this->channel_count = 0;
      this->rssi = 0l;
      this->rc_failsafe = false;
      this->rc_lost = false;
      this->rc_lost_frame_count = 0;
      this->rc_total_frame_count = 0;
      this->rc_ppm_frame_length = 0;
      this->input_source = 0;
      std::fill<typename std::array<uint16_t, 18>::iterator, uint16_t>(this->values.begin(), this->values.end(), 0);
      this->link_quality = 0;
      this->rssi_dbm = 0.0f;
    }
  }

  explicit InputRc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_last_signal = 0ull;
      this->channel_count = 0;
      this->rssi = 0l;
      this->rc_failsafe = false;
      this->rc_lost = false;
      this->rc_lost_frame_count = 0;
      this->rc_total_frame_count = 0;
      this->rc_ppm_frame_length = 0;
      this->input_source = 0;
      std::fill<typename std::array<uint16_t, 18>::iterator, uint16_t>(this->values.begin(), this->values.end(), 0);
      this->link_quality = 0;
      this->rssi_dbm = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_last_signal_type =
    uint64_t;
  _timestamp_last_signal_type timestamp_last_signal;
  using _channel_count_type =
    uint8_t;
  _channel_count_type channel_count;
  using _rssi_type =
    int32_t;
  _rssi_type rssi;
  using _rc_failsafe_type =
    bool;
  _rc_failsafe_type rc_failsafe;
  using _rc_lost_type =
    bool;
  _rc_lost_type rc_lost;
  using _rc_lost_frame_count_type =
    uint16_t;
  _rc_lost_frame_count_type rc_lost_frame_count;
  using _rc_total_frame_count_type =
    uint16_t;
  _rc_total_frame_count_type rc_total_frame_count;
  using _rc_ppm_frame_length_type =
    uint16_t;
  _rc_ppm_frame_length_type rc_ppm_frame_length;
  using _input_source_type =
    uint8_t;
  _input_source_type input_source;
  using _values_type =
    std::array<uint16_t, 18>;
  _values_type values;
  using _link_quality_type =
    int8_t;
  _link_quality_type link_quality;
  using _rssi_dbm_type =
    float;
  _rssi_dbm_type rssi_dbm;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_last_signal(
    const uint64_t & _arg)
  {
    this->timestamp_last_signal = _arg;
    return *this;
  }
  Type & set__channel_count(
    const uint8_t & _arg)
  {
    this->channel_count = _arg;
    return *this;
  }
  Type & set__rssi(
    const int32_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__rc_failsafe(
    const bool & _arg)
  {
    this->rc_failsafe = _arg;
    return *this;
  }
  Type & set__rc_lost(
    const bool & _arg)
  {
    this->rc_lost = _arg;
    return *this;
  }
  Type & set__rc_lost_frame_count(
    const uint16_t & _arg)
  {
    this->rc_lost_frame_count = _arg;
    return *this;
  }
  Type & set__rc_total_frame_count(
    const uint16_t & _arg)
  {
    this->rc_total_frame_count = _arg;
    return *this;
  }
  Type & set__rc_ppm_frame_length(
    const uint16_t & _arg)
  {
    this->rc_ppm_frame_length = _arg;
    return *this;
  }
  Type & set__input_source(
    const uint8_t & _arg)
  {
    this->input_source = _arg;
    return *this;
  }
  Type & set__values(
    const std::array<uint16_t, 18> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__link_quality(
    const int8_t & _arg)
  {
    this->link_quality = _arg;
    return *this;
  }
  Type & set__rssi_dbm(
    const float & _arg)
  {
    this->rssi_dbm = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RC_INPUT_SOURCE_UNKNOWN =
    0u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_PPM =
    1u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_PPM =
    2u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_SPEKTRUM =
    3u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_SBUS =
    4u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_ST24 =
    5u;
  static constexpr uint8_t RC_INPUT_SOURCE_MAVLINK =
    6u;
  static constexpr uint8_t RC_INPUT_SOURCE_QURT =
    7u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_SPEKTRUM =
    8u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_SBUS =
    9u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_ST24 =
    10u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_SUMD =
    11u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_DSM =
    12u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4IO_SUMD =
    13u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_CRSF =
    14u;
  static constexpr uint8_t RC_INPUT_SOURCE_PX4FMU_GHST =
    15u;
  static constexpr uint8_t RC_INPUT_MAX_CHANNELS =
    18u;
  static constexpr int8_t RSSI_MAX =
    100;

  // pointer types
  using RawPtr =
    px4_msgs::msg::InputRc_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::InputRc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::InputRc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::InputRc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::InputRc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::InputRc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::InputRc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::InputRc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::InputRc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::InputRc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__InputRc
    std::shared_ptr<px4_msgs::msg::InputRc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__InputRc
    std::shared_ptr<px4_msgs::msg::InputRc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputRc_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_last_signal != other.timestamp_last_signal) {
      return false;
    }
    if (this->channel_count != other.channel_count) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->rc_failsafe != other.rc_failsafe) {
      return false;
    }
    if (this->rc_lost != other.rc_lost) {
      return false;
    }
    if (this->rc_lost_frame_count != other.rc_lost_frame_count) {
      return false;
    }
    if (this->rc_total_frame_count != other.rc_total_frame_count) {
      return false;
    }
    if (this->rc_ppm_frame_length != other.rc_ppm_frame_length) {
      return false;
    }
    if (this->input_source != other.input_source) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    if (this->link_quality != other.link_quality) {
      return false;
    }
    if (this->rssi_dbm != other.rssi_dbm) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputRc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputRc_

// alias to use template instance with default allocator
using InputRc =
  px4_msgs::msg::InputRc_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_PPM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4IO_PPM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4IO_SPEKTRUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4IO_SBUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4IO_ST24;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_MAVLINK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_QURT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_SPEKTRUM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_SBUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_ST24;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_SUMD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_DSM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4IO_SUMD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_CRSF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_SOURCE_PX4FMU_GHST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t InputRc_<ContainerAllocator>::RC_INPUT_MAX_CHANNELS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InputRc_<ContainerAllocator>::RSSI_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__INPUT_RC__STRUCT_HPP_
