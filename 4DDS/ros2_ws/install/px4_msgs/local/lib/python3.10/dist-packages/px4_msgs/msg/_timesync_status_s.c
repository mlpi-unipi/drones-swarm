// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/TimesyncStatus.idl
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
#include "px4_msgs/msg/detail/timesync_status__struct.h"
#include "px4_msgs/msg/detail/timesync_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__timesync_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("px4_msgs.msg._timesync_status.TimesyncStatus", full_classname_dest, 44) == 0);
  }
  px4_msgs__msg__TimesyncStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // source_protocol
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_protocol");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_protocol = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remote_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "remote_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remote_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // observed_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "observed_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->observed_offset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // estimated_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimated_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->estimated_offset = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // round_trip_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "round_trip_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->round_trip_time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__timesync_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TimesyncStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._timesync_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimesyncStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__TimesyncStatus * ros_message = (px4_msgs__msg__TimesyncStatus *)raw_ros_message;
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
  {  // source_protocol
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_protocol);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_protocol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remote_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->remote_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remote_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // observed_offset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->observed_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "observed_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimated_offset
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->estimated_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimated_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // round_trip_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->round_trip_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "round_trip_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
