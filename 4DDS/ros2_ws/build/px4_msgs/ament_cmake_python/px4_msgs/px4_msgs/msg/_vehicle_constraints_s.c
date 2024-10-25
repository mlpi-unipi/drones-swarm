// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleConstraints.idl
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
#include "px4_msgs/msg/detail/vehicle_constraints__struct.h"
#include "px4_msgs/msg/detail/vehicle_constraints__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_constraints__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("px4_msgs.msg._vehicle_constraints.VehicleConstraints", full_classname_dest, 52) == 0);
  }
  px4_msgs__msg__VehicleConstraints * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // speed_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_up");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_up = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_down");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_down = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // want_takeoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "want_takeoff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->want_takeoff = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_constraints__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleConstraints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_constraints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleConstraints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleConstraints * ros_message = (px4_msgs__msg__VehicleConstraints *)raw_ros_message;
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
  {  // speed_up
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_down
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // want_takeoff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->want_takeoff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "want_takeoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
