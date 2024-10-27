// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
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
#include "px4_msgs/msg/detail/vehicle_land_detected__struct.h"
#include "px4_msgs/msg/detail/vehicle_land_detected__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_land_detected__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._vehicle_land_detected.VehicleLandDetected", full_classname_dest, 55) == 0);
  }
  px4_msgs__msg__VehicleLandDetected * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // freefall
    PyObject * field = PyObject_GetAttrString(_pymsg, "freefall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->freefall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ground_contact
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground_contact");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ground_contact = (Py_True == field);
    Py_DECREF(field);
  }
  {  // maybe_landed
    PyObject * field = PyObject_GetAttrString(_pymsg, "maybe_landed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->maybe_landed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // landed
    PyObject * field = PyObject_GetAttrString(_pymsg, "landed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->landed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_ground_effect
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_ground_effect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_ground_effect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_descend
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_descend");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_descend = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_low_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_low_throttle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_low_throttle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vertical_movement
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_movement");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vertical_movement = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horizontal_movement
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_movement");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->horizontal_movement = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rotational_movement
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotational_movement");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rotational_movement = (Py_True == field);
    Py_DECREF(field);
  }
  {  // close_to_ground_or_skipped_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "close_to_ground_or_skipped_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->close_to_ground_or_skipped_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // at_rest
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_rest");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->at_rest = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_land_detected__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleLandDetected */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_land_detected");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleLandDetected");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleLandDetected * ros_message = (px4_msgs__msg__VehicleLandDetected *)raw_ros_message;
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
  {  // freefall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->freefall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freefall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground_contact
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ground_contact ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground_contact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maybe_landed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->maybe_landed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maybe_landed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // landed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->landed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "landed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_ground_effect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_ground_effect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_ground_effect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_descend
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_descend ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_descend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_low_throttle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_low_throttle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_low_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_movement
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vertical_movement ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_movement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_movement
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->horizontal_movement ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_movement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotational_movement
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rotational_movement ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotational_movement", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // close_to_ground_or_skipped_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->close_to_ground_or_skipped_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "close_to_ground_or_skipped_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_rest
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->at_rest ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_rest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
