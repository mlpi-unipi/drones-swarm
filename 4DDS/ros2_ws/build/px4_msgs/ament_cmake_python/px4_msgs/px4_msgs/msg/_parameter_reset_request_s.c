// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/ParameterResetRequest.idl
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
#include "px4_msgs/msg/detail/parameter_reset_request__struct.h"
#include "px4_msgs/msg/detail/parameter_reset_request__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__parameter_reset_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._parameter_reset_request.ParameterResetRequest", full_classname_dest, 59) == 0);
  }
  px4_msgs__msg__ParameterResetRequest * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // parameter_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "parameter_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parameter_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_all
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_all");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_all = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__parameter_reset_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParameterResetRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._parameter_reset_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParameterResetRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__ParameterResetRequest * ros_message = (px4_msgs__msg__ParameterResetRequest *)raw_ros_message;
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
  {  // parameter_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parameter_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parameter_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_all
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_all ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_all", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
