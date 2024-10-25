// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
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
#include "px4_msgs/msg/detail/vehicle_imu_status__struct.h"
#include "px4_msgs/msg/detail/vehicle_imu_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_imu_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("px4_msgs.msg._vehicle_imu_status.VehicleImuStatus", full_classname_dest, 49) == 0);
  }
  px4_msgs__msg__VehicleImuStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
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
  {  // accel_clipping
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_clipping");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT32);
      Py_ssize_t size = 3;
      uint32_t * dest = ros_message->accel_clipping;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gyro_clipping
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_clipping");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT32);
      Py_ssize_t size = 3;
      uint32_t * dest = ros_message->gyro_clipping;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // accel_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accel_error_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gyro_error_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_error_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_error_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accel_rate_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_rate_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_rate_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_rate_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_rate_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_rate_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_raw_rate_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_raw_rate_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_raw_rate_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_raw_rate_hz
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_raw_rate_hz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_raw_rate_hz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_vibration_metric
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_vibration_metric");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_vibration_metric = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_vibration_metric
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_vibration_metric");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_vibration_metric = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_angle_coning_metric
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_angle_coning_metric");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_angle_coning_metric = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mean_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_accel");
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
      float * dest = ros_message->mean_accel;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // mean_gyro
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean_gyro");
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
      float * dest = ros_message->mean_gyro;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // var_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "var_accel");
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
      float * dest = ros_message->var_accel;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // var_gyro
    PyObject * field = PyObject_GetAttrString(_pymsg, "var_gyro");
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
      float * dest = ros_message->var_gyro;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // temperature_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_accel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_gyro
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_gyro");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_gyro = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_imu_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleImuStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_imu_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleImuStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleImuStatus * ros_message = (px4_msgs__msg__VehicleImuStatus *)raw_ros_message;
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
  {  // accel_clipping
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "accel_clipping");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->accel_clipping[0]);
    memcpy(dst, src, 3 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // gyro_clipping
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "gyro_clipping");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->gyro_clipping[0]);
    memcpy(dst, src, 3 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // accel_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accel_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_error_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gyro_error_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_error_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_rate_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_rate_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_rate_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_rate_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_rate_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_rate_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_raw_rate_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_raw_rate_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_raw_rate_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_raw_rate_hz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_raw_rate_hz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_raw_rate_hz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_vibration_metric
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_vibration_metric);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_vibration_metric", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_vibration_metric
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_vibration_metric);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_vibration_metric", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_angle_coning_metric
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_angle_coning_metric);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_angle_coning_metric", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mean_accel
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "mean_accel");
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
    float * src = &(ros_message->mean_accel[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // mean_gyro
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "mean_gyro");
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
    float * src = &(ros_message->mean_gyro[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // var_accel
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "var_accel");
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
    float * src = &(ros_message->var_accel[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // var_gyro
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "var_gyro");
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
    float * src = &(ros_message->var_gyro[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // temperature_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_gyro
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_gyro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_gyro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
