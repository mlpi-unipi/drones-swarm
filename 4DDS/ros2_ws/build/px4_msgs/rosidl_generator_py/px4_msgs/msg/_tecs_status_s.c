// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/TecsStatus.idl
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
#include "px4_msgs/msg/detail/tecs_status__struct.h"
#include "px4_msgs/msg/detail/tecs_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__tecs_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("px4_msgs.msg._tecs_status.TecsStatus", full_classname_dest, 36) == 0);
  }
  px4_msgs__msg__TecsStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // altitude_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_reference = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate_reference
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate_reference");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate_reference = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate_direct
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate_direct");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate_direct = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate_setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate_setpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate_setpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // equivalent_airspeed_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "equivalent_airspeed_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->equivalent_airspeed_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_filtered
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_filtered");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_filtered = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_derivative_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_derivative_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_derivative_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_derivative
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_derivative");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_derivative = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // true_airspeed_derivative_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_airspeed_derivative_raw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_airspeed_derivative_raw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_rate_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_rate_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_rate_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_balance_rate_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_balance_rate_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_balance_rate_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_energy_balance_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_energy_balance_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_energy_balance_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_integ
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_integ");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_integ = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_integ
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_integ");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_integ = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_sp
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_sp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_sp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_sp_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_sp_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_sp_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_trim
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_trim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle_trim = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // underspeed_ratio
    PyObject * field = PyObject_GetAttrString(_pymsg, "underspeed_ratio");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->underspeed_ratio = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__tecs_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TecsStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._tecs_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TecsStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__TecsStatus * ros_message = (px4_msgs__msg__TecsStatus *)raw_ros_message;
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
  {  // altitude_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate_reference
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate_reference);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate_reference", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate_direct
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate_direct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate_direct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate_setpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate_setpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate_setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // equivalent_airspeed_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->equivalent_airspeed_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "equivalent_airspeed_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_filtered
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_filtered);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_filtered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_derivative_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_derivative_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_derivative_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_derivative
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_derivative);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_derivative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_airspeed_derivative_raw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_airspeed_derivative_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_airspeed_derivative_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_rate_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_rate_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_rate_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_balance_rate_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_balance_rate_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_balance_rate_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_energy_balance_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_energy_balance_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_energy_balance_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_integ
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_integ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_integ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_integ
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_integ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_integ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_sp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_sp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_sp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_sp_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_sp_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_sp_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_trim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle_trim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_trim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // underspeed_ratio
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->underspeed_ratio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "underspeed_ratio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
