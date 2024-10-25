// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/Ping.idl
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
#include "px4_msgs/msg/detail/ping__struct.h"
#include "px4_msgs/msg/detail/ping__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__ping__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._ping.Ping", full_classname_dest, 23) == 0);
  }
  px4_msgs__msg__Ping * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ping_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "ping_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ping_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ping_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "ping_sequence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ping_sequence = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dropped_packets
    PyObject * field = PyObject_GetAttrString(_pymsg, "dropped_packets");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dropped_packets = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rtt_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtt_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rtt_ms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // component_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "component_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->component_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__ping__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ping */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._ping");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ping");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__Ping * ros_message = (px4_msgs__msg__Ping *)raw_ros_message;
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
  {  // ping_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ping_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ping_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ping_sequence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ping_sequence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ping_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dropped_packets
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dropped_packets);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dropped_packets", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtt_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rtt_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtt_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // component_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->component_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "component_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
