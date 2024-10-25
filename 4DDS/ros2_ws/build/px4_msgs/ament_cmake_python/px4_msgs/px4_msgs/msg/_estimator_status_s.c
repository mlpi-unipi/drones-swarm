// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorStatus.idl
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
#include "px4_msgs/msg/detail/estimator_status__struct.h"
#include "px4_msgs/msg/detail/estimator_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("px4_msgs.msg._estimator_status.EstimatorStatus", full_classname_dest, 46) == 0);
  }
  px4_msgs__msg__EstimatorStatus * ros_message = _ros_message;
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
  {  // output_tracking_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "output_tracking_error");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->output_tracking_error;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gps_check_fail_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_check_fail_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_check_fail_flags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_mode_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_mode_flags = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // filter_fault_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "filter_fault_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->filter_fault_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos_horiz_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_horiz_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_horiz_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_vert_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_vert_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_vert_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // innovation_check_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "innovation_check_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->innovation_check_flags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mag_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hgt_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "hgt_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hgt_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tas_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "tas_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tas_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hagl_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "hagl_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hagl_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // beta_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "beta_test_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_test_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // solution_status_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solution_status_flags = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_count_vel_ne
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_count_vel_ne");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_count_vel_ne = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_count_vel_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_count_vel_d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_count_vel_d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_count_pos_ne
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_count_pos_ne");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_count_pos_ne = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_count_pod_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_count_pod_d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_count_pod_d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reset_count_quat
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_count_quat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reset_count_quat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_slip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_slip = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pre_flt_fail_innov_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flt_fail_innov_heading");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flt_fail_innov_heading = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pre_flt_fail_innov_vel_horiz
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flt_fail_innov_vel_horiz");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flt_fail_innov_vel_horiz = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pre_flt_fail_innov_vel_vert
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flt_fail_innov_vel_vert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flt_fail_innov_vel_vert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pre_flt_fail_innov_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flt_fail_innov_height");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flt_fail_innov_height = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pre_flt_fail_mag_field_disturbed
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flt_fail_mag_field_disturbed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flt_fail_mag_field_disturbed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accel_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gyro_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // baro_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baro_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mag_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mag_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // health_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "health_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->health_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timeout_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timeout_flags = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mag_inclination_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_inclination_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_inclination_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_inclination_ref_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_inclination_ref_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_inclination_ref_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_strength_gs
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_strength_gs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_strength_gs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_strength_ref_gs
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_strength_ref_gs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_strength_ref_gs = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorStatus * ros_message = (px4_msgs__msg__EstimatorStatus *)raw_ros_message;
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
  {  // output_tracking_error
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "output_tracking_error");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->output_tracking_error[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // gps_check_fail_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_check_fail_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_check_fail_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->control_mode_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filter_fault_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->filter_fault_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filter_fault_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_horiz_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_horiz_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_horiz_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_vert_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_vert_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_vert_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // innovation_check_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->innovation_check_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "innovation_check_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hgt_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hgt_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hgt_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tas_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tas_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tas_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hagl_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hagl_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hagl_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beta_test_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_test_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_test_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_status_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->solution_status_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_count_vel_ne
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reset_count_vel_ne);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_count_vel_ne", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_count_vel_d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reset_count_vel_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_count_vel_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_count_pos_ne
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reset_count_pos_ne);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_count_pos_ne", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_count_pod_d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reset_count_pod_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_count_pod_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_count_quat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reset_count_quat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_count_quat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_slip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_slip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flt_fail_innov_heading
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flt_fail_innov_heading ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flt_fail_innov_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flt_fail_innov_vel_horiz
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flt_fail_innov_vel_horiz ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flt_fail_innov_vel_horiz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flt_fail_innov_vel_vert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flt_fail_innov_vel_vert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flt_fail_innov_vel_vert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flt_fail_innov_height
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flt_fail_innov_height ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flt_fail_innov_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flt_fail_mag_field_disturbed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flt_fail_mag_field_disturbed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flt_fail_mag_field_disturbed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accel_device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gyro_device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baro_device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->baro_device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro_device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mag_device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // health_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->health_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "health_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timeout_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_inclination_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_inclination_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_inclination_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_inclination_ref_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_inclination_ref_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_inclination_ref_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_strength_gs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_strength_gs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_strength_gs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_strength_ref_gs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_strength_ref_gs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_strength_ref_gs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
