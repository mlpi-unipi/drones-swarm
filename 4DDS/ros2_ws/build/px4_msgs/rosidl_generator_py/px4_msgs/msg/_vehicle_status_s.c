// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleStatus.idl
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
#include "px4_msgs/msg/detail/vehicle_status__struct.h"
#include "px4_msgs/msg/detail/vehicle_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("px4_msgs.msg._vehicle_status.VehicleStatus", full_classname_dest, 42) == 0);
  }
  px4_msgs__msg__VehicleStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // armed_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "armed_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->armed_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // takeoff_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "takeoff_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->takeoff_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // arming_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "arming_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arming_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latest_arming_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "latest_arming_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latest_arming_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latest_disarming_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "latest_disarming_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->latest_disarming_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_state_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_state_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_state_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // nav_state_user_intention
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_state_user_intention");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_state_user_intention = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // executor_in_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "executor_in_charge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->executor_in_charge = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // valid_nav_states_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_nav_states_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->valid_nav_states_mask = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_set_nav_states_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_set_nav_states_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_set_nav_states_mask = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // failure_detector_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "failure_detector_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failure_detector_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hil_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "hil_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hil_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->failsafe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failsafe_and_user_took_over
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe_and_user_took_over");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->failsafe_and_user_took_over = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failsafe_defer_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe_defer_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failsafe_defer_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gcs_connection_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcs_connection_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gcs_connection_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gcs_connection_lost_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcs_connection_lost_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gcs_connection_lost_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // high_latency_data_link_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_latency_data_link_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->high_latency_data_link_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_vtol
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_vtol");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_vtol = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_vtol_tailsitter
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_vtol_tailsitter");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_vtol_tailsitter = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_transition_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_transition_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_transition_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_transition_to_fw
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_transition_to_fw");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_transition_to_fw = (Py_True == field);
    Py_DECREF(field);
  }
  {  // system_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // component_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "component_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->component_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // safety_button_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_button_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safety_button_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safety_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safety_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // power_input_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_input_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->power_input_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // usb_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "usb_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->usb_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // open_drone_id_system_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "open_drone_id_system_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->open_drone_id_system_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // open_drone_id_system_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "open_drone_id_system_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->open_drone_id_system_healthy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parachute_system_present
    PyObject * field = PyObject_GetAttrString(_pymsg, "parachute_system_present");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parachute_system_present = (Py_True == field);
    Py_DECREF(field);
  }
  {  // parachute_system_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "parachute_system_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parachute_system_healthy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_required = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_calibration_in_progress
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_calibration_in_progress");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_calibration_in_progress = (Py_True == field);
    Py_DECREF(field);
  }
  {  // calibration_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pre_flight_checks_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_flight_checks_pass");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pre_flight_checks_pass = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleStatus * ros_message = (px4_msgs__msg__VehicleStatus *)raw_ros_message;
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
  {  // armed_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->armed_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armed_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // takeoff_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->takeoff_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "takeoff_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arming_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->arming_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arming_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latest_arming_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->latest_arming_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latest_arming_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latest_disarming_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->latest_disarming_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latest_disarming_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_state_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->nav_state_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_state_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_state_user_intention
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_state_user_intention);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_state_user_intention", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // executor_in_charge
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->executor_in_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "executor_in_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_nav_states_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->valid_nav_states_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_nav_states_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_set_nav_states_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_set_nav_states_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_set_nav_states_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failure_detector_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failure_detector_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failure_detector_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hil_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hil_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hil_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->failsafe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe_and_user_took_over
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->failsafe_and_user_took_over ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe_and_user_took_over", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe_defer_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failsafe_defer_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe_defer_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcs_connection_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gcs_connection_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcs_connection_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcs_connection_lost_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gcs_connection_lost_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcs_connection_lost_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_latency_data_link_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->high_latency_data_link_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_latency_data_link_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_vtol
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_vtol ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_vtol", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_vtol_tailsitter
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_vtol_tailsitter ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_vtol_tailsitter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_transition_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_transition_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_transition_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_transition_to_fw
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_transition_to_fw ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_transition_to_fw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // component_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->component_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "component_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_button_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safety_button_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_button_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safety_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_input_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->power_input_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_input_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usb_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->usb_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usb_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // open_drone_id_system_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->open_drone_id_system_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "open_drone_id_system_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // open_drone_id_system_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->open_drone_id_system_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "open_drone_id_system_healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parachute_system_present
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parachute_system_present ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parachute_system_present", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parachute_system_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parachute_system_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parachute_system_healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_calibration_in_progress
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_calibration_in_progress ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_calibration_in_progress", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_flight_checks_pass
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pre_flight_checks_pass ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_flight_checks_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
