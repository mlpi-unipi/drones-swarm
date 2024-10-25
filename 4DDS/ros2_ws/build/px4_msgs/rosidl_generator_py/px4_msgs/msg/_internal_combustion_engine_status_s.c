// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
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
#include "px4_msgs/msg/detail/internal_combustion_engine_status__struct.h"
#include "px4_msgs/msg/detail/internal_combustion_engine_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__internal_combustion_engine_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[79];
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
    assert(strncmp("px4_msgs.msg._internal_combustion_engine_status.InternalCombustionEngineStatus", full_classname_dest, 78) == 0);
  }
  px4_msgs__msg__InternalCombustionEngineStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // engine_load_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_load_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_load_percent = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // engine_speed_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed_rpm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->engine_speed_rpm = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spark_dwell_time_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "spark_dwell_time_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->spark_dwell_time_ms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // atmospheric_pressure_kpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "atmospheric_pressure_kpa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->atmospheric_pressure_kpa = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // intake_manifold_pressure_kpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "intake_manifold_pressure_kpa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->intake_manifold_pressure_kpa = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // intake_manifold_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "intake_manifold_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->intake_manifold_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // coolant_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "coolant_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->coolant_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oil_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "oil_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oil_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // oil_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "oil_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->oil_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_pressure = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel_consumption_rate_cm3pm
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel_consumption_rate_cm3pm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel_consumption_rate_cm3pm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // estimated_consumed_fuel_volume_cm3
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimated_consumed_fuel_volume_cm3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->estimated_consumed_fuel_volume_cm3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle_position_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle_position_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->throttle_position_percent = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ecu_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecu_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ecu_index = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spark_plug_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "spark_plug_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spark_plug_usage = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ignition_timing_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ignition_timing_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ignition_timing_deg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // injection_time_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "injection_time_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->injection_time_ms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cylinder_head_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "cylinder_head_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cylinder_head_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // exhaust_gas_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "exhaust_gas_temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->exhaust_gas_temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_coefficient = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__internal_combustion_engine_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InternalCombustionEngineStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._internal_combustion_engine_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InternalCombustionEngineStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__InternalCombustionEngineStatus * ros_message = (px4_msgs__msg__InternalCombustionEngineStatus *)raw_ros_message;
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
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
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
  {  // engine_load_percent
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine_load_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_load_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_speed_rpm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->engine_speed_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spark_dwell_time_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->spark_dwell_time_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spark_dwell_time_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // atmospheric_pressure_kpa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->atmospheric_pressure_kpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "atmospheric_pressure_kpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intake_manifold_pressure_kpa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->intake_manifold_pressure_kpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intake_manifold_pressure_kpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intake_manifold_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->intake_manifold_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "intake_manifold_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coolant_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->coolant_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coolant_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oil_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oil_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oil_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // oil_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->oil_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "oil_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel_consumption_rate_cm3pm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel_consumption_rate_cm3pm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel_consumption_rate_cm3pm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimated_consumed_fuel_volume_cm3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->estimated_consumed_fuel_volume_cm3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimated_consumed_fuel_volume_cm3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle_position_percent
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->throttle_position_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle_position_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecu_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ecu_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecu_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spark_plug_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spark_plug_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spark_plug_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ignition_timing_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ignition_timing_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ignition_timing_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // injection_time_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->injection_time_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "injection_time_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cylinder_head_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cylinder_head_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cylinder_head_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exhaust_gas_temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->exhaust_gas_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exhaust_gas_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
