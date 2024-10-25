// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
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
#include "px4_msgs/msg/detail/estimator_status_flags__struct.h"
#include "px4_msgs/msg/detail/estimator_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._estimator_status_flags.EstimatorStatusFlags", full_classname_dest, 57) == 0);
  }
  px4_msgs__msg__EstimatorStatusFlags * ros_message = _ros_message;
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
  {  // control_status_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_status_changes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_status_changes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cs_tilt_align
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_tilt_align");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_tilt_align = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_yaw_align
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_yaw_align");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_yaw_align = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_gps
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_gps");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_gps = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_opt_flow
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_opt_flow");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_opt_flow = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_hdg
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_hdg");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_hdg = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_3d
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_3d");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_3d = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_dec
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_dec");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_dec = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_in_air
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_in_air");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_in_air = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_wind
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_wind");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_wind = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_baro_hgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_baro_hgt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_baro_hgt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_rng_hgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_rng_hgt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_rng_hgt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_gps_hgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_gps_hgt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_gps_hgt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_ev_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_ev_pos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_ev_pos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_ev_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_ev_yaw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_ev_yaw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_ev_hgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_ev_hgt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_ev_hgt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_fuse_beta
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_fuse_beta");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_fuse_beta = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_field_disturbed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_field_disturbed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_field_disturbed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_fixed_wing
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_fixed_wing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_fixed_wing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_fuse_aspd
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_fuse_aspd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_fuse_aspd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_gnd_effect
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_gnd_effect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_gnd_effect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_rng_stuck
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_rng_stuck");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_rng_stuck = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_gps_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_gps_yaw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_gps_yaw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_aligned_in_flight
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_aligned_in_flight");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_aligned_in_flight = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_ev_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_ev_vel");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_ev_vel = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_synthetic_mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_synthetic_mag_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_synthetic_mag_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_vehicle_at_rest
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_vehicle_at_rest");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_vehicle_at_rest = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_gps_yaw_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_gps_yaw_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_gps_yaw_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_rng_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_rng_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_rng_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_inertial_dead_reckoning
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_inertial_dead_reckoning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_inertial_dead_reckoning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_wind_dead_reckoning
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_wind_dead_reckoning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_wind_dead_reckoning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_rng_kin_consistent
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_rng_kin_consistent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_rng_kin_consistent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_fake_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_fake_pos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_fake_pos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_fake_hgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_fake_hgt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_fake_hgt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_gravity_vector
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_gravity_vector");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_gravity_vector = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_ev_yaw_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_ev_yaw_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_ev_yaw_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_mag_heading_consistent
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_mag_heading_consistent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_mag_heading_consistent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cs_aux_gpos
    PyObject * field = PyObject_GetAttrString(_pymsg, "cs_aux_gpos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cs_aux_gpos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fault_status_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "fault_status_changes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fault_status_changes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fs_bad_mag_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_mag_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_mag_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_mag_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_mag_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_mag_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_mag_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_mag_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_hdg
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_hdg");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_hdg = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_mag_decl
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_mag_decl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_mag_decl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_airspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_airspeed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_airspeed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_sideslip
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_sideslip");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_sideslip = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_optflow_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_optflow_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_optflow_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_optflow_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_optflow_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_optflow_y = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_acc_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_acc_bias");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_acc_bias = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_acc_vertical
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_acc_vertical");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_acc_vertical = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fs_bad_acc_clipping
    PyObject * field = PyObject_GetAttrString(_pymsg, "fs_bad_acc_clipping");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fs_bad_acc_clipping = (Py_True == field);
    Py_DECREF(field);
  }
  {  // innovation_fault_status_changes
    PyObject * field = PyObject_GetAttrString(_pymsg, "innovation_fault_status_changes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->innovation_fault_status_changes = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reject_hor_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_hor_vel");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_hor_vel = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_ver_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_ver_vel");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_ver_vel = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_hor_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_hor_pos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_hor_pos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_ver_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_ver_pos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_ver_pos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_yaw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_yaw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_airspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_airspeed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_airspeed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_sideslip
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_sideslip");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_sideslip = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_hagl
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_hagl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_hagl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_optflow_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_optflow_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_optflow_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reject_optflow_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_optflow_y");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_optflow_y = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorStatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorStatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorStatusFlags * ros_message = (px4_msgs__msg__EstimatorStatusFlags *)raw_ros_message;
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
  {  // control_status_changes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_status_changes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_status_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_tilt_align
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_tilt_align ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_tilt_align", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_yaw_align
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_yaw_align ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_yaw_align", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_gps
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_gps ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_gps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_opt_flow
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_opt_flow ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_opt_flow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_hdg
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_hdg ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_hdg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_3d
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_3d ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_3d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_dec
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_dec ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_dec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_in_air
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_in_air ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_in_air", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_wind
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_wind ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_wind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_baro_hgt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_baro_hgt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_baro_hgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_rng_hgt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_rng_hgt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_rng_hgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_gps_hgt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_gps_hgt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_gps_hgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_ev_pos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_ev_pos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_ev_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_ev_yaw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_ev_yaw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_ev_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_ev_hgt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_ev_hgt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_ev_hgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_fuse_beta
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_fuse_beta ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_fuse_beta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_field_disturbed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_field_disturbed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_field_disturbed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_fixed_wing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_fixed_wing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_fixed_wing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_fuse_aspd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_fuse_aspd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_fuse_aspd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_gnd_effect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_gnd_effect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_gnd_effect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_rng_stuck
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_rng_stuck ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_rng_stuck", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_gps_yaw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_gps_yaw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_gps_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_aligned_in_flight
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_aligned_in_flight ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_aligned_in_flight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_ev_vel
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_ev_vel ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_ev_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_synthetic_mag_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_synthetic_mag_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_synthetic_mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_vehicle_at_rest
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_vehicle_at_rest ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_vehicle_at_rest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_gps_yaw_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_gps_yaw_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_gps_yaw_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_rng_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_rng_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_rng_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_inertial_dead_reckoning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_inertial_dead_reckoning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_inertial_dead_reckoning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_wind_dead_reckoning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_wind_dead_reckoning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_wind_dead_reckoning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_rng_kin_consistent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_rng_kin_consistent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_rng_kin_consistent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_fake_pos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_fake_pos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_fake_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_fake_hgt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_fake_hgt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_fake_hgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_gravity_vector
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_gravity_vector ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_gravity_vector", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_ev_yaw_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_ev_yaw_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_ev_yaw_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_mag_heading_consistent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_mag_heading_consistent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_mag_heading_consistent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cs_aux_gpos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cs_aux_gpos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cs_aux_gpos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fault_status_changes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fault_status_changes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fault_status_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_mag_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_mag_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_mag_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_mag_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_mag_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_mag_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_mag_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_mag_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_hdg
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_hdg ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_hdg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_mag_decl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_mag_decl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_mag_decl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_airspeed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_airspeed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_airspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_sideslip
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_sideslip ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_sideslip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_optflow_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_optflow_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_optflow_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_optflow_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_optflow_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_optflow_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_acc_bias
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_acc_bias ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_acc_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_acc_vertical
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_acc_vertical ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_acc_vertical", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fs_bad_acc_clipping
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fs_bad_acc_clipping ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fs_bad_acc_clipping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innovation_fault_status_changes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->innovation_fault_status_changes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innovation_fault_status_changes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_hor_vel
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_hor_vel ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_hor_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_ver_vel
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_ver_vel ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_ver_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_hor_pos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_hor_pos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_hor_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_ver_pos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_ver_pos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_ver_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_yaw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_yaw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_airspeed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_airspeed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_airspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_sideslip
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_sideslip ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_sideslip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_hagl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_hagl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_hagl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_optflow_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_optflow_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_optflow_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_optflow_y
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_optflow_y ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_optflow_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
