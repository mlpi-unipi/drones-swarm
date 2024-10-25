// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/HoverThrustEstimate.idl
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
#include "px4_msgs/msg/detail/hover_thrust_estimate__struct.h"
#include "px4_msgs/msg/detail/hover_thrust_estimate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__hover_thrust_estimate__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("px4_msgs.msg._hover_thrust_estimate.HoverThrustEstimate", full_classname_dest, 55) == 0);
  }
  px4_msgs__msg__HoverThrustEstimate * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_sample
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_sample");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_sample = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // hover_thrust
    PyObject * field = PyObject_GetAttrString(_pymsg, "hover_thrust");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hover_thrust = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hover_thrust_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "hover_thrust_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hover_thrust_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_innov
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_innov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_innov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_innov_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_innov_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_innov_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_innov_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_innov_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_innov_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_noise_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_noise_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_noise_var = (float)PyFloat_AS_DOUBLE(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__hover_thrust_estimate__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HoverThrustEstimate */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._hover_thrust_estimate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HoverThrustEstimate");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__HoverThrustEstimate * ros_message = (px4_msgs__msg__HoverThrustEstimate *)raw_ros_message;
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
  {  // timestamp_sample
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_sample);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_sample", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hover_thrust
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hover_thrust);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hover_thrust", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hover_thrust_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hover_thrust_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hover_thrust_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_innov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_innov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_innov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_innov_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_innov_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_innov_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_innov_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_innov_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_innov_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_noise_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_noise_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_noise_var", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
