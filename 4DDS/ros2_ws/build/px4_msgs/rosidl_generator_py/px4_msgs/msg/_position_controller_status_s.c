// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/PositionControllerStatus.idl
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
#include "px4_msgs/msg/detail/position_controller_status__struct.h"
#include "px4_msgs/msg/detail/position_controller_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__position_controller_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("px4_msgs.msg._position_controller_status.PositionControllerStatus", full_classname_dest, 65) == 0);
  }
  px4_msgs__msg__PositionControllerStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // nav_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nav_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nav_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nav_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // nav_bearing
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_bearing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nav_bearing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_bearing
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_bearing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_bearing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xtrack_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "xtrack_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xtrack_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wp_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "wp_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wp_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceptance_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceptance_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceptance_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_acceptance
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_acceptance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_acceptance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_acceptance
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_acceptance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_acceptance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__position_controller_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PositionControllerStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._position_controller_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PositionControllerStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__PositionControllerStatus * ros_message = (px4_msgs__msg__PositionControllerStatus *)raw_ros_message;
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
  {  // nav_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nav_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nav_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_bearing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nav_bearing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_bearing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_bearing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_bearing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_bearing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xtrack_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xtrack_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xtrack_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wp_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wp_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wp_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceptance_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceptance_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceptance_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_acceptance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_acceptance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_acceptance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_acceptance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_acceptance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_acceptance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
