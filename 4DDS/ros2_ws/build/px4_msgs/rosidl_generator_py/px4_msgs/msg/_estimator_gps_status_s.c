// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
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
#include "px4_msgs/msg/detail/estimator_gps_status__struct.h"
#include "px4_msgs/msg/detail/estimator_gps_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_gps_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._estimator_gps_status.EstimatorGpsStatus", full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__EstimatorGpsStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_sample
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_sample");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp_sample = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // checks_passed
    PyObject * field = PyObject_GetAttrString(_pymsg, "checks_passed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->checks_passed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_gps_fix
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_gps_fix");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_gps_fix = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_min_sat_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_min_sat_count");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_min_sat_count = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_pdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_pdop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_pdop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_horz_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_horz_err");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_horz_err = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_vert_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_vert_err");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_vert_err = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_spd_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_spd_err");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_spd_err = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_horz_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_horz_drift");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_horz_drift = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_vert_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_vert_drift");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_vert_drift = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_horz_spd_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_horz_spd_err");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_horz_spd_err = (Py_True == field);
    Py_DECREF(field);
  }
  {  // check_fail_max_vert_spd_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_fail_max_vert_spd_err");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->check_fail_max_vert_spd_err = (Py_True == field);
    Py_DECREF(field);
  }
  {  // position_drift_rate_horizontal_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_drift_rate_horizontal_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_drift_rate_horizontal_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_drift_rate_vertical_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_drift_rate_vertical_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_drift_rate_vertical_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // filtered_horizontal_speed_m_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "filtered_horizontal_speed_m_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->filtered_horizontal_speed_m_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_gps_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorGpsStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_gps_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorGpsStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorGpsStatus * ros_message = (px4_msgs__msg__EstimatorGpsStatus *)raw_ros_message;
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
  {  // timestamp_sample
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp_sample);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_sample", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // checks_passed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->checks_passed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "checks_passed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_gps_fix
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_gps_fix ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_gps_fix", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_min_sat_count
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_min_sat_count ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_min_sat_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_pdop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_pdop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_pdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_horz_err
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_horz_err ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_horz_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_vert_err
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_vert_err ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_vert_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_spd_err
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_spd_err ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_spd_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_horz_drift
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_horz_drift ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_horz_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_vert_drift
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_vert_drift ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_vert_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_horz_spd_err
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_horz_spd_err ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_horz_spd_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_fail_max_vert_spd_err
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->check_fail_max_vert_spd_err ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_fail_max_vert_spd_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_drift_rate_horizontal_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_drift_rate_horizontal_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_drift_rate_horizontal_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_drift_rate_vertical_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_drift_rate_vertical_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_drift_rate_vertical_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filtered_horizontal_speed_m_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->filtered_horizontal_speed_m_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filtered_horizontal_speed_m_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
