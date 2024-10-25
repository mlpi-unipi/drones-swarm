// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/HeaterStatus.idl
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
#include "px4_msgs/msg/detail/heater_status__struct.h"
#include "px4_msgs/msg/detail/heater_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__heater_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._heater_status.HeaterStatus", full_classname_dest, 40) == 0);
  }
  px4_msgs__msg__HeaterStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heater_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "heater_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heater_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // temperature_target_met
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_target_met");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->temperature_target_met = (Py_True == field);
    Py_DECREF(field);
  }
  {  // temperature_sensor
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_sensor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_sensor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // controller_period_usec
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_period_usec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->controller_period_usec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // controller_time_on_usec
    PyObject * field = PyObject_GetAttrString(_pymsg, "controller_time_on_usec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->controller_time_on_usec = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // proportional_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "proportional_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->proportional_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // integrator_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "integrator_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->integrator_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feed_forward_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "feed_forward_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feed_forward_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__heater_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeaterStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._heater_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeaterStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__HeaterStatus * ros_message = (px4_msgs__msg__HeaterStatus *)raw_ros_message;
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
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heater_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heater_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heater_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_target_met
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->temperature_target_met ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_target_met", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_sensor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_sensor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_sensor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_period_usec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->controller_period_usec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_period_usec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // controller_time_on_usec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->controller_time_on_usec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "controller_time_on_usec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // proportional_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->proportional_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "proportional_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // integrator_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->integrator_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "integrator_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feed_forward_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feed_forward_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feed_forward_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
