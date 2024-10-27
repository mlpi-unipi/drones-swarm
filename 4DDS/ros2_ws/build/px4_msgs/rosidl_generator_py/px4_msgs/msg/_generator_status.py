# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GeneratorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeneratorStatus(type):
    """Metaclass of message 'GeneratorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_FLAG_OFF': 1,
        'STATUS_FLAG_READY': 2,
        'STATUS_FLAG_GENERATING': 4,
        'STATUS_FLAG_CHARGING': 8,
        'STATUS_FLAG_REDUCED_POWER': 16,
        'STATUS_FLAG_MAXPOWER': 32,
        'STATUS_FLAG_OVERTEMP_WARNING': 64,
        'STATUS_FLAG_OVERTEMP_FAULT': 128,
        'STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING': 256,
        'STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT': 512,
        'STATUS_FLAG_ELECTRONICS_FAULT': 1024,
        'STATUS_FLAG_POWERSOURCE_FAULT': 2048,
        'STATUS_FLAG_COMMUNICATION_WARNING': 4096,
        'STATUS_FLAG_COOLING_WARNING': 8192,
        'STATUS_FLAG_POWER_RAIL_FAULT': 16384,
        'STATUS_FLAG_OVERCURRENT_FAULT': 32768,
        'STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT': 65536,
        'STATUS_FLAG_OVERVOLTAGE_FAULT': 131072,
        'STATUS_FLAG_BATTERY_UNDERVOLT_FAULT': 262144,
        'STATUS_FLAG_START_INHIBITED': 524288,
        'STATUS_FLAG_MAINTENANCE_REQUIRED': 1048576,
        'STATUS_FLAG_WARMING_UP': 2097152,
        'STATUS_FLAG_IDLE': 4194304,
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
                'px4_msgs.msg.GeneratorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__generator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__generator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__generator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__generator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__generator_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_FLAG_OFF': cls.__constants['STATUS_FLAG_OFF'],
            'STATUS_FLAG_READY': cls.__constants['STATUS_FLAG_READY'],
            'STATUS_FLAG_GENERATING': cls.__constants['STATUS_FLAG_GENERATING'],
            'STATUS_FLAG_CHARGING': cls.__constants['STATUS_FLAG_CHARGING'],
            'STATUS_FLAG_REDUCED_POWER': cls.__constants['STATUS_FLAG_REDUCED_POWER'],
            'STATUS_FLAG_MAXPOWER': cls.__constants['STATUS_FLAG_MAXPOWER'],
            'STATUS_FLAG_OVERTEMP_WARNING': cls.__constants['STATUS_FLAG_OVERTEMP_WARNING'],
            'STATUS_FLAG_OVERTEMP_FAULT': cls.__constants['STATUS_FLAG_OVERTEMP_FAULT'],
            'STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING': cls.__constants['STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING'],
            'STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT': cls.__constants['STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT'],
            'STATUS_FLAG_ELECTRONICS_FAULT': cls.__constants['STATUS_FLAG_ELECTRONICS_FAULT'],
            'STATUS_FLAG_POWERSOURCE_FAULT': cls.__constants['STATUS_FLAG_POWERSOURCE_FAULT'],
            'STATUS_FLAG_COMMUNICATION_WARNING': cls.__constants['STATUS_FLAG_COMMUNICATION_WARNING'],
            'STATUS_FLAG_COOLING_WARNING': cls.__constants['STATUS_FLAG_COOLING_WARNING'],
            'STATUS_FLAG_POWER_RAIL_FAULT': cls.__constants['STATUS_FLAG_POWER_RAIL_FAULT'],
            'STATUS_FLAG_OVERCURRENT_FAULT': cls.__constants['STATUS_FLAG_OVERCURRENT_FAULT'],
            'STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT': cls.__constants['STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT'],
            'STATUS_FLAG_OVERVOLTAGE_FAULT': cls.__constants['STATUS_FLAG_OVERVOLTAGE_FAULT'],
            'STATUS_FLAG_BATTERY_UNDERVOLT_FAULT': cls.__constants['STATUS_FLAG_BATTERY_UNDERVOLT_FAULT'],
            'STATUS_FLAG_START_INHIBITED': cls.__constants['STATUS_FLAG_START_INHIBITED'],
            'STATUS_FLAG_MAINTENANCE_REQUIRED': cls.__constants['STATUS_FLAG_MAINTENANCE_REQUIRED'],
            'STATUS_FLAG_WARMING_UP': cls.__constants['STATUS_FLAG_WARMING_UP'],
            'STATUS_FLAG_IDLE': cls.__constants['STATUS_FLAG_IDLE'],
        }

    @property
    def STATUS_FLAG_OFF(self):
        """Message constant 'STATUS_FLAG_OFF'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_OFF']

    @property
    def STATUS_FLAG_READY(self):
        """Message constant 'STATUS_FLAG_READY'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_READY']

    @property
    def STATUS_FLAG_GENERATING(self):
        """Message constant 'STATUS_FLAG_GENERATING'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_GENERATING']

    @property
    def STATUS_FLAG_CHARGING(self):
        """Message constant 'STATUS_FLAG_CHARGING'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_CHARGING']

    @property
    def STATUS_FLAG_REDUCED_POWER(self):
        """Message constant 'STATUS_FLAG_REDUCED_POWER'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_REDUCED_POWER']

    @property
    def STATUS_FLAG_MAXPOWER(self):
        """Message constant 'STATUS_FLAG_MAXPOWER'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_MAXPOWER']

    @property
    def STATUS_FLAG_OVERTEMP_WARNING(self):
        """Message constant 'STATUS_FLAG_OVERTEMP_WARNING'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_OVERTEMP_WARNING']

    @property
    def STATUS_FLAG_OVERTEMP_FAULT(self):
        """Message constant 'STATUS_FLAG_OVERTEMP_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_OVERTEMP_FAULT']

    @property
    def STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING(self):
        """Message constant 'STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING']

    @property
    def STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT(self):
        """Message constant 'STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT']

    @property
    def STATUS_FLAG_ELECTRONICS_FAULT(self):
        """Message constant 'STATUS_FLAG_ELECTRONICS_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_ELECTRONICS_FAULT']

    @property
    def STATUS_FLAG_POWERSOURCE_FAULT(self):
        """Message constant 'STATUS_FLAG_POWERSOURCE_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_POWERSOURCE_FAULT']

    @property
    def STATUS_FLAG_COMMUNICATION_WARNING(self):
        """Message constant 'STATUS_FLAG_COMMUNICATION_WARNING'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_COMMUNICATION_WARNING']

    @property
    def STATUS_FLAG_COOLING_WARNING(self):
        """Message constant 'STATUS_FLAG_COOLING_WARNING'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_COOLING_WARNING']

    @property
    def STATUS_FLAG_POWER_RAIL_FAULT(self):
        """Message constant 'STATUS_FLAG_POWER_RAIL_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_POWER_RAIL_FAULT']

    @property
    def STATUS_FLAG_OVERCURRENT_FAULT(self):
        """Message constant 'STATUS_FLAG_OVERCURRENT_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_OVERCURRENT_FAULT']

    @property
    def STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT(self):
        """Message constant 'STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT']

    @property
    def STATUS_FLAG_OVERVOLTAGE_FAULT(self):
        """Message constant 'STATUS_FLAG_OVERVOLTAGE_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_OVERVOLTAGE_FAULT']

    @property
    def STATUS_FLAG_BATTERY_UNDERVOLT_FAULT(self):
        """Message constant 'STATUS_FLAG_BATTERY_UNDERVOLT_FAULT'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_BATTERY_UNDERVOLT_FAULT']

    @property
    def STATUS_FLAG_START_INHIBITED(self):
        """Message constant 'STATUS_FLAG_START_INHIBITED'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_START_INHIBITED']

    @property
    def STATUS_FLAG_MAINTENANCE_REQUIRED(self):
        """Message constant 'STATUS_FLAG_MAINTENANCE_REQUIRED'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_MAINTENANCE_REQUIRED']

    @property
    def STATUS_FLAG_WARMING_UP(self):
        """Message constant 'STATUS_FLAG_WARMING_UP'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_WARMING_UP']

    @property
    def STATUS_FLAG_IDLE(self):
        """Message constant 'STATUS_FLAG_IDLE'."""
        return Metaclass_GeneratorStatus.__constants['STATUS_FLAG_IDLE']


class GeneratorStatus(metaclass=Metaclass_GeneratorStatus):
    """
    Message class 'GeneratorStatus'.

    Constants:
      STATUS_FLAG_OFF
      STATUS_FLAG_READY
      STATUS_FLAG_GENERATING
      STATUS_FLAG_CHARGING
      STATUS_FLAG_REDUCED_POWER
      STATUS_FLAG_MAXPOWER
      STATUS_FLAG_OVERTEMP_WARNING
      STATUS_FLAG_OVERTEMP_FAULT
      STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING
      STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT
      STATUS_FLAG_ELECTRONICS_FAULT
      STATUS_FLAG_POWERSOURCE_FAULT
      STATUS_FLAG_COMMUNICATION_WARNING
      STATUS_FLAG_COOLING_WARNING
      STATUS_FLAG_POWER_RAIL_FAULT
      STATUS_FLAG_OVERCURRENT_FAULT
      STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT
      STATUS_FLAG_OVERVOLTAGE_FAULT
      STATUS_FLAG_BATTERY_UNDERVOLT_FAULT
      STATUS_FLAG_START_INHIBITED
      STATUS_FLAG_MAINTENANCE_REQUIRED
      STATUS_FLAG_WARMING_UP
      STATUS_FLAG_IDLE
    """

    __slots__ = [
        '_timestamp',
        '_status',
        '_battery_current',
        '_load_current',
        '_power_generated',
        '_bus_voltage',
        '_bat_current_setpoint',
        '_runtime',
        '_time_until_maintenance',
        '_generator_speed',
        '_rectifier_temperature',
        '_generator_temperature',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'status': 'uint64',
        'battery_current': 'float',
        'load_current': 'float',
        'power_generated': 'float',
        'bus_voltage': 'float',
        'bat_current_setpoint': 'float',
        'runtime': 'uint32',
        'time_until_maintenance': 'int32',
        'generator_speed': 'uint16',
        'rectifier_temperature': 'int16',
        'generator_temperature': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.status = kwargs.get('status', int())
        self.battery_current = kwargs.get('battery_current', float())
        self.load_current = kwargs.get('load_current', float())
        self.power_generated = kwargs.get('power_generated', float())
        self.bus_voltage = kwargs.get('bus_voltage', float())
        self.bat_current_setpoint = kwargs.get('bat_current_setpoint', float())
        self.runtime = kwargs.get('runtime', int())
        self.time_until_maintenance = kwargs.get('time_until_maintenance', int())
        self.generator_speed = kwargs.get('generator_speed', int())
        self.rectifier_temperature = kwargs.get('rectifier_temperature', int())
        self.generator_temperature = kwargs.get('generator_temperature', int())

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
        if self.status != other.status:
            return False
        if self.battery_current != other.battery_current:
            return False
        if self.load_current != other.load_current:
            return False
        if self.power_generated != other.power_generated:
            return False
        if self.bus_voltage != other.bus_voltage:
            return False
        if self.bat_current_setpoint != other.bat_current_setpoint:
            return False
        if self.runtime != other.runtime:
            return False
        if self.time_until_maintenance != other.time_until_maintenance:
            return False
        if self.generator_speed != other.generator_speed:
            return False
        if self.rectifier_temperature != other.rectifier_temperature:
            return False
        if self.generator_temperature != other.generator_temperature:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'status' field must be an unsigned integer in [0, 18446744073709551615]"
        self._status = value

    @builtins.property
    def battery_current(self):
        """Message field 'battery_current'."""
        return self._battery_current

    @battery_current.setter
    def battery_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_current = value

    @builtins.property
    def load_current(self):
        """Message field 'load_current'."""
        return self._load_current

    @load_current.setter
    def load_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'load_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'load_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._load_current = value

    @builtins.property
    def power_generated(self):
        """Message field 'power_generated'."""
        return self._power_generated

    @power_generated.setter
    def power_generated(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_generated' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'power_generated' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._power_generated = value

    @builtins.property
    def bus_voltage(self):
        """Message field 'bus_voltage'."""
        return self._bus_voltage

    @bus_voltage.setter
    def bus_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bus_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bus_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bus_voltage = value

    @builtins.property
    def bat_current_setpoint(self):
        """Message field 'bat_current_setpoint'."""
        return self._bat_current_setpoint

    @bat_current_setpoint.setter
    def bat_current_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bat_current_setpoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bat_current_setpoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bat_current_setpoint = value

    @builtins.property
    def runtime(self):
        """Message field 'runtime'."""
        return self._runtime

    @runtime.setter
    def runtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'runtime' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'runtime' field must be an unsigned integer in [0, 4294967295]"
        self._runtime = value

    @builtins.property
    def time_until_maintenance(self):
        """Message field 'time_until_maintenance'."""
        return self._time_until_maintenance

    @time_until_maintenance.setter
    def time_until_maintenance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_until_maintenance' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_until_maintenance' field must be an integer in [-2147483648, 2147483647]"
        self._time_until_maintenance = value

    @builtins.property
    def generator_speed(self):
        """Message field 'generator_speed'."""
        return self._generator_speed

    @generator_speed.setter
    def generator_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'generator_speed' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'generator_speed' field must be an unsigned integer in [0, 65535]"
        self._generator_speed = value

    @builtins.property
    def rectifier_temperature(self):
        """Message field 'rectifier_temperature'."""
        return self._rectifier_temperature

    @rectifier_temperature.setter
    def rectifier_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rectifier_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rectifier_temperature' field must be an integer in [-32768, 32767]"
        self._rectifier_temperature = value

    @builtins.property
    def generator_temperature(self):
        """Message field 'generator_temperature'."""
        return self._generator_temperature

    @generator_temperature.setter
    def generator_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'generator_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'generator_temperature' field must be an integer in [-32768, 32767]"
        self._generator_temperature = value
