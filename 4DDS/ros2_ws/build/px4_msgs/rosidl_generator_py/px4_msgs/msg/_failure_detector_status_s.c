// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/FailureDetectorStatus.idl
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
#include "px4_msgs/msg/detail/failure_detector_status__struct.h"
#include "px4_msgs/msg/detail/failure_detector_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__failure_detector_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("px4_msgs.msg._failure_detector_status.FailureDetectorStatus", full_classname_dest, 59) == 0);
  }
  px4_msgs__msg__FailureDetectorStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // fd_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_roll");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_roll = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_pitch");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_pitch = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_alt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_alt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_ext
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_ext");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_ext = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_arm_escs
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_arm_escs");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_arm_escs = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_battery");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_battery = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_imbalanced_prop
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_imbalanced_prop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_imbalanced_prop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_motor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_motor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // imbalanced_prop_metric
    PyObject * field = PyObject_GetAttrString(_pymsg, "imbalanced_prop_metric");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imbalanced_prop_metric = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_failure_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_failure_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor_failure_mask = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__failure_detector_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FailureDetectorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._failure_detector_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FailureDetectorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__FailureDetectorStatus * ros_message = (px4_msgs__msg__FailureDetectorStatus *)raw_ros_message;
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
  {  // fd_roll
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_roll ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_pitch
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_pitch ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_alt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_alt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_ext
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_ext ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_ext", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_arm_escs
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_arm_escs ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_arm_escs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_battery
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_battery ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_imbalanced_prop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_imbalanced_prop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_imbalanced_prop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_motor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_motor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imbalanced_prop_metric
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imbalanced_prop_metric);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imbalanced_prop_metric", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_failure_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motor_failure_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_failure_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
