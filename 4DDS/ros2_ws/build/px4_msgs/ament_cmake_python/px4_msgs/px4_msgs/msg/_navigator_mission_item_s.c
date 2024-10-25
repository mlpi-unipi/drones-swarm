// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
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
#include "px4_msgs/msg/detail/navigator_mission_item__struct.h"
#include "px4_msgs/msg/detail/navigator_mission_item__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__navigator_mission_item__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("px4_msgs.msg._navigator_mission_item.NavigatorMissionItem", full_classname_dest, 57) == 0);
  }
  px4_msgs__msg__NavigatorMissionItem * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // instance_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "instance_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instance_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sequence_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_current");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence_current = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_cmd = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_inside
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_inside");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_inside = (float)PyFloat_AS_DOUBLE(field);
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
  {  // loiter_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loiter_radius = (float)PyFloat_AS_DOUBLE(field);
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
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // loiter_exit_xtrack
    PyObject * field = PyObject_GetAttrString(_pymsg, "loiter_exit_xtrack");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->loiter_exit_xtrack = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // altitude_is_relative
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_is_relative");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->altitude_is_relative = (Py_True == field);
    Py_DECREF(field);
  }
  {  // autocontinue
    PyObject * field = PyObject_GetAttrString(_pymsg, "autocontinue");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->autocontinue = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_back_transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_back_transition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_back_transition = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__navigator_mission_item__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavigatorMissionItem */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._navigator_mission_item");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavigatorMissionItem");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__NavigatorMissionItem * ros_message = (px4_msgs__msg__NavigatorMissionItem *)raw_ros_message;
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
  {  // instance_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->instance_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instance_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_current
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sequence_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_cmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_inside
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_inside);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_inside", field);
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
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frame
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frame);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loiter_exit_xtrack
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->loiter_exit_xtrack ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loiter_exit_xtrack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_is_relative
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->altitude_is_relative ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_is_relative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // autocontinue
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->autocontinue ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "autocontinue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_back_transition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_back_transition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_back_transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
