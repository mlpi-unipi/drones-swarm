// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__GEO_PING__BUILDER_HPP_
#define FDDS_MESSAGES__MSG__DETAIL__GEO_PING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fdds_messages/msg/detail/geo_ping__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fdds_messages
{

namespace msg
{

namespace builder
{

class Init_GeoPing_speed_east_m_s
{
public:
  explicit Init_GeoPing_speed_east_m_s(::fdds_messages::msg::GeoPing & msg)
  : msg_(msg)
  {}
  ::fdds_messages::msg::GeoPing speed_east_m_s(::fdds_messages::msg::GeoPing::_speed_east_m_s_type arg)
  {
    msg_.speed_east_m_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fdds_messages::msg::GeoPing msg_;
};

class Init_GeoPing_speed_north_m_s
{
public:
  explicit Init_GeoPing_speed_north_m_s(::fdds_messages::msg::GeoPing & msg)
  : msg_(msg)
  {}
  Init_GeoPing_speed_east_m_s speed_north_m_s(::fdds_messages::msg::GeoPing::_speed_north_m_s_type arg)
  {
    msg_.speed_north_m_s = std::move(arg);
    return Init_GeoPing_speed_east_m_s(msg_);
  }

private:
  ::fdds_messages::msg::GeoPing msg_;
};

class Init_GeoPing_longitude_m
{
public:
  explicit Init_GeoPing_longitude_m(::fdds_messages::msg::GeoPing & msg)
  : msg_(msg)
  {}
  Init_GeoPing_speed_north_m_s longitude_m(::fdds_messages::msg::GeoPing::_longitude_m_type arg)
  {
    msg_.longitude_m = std::move(arg);
    return Init_GeoPing_speed_north_m_s(msg_);
  }

private:
  ::fdds_messages::msg::GeoPing msg_;
};

class Init_GeoPing_latitude_m
{
public:
  explicit Init_GeoPing_latitude_m(::fdds_messages::msg::GeoPing & msg)
  : msg_(msg)
  {}
  Init_GeoPing_longitude_m latitude_m(::fdds_messages::msg::GeoPing::_latitude_m_type arg)
  {
    msg_.latitude_m = std::move(arg);
    return Init_GeoPing_longitude_m(msg_);
  }

private:
  ::fdds_messages::msg::GeoPing msg_;
};

class Init_GeoPing_vehicle_id
{
public:
  Init_GeoPing_vehicle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoPing_latitude_m vehicle_id(::fdds_messages::msg::GeoPing::_vehicle_id_type arg)
  {
    msg_.vehicle_id = std::move(arg);
    return Init_GeoPing_latitude_m(msg_);
  }

private:
  ::fdds_messages::msg::GeoPing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fdds_messages::msg::GeoPing>()
{
  return fdds_messages::msg::builder::Init_GeoPing_vehicle_id();
}

}  // namespace fdds_messages

#endif  // FDDS_MESSAGES__MSG__DETAIL__GEO_PING__BUILDER_HPP_
