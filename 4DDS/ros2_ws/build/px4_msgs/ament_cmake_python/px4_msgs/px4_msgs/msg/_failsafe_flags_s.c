// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/FailsafeFlags.idl
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
#include "px4_msgs/msg/detail/failsafe_flags__struct.h"
#include "px4_msgs/msg/detail/failsafe_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__failsafe_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("px4_msgs.msg._failsafe_flags.FailsafeFlags", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__FailsafeFlags * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_angular_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_angular_velocity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_angular_velocity = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_attitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_attitude");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_attitude = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_local_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_alt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_local_alt = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_local_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_local_position_relaxed
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_local_position_relaxed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_local_position_relaxed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_global_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_global_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_global_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_mission
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_mission");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_mission = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_offboard_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_offboard_signal");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_offboard_signal = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_home_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_home_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_home_position = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_wind_and_flight_time_compliance
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_wind_and_flight_time_compliance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_wind_and_flight_time_compliance = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_prevent_arming
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_prevent_arming");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_prevent_arming = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_manual_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_manual_control");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_manual_control = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode_req_other
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode_req_other");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode_req_other = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // angular_velocity_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->angular_velocity_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attitude_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_altitude_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_altitude_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_altitude_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_position_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_position_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_position_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_position_invalid_relaxed
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_position_invalid_relaxed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_position_invalid_relaxed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_velocity_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_velocity_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_velocity_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // global_position_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_position_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->global_position_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // auto_mission_missing
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_mission_missing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->auto_mission_missing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // offboard_control_signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "offboard_control_signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->offboard_control_signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // home_position_invalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_position_invalid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->home_position_invalid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // manual_control_signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "manual_control_signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->manual_control_signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gcs_connection_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcs_connection_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gcs_connection_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // battery_low_remaining_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_low_remaining_time");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_low_remaining_time = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_unhealthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_unhealthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_unhealthy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // geofence_breached
    PyObject * field = PyObject_GetAttrString(_pymsg, "geofence_breached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->geofence_breached = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mission_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mission_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_fixed_wing_system_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_fixed_wing_system_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_fixed_wing_system_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wind_limit_exceeded
    PyObject * field = PyObject_GetAttrString(_pymsg, "wind_limit_exceeded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wind_limit_exceeded = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flight_time_limit_exceeded
    PyObject * field = PyObject_GetAttrString(_pymsg, "flight_time_limit_exceeded");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flight_time_limit_exceeded = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_position_accuracy_low
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_position_accuracy_low");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_position_accuracy_low = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_critical_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_critical_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_critical_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_esc_arming_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_esc_arming_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_esc_arming_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_imbalanced_prop
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_imbalanced_prop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_imbalanced_prop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fd_motor_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fd_motor_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fd_motor_failure = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__failsafe_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FailsafeFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._failsafe_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FailsafeFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__FailsafeFlags * ros_message = (px4_msgs__msg__FailsafeFlags *)raw_ros_message;
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
  {  // mode_req_angular_velocity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_angular_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_angular_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_attitude
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_attitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_attitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_alt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_local_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_local_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_local_position_relaxed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_local_position_relaxed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_local_position_relaxed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_global_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_global_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_global_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_mission
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_mission);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_mission", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_offboard_signal
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_offboard_signal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_offboard_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_home_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_home_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_home_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_wind_and_flight_time_compliance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_wind_and_flight_time_compliance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_wind_and_flight_time_compliance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_prevent_arming
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_prevent_arming);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_prevent_arming", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_manual_control
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_manual_control);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_manual_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode_req_other
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode_req_other);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode_req_other", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->angular_velocity_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_altitude_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_altitude_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_altitude_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_position_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_position_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_position_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_position_invalid_relaxed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_position_invalid_relaxed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_position_invalid_relaxed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_velocity_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_velocity_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_velocity_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_position_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->global_position_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_position_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_mission_missing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->auto_mission_missing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_mission_missing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offboard_control_signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->offboard_control_signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offboard_control_signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_position_invalid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->home_position_invalid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_position_invalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manual_control_signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->manual_control_signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manual_control_signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcs_connection_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gcs_connection_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcs_connection_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_low_remaining_time
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_low_remaining_time ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_low_remaining_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_unhealthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_unhealthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_unhealthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // geofence_breached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->geofence_breached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "geofence_breached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mission_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mission_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_fixed_wing_system_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_fixed_wing_system_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_fixed_wing_system_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wind_limit_exceeded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wind_limit_exceeded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wind_limit_exceeded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flight_time_limit_exceeded
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flight_time_limit_exceeded ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flight_time_limit_exceeded", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_position_accuracy_low
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_position_accuracy_low ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_position_accuracy_low", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_critical_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_critical_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_critical_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_esc_arming_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_esc_arming_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_esc_arming_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_imbalanced_prop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_imbalanced_prop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_imbalanced_prop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fd_motor_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fd_motor_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fd_motor_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
