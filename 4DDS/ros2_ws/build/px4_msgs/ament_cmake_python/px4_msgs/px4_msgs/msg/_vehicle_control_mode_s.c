// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleControlMode.idl
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
#include "px4_msgs/msg/detail/vehicle_control_mode__struct.h"
#include "px4_msgs/msg/detail/vehicle_control_mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_control_mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("px4_msgs.msg._vehicle_control_mode.VehicleControlMode", full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__VehicleControlMode * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // flag_armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_multicopter_position_control_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_multicopter_position_control_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_multicopter_position_control_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_manual_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_manual_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_manual_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_auto_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_auto_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_auto_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_offboard_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_offboard_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_offboard_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_position_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_position_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_position_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_velocity_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_velocity_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_velocity_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_altitude_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_altitude_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_altitude_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_climb_rate_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_climb_rate_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_climb_rate_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_acceleration_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_acceleration_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_acceleration_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_attitude_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_attitude_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_attitude_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_rates_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_rates_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_rates_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_allocation_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_allocation_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_allocation_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flag_control_termination_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "flag_control_termination_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flag_control_termination_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // source_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "source_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_control_mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleControlMode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_control_mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleControlMode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleControlMode * ros_message = (px4_msgs__msg__VehicleControlMode *)raw_ros_message;
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
  {  // flag_armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_multicopter_position_control_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_multicopter_position_control_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_multicopter_position_control_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_manual_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_manual_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_manual_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_auto_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_auto_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_auto_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_offboard_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_offboard_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_offboard_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_position_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_position_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_position_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_velocity_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_velocity_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_velocity_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_altitude_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_altitude_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_altitude_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_climb_rate_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_climb_rate_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_climb_rate_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_acceleration_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_acceleration_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_acceleration_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_attitude_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_attitude_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_attitude_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_rates_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_rates_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_rates_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_allocation_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_allocation_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_allocation_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flag_control_termination_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flag_control_termination_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flag_control_termination_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
