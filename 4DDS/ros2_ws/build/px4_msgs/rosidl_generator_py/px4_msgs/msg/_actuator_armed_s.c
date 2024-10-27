// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ActuatorArmed.idl
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
#include "px4_msgs/msg/detail/actuator_armed__struct.h"
#include "px4_msgs/msg/detail/actuator_armed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__actuator_armed__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._actuator_armed.ActuatorArmed", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__ActuatorArmed * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // prearmed
    PyObject * field = PyObject_GetAttrString(_pymsg, "prearmed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->prearmed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ready_to_arm
    PyObject * field = PyObject_GetAttrString(_pymsg, "ready_to_arm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ready_to_arm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lockdown
    PyObject * field = PyObject_GetAttrString(_pymsg, "lockdown");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lockdown = (Py_True == field);
    Py_DECREF(field);
  }
  {  // manual_lockdown
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_lockdown");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->manual_lockdown = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_esc_calibration_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_esc_calibration_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_esc_calibration_mode = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__actuator_armed__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActuatorArmed */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._actuator_armed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActuatorArmed");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ActuatorArmed * ros_message = (px4_msgs__msg__ActuatorArmed *)raw_ros_message;
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
  {  // armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prearmed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->prearmed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prearmed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ready_to_arm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ready_to_arm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ready_to_arm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lockdown
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lockdown ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lockdown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_lockdown
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->manual_lockdown ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_lockdown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_esc_calibration_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_esc_calibration_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_esc_calibration_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
