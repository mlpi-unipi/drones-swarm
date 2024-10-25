// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RcChannels.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_CHANNELS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__RC_CHANNELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RcChannels __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RcChannels __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RcChannels_
{
  using Type = RcChannels_<ContainerAllocator>;

  explicit RcChannels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_last_valid = 0ull;
      std::fill<typename std::array<float, 18>::iterator, float>(this->channels.begin(), this->channels.end(), 0.0f);
      this->channel_count = 0;
      std::fill<typename std::array<int8_t, 28>::iterator, int8_t>(this->function.begin(), this->function.end(), 0);
      this->rssi = 0;
      this->signal_lost = false;
      this->frame_drop_count = 0ul;
    }
  }

  explicit RcChannels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : channels(_alloc),
    function(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_last_valid = 0ull;
      std::fill<typename std::array<float, 18>::iterator, float>(this->channels.begin(), this->channels.end(), 0.0f);
      this->channel_count = 0;
      std::fill<typename std::array<int8_t, 28>::iterator, int8_t>(this->function.begin(), this->function.end(), 0);
      this->rssi = 0;
      this->signal_lost = false;
      this->frame_drop_count = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_last_valid_type =
    uint64_t;
  _timestamp_last_valid_type timestamp_last_valid;
  using _channels_type =
    std::array<float, 18>;
  _channels_type channels;
  using _channel_count_type =
    uint8_t;
  _channel_count_type channel_count;
  using _function_type =
    std::array<int8_t, 28>;
  _function_type function;
  using _rssi_type =
    uint8_t;
  _rssi_type rssi;
  using _signal_lost_type =
    bool;
  _signal_lost_type signal_lost;
  using _frame_drop_count_type =
    uint32_t;
  _frame_drop_count_type frame_drop_count;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_last_valid(
    const uint64_t & _arg)
  {
    this->timestamp_last_valid = _arg;
    return *this;
  }
  Type & set__channels(
    const std::array<float, 18> & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__channel_count(
    const uint8_t & _arg)
  {
    this->channel_count = _arg;
    return *this;
  }
  Type & set__function(
    const std::array<int8_t, 28> & _arg)
  {
    this->function = _arg;
    return *this;
  }
  Type & set__rssi(
    const uint8_t & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__signal_lost(
    const bool & _arg)
  {
    this->signal_lost = _arg;
    return *this;
  }
  Type & set__frame_drop_count(
    const uint32_t & _arg)
  {
    this->frame_drop_count = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FUNCTION_THROTTLE =
    0u;
  static constexpr uint8_t FUNCTION_ROLL =
    1u;
  static constexpr uint8_t FUNCTION_PITCH =
    2u;
  static constexpr uint8_t FUNCTION_YAW =
    3u;
  static constexpr uint8_t FUNCTION_RETURN =
    4u;
  static constexpr uint8_t FUNCTION_LOITER =
    5u;
  static constexpr uint8_t FUNCTION_OFFBOARD =
    6u;
  static constexpr uint8_t FUNCTION_FLAPS =
    7u;
  static constexpr uint8_t FUNCTION_AUX_1 =
    8u;
  static constexpr uint8_t FUNCTION_AUX_2 =
    9u;
  static constexpr uint8_t FUNCTION_AUX_3 =
    10u;
  static constexpr uint8_t FUNCTION_AUX_4 =
    11u;
  static constexpr uint8_t FUNCTION_AUX_5 =
    12u;
  static constexpr uint8_t FUNCTION_AUX_6 =
    13u;
  static constexpr uint8_t FUNCTION_PARAM_1 =
    14u;
  static constexpr uint8_t FUNCTION_PARAM_2 =
    15u;
  static constexpr uint8_t FUNCTION_PARAM_3_5 =
    16u;
  static constexpr uint8_t FUNCTION_KILLSWITCH =
    17u;
  static constexpr uint8_t FUNCTION_TRANSITION =
    18u;
  static constexpr uint8_t FUNCTION_GEAR =
    19u;
  static constexpr uint8_t FUNCTION_ARMSWITCH =
    20u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_1 =
    21u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_2 =
    22u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_3 =
    23u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_4 =
    24u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_5 =
    25u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_6 =
    26u;
  static constexpr uint8_t FUNCTION_ENGAGE_MAIN_MOTOR =
    27u;
  static constexpr uint8_t FUNCTION_FLTBTN_SLOT_COUNT =
    6u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::RcChannels_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RcChannels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RcChannels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RcChannels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RcChannels
    std::shared_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RcChannels
    std::shared_ptr<px4_msgs::msg::RcChannels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RcChannels_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_last_valid != other.timestamp_last_valid) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->channel_count != other.channel_count) {
      return false;
    }
    if (this->function != other.function) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->signal_lost != other.signal_lost) {
      return false;
    }
    if (this->frame_drop_count != other.frame_drop_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const RcChannels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RcChannels_

// alias to use template instance with default allocator
using RcChannels =
  px4_msgs::msg::RcChannels_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_THROTTLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_ROLL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_PITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_YAW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_RETURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_LOITER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_OFFBOARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLAPS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_AUX_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_AUX_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_AUX_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_AUX_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_AUX_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_AUX_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_PARAM_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_PARAM_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_PARAM_3_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_KILLSWITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_TRANSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_GEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_ARMSWITCH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_ENGAGE_MAIN_MOTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RcChannels_<ContainerAllocator>::FUNCTION_FLTBTN_SLOT_COUNT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__RC_CHANNELS__STRUCT_HPP_
