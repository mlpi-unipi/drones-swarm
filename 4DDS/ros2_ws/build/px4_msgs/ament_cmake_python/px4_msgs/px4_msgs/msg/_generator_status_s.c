// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/GeneratorStatus.idl
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
#include "px4_msgs/msg/detail/generator_status__struct.h"
#include "px4_msgs/msg/detail/generator_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__generator_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._generator_status.GeneratorStatus", full_classname_dest, 46) == 0);
  }
  px4_msgs__msg__GeneratorStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // battery_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // load_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "load_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->load_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // power_generated
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_generated");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->power_generated = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bus_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bus_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bat_current_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "bat_current_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bat_current_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // runtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "runtime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->runtime = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_until_maintenance
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_until_maintenance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_until_maintenance = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // generator_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "generator_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->generator_speed = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rectifier_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "rectifier_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rectifier_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // generator_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "generator_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->generator_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__generator_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GeneratorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._generator_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GeneratorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__GeneratorStatus * ros_message = (px4_msgs__msg__GeneratorStatus *)raw_ros_message;
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
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->load_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_generated
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->power_generated);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_generated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bus_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bat_current_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bat_current_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bat_current_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // runtime
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->runtime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "runtime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_until_maintenance
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->time_until_maintenance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_until_maintenance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // generator_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->generator_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "generator_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rectifier_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rectifier_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rectifier_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // generator_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->generator_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "generator_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
