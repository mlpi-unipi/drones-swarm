# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TelemetryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TelemetryStatus(type):
    """Metaclass of message 'TelemetryStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LINK_TYPE_GENERIC': 0,
        'LINK_TYPE_UBIQUITY_BULLET': 1,
        'LINK_TYPE_WIRE': 2,
        'LINK_TYPE_USB': 3,
        'LINK_TYPE_IRIDIUM': 4,
        'HEARTBEAT_TIMEOUT_US': 2500000,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.TelemetryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__telemetry_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__telemetry_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__telemetry_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__telemetry_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__telemetry_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LINK_TYPE_GENERIC': cls.__constants['LINK_TYPE_GENERIC'],
            'LINK_TYPE_UBIQUITY_BULLET': cls.__constants['LINK_TYPE_UBIQUITY_BULLET'],
            'LINK_TYPE_WIRE': cls.__constants['LINK_TYPE_WIRE'],
            'LINK_TYPE_USB': cls.__constants['LINK_TYPE_USB'],
            'LINK_TYPE_IRIDIUM': cls.__constants['LINK_TYPE_IRIDIUM'],
            'HEARTBEAT_TIMEOUT_US': cls.__constants['HEARTBEAT_TIMEOUT_US'],
        }

    @property
    def LINK_TYPE_GENERIC(self):
        """Message constant 'LINK_TYPE_GENERIC'."""
        return Metaclass_TelemetryStatus.__constants['LINK_TYPE_GENERIC']

    @property
    def LINK_TYPE_UBIQUITY_BULLET(self):
        """Message constant 'LINK_TYPE_UBIQUITY_BULLET'."""
        return Metaclass_TelemetryStatus.__constants['LINK_TYPE_UBIQUITY_BULLET']

    @property
    def LINK_TYPE_WIRE(self):
        """Message constant 'LINK_TYPE_WIRE'."""
        return Metaclass_TelemetryStatus.__constants['LINK_TYPE_WIRE']

    @property
    def LINK_TYPE_USB(self):
        """Message constant 'LINK_TYPE_USB'."""
        return Metaclass_TelemetryStatus.__constants['LINK_TYPE_USB']

    @property
    def LINK_TYPE_IRIDIUM(self):
        """Message constant 'LINK_TYPE_IRIDIUM'."""
        return Metaclass_TelemetryStatus.__constants['LINK_TYPE_IRIDIUM']

    @property
    def HEARTBEAT_TIMEOUT_US(self):
        """Message constant 'HEARTBEAT_TIMEOUT_US'."""
        return Metaclass_TelemetryStatus.__constants['HEARTBEAT_TIMEOUT_US']


class TelemetryStatus(metaclass=Metaclass_TelemetryStatus):
    """
    Message class 'TelemetryStatus'.

    Constants:
      LINK_TYPE_GENERIC
      LINK_TYPE_UBIQUITY_BULLET
      LINK_TYPE_WIRE
      LINK_TYPE_USB
      LINK_TYPE_IRIDIUM
      HEARTBEAT_TIMEOUT_US
    """

    __slots__ = [
        '_timestamp',
        '_type',
        '_mode',
        '_flow_control',
        '_forwarding',
        '_mavlink_v2',
        '_ftp',
        '_streams',
        '_data_rate',
        '_rate_multiplier',
        '_tx_rate_avg',
        '_tx_error_rate_avg',
        '_tx_message_count',
        '_tx_buffer_overruns',
        '_rx_rate_avg',
        '_rx_message_count',
        '_rx_message_lost_count',
        '_rx_buffer_overruns',
        '_rx_parse_errors',
        '_rx_packet_drop_count',
        '_rx_message_lost_rate',
        '_heartbeat_type_antenna_tracker',
        '_heartbeat_type_gcs',
        '_heartbeat_type_onboard_controller',
        '_heartbeat_type_gimbal',
        '_heartbeat_type_adsb',
        '_heartbeat_type_camera',
        '_heartbeat_type_parachute',
        '_heartbeat_type_open_drone_id',
        '_heartbeat_component_telemetry_radio',
        '_heartbeat_component_log',
        '_heartbeat_component_osd',
        '_heartbeat_component_obstacle_avoidance',
        '_heartbeat_component_vio',
        '_heartbeat_component_pairing_manager',
        '_heartbeat_component_udp_bridge',
        '_heartbeat_component_uart_bridge',
        '_avoidance_system_healthy',
        '_open_drone_id_system_healthy',
        '_parachute_system_healthy',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'type': 'uint8',
        'mode': 'uint8',
        'flow_control': 'boolean',
        'forwarding': 'boolean',
        'mavlink_v2': 'boolean',
        'ftp': 'boolean',
        'streams': 'uint8',
        'data_rate': 'float',
        'rate_multiplier': 'float',
        'tx_rate_avg': 'float',
        'tx_error_rate_avg': 'float',
        'tx_message_count': 'uint32',
        'tx_buffer_overruns': 'uint32',
        'rx_rate_avg': 'float',
        'rx_message_count': 'uint32',
        'rx_message_lost_count': 'uint32',
        'rx_buffer_overruns': 'uint32',
        'rx_parse_errors': 'uint32',
        'rx_packet_drop_count': 'uint32',
        'rx_message_lost_rate': 'float',
        'heartbeat_type_antenna_tracker': 'boolean',
        'heartbeat_type_gcs': 'boolean',
        'heartbeat_type_onboard_controller': 'boolean',
        'heartbeat_type_gimbal': 'boolean',
        'heartbeat_type_adsb': 'boolean',
        'heartbeat_type_camera': 'boolean',
        'heartbeat_type_parachute': 'boolean',
        'heartbeat_type_open_drone_id': 'boolean',
        'heartbeat_component_telemetry_radio': 'boolean',
        'heartbeat_component_log': 'boolean',
        'heartbeat_component_osd': 'boolean',
        'heartbeat_component_obstacle_avoidance': 'boolean',
        'heartbeat_component_vio': 'boolean',
        'heartbeat_component_pairing_manager': 'boolean',
        'heartbeat_component_udp_bridge': 'boolean',
        'heartbeat_component_uart_bridge': 'boolean',
        'avoidance_system_healthy': 'boolean',
        'open_drone_id_system_healthy': 'boolean',
        'parachute_system_healthy': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.type = kwargs.get('type', int())
        self.mode = kwargs.get('mode', int())
        self.flow_control = kwargs.get('flow_control', bool())
        self.forwarding = kwargs.get('forwarding', bool())
        self.mavlink_v2 = kwargs.get('mavlink_v2', bool())
        self.ftp = kwargs.get('ftp', bool())
        self.streams = kwargs.get('streams', int())
        self.data_rate = kwargs.get('data_rate', float())
        self.rate_multiplier = kwargs.get('rate_multiplier', float())
        self.tx_rate_avg = kwargs.get('tx_rate_avg', float())
        self.tx_error_rate_avg = kwargs.get('tx_error_rate_avg', float())
        self.tx_message_count = kwargs.get('tx_message_count', int())
        self.tx_buffer_overruns = kwargs.get('tx_buffer_overruns', int())
        self.rx_rate_avg = kwargs.get('rx_rate_avg', float())
        self.rx_message_count = kwargs.get('rx_message_count', int())
        self.rx_message_lost_count = kwargs.get('rx_message_lost_count', int())
        self.rx_buffer_overruns = kwargs.get('rx_buffer_overruns', int())
        self.rx_parse_errors = kwargs.get('rx_parse_errors', int())
        self.rx_packet_drop_count = kwargs.get('rx_packet_drop_count', int())
        self.rx_message_lost_rate = kwargs.get('rx_message_lost_rate', float())
        self.heartbeat_type_antenna_tracker = kwargs.get('heartbeat_type_antenna_tracker', bool())
        self.heartbeat_type_gcs = kwargs.get('heartbeat_type_gcs', bool())
        self.heartbeat_type_onboard_controller = kwargs.get('heartbeat_type_onboard_controller', bool())
        self.heartbeat_type_gimbal = kwargs.get('heartbeat_type_gimbal', bool())
        self.heartbeat_type_adsb = kwargs.get('heartbeat_type_adsb', bool())
        self.heartbeat_type_camera = kwargs.get('heartbeat_type_camera', bool())
        self.heartbeat_type_parachute = kwargs.get('heartbeat_type_parachute', bool())
        self.heartbeat_type_open_drone_id = kwargs.get('heartbeat_type_open_drone_id', bool())
        self.heartbeat_component_telemetry_radio = kwargs.get('heartbeat_component_telemetry_radio', bool())
        self.heartbeat_component_log = kwargs.get('heartbeat_component_log', bool())
        self.heartbeat_component_osd = kwargs.get('heartbeat_component_osd', bool())
        self.heartbeat_component_obstacle_avoidance = kwargs.get('heartbeat_component_obstacle_avoidance', bool())
        self.heartbeat_component_vio = kwargs.get('heartbeat_component_vio', bool())
        self.heartbeat_component_pairing_manager = kwargs.get('heartbeat_component_pairing_manager', bool())
        self.heartbeat_component_udp_bridge = kwargs.get('heartbeat_component_udp_bridge', bool())
        self.heartbeat_component_uart_bridge = kwargs.get('heartbeat_component_uart_bridge', bool())
        self.avoidance_system_healthy = kwargs.get('avoidance_system_healthy', bool())
        self.open_drone_id_system_healthy = kwargs.get('open_drone_id_system_healthy', bool())
        self.parachute_system_healthy = kwargs.get('parachute_system_healthy', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.type != other.type:
            return False
        if self.mode != other.mode:
            return False
        if self.flow_control != other.flow_control:
            return False
        if self.forwarding != other.forwarding:
            return False
        if self.mavlink_v2 != other.mavlink_v2:
            return False
        if self.ftp != other.ftp:
            return False
        if self.streams != other.streams:
            return False
        if self.data_rate != other.data_rate:
            return False
        if self.rate_multiplier != other.rate_multiplier:
            return False
        if self.tx_rate_avg != other.tx_rate_avg:
            return False
        if self.tx_error_rate_avg != other.tx_error_rate_avg:
            return False
        if self.tx_message_count != other.tx_message_count:
            return False
        if self.tx_buffer_overruns != other.tx_buffer_overruns:
            return False
        if self.rx_rate_avg != other.rx_rate_avg:
            return False
        if self.rx_message_count != other.rx_message_count:
            return False
        if self.rx_message_lost_count != other.rx_message_lost_count:
            return False
        if self.rx_buffer_overruns != other.rx_buffer_overruns:
            return False
        if self.rx_parse_errors != other.rx_parse_errors:
            return False
        if self.rx_packet_drop_count != other.rx_packet_drop_count:
            return False
        if self.rx_message_lost_rate != other.rx_message_lost_rate:
            return False
        if self.heartbeat_type_antenna_tracker != other.heartbeat_type_antenna_tracker:
            return False
        if self.heartbeat_type_gcs != other.heartbeat_type_gcs:
            return False
        if self.heartbeat_type_onboard_controller != other.heartbeat_type_onboard_controller:
            return False
        if self.heartbeat_type_gimbal != other.heartbeat_type_gimbal:
            return False
        if self.heartbeat_type_adsb != other.heartbeat_type_adsb:
            return False
        if self.heartbeat_type_camera != other.heartbeat_type_camera:
            return False
        if self.heartbeat_type_parachute != other.heartbeat_type_parachute:
            return False
        if self.heartbeat_type_open_drone_id != other.heartbeat_type_open_drone_id:
            return False
        if self.heartbeat_component_telemetry_radio != other.heartbeat_component_telemetry_radio:
            return False
        if self.heartbeat_component_log != other.heartbeat_component_log:
            return False
        if self.heartbeat_component_osd != other.heartbeat_component_osd:
            return False
        if self.heartbeat_component_obstacle_avoidance != other.heartbeat_component_obstacle_avoidance:
            return False
        if self.heartbeat_component_vio != other.heartbeat_component_vio:
            return False
        if self.heartbeat_component_pairing_manager != other.heartbeat_component_pairing_manager:
            return False
        if self.heartbeat_component_udp_bridge != other.heartbeat_component_udp_bridge:
            return False
        if self.heartbeat_component_uart_bridge != other.heartbeat_component_uart_bridge:
            return False
        if self.avoidance_system_healthy != other.avoidance_system_healthy:
            return False
        if self.open_drone_id_system_healthy != other.open_drone_id_system_healthy:
            return False
        if self.parachute_system_healthy != other.parachute_system_healthy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def flow_control(self):
        """Message field 'flow_control'."""
        return self._flow_control

    @flow_control.setter
    def flow_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flow_control' field must be of type 'bool'"
        self._flow_control = value

    @builtins.property
    def forwarding(self):
        """Message field 'forwarding'."""
        return self._forwarding

    @forwarding.setter
    def forwarding(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'forwarding' field must be of type 'bool'"
        self._forwarding = value

    @builtins.property
    def mavlink_v2(self):
        """Message field 'mavlink_v2'."""
        return self._mavlink_v2

    @mavlink_v2.setter
    def mavlink_v2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mavlink_v2' field must be of type 'bool'"
        self._mavlink_v2 = value

    @builtins.property
    def ftp(self):
        """Message field 'ftp'."""
        return self._ftp

    @ftp.setter
    def ftp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ftp' field must be of type 'bool'"
        self._ftp = value

    @builtins.property
    def streams(self):
        """Message field 'streams'."""
        return self._streams

    @streams.setter
    def streams(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'streams' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'streams' field must be an unsigned integer in [0, 255]"
        self._streams = value

    @builtins.property
    def data_rate(self):
        """Message field 'data_rate'."""
        return self._data_rate

    @data_rate.setter
    def data_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'data_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'data_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._data_rate = value

    @builtins.property
    def rate_multiplier(self):
        """Message field 'rate_multiplier'."""
        return self._rate_multiplier

    @rate_multiplier.setter
    def rate_multiplier(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rate_multiplier' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rate_multiplier' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rate_multiplier = value

    @builtins.property
    def tx_rate_avg(self):
        """Message field 'tx_rate_avg'."""
        return self._tx_rate_avg

    @tx_rate_avg.setter
    def tx_rate_avg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tx_rate_avg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tx_rate_avg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tx_rate_avg = value

    @builtins.property
    def tx_error_rate_avg(self):
        """Message field 'tx_error_rate_avg'."""
        return self._tx_error_rate_avg

    @tx_error_rate_avg.setter
    def tx_error_rate_avg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tx_error_rate_avg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tx_error_rate_avg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tx_error_rate_avg = value

    @builtins.property
    def tx_message_count(self):
        """Message field 'tx_message_count'."""
        return self._tx_message_count

    @tx_message_count.setter
    def tx_message_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_message_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tx_message_count' field must be an unsigned integer in [0, 4294967295]"
        self._tx_message_count = value

    @builtins.property
    def tx_buffer_overruns(self):
        """Message field 'tx_buffer_overruns'."""
        return self._tx_buffer_overruns

    @tx_buffer_overruns.setter
    def tx_buffer_overruns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_buffer_overruns' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tx_buffer_overruns' field must be an unsigned integer in [0, 4294967295]"
        self._tx_buffer_overruns = value

    @builtins.property
    def rx_rate_avg(self):
        """Message field 'rx_rate_avg'."""
        return self._rx_rate_avg

    @rx_rate_avg.setter
    def rx_rate_avg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_rate_avg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rx_rate_avg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rx_rate_avg = value

    @builtins.property
    def rx_message_count(self):
        """Message field 'rx_message_count'."""
        return self._rx_message_count

    @rx_message_count.setter
    def rx_message_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_message_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rx_message_count' field must be an unsigned integer in [0, 4294967295]"
        self._rx_message_count = value

    @builtins.property
    def rx_message_lost_count(self):
        """Message field 'rx_message_lost_count'."""
        return self._rx_message_lost_count

    @rx_message_lost_count.setter
    def rx_message_lost_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_message_lost_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rx_message_lost_count' field must be an unsigned integer in [0, 4294967295]"
        self._rx_message_lost_count = value

    @builtins.property
    def rx_buffer_overruns(self):
        """Message field 'rx_buffer_overruns'."""
        return self._rx_buffer_overruns

    @rx_buffer_overruns.setter
    def rx_buffer_overruns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_buffer_overruns' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rx_buffer_overruns' field must be an unsigned integer in [0, 4294967295]"
        self._rx_buffer_overruns = value

    @builtins.property
    def rx_parse_errors(self):
        """Message field 'rx_parse_errors'."""
        return self._rx_parse_errors

    @rx_parse_errors.setter
    def rx_parse_errors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_parse_errors' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rx_parse_errors' field must be an unsigned integer in [0, 4294967295]"
        self._rx_parse_errors = value

    @builtins.property
    def rx_packet_drop_count(self):
        """Message field 'rx_packet_drop_count'."""
        return self._rx_packet_drop_count

    @rx_packet_drop_count.setter
    def rx_packet_drop_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_packet_drop_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rx_packet_drop_count' field must be an unsigned integer in [0, 4294967295]"
        self._rx_packet_drop_count = value

    @builtins.property
    def rx_message_lost_rate(self):
        """Message field 'rx_message_lost_rate'."""
        return self._rx_message_lost_rate

    @rx_message_lost_rate.setter
    def rx_message_lost_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rx_message_lost_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rx_message_lost_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rx_message_lost_rate = value

    @builtins.property
    def heartbeat_type_antenna_tracker(self):
        """Message field 'heartbeat_type_antenna_tracker'."""
        return self._heartbeat_type_antenna_tracker

    @heartbeat_type_antenna_tracker.setter
    def heartbeat_type_antenna_tracker(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_antenna_tracker' field must be of type 'bool'"
        self._heartbeat_type_antenna_tracker = value

    @builtins.property
    def heartbeat_type_gcs(self):
        """Message field 'heartbeat_type_gcs'."""
        return self._heartbeat_type_gcs

    @heartbeat_type_gcs.setter
    def heartbeat_type_gcs(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_gcs' field must be of type 'bool'"
        self._heartbeat_type_gcs = value

    @builtins.property
    def heartbeat_type_onboard_controller(self):
        """Message field 'heartbeat_type_onboard_controller'."""
        return self._heartbeat_type_onboard_controller

    @heartbeat_type_onboard_controller.setter
    def heartbeat_type_onboard_controller(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_onboard_controller' field must be of type 'bool'"
        self._heartbeat_type_onboard_controller = value

    @builtins.property
    def heartbeat_type_gimbal(self):
        """Message field 'heartbeat_type_gimbal'."""
        return self._heartbeat_type_gimbal

    @heartbeat_type_gimbal.setter
    def heartbeat_type_gimbal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_gimbal' field must be of type 'bool'"
        self._heartbeat_type_gimbal = value

    @builtins.property
    def heartbeat_type_adsb(self):
        """Message field 'heartbeat_type_adsb'."""
        return self._heartbeat_type_adsb

    @heartbeat_type_adsb.setter
    def heartbeat_type_adsb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_adsb' field must be of type 'bool'"
        self._heartbeat_type_adsb = value

    @builtins.property
    def heartbeat_type_camera(self):
        """Message field 'heartbeat_type_camera'."""
        return self._heartbeat_type_camera

    @heartbeat_type_camera.setter
    def heartbeat_type_camera(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_camera' field must be of type 'bool'"
        self._heartbeat_type_camera = value

    @builtins.property
    def heartbeat_type_parachute(self):
        """Message field 'heartbeat_type_parachute'."""
        return self._heartbeat_type_parachute

    @heartbeat_type_parachute.setter
    def heartbeat_type_parachute(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_parachute' field must be of type 'bool'"
        self._heartbeat_type_parachute = value

    @builtins.property
    def heartbeat_type_open_drone_id(self):
        """Message field 'heartbeat_type_open_drone_id'."""
        return self._heartbeat_type_open_drone_id

    @heartbeat_type_open_drone_id.setter
    def heartbeat_type_open_drone_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_type_open_drone_id' field must be of type 'bool'"
        self._heartbeat_type_open_drone_id = value

    @builtins.property
    def heartbeat_component_telemetry_radio(self):
        """Message field 'heartbeat_component_telemetry_radio'."""
        return self._heartbeat_component_telemetry_radio

    @heartbeat_component_telemetry_radio.setter
    def heartbeat_component_telemetry_radio(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_telemetry_radio' field must be of type 'bool'"
        self._heartbeat_component_telemetry_radio = value

    @builtins.property
    def heartbeat_component_log(self):
        """Message field 'heartbeat_component_log'."""
        return self._heartbeat_component_log

    @heartbeat_component_log.setter
    def heartbeat_component_log(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_log' field must be of type 'bool'"
        self._heartbeat_component_log = value

    @builtins.property
    def heartbeat_component_osd(self):
        """Message field 'heartbeat_component_osd'."""
        return self._heartbeat_component_osd

    @heartbeat_component_osd.setter
    def heartbeat_component_osd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_osd' field must be of type 'bool'"
        self._heartbeat_component_osd = value

    @builtins.property
    def heartbeat_component_obstacle_avoidance(self):
        """Message field 'heartbeat_component_obstacle_avoidance'."""
        return self._heartbeat_component_obstacle_avoidance

    @heartbeat_component_obstacle_avoidance.setter
    def heartbeat_component_obstacle_avoidance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_obstacle_avoidance' field must be of type 'bool'"
        self._heartbeat_component_obstacle_avoidance = value

    @builtins.property
    def heartbeat_component_vio(self):
        """Message field 'heartbeat_component_vio'."""
        return self._heartbeat_component_vio

    @heartbeat_component_vio.setter
    def heartbeat_component_vio(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_vio' field must be of type 'bool'"
        self._heartbeat_component_vio = value

    @builtins.property
    def heartbeat_component_pairing_manager(self):
        """Message field 'heartbeat_component_pairing_manager'."""
        return self._heartbeat_component_pairing_manager

    @heartbeat_component_pairing_manager.setter
    def heartbeat_component_pairing_manager(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_pairing_manager' field must be of type 'bool'"
        self._heartbeat_component_pairing_manager = value

    @builtins.property
    def heartbeat_component_udp_bridge(self):
        """Message field 'heartbeat_component_udp_bridge'."""
        return self._heartbeat_component_udp_bridge

    @heartbeat_component_udp_bridge.setter
    def heartbeat_component_udp_bridge(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_udp_bridge' field must be of type 'bool'"
        self._heartbeat_component_udp_bridge = value

    @builtins.property
    def heartbeat_component_uart_bridge(self):
        """Message field 'heartbeat_component_uart_bridge'."""
        return self._heartbeat_component_uart_bridge

    @heartbeat_component_uart_bridge.setter
    def heartbeat_component_uart_bridge(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heartbeat_component_uart_bridge' field must be of type 'bool'"
        self._heartbeat_component_uart_bridge = value

    @builtins.property
    def avoidance_system_healthy(self):
        """Message field 'avoidance_system_healthy'."""
        return self._avoidance_system_healthy

    @avoidance_system_healthy.setter
    def avoidance_system_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_healthy' field must be of type 'bool'"
        self._avoidance_system_healthy = value

    @builtins.property
    def open_drone_id_system_healthy(self):
        """Message field 'open_drone_id_system_healthy'."""
        return self._open_drone_id_system_healthy

    @open_drone_id_system_healthy.setter
    def open_drone_id_system_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open_drone_id_system_healthy' field must be of type 'bool'"
        self._open_drone_id_system_healthy = value

    @builtins.property
    def parachute_system_healthy(self):
        """Message field 'parachute_system_healthy'."""
        return self._parachute_system_healthy

    @parachute_system_healthy.setter
    def parachute_system_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parachute_system_healthy' field must be of type 'bool'"
        self._parachute_system_healthy = value
