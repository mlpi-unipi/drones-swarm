// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/Wind.idl
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
#include "px4_msgs/msg/detail/wind__struct.h"
#include "px4_msgs/msg/detail/wind__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__wind__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
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
    assert(strncmp("px4_msgs.msg._wind.Wind", full_classname_dest, 23) == 0);
  }
  px4_msgs__msg__Wind * ros_message = _ros_message;
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
  {  // windspeed_north
    PyObject * field = PyObject_GetAttrString(_pymsg, "windspeed_north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->windspeed_north = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // windspeed_east
    PyObject * field = PyObject_GetAttrString(_pymsg, "windspeed_east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->windspeed_east = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // variance_north
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance_north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->variance_north = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // variance_east
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance_east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->variance_east = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tas_innov
    PyObject * field = PyObject_GetAttrString(_pymsg, "tas_innov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tas_innov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tas_innov_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "tas_innov_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tas_innov_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // beta_innov
    PyObject * field = PyObject_GetAttrString(_pymsg, "beta_innov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_innov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // beta_innov_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "beta_innov_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_innov_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__wind__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Wind */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._wind");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Wind");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__Wind * ros_message = (px4_msgs__msg__Wind *)raw_ros_message;
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
  {  // windspeed_north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->windspeed_north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "windspeed_north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // windspeed_east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->windspeed_east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "windspeed_east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance_north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->variance_north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "variance_north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance_east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->variance_east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "variance_east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tas_innov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tas_innov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tas_innov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tas_innov_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tas_innov_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tas_innov_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beta_innov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_innov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_innov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beta_innov_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_innov_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_innov_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
