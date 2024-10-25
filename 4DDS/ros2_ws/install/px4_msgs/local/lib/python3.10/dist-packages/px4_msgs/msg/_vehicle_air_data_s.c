// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleAirData.idl
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
#include "px4_msgs/msg/detail/vehicle_air_data__struct.h"
#include "px4_msgs/msg/detail/vehicle_air_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_air_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("px4_msgs.msg._vehicle_air_data.VehicleAirData", full_classname_dest, 45) == 0);
  }
  px4_msgs__msg__VehicleAirData * ros_message = _ros_message;
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
  {  // baro_device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->baro_device_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // baro_alt_meter
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_alt_meter");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->baro_alt_meter = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // baro_temp_celcius
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_temp_celcius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->baro_temp_celcius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // baro_pressure_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "baro_pressure_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->baro_pressure_pa = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rho
    PyObject * field = PyObject_GetAttrString(_pymsg, "rho");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rho = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eas2tas
    PyObject * field = PyObject_GetAttrString(_pymsg, "eas2tas");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eas2tas = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // calibration_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->calibration_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_air_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleAirData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_air_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleAirData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleAirData * ros_message = (px4_msgs__msg__VehicleAirData *)raw_ros_message;
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
  {  // baro_alt_meter
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->baro_alt_meter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro_alt_meter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baro_temp_celcius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->baro_temp_celcius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro_temp_celcius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // baro_pressure_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->baro_pressure_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "baro_pressure_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rho
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rho);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rho", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eas2tas
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eas2tas);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eas2tas", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->calibration_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
