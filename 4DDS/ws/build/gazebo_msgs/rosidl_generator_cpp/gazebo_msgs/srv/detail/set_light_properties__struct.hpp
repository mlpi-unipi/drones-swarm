// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/SetLightProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'diffuse'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetLightProperties_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetLightProperties_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLightProperties_Request_
{
  using Type = SetLightProperties_Request_<ContainerAllocator>;

  explicit SetLightProperties_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diffuse(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light_name = "";
      this->attenuation_constant = 0.0;
      this->attenuation_linear = 0.0;
      this->attenuation_quadratic = 0.0;
    }
  }

  explicit SetLightProperties_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : light_name(_alloc),
    diffuse(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->light_name = "";
      this->attenuation_constant = 0.0;
      this->attenuation_linear = 0.0;
      this->attenuation_quadratic = 0.0;
    }
  }

  // field types and members
  using _light_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _light_name_type light_name;
  using _diffuse_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _diffuse_type diffuse;
  using _attenuation_constant_type =
    double;
  _attenuation_constant_type attenuation_constant;
  using _attenuation_linear_type =
    double;
  _attenuation_linear_type attenuation_linear;
  using _attenuation_quadratic_type =
    double;
  _attenuation_quadratic_type attenuation_quadratic;

  // setters for named parameter idiom
  Type & set__light_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->light_name = _arg;
    return *this;
  }
  Type & set__diffuse(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->diffuse = _arg;
    return *this;
  }
  Type & set__attenuation_constant(
    const double & _arg)
  {
    this->attenuation_constant = _arg;
    return *this;
  }
  Type & set__attenuation_linear(
    const double & _arg)
  {
    this->attenuation_linear = _arg;
    return *this;
  }
  Type & set__attenuation_quadratic(
    const double & _arg)
  {
    this->attenuation_quadratic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetLightProperties_Request
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetLightProperties_Request
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLightProperties_Request_ & other) const
  {
    if (this->light_name != other.light_name) {
      return false;
    }
    if (this->diffuse != other.diffuse) {
      return false;
    }
    if (this->attenuation_constant != other.attenuation_constant) {
      return false;
    }
    if (this->attenuation_linear != other.attenuation_linear) {
      return false;
    }
    if (this->attenuation_quadratic != other.attenuation_quadratic) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLightProperties_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLightProperties_Request_

// alias to use template instance with default allocator
using SetLightProperties_Request =
  gazebo_msgs::srv::SetLightProperties_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs


#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__SetLightProperties_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__SetLightProperties_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLightProperties_Response_
{
  using Type = SetLightProperties_Response_<ContainerAllocator>;

  explicit SetLightProperties_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  explicit SetLightProperties_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__SetLightProperties_Response
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__SetLightProperties_Response
    std::shared_ptr<gazebo_msgs::srv::SetLightProperties_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLightProperties_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLightProperties_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLightProperties_Response_

// alias to use template instance with default allocator
using SetLightProperties_Response =
  gazebo_msgs::srv::SetLightProperties_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct SetLightProperties
{
  using Request = gazebo_msgs::srv::SetLightProperties_Request;
  using Response = gazebo_msgs::srv::SetLightProperties_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__STRUCT_HPP_
