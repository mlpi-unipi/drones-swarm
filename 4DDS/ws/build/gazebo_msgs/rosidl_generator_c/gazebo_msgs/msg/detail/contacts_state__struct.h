// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ContactsState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'states'
#include "gazebo_msgs/msg/detail/contact_state__struct.h"

/// Struct defined in msg/ContactsState in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__ContactsState
{
  /// stamp
  std_msgs__msg__Header header;
  /// array of geom pairs in contact
  gazebo_msgs__msg__ContactState__Sequence states;
} gazebo_msgs__msg__ContactsState;

// Struct for a sequence of gazebo_msgs__msg__ContactsState.
typedef struct gazebo_msgs__msg__ContactsState__Sequence
{
  gazebo_msgs__msg__ContactsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__ContactsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__CONTACTS_STATE__STRUCT_H_
