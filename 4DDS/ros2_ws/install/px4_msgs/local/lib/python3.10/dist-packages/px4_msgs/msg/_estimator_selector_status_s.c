// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
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
#include "px4_msgs/msg/detail/estimator_selector_status__struct.h"
#include "px4_msgs/msg/detail/estimator_selector_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__estimator_selector_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("px4_msgs.msg._estimator_selector_status.EstimatorSelectorStatus", full_classname_dest, 63) == 0);
  }
  px4_msgs__msg__EstimatorSelectorStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // primary_instance
    PyObject * field = PyObject_GetAttrString(_pymsg, "primary_instance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->primary_instance = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // instances_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "instances_available");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instances_available = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // instance_changed_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "instance_changed_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->instance_changed_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_instance_change
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_instance_change");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_instance_change = PyLong_AsUnsignedLongLong(field);
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
  {  // baro_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baro_device_id = PyLong_AsUnsignedLong(field);
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
  {  // mag_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mag_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // combined_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "combined_test_ratio");
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
      Py_ssize_t size = 9;
      float * dest = ros_message->combined_test_ratio;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // relative_test_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_test_ratio");
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
      Py_ssize_t size = 9;
      float * dest = ros_message->relative_test_ratio;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "healthy");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'healthy'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 9;
      bool * dest = ros_message->healthy;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // accumulated_gyro_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "accumulated_gyro_error");
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
      Py_ssize_t size = 4;
      float * dest = ros_message->accumulated_gyro_error;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // accumulated_accel_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "accumulated_accel_error");
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
      Py_ssize_t size = 4;
      float * dest = ros_message->accumulated_accel_error;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gyro_fault_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_fault_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gyro_fault_detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // accel_fault_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_fault_detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->accel_fault_detected = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__estimator_selector_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EstimatorSelectorStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._estimator_selector_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EstimatorSelectorStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__EstimatorSelectorStatus * ros_message = (px4_msgs__msg__EstimatorSelectorStatus *)raw_ros_message;
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
  {  // primary_instance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->primary_instance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "primary_instance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instances_available
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->instances_available);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instances_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instance_changed_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->instance_changed_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instance_changed_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_instance_change
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->last_instance_change);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_instance_change", field);
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
  {  // combined_test_ratio
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "combined_test_ratio");
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
    float * src = &(ros_message->combined_test_ratio[0]);
    memcpy(dst, src, 9 * sizeof(float));
    Py_DECREF(field);
  }
  {  // relative_test_ratio
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "relative_test_ratio");
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
    float * src = &(ros_message->relative_test_ratio[0]);
    memcpy(dst, src, 9 * sizeof(float));
    Py_DECREF(field);
  }
  {  // healthy
    PyObject * field = NULL;
    size_t size = 9;
    bool * src = ros_message->healthy;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accumulated_gyro_error
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "accumulated_gyro_error");
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
    float * src = &(ros_message->accumulated_gyro_error[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // accumulated_accel_error
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "accumulated_accel_error");
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
    float * src = &(ros_message->accumulated_accel_error[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // gyro_fault_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gyro_fault_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_fault_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_fault_detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->accel_fault_detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_fault_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
