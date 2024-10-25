// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/RtlStatus.idl
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
#include "px4_msgs/msg/detail/rtl_status__struct.h"
#include "px4_msgs/msg/detail/rtl_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__rtl_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("px4_msgs.msg._rtl_status.RtlStatus", full_classname_dest, 34) == 0);
  }
  px4_msgs__msg__RtlStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // safe_points_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_points_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safe_points_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_evaluation_pending
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_evaluation_pending");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_evaluation_pending = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_vtol_approach
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vtol_approach");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vtol_approach = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rtl_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtl_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rtl_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safe_point_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "safe_point_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safe_point_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__rtl_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RtlStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._rtl_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RtlStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__RtlStatus * ros_message = (px4_msgs__msg__RtlStatus *)raw_ros_message;
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
  {  // safe_points_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safe_points_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_points_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_evaluation_pending
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_evaluation_pending ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_evaluation_pending", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vtol_approach
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vtol_approach ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vtol_approach", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtl_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rtl_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtl_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safe_point_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safe_point_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safe_point_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
