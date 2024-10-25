// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/TiltrotorExtraControls.idl
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
#include "px4_msgs/msg/detail/tiltrotor_extra_controls__struct.h"
#include "px4_msgs/msg/detail/tiltrotor_extra_controls__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__tiltrotor_extra_controls__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("px4_msgs.msg._tiltrotor_extra_controls.TiltrotorExtraControls", full_classname_dest, 61) == 0);
  }
  px4_msgs__msg__TiltrotorExtraControls * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // collective_tilt_normalized_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "collective_tilt_normalized_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->collective_tilt_normalized_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // collective_thrust_normalized_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "collective_thrust_normalized_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->collective_thrust_normalized_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__tiltrotor_extra_controls__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TiltrotorExtraControls */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._tiltrotor_extra_controls");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TiltrotorExtraControls");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__TiltrotorExtraControls * ros_message = (px4_msgs__msg__TiltrotorExtraControls *)raw_ros_message;
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
  {  // collective_tilt_normalized_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->collective_tilt_normalized_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collective_tilt_normalized_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // collective_thrust_normalized_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->collective_thrust_normalized_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collective_thrust_normalized_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
