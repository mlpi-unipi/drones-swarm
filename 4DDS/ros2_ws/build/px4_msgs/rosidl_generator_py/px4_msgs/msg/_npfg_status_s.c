// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/NpfgStatus.idl
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
#include "px4_msgs/msg/detail/npfg_status__struct.h"
#include "px4_msgs/msg/detail/npfg_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__npfg_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("px4_msgs.msg._npfg_status.NpfgStatus", full_classname_dest, 36) == 0);
  }
  px4_msgs__msg__NpfgStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // wind_est_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "wind_est_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wind_est_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lat_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_accel_ff
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_accel_ff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_accel_ff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing_feas
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing_feas");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing_feas = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing_feas_on_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing_feas_on_track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing_feas_on_track = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // signed_track_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "signed_track_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->signed_track_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_error_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_error_bound");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->track_error_bound = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airspeed_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "airspeed_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->airspeed_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bearing
    PyObject * field = PyObject_GetAttrString(_pymsg, "bearing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bearing = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_ground_speed_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_ground_speed_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_ground_speed_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // adapted_period
    PyObject * field = PyObject_GetAttrString(_pymsg, "adapted_period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->adapted_period = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_gain");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_gain = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_const
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_const");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_const = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_run_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_run_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_run_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__npfg_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NpfgStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._npfg_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NpfgStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__NpfgStatus * ros_message = (px4_msgs__msg__NpfgStatus *)raw_ros_message;
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
  {  // wind_est_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wind_est_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wind_est_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_accel_ff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_accel_ff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_accel_ff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing_feas
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing_feas);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing_feas", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing_feas_on_track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing_feas_on_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing_feas_on_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signed_track_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->signed_track_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signed_track_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_error_bound
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->track_error_bound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_error_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airspeed_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->airspeed_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airspeed_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bearing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bearing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bearing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_ground_speed_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_ground_speed_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_ground_speed_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adapted_period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->adapted_period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adapted_period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_gain
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_gain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_const
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_const);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_const", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_run_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_run_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_run_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
