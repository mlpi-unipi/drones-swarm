// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
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
#include "px4_msgs/msg/detail/estimator_sensor_bias__struct.h"
#include "px4_msgs/msg/detail/estimator_sensor_bias__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_sensor_bias__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._estimator_sensor_bias.EstimatorSensorBias", full_classname_dest, 55) == 0);
  }
  px4_msgs__msg__EstimatorSensorBias * ros_message = _ros_message;
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
  {  // gyro_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gyro_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gyro_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias");
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
      float * dest = ros_message->gyro_bias;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gyro_bias_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_bias_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_bias_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_variance");
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
      float * dest = ros_message->gyro_bias_variance;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gyro_bias_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gyro_bias_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gyro_bias_stable
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_stable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gyro_bias_stable = (Py_True == field);
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
  {  // accel_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_bias");
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
      float * dest = ros_message->accel_bias;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // accel_bias_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_bias_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_bias_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_bias_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_bias_variance");
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
      float * dest = ros_message->accel_bias_variance;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // accel_bias_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_bias_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_bias_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_bias_stable
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_bias_stable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_bias_stable = (Py_True == field);
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
  {  // mag_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_bias");
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
      float * dest = ros_message->mag_bias;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // mag_bias_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_bias_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_bias_limit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_bias_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_bias_variance");
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
      float * dest = ros_message->mag_bias_variance;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // mag_bias_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_bias_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_bias_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mag_bias_stable
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_bias_stable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mag_bias_stable = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_sensor_bias__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorSensorBias */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_sensor_bias");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorSensorBias");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorSensorBias * ros_message = (px4_msgs__msg__EstimatorSensorBias *)raw_ros_message;
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
  {  // gyro_bias
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "gyro_bias");
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
    float * src = &(ros_message->gyro_bias[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // gyro_bias_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_bias_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_bias_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_bias_variance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "gyro_bias_variance");
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
    float * src = &(ros_message->gyro_bias_variance[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // gyro_bias_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gyro_bias_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_bias_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_bias_stable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gyro_bias_stable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_bias_stable", field);
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
  {  // accel_bias
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "accel_bias");
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
    float * src = &(ros_message->accel_bias[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // accel_bias_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_bias_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_bias_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_bias_variance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "accel_bias_variance");
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
    float * src = &(ros_message->accel_bias_variance[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // accel_bias_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_bias_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_bias_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_bias_stable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_bias_stable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_bias_stable", field);
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
  {  // mag_bias
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "mag_bias");
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
    float * src = &(ros_message->mag_bias[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // mag_bias_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_bias_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_bias_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_bias_variance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "mag_bias_variance");
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
    float * src = &(ros_message->mag_bias_variance[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // mag_bias_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_bias_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_bias_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_bias_stable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mag_bias_stable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_bias_stable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
