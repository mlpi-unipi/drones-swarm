// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
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
#include "px4_msgs/msg/detail/estimator_event_flags__struct.h"
#include "px4_msgs/msg/detail/estimator_event_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_event_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._estimator_event_flags.EstimatorEventFlags", full_classname_dest, 55) == 0);
  }
  px4_msgs__msg__EstimatorEventFlags * ros_message = _ros_message;
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
  {  // information_event_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_event_changes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->information_event_changes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_checks_passed
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_checks_passed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_checks_passed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_vel_to_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_vel_to_gps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_vel_to_gps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_vel_to_flow
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_vel_to_flow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_vel_to_flow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_vel_to_vision
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_vel_to_vision");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_vel_to_vision = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_vel_to_zero
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_vel_to_zero");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_vel_to_zero = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_pos_to_last_known
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_pos_to_last_known");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_pos_to_last_known = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_pos_to_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_pos_to_gps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_pos_to_gps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_pos_to_vision
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_pos_to_vision");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_pos_to_vision = (Py_True == field);
    Py_DECREF(field);
  }
  {  // starting_gps_fusion
    PyObject * field = PyObject_GetAttrString(_pymsg, "starting_gps_fusion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->starting_gps_fusion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // starting_vision_pos_fusion
    PyObject * field = PyObject_GetAttrString(_pymsg, "starting_vision_pos_fusion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->starting_vision_pos_fusion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // starting_vision_vel_fusion
    PyObject * field = PyObject_GetAttrString(_pymsg, "starting_vision_vel_fusion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->starting_vision_vel_fusion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // starting_vision_yaw_fusion
    PyObject * field = PyObject_GetAttrString(_pymsg, "starting_vision_yaw_fusion");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->starting_vision_yaw_fusion = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yaw_aligned_to_imu_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_aligned_to_imu_gps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->yaw_aligned_to_imu_gps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_hgt_to_baro
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_hgt_to_baro");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_hgt_to_baro = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_hgt_to_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_hgt_to_gps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_hgt_to_gps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_hgt_to_rng
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_hgt_to_rng");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_hgt_to_rng = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reset_hgt_to_ev
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_hgt_to_ev");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reset_hgt_to_ev = (Py_True == field);
    Py_DECREF(field);
  }
  {  // warning_event_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning_event_changes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning_event_changes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_quality_poor
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_quality_poor");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_quality_poor = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_fusion_timout
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_fusion_timout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_fusion_timout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_data_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_data_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_data_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gps_data_stopped_using_alternate
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_data_stopped_using_alternate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gps_data_stopped_using_alternate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // height_sensor_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_sensor_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->height_sensor_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stopping_navigation
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopping_navigation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stopping_navigation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // invalid_accel_bias_cov_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "invalid_accel_bias_cov_reset");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->invalid_accel_bias_cov_reset = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bad_yaw_using_gps_course
    PyObject * field = PyObject_GetAttrString(_pymsg, "bad_yaw_using_gps_course");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bad_yaw_using_gps_course = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stopping_mag_use
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopping_mag_use");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stopping_mag_use = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vision_data_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "vision_data_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vision_data_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_yaw_reset_mag_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_yaw_reset_mag_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_yaw_reset_mag_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_yaw_reset_gps_yaw_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_yaw_reset_gps_yaw_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_yaw_reset_gps_yaw_stopped = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_event_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorEventFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_event_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorEventFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorEventFlags * ros_message = (px4_msgs__msg__EstimatorEventFlags *)raw_ros_message;
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
  {  // information_event_changes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->information_event_changes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_event_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_checks_passed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_checks_passed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_checks_passed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_vel_to_gps
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_vel_to_gps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_vel_to_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_vel_to_flow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_vel_to_flow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_vel_to_flow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_vel_to_vision
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_vel_to_vision ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_vel_to_vision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_vel_to_zero
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_vel_to_zero ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_vel_to_zero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_pos_to_last_known
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_pos_to_last_known ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_pos_to_last_known", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_pos_to_gps
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_pos_to_gps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_pos_to_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_pos_to_vision
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_pos_to_vision ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_pos_to_vision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starting_gps_fusion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->starting_gps_fusion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starting_gps_fusion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starting_vision_pos_fusion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->starting_vision_pos_fusion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starting_vision_pos_fusion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starting_vision_vel_fusion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->starting_vision_vel_fusion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starting_vision_vel_fusion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // starting_vision_yaw_fusion
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->starting_vision_yaw_fusion ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "starting_vision_yaw_fusion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_aligned_to_imu_gps
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->yaw_aligned_to_imu_gps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_aligned_to_imu_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_hgt_to_baro
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_hgt_to_baro ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_hgt_to_baro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_hgt_to_gps
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_hgt_to_gps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_hgt_to_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_hgt_to_rng
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_hgt_to_rng ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_hgt_to_rng", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_hgt_to_ev
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reset_hgt_to_ev ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_hgt_to_ev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning_event_changes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->warning_event_changes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning_event_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_quality_poor
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_quality_poor ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_quality_poor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_fusion_timout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_fusion_timout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_fusion_timout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_data_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_data_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_data_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_data_stopped_using_alternate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gps_data_stopped_using_alternate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_data_stopped_using_alternate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_sensor_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->height_sensor_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_sensor_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopping_navigation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stopping_navigation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopping_navigation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // invalid_accel_bias_cov_reset
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->invalid_accel_bias_cov_reset ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "invalid_accel_bias_cov_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bad_yaw_using_gps_course
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bad_yaw_using_gps_course ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bad_yaw_using_gps_course", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopping_mag_use
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stopping_mag_use ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stopping_mag_use", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vision_data_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vision_data_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vision_data_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_yaw_reset_mag_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_yaw_reset_mag_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_yaw_reset_mag_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_yaw_reset_gps_yaw_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_yaw_reset_gps_yaw_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_yaw_reset_gps_yaw_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
