# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EscReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EscReport(type):
    """Metaclass of message 'EscReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FAILURE_OVER_CURRENT': 0,
        'FAILURE_OVER_VOLTAGE': 1,
        'FAILURE_MOTOR_OVER_TEMPERATURE': 2,
        'FAILURE_OVER_RPM': 3,
        'FAILURE_INCONSISTENT_CMD': 4,
        'FAILURE_MOTOR_STUCK': 5,
        'FAILURE_GENERIC': 6,
        'FAILURE_MOTOR_WARN_TEMPERATURE': 7,
        'FAILURE_WARN_ESC_TEMPERATURE': 8,
        'FAILURE_OVER_ESC_TEMPERATURE': 9,
        'ESC_FAILURE_COUNT': 10,
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
                'px4_msgs.msg.EscReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esc_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esc_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esc_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esc_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esc_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FAILURE_OVER_CURRENT': cls.__constants['FAILURE_OVER_CURRENT'],
            'FAILURE_OVER_VOLTAGE': cls.__constants['FAILURE_OVER_VOLTAGE'],
            'FAILURE_MOTOR_OVER_TEMPERATURE': cls.__constants['FAILURE_MOTOR_OVER_TEMPERATURE'],
            'FAILURE_OVER_RPM': cls.__constants['FAILURE_OVER_RPM'],
            'FAILURE_INCONSISTENT_CMD': cls.__constants['FAILURE_INCONSISTENT_CMD'],
            'FAILURE_MOTOR_STUCK': cls.__constants['FAILURE_MOTOR_STUCK'],
            'FAILURE_GENERIC': cls.__constants['FAILURE_GENERIC'],
            'FAILURE_MOTOR_WARN_TEMPERATURE': cls.__constants['FAILURE_MOTOR_WARN_TEMPERATURE'],
            'FAILURE_WARN_ESC_TEMPERATURE': cls.__constants['FAILURE_WARN_ESC_TEMPERATURE'],
            'FAILURE_OVER_ESC_TEMPERATURE': cls.__constants['FAILURE_OVER_ESC_TEMPERATURE'],
            'ESC_FAILURE_COUNT': cls.__constants['ESC_FAILURE_COUNT'],
        }

    @property
    def FAILURE_OVER_CURRENT(self):
        """Message constant 'FAILURE_OVER_CURRENT'."""
        return Metaclass_EscReport.__constants['FAILURE_OVER_CURRENT']

    @property
    def FAILURE_OVER_VOLTAGE(self):
        """Message constant 'FAILURE_OVER_VOLTAGE'."""
        return Metaclass_EscReport.__constants['FAILURE_OVER_VOLTAGE']

    @property
    def FAILURE_MOTOR_OVER_TEMPERATURE(self):
        """Message constant 'FAILURE_MOTOR_OVER_TEMPERATURE'."""
        return Metaclass_EscReport.__constants['FAILURE_MOTOR_OVER_TEMPERATURE']

    @property
    def FAILURE_OVER_RPM(self):
        """Message constant 'FAILURE_OVER_RPM'."""
        return Metaclass_EscReport.__constants['FAILURE_OVER_RPM']

    @property
    def FAILURE_INCONSISTENT_CMD(self):
        """Message constant 'FAILURE_INCONSISTENT_CMD'."""
        return Metaclass_EscReport.__constants['FAILURE_INCONSISTENT_CMD']

    @property
    def FAILURE_MOTOR_STUCK(self):
        """Message constant 'FAILURE_MOTOR_STUCK'."""
        return Metaclass_EscReport.__constants['FAILURE_MOTOR_STUCK']

    @property
    def FAILURE_GENERIC(self):
        """Message constant 'FAILURE_GENERIC'."""
        return Metaclass_EscReport.__constants['FAILURE_GENERIC']

    @property
    def FAILURE_MOTOR_WARN_TEMPERATURE(self):
        """Message constant 'FAILURE_MOTOR_WARN_TEMPERATURE'."""
        return Metaclass_EscReport.__constants['FAILURE_MOTOR_WARN_TEMPERATURE']

    @property
    def FAILURE_WARN_ESC_TEMPERATURE(self):
        """Message constant 'FAILURE_WARN_ESC_TEMPERATURE'."""
        return Metaclass_EscReport.__constants['FAILURE_WARN_ESC_TEMPERATURE']

    @property
    def FAILURE_OVER_ESC_TEMPERATURE(self):
        """Message constant 'FAILURE_OVER_ESC_TEMPERATURE'."""
        return Metaclass_EscReport.__constants['FAILURE_OVER_ESC_TEMPERATURE']

    @property
    def ESC_FAILURE_COUNT(self):
        """Message constant 'ESC_FAILURE_COUNT'."""
        return Metaclass_EscReport.__constants['ESC_FAILURE_COUNT']


class EscReport(metaclass=Metaclass_EscReport):
    """
    Message class 'EscReport'.

    Constants:
      FAILURE_OVER_CURRENT
      FAILURE_OVER_VOLTAGE
      FAILURE_MOTOR_OVER_TEMPERATURE
      FAILURE_OVER_RPM
      FAILURE_INCONSISTENT_CMD
      FAILURE_MOTOR_STUCK
      FAILURE_GENERIC
      FAILURE_MOTOR_WARN_TEMPERATURE
      FAILURE_WARN_ESC_TEMPERATURE
      FAILURE_OVER_ESC_TEMPERATURE
      ESC_FAILURE_COUNT
    """

    __slots__ = [
        '_timestamp',
        '_esc_errorcount',
        '_esc_rpm',
        '_esc_voltage',
        '_esc_current',
        '_esc_temperature',
        '_esc_address',
        '_esc_cmdcount',
        '_esc_state',
        '_actuator_function',
        '_failures',
        '_esc_power',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'esc_errorcount': 'uint32',
        'esc_rpm': 'int32',
        'esc_voltage': 'float',
        'esc_current': 'float',
        'esc_temperature': 'float',
        'esc_address': 'uint8',
        'esc_cmdcount': 'uint8',
        'esc_state': 'uint8',
        'actuator_function': 'uint8',
        'failures': 'uint16',
        'esc_power': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.esc_errorcount = kwargs.get('esc_errorcount', int())
        self.esc_rpm = kwargs.get('esc_rpm', int())
        self.esc_voltage = kwargs.get('esc_voltage', float())
        self.esc_current = kwargs.get('esc_current', float())
        self.esc_temperature = kwargs.get('esc_temperature', float())
        self.esc_address = kwargs.get('esc_address', int())
        self.esc_cmdcount = kwargs.get('esc_cmdcount', int())
        self.esc_state = kwargs.get('esc_state', int())
        self.actuator_function = kwargs.get('actuator_function', int())
        self.failures = kwargs.get('failures', int())
        self.esc_power = kwargs.get('esc_power', int())

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
        if self.esc_errorcount != other.esc_errorcount:
            return False
        if self.esc_rpm != other.esc_rpm:
            return False
        if self.esc_voltage != other.esc_voltage:
            return False
        if self.esc_current != other.esc_current:
            return False
        if self.esc_temperature != other.esc_temperature:
            return False
        if self.esc_address != other.esc_address:
            return False
        if self.esc_cmdcount != other.esc_cmdcount:
            return False
        if self.esc_state != other.esc_state:
            return False
        if self.actuator_function != other.actuator_function:
            return False
        if self.failures != other.failures:
            return False
        if self.esc_power != other.esc_power:
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
    def esc_errorcount(self):
        """Message field 'esc_errorcount'."""
        return self._esc_errorcount

    @esc_errorcount.setter
    def esc_errorcount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_errorcount' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'esc_errorcount' field must be an unsigned integer in [0, 4294967295]"
        self._esc_errorcount = value

    @builtins.property
    def esc_rpm(self):
        """Message field 'esc_rpm'."""
        return self._esc_rpm

    @esc_rpm.setter
    def esc_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_rpm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'esc_rpm' field must be an integer in [-2147483648, 2147483647]"
        self._esc_rpm = value

    @builtins.property
    def esc_voltage(self):
        """Message field 'esc_voltage'."""
        return self._esc_voltage

    @esc_voltage.setter
    def esc_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'esc_voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'esc_voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._esc_voltage = value

    @builtins.property
    def esc_current(self):
        """Message field 'esc_current'."""
        return self._esc_current

    @esc_current.setter
    def esc_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'esc_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'esc_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._esc_current = value

    @builtins.property
    def esc_temperature(self):
        """Message field 'esc_temperature'."""
        return self._esc_temperature

    @esc_temperature.setter
    def esc_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'esc_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'esc_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._esc_temperature = value

    @builtins.property
    def esc_address(self):
        """Message field 'esc_address'."""
        return self._esc_address

    @esc_address.setter
    def esc_address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_address' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_address' field must be an unsigned integer in [0, 255]"
        self._esc_address = value

    @builtins.property
    def esc_cmdcount(self):
        """Message field 'esc_cmdcount'."""
        return self._esc_cmdcount

    @esc_cmdcount.setter
    def esc_cmdcount(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_cmdcount' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_cmdcount' field must be an unsigned integer in [0, 255]"
        self._esc_cmdcount = value

    @builtins.property
    def esc_state(self):
        """Message field 'esc_state'."""
        return self._esc_state

    @esc_state.setter
    def esc_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_state' field must be an unsigned integer in [0, 255]"
        self._esc_state = value

    @builtins.property
    def actuator_function(self):
        """Message field 'actuator_function'."""
        return self._actuator_function

    @actuator_function.setter
    def actuator_function(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actuator_function' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'actuator_function' field must be an unsigned integer in [0, 255]"
        self._actuator_function = value

    @builtins.property
    def failures(self):
        """Message field 'failures'."""
        return self._failures

    @failures.setter
    def failures(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failures' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'failures' field must be an unsigned integer in [0, 65535]"
        self._failures = value

    @builtins.property
    def esc_power(self):
        """Message field 'esc_power'."""
        return self._esc_power

    @esc_power.setter
    def esc_power(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_power' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'esc_power' field must be an integer in [-128, 127]"
        self._esc_power = value
