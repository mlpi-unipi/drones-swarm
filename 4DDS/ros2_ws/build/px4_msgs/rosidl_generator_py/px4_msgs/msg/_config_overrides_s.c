// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ConfigOverrides.idl
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
#include "px4_msgs/msg/detail/config_overrides__struct.h"
#include "px4_msgs/msg/detail/config_overrides__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__config_overrides__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("px4_msgs.msg._config_overrides.ConfigOverrides", full_classname_dest, 46) == 0);
  }
  px4_msgs__msg__ConfigOverrides * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // disable_auto_disarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "disable_auto_disarm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->disable_auto_disarm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // defer_failsafes
    PyObject * field = PyObject_GetAttrString(_pymsg, "defer_failsafes");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->defer_failsafes = (Py_True == field);
    Py_DECREF(field);
  }
  {  // defer_failsafes_timeout_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "defer_failsafes_timeout_s");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->defer_failsafes_timeout_s = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // source_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_type = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // source_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__config_overrides__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConfigOverrides */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._config_overrides");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConfigOverrides");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ConfigOverrides * ros_message = (px4_msgs__msg__ConfigOverrides *)raw_ros_message;
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
  {  // disable_auto_disarm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->disable_auto_disarm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disable_auto_disarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defer_failsafes
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->defer_failsafes ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defer_failsafes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // defer_failsafes_timeout_s
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->defer_failsafes_timeout_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "defer_failsafes_timeout_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->source_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
