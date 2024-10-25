// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/GimbalManagerSetAttitude.idl
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
#include "px4_msgs/msg/detail/gimbal_manager_set_attitude__struct.h"
#include "px4_msgs/msg/detail/gimbal_manager_set_attitude__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__gimbal_manager_set_attitude__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("px4_msgs.msg._gimbal_manager_set_attitude.GimbalManagerSetAttitude", full_classname_dest, 66) == 0);
  }
  px4_msgs__msg__GimbalManagerSetAttitude * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // origin_sysid
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_sysid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_sysid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin_compid
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_compid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_compid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_system
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_system");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_system = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_component
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_component");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_component = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gimbal_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gimbal_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gimbal_device_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // q
    PyObject * field = PyObject_GetAttrString(_pymsg, "q");
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
      float * dest = ros_message->q;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // angular_velocity_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_velocity_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_velocity_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_velocity_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_velocity_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_velocity_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_velocity_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__gimbal_manager_set_attitude__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GimbalManagerSetAttitude */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._gimbal_manager_set_attitude");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GimbalManagerSetAttitude");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__GimbalManagerSetAttitude * ros_message = (px4_msgs__msg__GimbalManagerSetAttitude *)raw_ros_message;
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
  {  // origin_sysid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin_sysid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_sysid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_compid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin_compid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_compid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_system
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_system);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_system", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_component
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_component);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_component", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gimbal_device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gimbal_device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gimbal_device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // q
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "q");
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
    float * src = &(ros_message->q[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // angular_velocity_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_velocity_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_velocity_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_velocity_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_velocity_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_velocity_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
