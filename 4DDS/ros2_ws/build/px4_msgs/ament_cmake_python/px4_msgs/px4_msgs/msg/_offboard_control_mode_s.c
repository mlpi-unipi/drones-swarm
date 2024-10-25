// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/OffboardControlMode.idl
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
#include "px4_msgs/msg/detail/offboard_control_mode__struct.h"
#include "px4_msgs/msg/detail/offboard_control_mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__offboard_control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("px4_msgs.msg._offboard_control_mode.OffboardControlMode", full_classname_dest, 55) == 0);
  }
  px4_msgs__msg__OffboardControlMode * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->velocity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acceleration = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude = (Py_True == field);
    Py_DECREF(field);
  }
  {  // body_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_rate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->body_rate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // thrust_and_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "thrust_and_torque");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->thrust_and_torque = (Py_True == field);
    Py_DECREF(field);
  }
  {  // direct_actuator
    PyObject * field = PyObject_GetAttrString(_pymsg, "direct_actuator");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->direct_actuator = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__offboard_control_mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OffboardControlMode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._offboard_control_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OffboardControlMode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__OffboardControlMode * ros_message = (px4_msgs__msg__OffboardControlMode *)raw_ros_message;
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
  {  // position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->velocity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acceleration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_rate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->body_rate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thrust_and_torque
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->thrust_and_torque ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thrust_and_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direct_actuator
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->direct_actuator ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direct_actuator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
