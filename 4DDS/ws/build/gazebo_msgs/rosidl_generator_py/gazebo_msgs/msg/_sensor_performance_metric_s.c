// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
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
#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.h"
#include "gazebo_msgs/msg/detail/sensor_performance_metric__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gazebo_msgs__msg__sensor_performance_metric__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("gazebo_msgs.msg._sensor_performance_metric.SensorPerformanceMetric", full_classname_dest, 66) == 0);
  }
  gazebo_msgs__msg__SensorPerformanceMetric * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sim_update_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "sim_update_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sim_update_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // real_update_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "real_update_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->real_update_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fps
    PyObject * field = PyObject_GetAttrString(_pymsg, "fps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gazebo_msgs__msg__sensor_performance_metric__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorPerformanceMetric */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gazebo_msgs.msg._sensor_performance_metric");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorPerformanceMetric");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gazebo_msgs__msg__SensorPerformanceMetric * ros_message = (gazebo_msgs__msg__SensorPerformanceMetric *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sim_update_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sim_update_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sim_update_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // real_update_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->real_update_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "real_update_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
