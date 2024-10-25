// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/TelemetryStatus.idl
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
#include "px4_msgs/msg/detail/telemetry_status__struct.h"
#include "px4_msgs/msg/detail/telemetry_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__telemetry_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("px4_msgs.msg._telemetry_status.TelemetryStatus", full_classname_dest, 46) == 0);
  }
  px4_msgs__msg__TelemetryStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // flow_control
    PyObject * field = PyObject_GetAttrString(_pymsg, "flow_control");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flow_control = (Py_True == field);
    Py_DECREF(field);
  }
  {  // forwarding
    PyObject * field = PyObject_GetAttrString(_pymsg, "forwarding");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->forwarding = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mavlink_v2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mavlink_v2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mavlink_v2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ftp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ftp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ftp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // streams
    PyObject * field = PyObject_GetAttrString(_pymsg, "streams");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->streams = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // data_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->data_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rate_multiplier
    PyObject * field = PyObject_GetAttrString(_pymsg, "rate_multiplier");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rate_multiplier = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tx_rate_avg
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_rate_avg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tx_rate_avg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tx_error_rate_avg
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_error_rate_avg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tx_error_rate_avg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tx_message_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_message_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_message_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tx_buffer_overruns
    PyObject * field = PyObject_GetAttrString(_pymsg, "tx_buffer_overruns");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tx_buffer_overruns = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_rate_avg
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_rate_avg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_rate_avg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rx_message_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_message_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_message_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_message_lost_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_message_lost_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_message_lost_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_buffer_overruns
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_buffer_overruns");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_buffer_overruns = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_parse_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_parse_errors");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_parse_errors = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_packet_drop_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_packet_drop_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rx_packet_drop_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rx_message_lost_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "rx_message_lost_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rx_message_lost_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_antenna_tracker
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_antenna_tracker");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_antenna_tracker = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_gcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_gcs");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_gcs = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_onboard_controller
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_onboard_controller");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_onboard_controller = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_gimbal
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_gimbal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_gimbal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_adsb
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_adsb");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_adsb = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_camera");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_camera = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_parachute
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_parachute");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_parachute = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_type_open_drone_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_type_open_drone_id");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_type_open_drone_id = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_telemetry_radio
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_telemetry_radio");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_telemetry_radio = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_log
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_log");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_log = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_osd
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_osd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_osd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_obstacle_avoidance
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_obstacle_avoidance");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_obstacle_avoidance = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_vio
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_vio");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_vio = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_pairing_manager
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_pairing_manager");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_pairing_manager = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_udp_bridge
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_udp_bridge");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_udp_bridge = (Py_True == field);
    Py_DECREF(field);
  }
  {  // heartbeat_component_uart_bridge
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat_component_uart_bridge");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->heartbeat_component_uart_bridge = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_healthy = (Py_True == field);
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
  {  // parachute_system_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "parachute_system_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parachute_system_healthy = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__telemetry_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TelemetryStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._telemetry_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TelemetryStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__TelemetryStatus * ros_message = (px4_msgs__msg__TelemetryStatus *)raw_ros_message;
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
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
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
  {  // flow_control
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flow_control ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flow_control", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forwarding
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->forwarding ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forwarding", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mavlink_v2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mavlink_v2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mavlink_v2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ftp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ftp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ftp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // streams
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->streams);
    {
      int rc = PyObject_SetAttrString(_pymessage, "streams", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->data_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rate_multiplier
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rate_multiplier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rate_multiplier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_rate_avg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tx_rate_avg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_rate_avg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_error_rate_avg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tx_error_rate_avg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_error_rate_avg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_message_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_message_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_message_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tx_buffer_overruns
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tx_buffer_overruns);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tx_buffer_overruns", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_rate_avg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_rate_avg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_rate_avg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_message_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_message_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_message_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_message_lost_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_message_lost_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_message_lost_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_buffer_overruns
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_buffer_overruns);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_buffer_overruns", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_parse_errors
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_parse_errors);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_parse_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_packet_drop_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rx_packet_drop_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_packet_drop_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rx_message_lost_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rx_message_lost_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rx_message_lost_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_antenna_tracker
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_antenna_tracker ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_antenna_tracker", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_gcs
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_gcs ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_gcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_onboard_controller
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_onboard_controller ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_onboard_controller", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_gimbal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_gimbal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_gimbal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_adsb
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_adsb ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_adsb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_camera
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_camera ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_parachute
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_parachute ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_parachute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_type_open_drone_id
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_type_open_drone_id ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_type_open_drone_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_telemetry_radio
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_telemetry_radio ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_telemetry_radio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_log
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_log ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_log", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_osd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_osd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_osd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_obstacle_avoidance
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_obstacle_avoidance ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_obstacle_avoidance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_vio
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_vio ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_vio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_pairing_manager
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_pairing_manager ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_pairing_manager", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_udp_bridge
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_udp_bridge ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_udp_bridge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heartbeat_component_uart_bridge
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->heartbeat_component_uart_bridge ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat_component_uart_bridge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_healthy", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
