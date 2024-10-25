// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/PositionSetpoint.idl
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
#include "px4_msgs/msg/detail/position_setpoint__struct.h"
#include "px4_msgs/msg/detail/position_setpoint__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__position_setpoint__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("px4_msgs.msg._position_setpoint.PositionSetpoint", full_classname_dest, 48) == 0);
  }
  px4_msgs__msg__PositionSetpoint * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
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
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loiter_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loiter_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loiter_minor_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_minor_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loiter_minor_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loiter_direction_counter_clockwise
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_direction_counter_clockwise");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->loiter_direction_counter_clockwise = (Py_True == field);
    Py_DECREF(field);
  }
  {  // loiter_orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loiter_orientation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loiter_pattern
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_pattern");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->loiter_pattern = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // cruising_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruising_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cruising_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gliding_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "gliding_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gliding_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cruising_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "cruising_throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cruising_throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__position_setpoint__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PositionSetpoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._position_setpoint");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PositionSetpoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__PositionSetpoint * ros_message = (px4_msgs__msg__PositionSetpoint *)raw_ros_message;
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
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
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
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loiter_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_minor_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loiter_minor_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_minor_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_direction_counter_clockwise
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->loiter_direction_counter_clockwise ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_direction_counter_clockwise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loiter_orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_pattern
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->loiter_pattern);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_pattern", field);
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
  {  // cruising_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cruising_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruising_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gliding_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gliding_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gliding_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cruising_throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cruising_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cruising_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
