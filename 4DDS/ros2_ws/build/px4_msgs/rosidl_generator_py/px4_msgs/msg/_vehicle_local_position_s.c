// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleLocalPosition.idl
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
#include "px4_msgs/msg/detail/vehicle_local_position__struct.h"
#include "px4_msgs/msg/detail/vehicle_local_position__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_local_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._vehicle_local_position.VehicleLocalPosition", full_classname_dest, 57) == 0);
  }
  px4_msgs__msg__VehicleLocalPosition * ros_message = _ros_message;
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
  {  // xy_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "xy_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->xy_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // z_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->z_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // v_xy_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_xy_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->v_xy_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // v_z_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_z_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->v_z_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_xy
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_xy");
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
      Py_ssize_t size = 2;
      float * dest = ros_message->delta_xy;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // xy_reset_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "xy_reset_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->xy_reset_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // delta_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_reset_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_reset_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->z_reset_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vx
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_deriv
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_deriv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_deriv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_vxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vxy");
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
      Py_ssize_t size = 2;
      float * dest = ros_message->delta_vxy;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // vxy_reset_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "vxy_reset_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vxy_reset_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // delta_vz
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_vz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_vz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz_reset_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz_reset_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vz_reset_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ax
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ay
    PyObject * field = PyObject_GetAttrString(_pymsg, "ay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az
    PyObject * field = PyObject_GetAttrString(_pymsg, "az");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az = (float)PyFloat_AS_DOUBLE(field);
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
  {  // heading_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // unaided_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "unaided_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->unaided_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_reset_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_reset_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heading_reset_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heading_good_for_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_good_for_control");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heading_good_for_control = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tilt_var
    PyObject * field = PyObject_GetAttrString(_pymsg, "tilt_var");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tilt_var = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xy_global
    PyObject * field = PyObject_GetAttrString(_pymsg, "xy_global");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->xy_global = (Py_True == field);
    Py_DECREF(field);
  }
  {  // z_global
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_global");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->z_global = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ref_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ref_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ref_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_bottom
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_bottom");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_bottom = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist_bottom_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_bottom_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dist_bottom_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dist_bottom_sensor_bitfield
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_bottom_sensor_bitfield");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dist_bottom_sensor_bitfield = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eph
    PyObject * field = PyObject_GetAttrString(_pymsg, "eph");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eph = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // epv
    PyObject * field = PyObject_GetAttrString(_pymsg, "epv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->epv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // evh
    PyObject * field = PyObject_GetAttrString(_pymsg, "evh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->evh = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // evv
    PyObject * field = PyObject_GetAttrString(_pymsg, "evv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->evv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dead_reckoning
    PyObject * field = PyObject_GetAttrString(_pymsg, "dead_reckoning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dead_reckoning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vxy_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "vxy_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vxy_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hagl_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "hagl_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hagl_min = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hagl_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "hagl_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hagl_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_local_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleLocalPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_local_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleLocalPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleLocalPosition * ros_message = (px4_msgs__msg__VehicleLocalPosition *)raw_ros_message;
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
  {  // xy_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->xy_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xy_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->z_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_xy_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->v_xy_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_xy_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_z_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->v_z_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_z_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_xy
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "delta_xy");
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
    float * src = &(ros_message->delta_xy[0]);
    memcpy(dst, src, 2 * sizeof(float));
    Py_DECREF(field);
  }
  {  // xy_reset_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->xy_reset_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xy_reset_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_reset_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->z_reset_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_reset_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_deriv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_deriv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_deriv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vxy
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "delta_vxy");
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
    float * src = &(ros_message->delta_vxy[0]);
    memcpy(dst, src, 2 * sizeof(float));
    Py_DECREF(field);
  }
  {  // vxy_reset_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vxy_reset_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vxy_reset_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_vz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_vz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_vz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz_reset_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vz_reset_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz_reset_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
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
  {  // heading_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unaided_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->unaided_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unaided_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_reset_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->heading_reset_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_reset_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_good_for_control
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heading_good_for_control ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_good_for_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tilt_var
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tilt_var);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tilt_var", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xy_global
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->xy_global ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xy_global", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_global
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->z_global ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_global", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ref_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_bottom
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_bottom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_bottom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_bottom_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dist_bottom_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_bottom_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_bottom_sensor_bitfield
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dist_bottom_sensor_bitfield);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_bottom_sensor_bitfield", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eph
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eph);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eph", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->epv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // evh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->evh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "evh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // evv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->evv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "evv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dead_reckoning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dead_reckoning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dead_reckoning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vxy_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vxy_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vxy_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hagl_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hagl_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hagl_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hagl_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hagl_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hagl_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
