// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fdds_messages:msg/GeoPing.idl
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
#include "fdds_messages/msg/detail/geo_ping__struct.h"
#include "fdds_messages/msg/detail/geo_ping__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool fdds_messages__msg__geo_ping__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("fdds_messages.msg._geo_ping.GeoPing", full_classname_dest, 35) == 0);
  }
  fdds_messages__msg__GeoPing * ros_message = _ros_message;
  {  // vehicle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latitude_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_north_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_north_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_north_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_east_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_east_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_east_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fdds_messages__msg__geo_ping__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GeoPing */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fdds_messages.msg._geo_ping");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GeoPing");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fdds_messages__msg__GeoPing * ros_message = (fdds_messages__msg__GeoPing *)raw_ros_message;
  {  // vehicle_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_north_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_north_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_north_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_east_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_east_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_east_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
