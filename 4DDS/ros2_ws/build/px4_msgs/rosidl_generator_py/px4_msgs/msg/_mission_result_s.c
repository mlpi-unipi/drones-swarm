// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/MissionResult.idl
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
#include "px4_msgs/msg/detail/mission_result__struct.h"
#include "px4_msgs/msg/detail/mission_result__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__mission_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("px4_msgs.msg._mission_result.MissionResult", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__MissionResult * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mission_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // geofence_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "geofence_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->geofence_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // home_position_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_position_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->home_position_counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seq_reached
    PyObject * field = PyObject_GetAttrString(_pymsg, "seq_reached");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seq_reached = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // seq_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "seq_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seq_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seq_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "seq_total");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seq_total = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // finished
    PyObject * field = PyObject_GetAttrString(_pymsg, "finished");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->finished = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // item_do_jump_changed
    PyObject * field = PyObject_GetAttrString(_pymsg, "item_do_jump_changed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->item_do_jump_changed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // item_changed_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "item_changed_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->item_changed_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // item_do_jump_remaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "item_do_jump_remaining");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->item_do_jump_remaining = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // execution_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "execution_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->execution_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__mission_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._mission_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__MissionResult * ros_message = (px4_msgs__msg__MissionResult *)raw_ros_message;
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
  {  // mission_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mission_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geofence_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->geofence_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "geofence_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_position_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->home_position_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_position_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seq_reached
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->seq_reached);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seq_reached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seq_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seq_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seq_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seq_total
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seq_total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seq_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finished
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->finished ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finished", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item_do_jump_changed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->item_do_jump_changed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "item_do_jump_changed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item_changed_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->item_changed_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "item_changed_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // item_do_jump_remaining
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->item_do_jump_remaining);
    {
      int rc = PyObject_SetAttrString(_pymessage, "item_do_jump_remaining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // execution_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->execution_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "execution_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
