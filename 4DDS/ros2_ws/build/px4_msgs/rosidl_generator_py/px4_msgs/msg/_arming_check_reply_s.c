// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/detail/arming_check_reply__struct.h"
#include "px4_msgs/msg/detail/arming_check_reply__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "px4_msgs/msg/detail/event__functions.h"
// end nested array functions include
bool px4_msgs__msg__event__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * px4_msgs__msg__event__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__arming_check_reply__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("px4_msgs.msg._arming_check_reply.ArmingCheckReply", full_classname_dest, 49) == 0);
  }
  px4_msgs__msg__ArmingCheckReply * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // request_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->request_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // registration_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "registration_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->registration_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // health_component_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_component_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health_component_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // health_component_is_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_component_is_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->health_component_is_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // health_component_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_component_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->health_component_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // health_component_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_component_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->health_component_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_arm_and_run
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_arm_and_run");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_arm_and_run = (Py_True == field);
    Py_DECREF(field);
  }
  {  // num_events
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_events");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_events = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // events
    PyObject * field = PyObject_GetAttrString(_pymsg, "events");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'events'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 5;
    px4_msgs__msg__Event * dest = ros_message->events;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!px4_msgs__msg__event__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // mode_req_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_angular_velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_attitude");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_attitude = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_local_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_alt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_local_alt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_local_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position_relaxed
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position_relaxed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_local_position_relaxed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_global_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_global_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_global_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_mission
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_mission");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_mission = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_home_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_home_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_home_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_prevent_arming
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_prevent_arming");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_prevent_arming = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mode_req_manual_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_manual_control");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mode_req_manual_control = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__arming_check_reply__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmingCheckReply */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._arming_check_reply");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmingCheckReply");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ArmingCheckReply * ros_message = (px4_msgs__msg__ArmingCheckReply *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->request_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // registration_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->registration_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "registration_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_component_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->health_component_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_component_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_component_is_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->health_component_is_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_component_is_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_component_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->health_component_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_component_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_component_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->health_component_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_component_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_arm_and_run
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_arm_and_run ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_arm_and_run", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_events
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_events);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_events", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // events
    PyObject * field = NULL;
    size_t size = 5;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    px4_msgs__msg__Event * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->events[i]);
      PyObject * pyitem = px4_msgs__msg__event__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "events", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_angular_velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_angular_velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_attitude
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_attitude ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_alt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_local_alt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_local_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position_relaxed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_local_position_relaxed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position_relaxed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_global_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_global_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_global_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_mission
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_mission ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_mission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_home_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_home_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_home_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_prevent_arming
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_prevent_arming ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_prevent_arming", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_manual_control
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mode_req_manual_control ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_manual_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
