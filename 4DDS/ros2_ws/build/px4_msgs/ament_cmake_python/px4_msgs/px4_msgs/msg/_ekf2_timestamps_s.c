// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
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
#include "px4_msgs/msg/detail/ekf2_timestamps__struct.h"
#include "px4_msgs/msg/detail/ekf2_timestamps__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__ekf2_timestamps__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("px4_msgs.msg._ekf2_timestamps.Ekf2Timestamps", full_classname_dest, 44) == 0);
  }
  px4_msgs__msg__Ekf2Timestamps * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // airspeed_timestamp_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "airspeed_timestamp_rel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->airspeed_timestamp_rel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance_sensor_timestamp_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_sensor_timestamp_rel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance_sensor_timestamp_rel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // optical_flow_timestamp_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "optical_flow_timestamp_rel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->optical_flow_timestamp_rel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_air_data_timestamp_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_air_data_timestamp_rel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_air_data_timestamp_rel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_magnetometer_timestamp_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_magnetometer_timestamp_rel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_magnetometer_timestamp_rel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // visual_odometry_timestamp_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "visual_odometry_timestamp_rel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->visual_odometry_timestamp_rel = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__ekf2_timestamps__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ekf2Timestamps */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._ekf2_timestamps");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ekf2Timestamps");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__Ekf2Timestamps * ros_message = (px4_msgs__msg__Ekf2Timestamps *)raw_ros_message;
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
  {  // airspeed_timestamp_rel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->airspeed_timestamp_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airspeed_timestamp_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_sensor_timestamp_rel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->distance_sensor_timestamp_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_sensor_timestamp_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optical_flow_timestamp_rel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->optical_flow_timestamp_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optical_flow_timestamp_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_air_data_timestamp_rel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_air_data_timestamp_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_air_data_timestamp_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_magnetometer_timestamp_rel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_magnetometer_timestamp_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_magnetometer_timestamp_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visual_odometry_timestamp_rel
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->visual_odometry_timestamp_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visual_odometry_timestamp_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
