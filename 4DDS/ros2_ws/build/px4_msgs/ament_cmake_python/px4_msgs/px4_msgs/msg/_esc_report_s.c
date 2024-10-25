// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EscReport.idl
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
#include "px4_msgs/msg/detail/esc_report__struct.h"
#include "px4_msgs/msg/detail/esc_report__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__esc_report__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._esc_report.EscReport", full_classname_dest, 34) == 0);
  }
  px4_msgs__msg__EscReport * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // esc_errorcount
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_errorcount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_errorcount = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_rpm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_rpm = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // esc_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->esc_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // esc_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->esc_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // esc_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->esc_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // esc_address
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_address");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_address = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_cmdcount
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_cmdcount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_cmdcount = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // actuator_function
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_function");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actuator_function = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // failures
    PyObject * field = PyObject_GetAttrString(_pymsg, "failures");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failures = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_power = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__esc_report__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EscReport */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._esc_report");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EscReport");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EscReport * ros_message = (px4_msgs__msg__EscReport *)raw_ros_message;
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
  {  // esc_errorcount
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_errorcount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_errorcount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_rpm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->esc_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->esc_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->esc_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->esc_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_address
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_address);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_address", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_cmdcount
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_cmdcount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_cmdcount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_function
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->actuator_function);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_function", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failures
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failures);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failures", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_power
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->esc_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
