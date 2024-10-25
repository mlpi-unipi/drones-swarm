// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/SensorGnssRelative.idl
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
#include "px4_msgs/msg/detail/sensor_gnss_relative__struct.h"
#include "px4_msgs/msg/detail/sensor_gnss_relative__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__sensor_gnss_relative__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._sensor_gnss_relative.SensorGnssRelative", full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__SensorGnssRelative * ros_message = _ros_message;
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
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_utc_usec
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_utc_usec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_utc_usec = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // reference_station_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_station_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_station_id = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
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
      float * dest = ros_message->position;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // position_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_accuracy");
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
      float * dest = ros_message->position_accuracy;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_accuracy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_accuracy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accuracy_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "accuracy_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accuracy_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gnss_fix_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "gnss_fix_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gnss_fix_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // differential_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "differential_solution");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->differential_solution = (Py_True == field);
    Py_DECREF(field);
  }
  {  // relative_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->relative_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // carrier_solution_floating
    PyObject * field = PyObject_GetAttrString(_pymsg, "carrier_solution_floating");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->carrier_solution_floating = (Py_True == field);
    Py_DECREF(field);
  }
  {  // carrier_solution_fixed
    PyObject * field = PyObject_GetAttrString(_pymsg, "carrier_solution_fixed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->carrier_solution_fixed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // moving_base_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "moving_base_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->moving_base_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reference_position_miss
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_position_miss");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reference_position_miss = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reference_observations_miss
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_observations_miss");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reference_observations_miss = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heading_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heading_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // relative_position_normalized
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_position_normalized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->relative_position_normalized = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__sensor_gnss_relative__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorGnssRelative */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._sensor_gnss_relative");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorGnssRelative");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__SensorGnssRelative * ros_message = (px4_msgs__msg__SensorGnssRelative *)raw_ros_message;
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
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_utc_usec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->time_utc_usec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_utc_usec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_station_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reference_station_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_station_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position");
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
    float * src = &(ros_message->position[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // position_accuracy
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "position_accuracy");
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
    float * src = &(ros_message->position_accuracy[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_accuracy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_accuracy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_accuracy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accuracy_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accuracy_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accuracy_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gnss_fix_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gnss_fix_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gnss_fix_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // differential_solution
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->differential_solution ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "differential_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->relative_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carrier_solution_floating
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->carrier_solution_floating ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carrier_solution_floating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // carrier_solution_fixed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->carrier_solution_fixed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "carrier_solution_fixed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // moving_base_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->moving_base_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "moving_base_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_position_miss
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reference_position_miss ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_position_miss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_observations_miss
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reference_observations_miss ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_observations_miss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heading_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_position_normalized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->relative_position_normalized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_position_normalized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
