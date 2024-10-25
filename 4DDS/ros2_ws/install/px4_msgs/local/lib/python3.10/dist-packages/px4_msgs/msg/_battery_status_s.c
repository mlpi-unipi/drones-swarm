// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/BatteryStatus.idl
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
#include "px4_msgs/msg/detail/battery_status__struct.h"
#include "px4_msgs/msg/detail/battery_status__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__battery_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("px4_msgs.msg._battery_status.BatteryStatus", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__BatteryStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // voltage_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // voltage_filtered_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_filtered_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage_filtered_v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_filtered_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_filtered_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_filtered_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_average_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_average_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_average_a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // discharged_mah
    PyObject * field = PyObject_GetAttrString(_pymsg, "discharged_mah");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->discharged_mah = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scale
    PyObject * field = PyObject_GetAttrString(_pymsg, "scale");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scale = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time_remaining_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_remaining_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_remaining_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cell_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cell_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // source
    PyObject * field = PyObject_GetAttrString(_pymsg, "source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->priority = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->capacity = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycle_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // average_time_to_empty
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_time_to_empty");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->average_time_to_empty = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // serial_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serial_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // manufacture_date
    PyObject * field = PyObject_GetAttrString(_pymsg, "manufacture_date");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->manufacture_date = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // state_of_health
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_of_health");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_of_health = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // max_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_error = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // interface_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "interface_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->interface_error = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_cell_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_cell_v");
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
      Py_ssize_t size = 14;
      float * dest = ros_message->voltage_cell_v;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // max_cell_voltage_delta
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_cell_voltage_delta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_cell_voltage_delta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_powering_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_powering_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_powering_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_required = (Py_True == field);
    Py_DECREF(field);
  }
  {  // faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->faults = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // custom_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "custom_faults");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->custom_faults = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // average_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // available_energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "available_energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->available_energy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // full_charge_capacity_wh
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_charge_capacity_wh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->full_charge_capacity_wh = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remaining_capacity_wh
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_capacity_wh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_capacity_wh = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // design_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "design_capacity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->design_capacity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // average_time_to_full
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_time_to_full");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->average_time_to_full = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // over_discharge_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "over_discharge_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->over_discharge_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nominal_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "nominal_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->nominal_voltage = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__battery_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BatteryStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._battery_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BatteryStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__BatteryStatus * ros_message = (px4_msgs__msg__BatteryStatus *)raw_ros_message;
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
  {  // connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_filtered_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage_filtered_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_filtered_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_filtered_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_filtered_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_filtered_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_average_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_average_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_average_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // discharged_mah
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->discharged_mah);
    {
      int rc = PyObject_SetAttrString(_pymessage, "discharged_mah", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scale
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scale);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scale", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_remaining_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_remaining_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_remaining_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cell_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cell_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // priority
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->priority);
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capacity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_time_to_empty
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->average_time_to_empty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_time_to_empty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serial_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // manufacture_date
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->manufacture_date);
    {
      int rc = PyObject_SetAttrString(_pymessage, "manufacture_date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_of_health
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state_of_health);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_of_health", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interface_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->interface_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interface_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_cell_v
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "voltage_cell_v");
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
    float * src = &(ros_message->voltage_cell_v[0]);
    memcpy(dst, src, 14 * sizeof(float));
    Py_DECREF(field);
  }
  {  // max_cell_voltage_delta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_cell_voltage_delta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_cell_voltage_delta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_powering_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_powering_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_powering_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // faults
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // custom_faults
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->custom_faults);
    {
      int rc = PyObject_SetAttrString(_pymessage, "custom_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // available_energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->available_energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "available_energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_charge_capacity_wh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->full_charge_capacity_wh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_charge_capacity_wh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_capacity_wh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_capacity_wh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_capacity_wh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // design_capacity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->design_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "design_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_time_to_full
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->average_time_to_full);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_time_to_full", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // over_discharge_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->over_discharge_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "over_discharge_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nominal_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->nominal_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nominal_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
