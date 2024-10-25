// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__TransponderReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TransponderReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransponderReport_
{
  using Type = TransponderReport_<ContainerAllocator>;

  explicit TransponderReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->icao_address = 0ul;
      this->lat = 0.0;
      this->lon = 0.0;
      this->altitude_type = 0;
      this->altitude = 0.0f;
      this->heading = 0.0f;
      this->hor_velocity = 0.0f;
      this->ver_velocity = 0.0f;
      std::fill<typename std::array<uint8_t, 9>::iterator, uint8_t>(this->callsign.begin(), this->callsign.end(), 0);
      this->emitter_type = 0;
      this->tslc = 0;
      this->flags = 0;
      this->squawk = 0;
      std::fill<typename std::array<uint8_t, 18>::iterator, uint8_t>(this->uas_id.begin(), this->uas_id.end(), 0);
    }
  }

  explicit TransponderReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : callsign(_alloc),
    uas_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->icao_address = 0ul;
      this->lat = 0.0;
      this->lon = 0.0;
      this->altitude_type = 0;
      this->altitude = 0.0f;
      this->heading = 0.0f;
      this->hor_velocity = 0.0f;
      this->ver_velocity = 0.0f;
      std::fill<typename std::array<uint8_t, 9>::iterator, uint8_t>(this->callsign.begin(), this->callsign.end(), 0);
      this->emitter_type = 0;
      this->tslc = 0;
      this->flags = 0;
      this->squawk = 0;
      std::fill<typename std::array<uint8_t, 18>::iterator, uint8_t>(this->uas_id.begin(), this->uas_id.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _icao_address_type =
    uint32_t;
  _icao_address_type icao_address;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _altitude_type_type =
    uint8_t;
  _altitude_type_type altitude_type;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _heading_type =
    float;
  _heading_type heading;
  using _hor_velocity_type =
    float;
  _hor_velocity_type hor_velocity;
  using _ver_velocity_type =
    float;
  _ver_velocity_type ver_velocity;
  using _callsign_type =
    std::array<uint8_t, 9>;
  _callsign_type callsign;
  using _emitter_type_type =
    uint8_t;
  _emitter_type_type emitter_type;
  using _tslc_type =
    uint8_t;
  _tslc_type tslc;
  using _flags_type =
    uint16_t;
  _flags_type flags;
  using _squawk_type =
    uint16_t;
  _squawk_type squawk;
  using _uas_id_type =
    std::array<uint8_t, 18>;
  _uas_id_type uas_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__icao_address(
    const uint32_t & _arg)
  {
    this->icao_address = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__altitude_type(
    const uint8_t & _arg)
  {
    this->altitude_type = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__hor_velocity(
    const float & _arg)
  {
    this->hor_velocity = _arg;
    return *this;
  }
  Type & set__ver_velocity(
    const float & _arg)
  {
    this->ver_velocity = _arg;
    return *this;
  }
  Type & set__callsign(
    const std::array<uint8_t, 9> & _arg)
  {
    this->callsign = _arg;
    return *this;
  }
  Type & set__emitter_type(
    const uint8_t & _arg)
  {
    this->emitter_type = _arg;
    return *this;
  }
  Type & set__tslc(
    const uint8_t & _arg)
  {
    this->tslc = _arg;
    return *this;
  }
  Type & set__flags(
    const uint16_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__squawk(
    const uint16_t & _arg)
  {
    this->squawk = _arg;
    return *this;
  }
  Type & set__uas_id(
    const std::array<uint8_t, 18> & _arg)
  {
    this->uas_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t PX4_ADSB_FLAGS_VALID_COORDS =
    1u;
  static constexpr uint16_t PX4_ADSB_FLAGS_VALID_ALTITUDE =
    2u;
  static constexpr uint16_t PX4_ADSB_FLAGS_VALID_HEADING =
    4u;
  static constexpr uint16_t PX4_ADSB_FLAGS_VALID_VELOCITY =
    8u;
  static constexpr uint16_t PX4_ADSB_FLAGS_VALID_CALLSIGN =
    16u;
  static constexpr uint16_t PX4_ADSB_FLAGS_VALID_SQUAWK =
    32u;
  static constexpr uint16_t PX4_ADSB_FLAGS_RETRANSLATE =
    256u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_NO_INFO =
    0u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_LIGHT =
    1u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_SMALL =
    2u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_LARGE =
    3u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE =
    4u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_HEAVY =
    5u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_HIGHLY_MANUV =
    6u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_ROTOCRAFT =
    7u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_UNASSIGNED =
    8u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_GLIDER =
    9u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_LIGHTER_AIR =
    10u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_PARACHUTE =
    11u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_ULTRA_LIGHT =
    12u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_UNASSIGNED2 =
    13u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_UAV =
    14u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_SPACE =
    15u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_UNASSGINED3 =
    16u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_EMERGENCY_SURFACE =
    17u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_SERVICE_SURFACE =
    18u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_POINT_OBSTACLE =
    19u;
  static constexpr uint16_t ADSB_EMITTER_TYPE_ENUM_END =
    20u;
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    16u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TransponderReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TransponderReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TransponderReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TransponderReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TransponderReport
    std::shared_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TransponderReport
    std::shared_ptr<px4_msgs::msg::TransponderReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransponderReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->icao_address != other.icao_address) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->altitude_type != other.altitude_type) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->hor_velocity != other.hor_velocity) {
      return false;
    }
    if (this->ver_velocity != other.ver_velocity) {
      return false;
    }
    if (this->callsign != other.callsign) {
      return false;
    }
    if (this->emitter_type != other.emitter_type) {
      return false;
    }
    if (this->tslc != other.tslc) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->squawk != other.squawk) {
      return false;
    }
    if (this->uas_id != other.uas_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransponderReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransponderReport_

// alias to use template instance with default allocator
using TransponderReport =
  px4_msgs::msg::TransponderReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_VALID_COORDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_VALID_ALTITUDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_VALID_HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_VALID_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_VALID_CALLSIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_VALID_SQUAWK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::PX4_ADSB_FLAGS_RETRANSLATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_NO_INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_SMALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_LARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_HEAVY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_HIGHLY_MANUV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_ROTOCRAFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_UNASSIGNED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_GLIDER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_LIGHTER_AIR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_PARACHUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_ULTRA_LIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_UNASSIGNED2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_UAV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_SPACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_UNASSGINED3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_EMERGENCY_SURFACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_SERVICE_SURFACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_POINT_OBSTACLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TransponderReport_<ContainerAllocator>::ADSB_EMITTER_TYPE_ENUM_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransponderReport_<ContainerAllocator>::ORB_QUEUE_LENGTH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__STRUCT_HPP_
