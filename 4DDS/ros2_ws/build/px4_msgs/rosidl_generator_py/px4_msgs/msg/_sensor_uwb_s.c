// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/SensorUwb.idl
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
#include "px4_msgs/msg/detail/sensor_uwb__struct.h"
#include "px4_msgs/msg/detail/sensor_uwb__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__sensor_uwb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("px4_msgs.msg._sensor_uwb.SensorUwb", full_classname_dest, 34) == 0);
  }
  px4_msgs__msg__SensorUwb * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // sessionid
    PyObject * field = PyObject_GetAttrString(_pymsg, "sessionid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sessionid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_offset = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mac
    PyObject * field = PyObject_GetAttrString(_pymsg, "mac");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mac = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mac_dest
    PyObject * field = PyObject_GetAttrString(_pymsg, "mac_dest");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mac_dest = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nlos
    PyObject * field = PyObject_GetAttrString(_pymsg, "nlos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nlos = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aoa_azimuth_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_azimuth_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aoa_azimuth_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aoa_elevation_dev
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_elevation_dev");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aoa_elevation_dev = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aoa_azimuth_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_azimuth_resp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aoa_azimuth_resp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aoa_elevation_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_elevation_resp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aoa_elevation_resp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aoa_azimuth_fom
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_azimuth_fom");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aoa_azimuth_fom = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aoa_elevation_fom
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_elevation_fom");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aoa_elevation_fom = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aoa_dest_azimuth_fom
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_dest_azimuth_fom");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aoa_dest_azimuth_fom = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aoa_dest_elevation_fom
    PyObject * field = PyObject_GetAttrString(_pymsg, "aoa_dest_elevation_fom");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aoa_dest_elevation_fom = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->orientation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__sensor_uwb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorUwb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._sensor_uwb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorUwb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__SensorUwb * ros_message = (px4_msgs__msg__SensorUwb *)raw_ros_message;
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
  {  // sessionid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sessionid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sessionid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mac
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mac_dest
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mac_dest);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mac_dest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nlos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nlos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nlos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_azimuth_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aoa_azimuth_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_azimuth_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_elevation_dev
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aoa_elevation_dev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_elevation_dev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_azimuth_resp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aoa_azimuth_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_azimuth_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_elevation_resp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aoa_elevation_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_elevation_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_azimuth_fom
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aoa_azimuth_fom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_azimuth_fom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_elevation_fom
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aoa_elevation_fom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_elevation_fom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_dest_azimuth_fom
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aoa_dest_azimuth_fom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_dest_azimuth_fom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aoa_dest_elevation_fom
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aoa_dest_elevation_fom);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aoa_dest_elevation_fom", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
