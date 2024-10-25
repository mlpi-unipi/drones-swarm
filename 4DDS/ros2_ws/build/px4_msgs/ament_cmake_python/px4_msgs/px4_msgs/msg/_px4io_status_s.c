// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/Px4ioStatus.idl
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
#include "px4_msgs/msg/detail/px4io_status__struct.h"
#include "px4_msgs/msg/detail/px4io_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__px4io_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("px4_msgs.msg._px4io_status.Px4ioStatus", full_classname_dest, 38) == 0);
  }
  px4_msgs__msg__Px4ioStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // free_memory_bytes
    PyObject * field = PyObject_GetAttrString(_pymsg, "free_memory_bytes");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->free_memory_bytes = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rssi_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rssi_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status_arm_sync
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_arm_sync");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_arm_sync = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_fmu_initialized
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_fmu_initialized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_fmu_initialized = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_fmu_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_fmu_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_fmu_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_init_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_init_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_init_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_outputs_armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_outputs_armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_outputs_armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_raw_pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_raw_pwm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_raw_pwm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_rc_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_rc_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_rc_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_rc_dsm
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_rc_dsm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_rc_dsm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_rc_ppm
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_rc_ppm");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_rc_ppm = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_rc_sbus
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_rc_sbus");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_rc_sbus = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_rc_st24
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_rc_st24");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_rc_st24 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_rc_sumd
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_rc_sumd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_rc_sumd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // status_safety_button_event
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_safety_button_event");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status_safety_button_event = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alarm_pwm_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_pwm_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alarm_pwm_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alarm_rc_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm_rc_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alarm_rc_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_failsafe_custom
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_failsafe_custom");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_failsafe_custom = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_fmu_armed
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_fmu_armed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_fmu_armed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_fmu_prearmed
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_fmu_prearmed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_fmu_prearmed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_force_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_force_failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_force_failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_io_arm_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_io_arm_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_io_arm_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_lockdown
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_lockdown");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_lockdown = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arming_termination_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_termination_failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arming_termination_failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pwm
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 8;
      uint16_t * dest = ros_message->pwm;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // pwm_disarmed
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_disarmed");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 8;
      uint16_t * dest = ros_message->pwm_disarmed;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // pwm_failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_failsafe");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 8;
      uint16_t * dest = ros_message->pwm_failsafe;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // pwm_rate_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "pwm_rate_hz");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 8;
      uint16_t * dest = ros_message->pwm_rate_hz;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // raw_inputs
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_inputs");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT16);
      Py_ssize_t size = 18;
      uint16_t * dest = ros_message->raw_inputs;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__px4io_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Px4ioStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._px4io_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Px4ioStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__Px4ioStatus * ros_message = (px4_msgs__msg__Px4ioStatus *)raw_ros_message;
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
  {  // free_memory_bytes
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->free_memory_bytes);
    {
      int rc = PyObject_SetAttrString(_pymessage, "free_memory_bytes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rssi_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rssi_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_arm_sync
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_arm_sync ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_arm_sync", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_fmu_initialized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_fmu_initialized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_fmu_initialized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_fmu_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_fmu_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_fmu_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_init_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_init_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_init_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_outputs_armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_outputs_armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_outputs_armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_raw_pwm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_raw_pwm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_raw_pwm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_rc_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_rc_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_rc_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_rc_dsm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_rc_dsm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_rc_dsm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_rc_ppm
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_rc_ppm ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_rc_ppm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_rc_sbus
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_rc_sbus ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_rc_sbus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_rc_st24
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_rc_st24 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_rc_st24", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_rc_sumd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_rc_sumd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_rc_sumd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_safety_button_event
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status_safety_button_event ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_safety_button_event", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alarm_pwm_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alarm_pwm_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_pwm_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alarm_rc_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alarm_rc_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm_rc_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_failsafe_custom
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_failsafe_custom ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_failsafe_custom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_fmu_armed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_fmu_armed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_fmu_armed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_fmu_prearmed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_fmu_prearmed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_fmu_prearmed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_force_failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_force_failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_force_failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_io_arm_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_io_arm_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_io_arm_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_lockdown
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_lockdown ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_lockdown", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_termination_failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arming_termination_failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_termination_failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pwm
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pwm");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->pwm[0]);
    memcpy(dst, src, 8 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // pwm_disarmed
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pwm_disarmed");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->pwm_disarmed[0]);
    memcpy(dst, src, 8 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // pwm_failsafe
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pwm_failsafe");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->pwm_failsafe[0]);
    memcpy(dst, src, 8 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // pwm_rate_hz
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pwm_rate_hz");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->pwm_rate_hz[0]);
    memcpy(dst, src, 8 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // raw_inputs
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "raw_inputs");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->raw_inputs[0]);
    memcpy(dst, src, 18 * sizeof(uint16_t));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
