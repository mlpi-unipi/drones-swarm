// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/SensorGps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GPS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__SensorGps __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__SensorGps __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorGps_
{
  using Type = SensorGps_<ContainerAllocator>;

  explicit SensorGps_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->latitude_deg = 0.0;
      this->longitude_deg = 0.0;
      this->altitude_msl_m = 0.0;
      this->altitude_ellipsoid_m = 0.0;
      this->s_variance_m_s = 0.0f;
      this->c_variance_rad = 0.0f;
      this->fix_type = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->hdop = 0.0f;
      this->vdop = 0.0f;
      this->noise_per_ms = 0l;
      this->automatic_gain_control = 0;
      this->jamming_state = 0;
      this->jamming_indicator = 0l;
      this->spoofing_state = 0;
      this->vel_m_s = 0.0f;
      this->vel_n_m_s = 0.0f;
      this->vel_e_m_s = 0.0f;
      this->vel_d_m_s = 0.0f;
      this->cog_rad = 0.0f;
      this->vel_ned_valid = false;
      this->timestamp_time_relative = 0l;
      this->time_utc_usec = 0ull;
      this->satellites_used = 0;
      this->heading = 0.0f;
      this->heading_offset = 0.0f;
      this->heading_accuracy = 0.0f;
      this->rtcm_injection_rate = 0.0f;
      this->selected_rtcm_instance = 0;
      this->rtcm_crc_failed = false;
      this->rtcm_msg_used = 0;
    }
  }

  explicit SensorGps_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->device_id = 0ul;
      this->latitude_deg = 0.0;
      this->longitude_deg = 0.0;
      this->altitude_msl_m = 0.0;
      this->altitude_ellipsoid_m = 0.0;
      this->s_variance_m_s = 0.0f;
      this->c_variance_rad = 0.0f;
      this->fix_type = 0;
      this->eph = 0.0f;
      this->epv = 0.0f;
      this->hdop = 0.0f;
      this->vdop = 0.0f;
      this->noise_per_ms = 0l;
      this->automatic_gain_control = 0;
      this->jamming_state = 0;
      this->jamming_indicator = 0l;
      this->spoofing_state = 0;
      this->vel_m_s = 0.0f;
      this->vel_n_m_s = 0.0f;
      this->vel_e_m_s = 0.0f;
      this->vel_d_m_s = 0.0f;
      this->cog_rad = 0.0f;
      this->vel_ned_valid = false;
      this->timestamp_time_relative = 0l;
      this->time_utc_usec = 0ull;
      this->satellites_used = 0;
      this->heading = 0.0f;
      this->heading_offset = 0.0f;
      this->heading_accuracy = 0.0f;
      this->rtcm_injection_rate = 0.0f;
      this->selected_rtcm_instance = 0;
      this->rtcm_crc_failed = false;
      this->rtcm_msg_used = 0;
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
  using _latitude_deg_type =
    double;
  _latitude_deg_type latitude_deg;
  using _longitude_deg_type =
    double;
  _longitude_deg_type longitude_deg;
  using _altitude_msl_m_type =
    double;
  _altitude_msl_m_type altitude_msl_m;
  using _altitude_ellipsoid_m_type =
    double;
  _altitude_ellipsoid_m_type altitude_ellipsoid_m;
  using _s_variance_m_s_type =
    float;
  _s_variance_m_s_type s_variance_m_s;
  using _c_variance_rad_type =
    float;
  _c_variance_rad_type c_variance_rad;
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _eph_type =
    float;
  _eph_type eph;
  using _epv_type =
    float;
  _epv_type epv;
  using _hdop_type =
    float;
  _hdop_type hdop;
  using _vdop_type =
    float;
  _vdop_type vdop;
  using _noise_per_ms_type =
    int32_t;
  _noise_per_ms_type noise_per_ms;
  using _automatic_gain_control_type =
    uint16_t;
  _automatic_gain_control_type automatic_gain_control;
  using _jamming_state_type =
    uint8_t;
  _jamming_state_type jamming_state;
  using _jamming_indicator_type =
    int32_t;
  _jamming_indicator_type jamming_indicator;
  using _spoofing_state_type =
    uint8_t;
  _spoofing_state_type spoofing_state;
  using _vel_m_s_type =
    float;
  _vel_m_s_type vel_m_s;
  using _vel_n_m_s_type =
    float;
  _vel_n_m_s_type vel_n_m_s;
  using _vel_e_m_s_type =
    float;
  _vel_e_m_s_type vel_e_m_s;
  using _vel_d_m_s_type =
    float;
  _vel_d_m_s_type vel_d_m_s;
  using _cog_rad_type =
    float;
  _cog_rad_type cog_rad;
  using _vel_ned_valid_type =
    bool;
  _vel_ned_valid_type vel_ned_valid;
  using _timestamp_time_relative_type =
    int32_t;
  _timestamp_time_relative_type timestamp_time_relative;
  using _time_utc_usec_type =
    uint64_t;
  _time_utc_usec_type time_utc_usec;
  using _satellites_used_type =
    uint8_t;
  _satellites_used_type satellites_used;
  using _heading_type =
    float;
  _heading_type heading;
  using _heading_offset_type =
    float;
  _heading_offset_type heading_offset;
  using _heading_accuracy_type =
    float;
  _heading_accuracy_type heading_accuracy;
  using _rtcm_injection_rate_type =
    float;
  _rtcm_injection_rate_type rtcm_injection_rate;
  using _selected_rtcm_instance_type =
    uint8_t;
  _selected_rtcm_instance_type selected_rtcm_instance;
  using _rtcm_crc_failed_type =
    bool;
  _rtcm_crc_failed_type rtcm_crc_failed;
  using _rtcm_msg_used_type =
    uint8_t;
  _rtcm_msg_used_type rtcm_msg_used;

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
  Type & set__latitude_deg(
    const double & _arg)
  {
    this->latitude_deg = _arg;
    return *this;
  }
  Type & set__longitude_deg(
    const double & _arg)
  {
    this->longitude_deg = _arg;
    return *this;
  }
  Type & set__altitude_msl_m(
    const double & _arg)
  {
    this->altitude_msl_m = _arg;
    return *this;
  }
  Type & set__altitude_ellipsoid_m(
    const double & _arg)
  {
    this->altitude_ellipsoid_m = _arg;
    return *this;
  }
  Type & set__s_variance_m_s(
    const float & _arg)
  {
    this->s_variance_m_s = _arg;
    return *this;
  }
  Type & set__c_variance_rad(
    const float & _arg)
  {
    this->c_variance_rad = _arg;
    return *this;
  }
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__eph(
    const float & _arg)
  {
    this->eph = _arg;
    return *this;
  }
  Type & set__epv(
    const float & _arg)
  {
    this->epv = _arg;
    return *this;
  }
  Type & set__hdop(
    const float & _arg)
  {
    this->hdop = _arg;
    return *this;
  }
  Type & set__vdop(
    const float & _arg)
  {
    this->vdop = _arg;
    return *this;
  }
  Type & set__noise_per_ms(
    const int32_t & _arg)
  {
    this->noise_per_ms = _arg;
    return *this;
  }
  Type & set__automatic_gain_control(
    const uint16_t & _arg)
  {
    this->automatic_gain_control = _arg;
    return *this;
  }
  Type & set__jamming_state(
    const uint8_t & _arg)
  {
    this->jamming_state = _arg;
    return *this;
  }
  Type & set__jamming_indicator(
    const int32_t & _arg)
  {
    this->jamming_indicator = _arg;
    return *this;
  }
  Type & set__spoofing_state(
    const uint8_t & _arg)
  {
    this->spoofing_state = _arg;
    return *this;
  }
  Type & set__vel_m_s(
    const float & _arg)
  {
    this->vel_m_s = _arg;
    return *this;
  }
  Type & set__vel_n_m_s(
    const float & _arg)
  {
    this->vel_n_m_s = _arg;
    return *this;
  }
  Type & set__vel_e_m_s(
    const float & _arg)
  {
    this->vel_e_m_s = _arg;
    return *this;
  }
  Type & set__vel_d_m_s(
    const float & _arg)
  {
    this->vel_d_m_s = _arg;
    return *this;
  }
  Type & set__cog_rad(
    const float & _arg)
  {
    this->cog_rad = _arg;
    return *this;
  }
  Type & set__vel_ned_valid(
    const bool & _arg)
  {
    this->vel_ned_valid = _arg;
    return *this;
  }
  Type & set__timestamp_time_relative(
    const int32_t & _arg)
  {
    this->timestamp_time_relative = _arg;
    return *this;
  }
  Type & set__time_utc_usec(
    const uint64_t & _arg)
  {
    this->time_utc_usec = _arg;
    return *this;
  }
  Type & set__satellites_used(
    const uint8_t & _arg)
  {
    this->satellites_used = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_offset(
    const float & _arg)
  {
    this->heading_offset = _arg;
    return *this;
  }
  Type & set__heading_accuracy(
    const float & _arg)
  {
    this->heading_accuracy = _arg;
    return *this;
  }
  Type & set__rtcm_injection_rate(
    const float & _arg)
  {
    this->rtcm_injection_rate = _arg;
    return *this;
  }
  Type & set__selected_rtcm_instance(
    const uint8_t & _arg)
  {
    this->selected_rtcm_instance = _arg;
    return *this;
  }
  Type & set__rtcm_crc_failed(
    const bool & _arg)
  {
    this->rtcm_crc_failed = _arg;
    return *this;
  }
  Type & set__rtcm_msg_used(
    const uint8_t & _arg)
  {
    this->rtcm_msg_used = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t JAMMING_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t JAMMING_STATE_OK =
    1u;
  static constexpr uint8_t JAMMING_STATE_WARNING =
    2u;
  static constexpr uint8_t JAMMING_STATE_CRITICAL =
    3u;
  static constexpr uint8_t SPOOFING_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t SPOOFING_STATE_NONE =
    1u;
  static constexpr uint8_t SPOOFING_STATE_INDICATED =
    2u;
  static constexpr uint8_t SPOOFING_STATE_MULTIPLE =
    3u;
  static constexpr uint8_t RTCM_MSG_USED_UNKNOWN =
    0u;
  static constexpr uint8_t RTCM_MSG_USED_NOT_USED =
    1u;
  static constexpr uint8_t RTCM_MSG_USED_USED =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::SensorGps_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::SensorGps_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGps_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::SensorGps_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__SensorGps
    std::shared_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__SensorGps
    std::shared_ptr<px4_msgs::msg::SensorGps_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorGps_ & other) const
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
    if (this->latitude_deg != other.latitude_deg) {
      return false;
    }
    if (this->longitude_deg != other.longitude_deg) {
      return false;
    }
    if (this->altitude_msl_m != other.altitude_msl_m) {
      return false;
    }
    if (this->altitude_ellipsoid_m != other.altitude_ellipsoid_m) {
      return false;
    }
    if (this->s_variance_m_s != other.s_variance_m_s) {
      return false;
    }
    if (this->c_variance_rad != other.c_variance_rad) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->eph != other.eph) {
      return false;
    }
    if (this->epv != other.epv) {
      return false;
    }
    if (this->hdop != other.hdop) {
      return false;
    }
    if (this->vdop != other.vdop) {
      return false;
    }
    if (this->noise_per_ms != other.noise_per_ms) {
      return false;
    }
    if (this->automatic_gain_control != other.automatic_gain_control) {
      return false;
    }
    if (this->jamming_state != other.jamming_state) {
      return false;
    }
    if (this->jamming_indicator != other.jamming_indicator) {
      return false;
    }
    if (this->spoofing_state != other.spoofing_state) {
      return false;
    }
    if (this->vel_m_s != other.vel_m_s) {
      return false;
    }
    if (this->vel_n_m_s != other.vel_n_m_s) {
      return false;
    }
    if (this->vel_e_m_s != other.vel_e_m_s) {
      return false;
    }
    if (this->vel_d_m_s != other.vel_d_m_s) {
      return false;
    }
    if (this->cog_rad != other.cog_rad) {
      return false;
    }
    if (this->vel_ned_valid != other.vel_ned_valid) {
      return false;
    }
    if (this->timestamp_time_relative != other.timestamp_time_relative) {
      return false;
    }
    if (this->time_utc_usec != other.time_utc_usec) {
      return false;
    }
    if (this->satellites_used != other.satellites_used) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_offset != other.heading_offset) {
      return false;
    }
    if (this->heading_accuracy != other.heading_accuracy) {
      return false;
    }
    if (this->rtcm_injection_rate != other.rtcm_injection_rate) {
      return false;
    }
    if (this->selected_rtcm_instance != other.selected_rtcm_instance) {
      return false;
    }
    if (this->rtcm_crc_failed != other.rtcm_crc_failed) {
      return false;
    }
    if (this->rtcm_msg_used != other.rtcm_msg_used) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorGps_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorGps_

// alias to use template instance with default allocator
using SensorGps =
  px4_msgs::msg::SensorGps_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::JAMMING_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::JAMMING_STATE_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::JAMMING_STATE_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::JAMMING_STATE_CRITICAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::SPOOFING_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::SPOOFING_STATE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::SPOOFING_STATE_INDICATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::SPOOFING_STATE_MULTIPLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::RTCM_MSG_USED_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::RTCM_MSG_USED_NOT_USED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SensorGps_<ContainerAllocator>::RTCM_MSG_USED_USED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GPS__STRUCT_HPP_
