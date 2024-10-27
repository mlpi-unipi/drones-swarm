// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/PowerMonitor.idl
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
#include "px4_msgs/msg/detail/power_monitor__struct.h"
#include "px4_msgs/msg/detail/power_monitor__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__power_monitor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("px4_msgs.msg._power_monitor.PowerMonitor", full_classname_dest, 40) == 0);
  }
  px4_msgs__msg__PowerMonitor * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // voltage_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_w");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_w = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rconf
    PyObject * field = PyObject_GetAttrString(_pymsg, "rconf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rconf = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rsv
    PyObject * field = PyObject_GetAttrString(_pymsg, "rsv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rsv = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rbv
    PyObject * field = PyObject_GetAttrString(_pymsg, "rbv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rbv = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rc
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rcal
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rcal = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // me
    PyObject * field = PyObject_GetAttrString(_pymsg, "me");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->me = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // al
    PyObject * field = PyObject_GetAttrString(_pymsg, "al");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->al = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__power_monitor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowerMonitor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._power_monitor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowerMonitor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__PowerMonitor * ros_message = (px4_msgs__msg__PowerMonitor *)raw_ros_message;
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
  {  // voltage_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_w
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_w);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rconf
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rconf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rconf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rsv
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rsv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rsv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rbv
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rbv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rbv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcal
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rcal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // me
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->me);
    {
      int rc = PyObject_SetAttrString(_pymessage, "me", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // al
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->al);
    {
      int rc = PyObject_SetAttrString(_pymessage, "al", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
