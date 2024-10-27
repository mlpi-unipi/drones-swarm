# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/BatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'voltage_cell_v'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryStatus(type):
    """Metaclass of message 'BatteryStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BATTERY_SOURCE_POWER_MODULE': 0,
        'BATTERY_SOURCE_EXTERNAL': 1,
        'BATTERY_SOURCE_ESCS': 2,
        'BATTERY_WARNING_NONE': 0,
        'BATTERY_WARNING_LOW': 1,
        'BATTERY_WARNING_CRITICAL': 2,
        'BATTERY_WARNING_EMERGENCY': 3,
        'BATTERY_WARNING_FAILED': 4,
        'BATTERY_STATE_UNHEALTHY': 6,
        'BATTERY_STATE_CHARGING': 7,
        'BATTERY_FAULT_DEEP_DISCHARGE': 0,
        'BATTERY_FAULT_SPIKES': 1,
        'BATTERY_FAULT_CELL_FAIL': 2,
        'BATTERY_FAULT_OVER_CURRENT': 3,
        'BATTERY_FAULT_OVER_TEMPERATURE': 4,
        'BATTERY_FAULT_UNDER_TEMPERATURE': 5,
        'BATTERY_FAULT_INCOMPATIBLE_VOLTAGE': 6,
        'BATTERY_FAULT_INCOMPATIBLE_FIRMWARE': 7,
        'BATTERY_FAULT_INCOMPATIBLE_MODEL': 8,
        'BATTERY_FAULT_HARDWARE_FAILURE': 9,
        'BATTERY_WARNING_OVER_TEMPERATURE': 10,
        'BATTERY_FAULT_COUNT': 11,
        'BATTERY_MODE_UNKNOWN': 0,
        'BATTERY_MODE_AUTO_DISCHARGING': 1,
        'BATTERY_MODE_HOT_SWAP': 2,
        'BATTERY_MODE_COUNT': 3,
        'MAX_INSTANCES': 4,
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
                'px4_msgs.msg.BatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BATTERY_SOURCE_POWER_MODULE': cls.__constants['BATTERY_SOURCE_POWER_MODULE'],
            'BATTERY_SOURCE_EXTERNAL': cls.__constants['BATTERY_SOURCE_EXTERNAL'],
            'BATTERY_SOURCE_ESCS': cls.__constants['BATTERY_SOURCE_ESCS'],
            'BATTERY_WARNING_NONE': cls.__constants['BATTERY_WARNING_NONE'],
            'BATTERY_WARNING_LOW': cls.__constants['BATTERY_WARNING_LOW'],
            'BATTERY_WARNING_CRITICAL': cls.__constants['BATTERY_WARNING_CRITICAL'],
            'BATTERY_WARNING_EMERGENCY': cls.__constants['BATTERY_WARNING_EMERGENCY'],
            'BATTERY_WARNING_FAILED': cls.__constants['BATTERY_WARNING_FAILED'],
            'BATTERY_STATE_UNHEALTHY': cls.__constants['BATTERY_STATE_UNHEALTHY'],
            'BATTERY_STATE_CHARGING': cls.__constants['BATTERY_STATE_CHARGING'],
            'BATTERY_FAULT_DEEP_DISCHARGE': cls.__constants['BATTERY_FAULT_DEEP_DISCHARGE'],
            'BATTERY_FAULT_SPIKES': cls.__constants['BATTERY_FAULT_SPIKES'],
            'BATTERY_FAULT_CELL_FAIL': cls.__constants['BATTERY_FAULT_CELL_FAIL'],
            'BATTERY_FAULT_OVER_CURRENT': cls.__constants['BATTERY_FAULT_OVER_CURRENT'],
            'BATTERY_FAULT_OVER_TEMPERATURE': cls.__constants['BATTERY_FAULT_OVER_TEMPERATURE'],
            'BATTERY_FAULT_UNDER_TEMPERATURE': cls.__constants['BATTERY_FAULT_UNDER_TEMPERATURE'],
            'BATTERY_FAULT_INCOMPATIBLE_VOLTAGE': cls.__constants['BATTERY_FAULT_INCOMPATIBLE_VOLTAGE'],
            'BATTERY_FAULT_INCOMPATIBLE_FIRMWARE': cls.__constants['BATTERY_FAULT_INCOMPATIBLE_FIRMWARE'],
            'BATTERY_FAULT_INCOMPATIBLE_MODEL': cls.__constants['BATTERY_FAULT_INCOMPATIBLE_MODEL'],
            'BATTERY_FAULT_HARDWARE_FAILURE': cls.__constants['BATTERY_FAULT_HARDWARE_FAILURE'],
            'BATTERY_WARNING_OVER_TEMPERATURE': cls.__constants['BATTERY_WARNING_OVER_TEMPERATURE'],
            'BATTERY_FAULT_COUNT': cls.__constants['BATTERY_FAULT_COUNT'],
            'BATTERY_MODE_UNKNOWN': cls.__constants['BATTERY_MODE_UNKNOWN'],
            'BATTERY_MODE_AUTO_DISCHARGING': cls.__constants['BATTERY_MODE_AUTO_DISCHARGING'],
            'BATTERY_MODE_HOT_SWAP': cls.__constants['BATTERY_MODE_HOT_SWAP'],
            'BATTERY_MODE_COUNT': cls.__constants['BATTERY_MODE_COUNT'],
            'MAX_INSTANCES': cls.__constants['MAX_INSTANCES'],
        }

    @property
    def BATTERY_SOURCE_POWER_MODULE(self):
        """Message constant 'BATTERY_SOURCE_POWER_MODULE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_SOURCE_POWER_MODULE']

    @property
    def BATTERY_SOURCE_EXTERNAL(self):
        """Message constant 'BATTERY_SOURCE_EXTERNAL'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_SOURCE_EXTERNAL']

    @property
    def BATTERY_SOURCE_ESCS(self):
        """Message constant 'BATTERY_SOURCE_ESCS'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_SOURCE_ESCS']

    @property
    def BATTERY_WARNING_NONE(self):
        """Message constant 'BATTERY_WARNING_NONE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_NONE']

    @property
    def BATTERY_WARNING_LOW(self):
        """Message constant 'BATTERY_WARNING_LOW'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_LOW']

    @property
    def BATTERY_WARNING_CRITICAL(self):
        """Message constant 'BATTERY_WARNING_CRITICAL'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_CRITICAL']

    @property
    def BATTERY_WARNING_EMERGENCY(self):
        """Message constant 'BATTERY_WARNING_EMERGENCY'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_EMERGENCY']

    @property
    def BATTERY_WARNING_FAILED(self):
        """Message constant 'BATTERY_WARNING_FAILED'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_FAILED']

    @property
    def BATTERY_STATE_UNHEALTHY(self):
        """Message constant 'BATTERY_STATE_UNHEALTHY'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_STATE_UNHEALTHY']

    @property
    def BATTERY_STATE_CHARGING(self):
        """Message constant 'BATTERY_STATE_CHARGING'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_STATE_CHARGING']

    @property
    def BATTERY_FAULT_DEEP_DISCHARGE(self):
        """Message constant 'BATTERY_FAULT_DEEP_DISCHARGE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_DEEP_DISCHARGE']

    @property
    def BATTERY_FAULT_SPIKES(self):
        """Message constant 'BATTERY_FAULT_SPIKES'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_SPIKES']

    @property
    def BATTERY_FAULT_CELL_FAIL(self):
        """Message constant 'BATTERY_FAULT_CELL_FAIL'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_CELL_FAIL']

    @property
    def BATTERY_FAULT_OVER_CURRENT(self):
        """Message constant 'BATTERY_FAULT_OVER_CURRENT'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_OVER_CURRENT']

    @property
    def BATTERY_FAULT_OVER_TEMPERATURE(self):
        """Message constant 'BATTERY_FAULT_OVER_TEMPERATURE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_OVER_TEMPERATURE']

    @property
    def BATTERY_FAULT_UNDER_TEMPERATURE(self):
        """Message constant 'BATTERY_FAULT_UNDER_TEMPERATURE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_UNDER_TEMPERATURE']

    @property
    def BATTERY_FAULT_INCOMPATIBLE_VOLTAGE(self):
        """Message constant 'BATTERY_FAULT_INCOMPATIBLE_VOLTAGE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_INCOMPATIBLE_VOLTAGE']

    @property
    def BATTERY_FAULT_INCOMPATIBLE_FIRMWARE(self):
        """Message constant 'BATTERY_FAULT_INCOMPATIBLE_FIRMWARE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_INCOMPATIBLE_FIRMWARE']

    @property
    def BATTERY_FAULT_INCOMPATIBLE_MODEL(self):
        """Message constant 'BATTERY_FAULT_INCOMPATIBLE_MODEL'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_INCOMPATIBLE_MODEL']

    @property
    def BATTERY_FAULT_HARDWARE_FAILURE(self):
        """Message constant 'BATTERY_FAULT_HARDWARE_FAILURE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_HARDWARE_FAILURE']

    @property
    def BATTERY_WARNING_OVER_TEMPERATURE(self):
        """Message constant 'BATTERY_WARNING_OVER_TEMPERATURE'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_WARNING_OVER_TEMPERATURE']

    @property
    def BATTERY_FAULT_COUNT(self):
        """Message constant 'BATTERY_FAULT_COUNT'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_FAULT_COUNT']

    @property
    def BATTERY_MODE_UNKNOWN(self):
        """Message constant 'BATTERY_MODE_UNKNOWN'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_MODE_UNKNOWN']

    @property
    def BATTERY_MODE_AUTO_DISCHARGING(self):
        """Message constant 'BATTERY_MODE_AUTO_DISCHARGING'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_MODE_AUTO_DISCHARGING']

    @property
    def BATTERY_MODE_HOT_SWAP(self):
        """Message constant 'BATTERY_MODE_HOT_SWAP'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_MODE_HOT_SWAP']

    @property
    def BATTERY_MODE_COUNT(self):
        """Message constant 'BATTERY_MODE_COUNT'."""
        return Metaclass_BatteryStatus.__constants['BATTERY_MODE_COUNT']

    @property
    def MAX_INSTANCES(self):
        """Message constant 'MAX_INSTANCES'."""
        return Metaclass_BatteryStatus.__constants['MAX_INSTANCES']


class BatteryStatus(metaclass=Metaclass_BatteryStatus):
    """
    Message class 'BatteryStatus'.

    Constants:
      BATTERY_SOURCE_POWER_MODULE
      BATTERY_SOURCE_EXTERNAL
      BATTERY_SOURCE_ESCS
      BATTERY_WARNING_NONE
      BATTERY_WARNING_LOW
      BATTERY_WARNING_CRITICAL
      BATTERY_WARNING_EMERGENCY
      BATTERY_WARNING_FAILED
      BATTERY_STATE_UNHEALTHY
      BATTERY_STATE_CHARGING
      BATTERY_FAULT_DEEP_DISCHARGE
      BATTERY_FAULT_SPIKES
      BATTERY_FAULT_CELL_FAIL
      BATTERY_FAULT_OVER_CURRENT
      BATTERY_FAULT_OVER_TEMPERATURE
      BATTERY_FAULT_UNDER_TEMPERATURE
      BATTERY_FAULT_INCOMPATIBLE_VOLTAGE
      BATTERY_FAULT_INCOMPATIBLE_FIRMWARE
      BATTERY_FAULT_INCOMPATIBLE_MODEL
      BATTERY_FAULT_HARDWARE_FAILURE
      BATTERY_WARNING_OVER_TEMPERATURE
      BATTERY_FAULT_COUNT
      BATTERY_MODE_UNKNOWN
      BATTERY_MODE_AUTO_DISCHARGING
      BATTERY_MODE_HOT_SWAP
      BATTERY_MODE_COUNT
      MAX_INSTANCES
    """

    __slots__ = [
        '_timestamp',
        '_connected',
        '_voltage_v',
        '_voltage_filtered_v',
        '_current_a',
        '_current_filtered_a',
        '_current_average_a',
        '_discharged_mah',
        '_remaining',
        '_scale',
        '_time_remaining_s',
        '_temperature',
        '_cell_count',
        '_source',
        '_priority',
        '_capacity',
        '_cycle_count',
        '_average_time_to_empty',
        '_serial_number',
        '_manufacture_date',
        '_state_of_health',
        '_max_error',
        '_id',
        '_interface_error',
        '_voltage_cell_v',
        '_max_cell_voltage_delta',
        '_is_powering_off',
        '_is_required',
        '_faults',
        '_custom_faults',
        '_warning',
        '_mode',
        '_average_power',
        '_available_energy',
        '_full_charge_capacity_wh',
        '_remaining_capacity_wh',
        '_design_capacity',
        '_average_time_to_full',
        '_over_discharge_count',
        '_nominal_voltage',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'connected': 'boolean',
        'voltage_v': 'float',
        'voltage_filtered_v': 'float',
        'current_a': 'float',
        'current_filtered_a': 'float',
        'current_average_a': 'float',
        'discharged_mah': 'float',
        'remaining': 'float',
        'scale': 'float',
        'time_remaining_s': 'float',
        'temperature': 'float',
        'cell_count': 'uint8',
        'source': 'uint8',
        'priority': 'uint8',
        'capacity': 'uint16',
        'cycle_count': 'uint16',
        'average_time_to_empty': 'uint16',
        'serial_number': 'uint16',
        'manufacture_date': 'uint16',
        'state_of_health': 'uint16',
        'max_error': 'uint16',
        'id': 'uint8',
        'interface_error': 'uint16',
        'voltage_cell_v': 'float[14]',
        'max_cell_voltage_delta': 'float',
        'is_powering_off': 'boolean',
        'is_required': 'boolean',
        'faults': 'uint16',
        'custom_faults': 'uint32',
        'warning': 'uint8',
        'mode': 'uint8',
        'average_power': 'float',
        'available_energy': 'float',
        'full_charge_capacity_wh': 'float',
        'remaining_capacity_wh': 'float',
        'design_capacity': 'float',
        'average_time_to_full': 'uint16',
        'over_discharge_count': 'uint16',
        'nominal_voltage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 14),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.connected = kwargs.get('connected', bool())
        self.voltage_v = kwargs.get('voltage_v', float())
        self.voltage_filtered_v = kwargs.get('voltage_filtered_v', float())
        self.current_a = kwargs.get('current_a', float())
        self.current_filtered_a = kwargs.get('current_filtered_a', float())
        self.current_average_a = kwargs.get('current_average_a', float())
        self.discharged_mah = kwargs.get('discharged_mah', float())
        self.remaining = kwargs.get('remaining', float())
        self.scale = kwargs.get('scale', float())
        self.time_remaining_s = kwargs.get('time_remaining_s', float())
        self.temperature = kwargs.get('temperature', float())
        self.cell_count = kwargs.get('cell_count', int())
        self.source = kwargs.get('source', int())
        self.priority = kwargs.get('priority', int())
        self.capacity = kwargs.get('capacity', int())
        self.cycle_count = kwargs.get('cycle_count', int())
        self.average_time_to_empty = kwargs.get('average_time_to_empty', int())
        self.serial_number = kwargs.get('serial_number', int())
        self.manufacture_date = kwargs.get('manufacture_date', int())
        self.state_of_health = kwargs.get('state_of_health', int())
        self.max_error = kwargs.get('max_error', int())
        self.id = kwargs.get('id', int())
        self.interface_error = kwargs.get('interface_error', int())
        if 'voltage_cell_v' not in kwargs:
            self.voltage_cell_v = numpy.zeros(14, dtype=numpy.float32)
        else:
            self.voltage_cell_v = numpy.array(kwargs.get('voltage_cell_v'), dtype=numpy.float32)
            assert self.voltage_cell_v.shape == (14, )
        self.max_cell_voltage_delta = kwargs.get('max_cell_voltage_delta', float())
        self.is_powering_off = kwargs.get('is_powering_off', bool())
        self.is_required = kwargs.get('is_required', bool())
        self.faults = kwargs.get('faults', int())
        self.custom_faults = kwargs.get('custom_faults', int())
        self.warning = kwargs.get('warning', int())
        self.mode = kwargs.get('mode', int())
        self.average_power = kwargs.get('average_power', float())
        self.available_energy = kwargs.get('available_energy', float())
        self.full_charge_capacity_wh = kwargs.get('full_charge_capacity_wh', float())
        self.remaining_capacity_wh = kwargs.get('remaining_capacity_wh', float())
        self.design_capacity = kwargs.get('design_capacity', float())
        self.average_time_to_full = kwargs.get('average_time_to_full', int())
        self.over_discharge_count = kwargs.get('over_discharge_count', int())
        self.nominal_voltage = kwargs.get('nominal_voltage', float())

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
        if self.connected != other.connected:
            return False
        if self.voltage_v != other.voltage_v:
            return False
        if self.voltage_filtered_v != other.voltage_filtered_v:
            return False
        if self.current_a != other.current_a:
            return False
        if self.current_filtered_a != other.current_filtered_a:
            return False
        if self.current_average_a != other.current_average_a:
            return False
        if self.discharged_mah != other.discharged_mah:
            return False
        if self.remaining != other.remaining:
            return False
        if self.scale != other.scale:
            return False
        if self.time_remaining_s != other.time_remaining_s:
            return False
        if self.temperature != other.temperature:
            return False
        if self.cell_count != other.cell_count:
            return False
        if self.source != other.source:
            return False
        if self.priority != other.priority:
            return False
        if self.capacity != other.capacity:
            return False
        if self.cycle_count != other.cycle_count:
            return False
        if self.average_time_to_empty != other.average_time_to_empty:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.manufacture_date != other.manufacture_date:
            return False
        if self.state_of_health != other.state_of_health:
            return False
        if self.max_error != other.max_error:
            return False
        if self.id != other.id:
            return False
        if self.interface_error != other.interface_error:
            return False
        if all(self.voltage_cell_v != other.voltage_cell_v):
            return False
        if self.max_cell_voltage_delta != other.max_cell_voltage_delta:
            return False
        if self.is_powering_off != other.is_powering_off:
            return False
        if self.is_required != other.is_required:
            return False
        if self.faults != other.faults:
            return False
        if self.custom_faults != other.custom_faults:
            return False
        if self.warning != other.warning:
            return False
        if self.mode != other.mode:
            return False
        if self.average_power != other.average_power:
            return False
        if self.available_energy != other.available_energy:
            return False
        if self.full_charge_capacity_wh != other.full_charge_capacity_wh:
            return False
        if self.remaining_capacity_wh != other.remaining_capacity_wh:
            return False
        if self.design_capacity != other.design_capacity:
            return False
        if self.average_time_to_full != other.average_time_to_full:
            return False
        if self.over_discharge_count != other.over_discharge_count:
            return False
        if self.nominal_voltage != other.nominal_voltage:
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

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'connected' field must be of type 'bool'"
        self._connected = value

    @builtins.property
    def voltage_v(self):
        """Message field 'voltage_v'."""
        return self._voltage_v

    @voltage_v.setter
    def voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage_v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage_v = value

    @builtins.property
    def voltage_filtered_v(self):
        """Message field 'voltage_filtered_v'."""
        return self._voltage_filtered_v

    @voltage_filtered_v.setter
    def voltage_filtered_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_filtered_v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage_filtered_v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage_filtered_v = value

    @builtins.property
    def current_a(self):
        """Message field 'current_a'."""
        return self._current_a

    @current_a.setter
    def current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_a = value

    @builtins.property
    def current_filtered_a(self):
        """Message field 'current_filtered_a'."""
        return self._current_filtered_a

    @current_filtered_a.setter
    def current_filtered_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_filtered_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_filtered_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_filtered_a = value

    @builtins.property
    def current_average_a(self):
        """Message field 'current_average_a'."""
        return self._current_average_a

    @current_average_a.setter
    def current_average_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_average_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_average_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_average_a = value

    @builtins.property
    def discharged_mah(self):
        """Message field 'discharged_mah'."""
        return self._discharged_mah

    @discharged_mah.setter
    def discharged_mah(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'discharged_mah' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'discharged_mah' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._discharged_mah = value

    @builtins.property
    def remaining(self):
        """Message field 'remaining'."""
        return self._remaining

    @remaining.setter
    def remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining = value

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale = value

    @builtins.property
    def time_remaining_s(self):
        """Message field 'time_remaining_s'."""
        return self._time_remaining_s

    @time_remaining_s.setter
    def time_remaining_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_remaining_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_remaining_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_remaining_s = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature = value

    @builtins.property
    def cell_count(self):
        """Message field 'cell_count'."""
        return self._cell_count

    @cell_count.setter
    def cell_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cell_count' field must be an unsigned integer in [0, 255]"
        self._cell_count = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value

    @builtins.property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'capacity' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'capacity' field must be an unsigned integer in [0, 65535]"
        self._capacity = value

    @builtins.property
    def cycle_count(self):
        """Message field 'cycle_count'."""
        return self._cycle_count

    @cycle_count.setter
    def cycle_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cycle_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cycle_count' field must be an unsigned integer in [0, 65535]"
        self._cycle_count = value

    @builtins.property
    def average_time_to_empty(self):
        """Message field 'average_time_to_empty'."""
        return self._average_time_to_empty

    @average_time_to_empty.setter
    def average_time_to_empty(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'average_time_to_empty' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'average_time_to_empty' field must be an unsigned integer in [0, 65535]"
        self._average_time_to_empty = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'serial_number' field must be an unsigned integer in [0, 65535]"
        self._serial_number = value

    @builtins.property
    def manufacture_date(self):
        """Message field 'manufacture_date'."""
        return self._manufacture_date

    @manufacture_date.setter
    def manufacture_date(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'manufacture_date' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'manufacture_date' field must be an unsigned integer in [0, 65535]"
        self._manufacture_date = value

    @builtins.property
    def state_of_health(self):
        """Message field 'state_of_health'."""
        return self._state_of_health

    @state_of_health.setter
    def state_of_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_of_health' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'state_of_health' field must be an unsigned integer in [0, 65535]"
        self._state_of_health = value

    @builtins.property
    def max_error(self):
        """Message field 'max_error'."""
        return self._max_error

    @max_error.setter
    def max_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_error' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_error' field must be an unsigned integer in [0, 65535]"
        self._max_error = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def interface_error(self):
        """Message field 'interface_error'."""
        return self._interface_error

    @interface_error.setter
    def interface_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'interface_error' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'interface_error' field must be an unsigned integer in [0, 65535]"
        self._interface_error = value

    @builtins.property
    def voltage_cell_v(self):
        """Message field 'voltage_cell_v'."""
        return self._voltage_cell_v

    @voltage_cell_v.setter
    def voltage_cell_v(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'voltage_cell_v' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 14, \
                "The 'voltage_cell_v' numpy.ndarray() must have a size of 14"
            self._voltage_cell_v = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 14 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'voltage_cell_v' field must be a set or sequence with length 14 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._voltage_cell_v = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def max_cell_voltage_delta(self):
        """Message field 'max_cell_voltage_delta'."""
        return self._max_cell_voltage_delta

    @max_cell_voltage_delta.setter
    def max_cell_voltage_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_cell_voltage_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_cell_voltage_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_cell_voltage_delta = value

    @builtins.property
    def is_powering_off(self):
        """Message field 'is_powering_off'."""
        return self._is_powering_off

    @is_powering_off.setter
    def is_powering_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_powering_off' field must be of type 'bool'"
        self._is_powering_off = value

    @builtins.property
    def is_required(self):
        """Message field 'is_required'."""
        return self._is_required

    @is_required.setter
    def is_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_required' field must be of type 'bool'"
        self._is_required = value

    @builtins.property
    def faults(self):
        """Message field 'faults'."""
        return self._faults

    @faults.setter
    def faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'faults' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'faults' field must be an unsigned integer in [0, 65535]"
        self._faults = value

    @builtins.property
    def custom_faults(self):
        """Message field 'custom_faults'."""
        return self._custom_faults

    @custom_faults.setter
    def custom_faults(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'custom_faults' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'custom_faults' field must be an unsigned integer in [0, 4294967295]"
        self._custom_faults = value

    @builtins.property
    def warning(self):
        """Message field 'warning'."""
        return self._warning

    @warning.setter
    def warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'warning' field must be an unsigned integer in [0, 255]"
        self._warning = value

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
    def average_power(self):
        """Message field 'average_power'."""
        return self._average_power

    @average_power.setter
    def average_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average_power' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average_power' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average_power = value

    @builtins.property
    def available_energy(self):
        """Message field 'available_energy'."""
        return self._available_energy

    @available_energy.setter
    def available_energy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'available_energy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'available_energy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._available_energy = value

    @builtins.property
    def full_charge_capacity_wh(self):
        """Message field 'full_charge_capacity_wh'."""
        return self._full_charge_capacity_wh

    @full_charge_capacity_wh.setter
    def full_charge_capacity_wh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'full_charge_capacity_wh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'full_charge_capacity_wh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._full_charge_capacity_wh = value

    @builtins.property
    def remaining_capacity_wh(self):
        """Message field 'remaining_capacity_wh'."""
        return self._remaining_capacity_wh

    @remaining_capacity_wh.setter
    def remaining_capacity_wh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining_capacity_wh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remaining_capacity_wh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remaining_capacity_wh = value

    @builtins.property
    def design_capacity(self):
        """Message field 'design_capacity'."""
        return self._design_capacity

    @design_capacity.setter
    def design_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'design_capacity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'design_capacity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._design_capacity = value

    @builtins.property
    def average_time_to_full(self):
        """Message field 'average_time_to_full'."""
        return self._average_time_to_full

    @average_time_to_full.setter
    def average_time_to_full(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'average_time_to_full' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'average_time_to_full' field must be an unsigned integer in [0, 65535]"
        self._average_time_to_full = value

    @builtins.property
    def over_discharge_count(self):
        """Message field 'over_discharge_count'."""
        return self._over_discharge_count

    @over_discharge_count.setter
    def over_discharge_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'over_discharge_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'over_discharge_count' field must be an unsigned integer in [0, 65535]"
        self._over_discharge_count = value

    @builtins.property
    def nominal_voltage(self):
        """Message field 'nominal_voltage'."""
        return self._nominal_voltage

    @nominal_voltage.setter
    def nominal_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nominal_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nominal_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nominal_voltage = value
