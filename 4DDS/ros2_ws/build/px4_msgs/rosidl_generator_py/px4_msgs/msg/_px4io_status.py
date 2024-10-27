# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Px4ioStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'pwm'
# Member 'pwm_disarmed'
# Member 'pwm_failsafe'
# Member 'pwm_rate_hz'
# Member 'raw_inputs'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Px4ioStatus(type):
    """Metaclass of message 'Px4ioStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'px4_msgs.msg.Px4ioStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__px4io_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__px4io_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__px4io_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__px4io_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__px4io_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Px4ioStatus(metaclass=Metaclass_Px4ioStatus):
    """Message class 'Px4ioStatus'."""

    __slots__ = [
        '_timestamp',
        '_free_memory_bytes',
        '_voltage_v',
        '_rssi_v',
        '_status_arm_sync',
        '_status_failsafe',
        '_status_fmu_initialized',
        '_status_fmu_ok',
        '_status_init_ok',
        '_status_outputs_armed',
        '_status_raw_pwm',
        '_status_rc_ok',
        '_status_rc_dsm',
        '_status_rc_ppm',
        '_status_rc_sbus',
        '_status_rc_st24',
        '_status_rc_sumd',
        '_status_safety_button_event',
        '_alarm_pwm_error',
        '_alarm_rc_lost',
        '_arming_failsafe_custom',
        '_arming_fmu_armed',
        '_arming_fmu_prearmed',
        '_arming_force_failsafe',
        '_arming_io_arm_ok',
        '_arming_lockdown',
        '_arming_termination_failsafe',
        '_pwm',
        '_pwm_disarmed',
        '_pwm_failsafe',
        '_pwm_rate_hz',
        '_raw_inputs',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'free_memory_bytes': 'uint16',
        'voltage_v': 'float',
        'rssi_v': 'float',
        'status_arm_sync': 'boolean',
        'status_failsafe': 'boolean',
        'status_fmu_initialized': 'boolean',
        'status_fmu_ok': 'boolean',
        'status_init_ok': 'boolean',
        'status_outputs_armed': 'boolean',
        'status_raw_pwm': 'boolean',
        'status_rc_ok': 'boolean',
        'status_rc_dsm': 'boolean',
        'status_rc_ppm': 'boolean',
        'status_rc_sbus': 'boolean',
        'status_rc_st24': 'boolean',
        'status_rc_sumd': 'boolean',
        'status_safety_button_event': 'boolean',
        'alarm_pwm_error': 'boolean',
        'alarm_rc_lost': 'boolean',
        'arming_failsafe_custom': 'boolean',
        'arming_fmu_armed': 'boolean',
        'arming_fmu_prearmed': 'boolean',
        'arming_force_failsafe': 'boolean',
        'arming_io_arm_ok': 'boolean',
        'arming_lockdown': 'boolean',
        'arming_termination_failsafe': 'boolean',
        'pwm': 'uint16[8]',
        'pwm_disarmed': 'uint16[8]',
        'pwm_failsafe': 'uint16[8]',
        'pwm_rate_hz': 'uint16[8]',
        'raw_inputs': 'uint16[18]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 18),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.free_memory_bytes = kwargs.get('free_memory_bytes', int())
        self.voltage_v = kwargs.get('voltage_v', float())
        self.rssi_v = kwargs.get('rssi_v', float())
        self.status_arm_sync = kwargs.get('status_arm_sync', bool())
        self.status_failsafe = kwargs.get('status_failsafe', bool())
        self.status_fmu_initialized = kwargs.get('status_fmu_initialized', bool())
        self.status_fmu_ok = kwargs.get('status_fmu_ok', bool())
        self.status_init_ok = kwargs.get('status_init_ok', bool())
        self.status_outputs_armed = kwargs.get('status_outputs_armed', bool())
        self.status_raw_pwm = kwargs.get('status_raw_pwm', bool())
        self.status_rc_ok = kwargs.get('status_rc_ok', bool())
        self.status_rc_dsm = kwargs.get('status_rc_dsm', bool())
        self.status_rc_ppm = kwargs.get('status_rc_ppm', bool())
        self.status_rc_sbus = kwargs.get('status_rc_sbus', bool())
        self.status_rc_st24 = kwargs.get('status_rc_st24', bool())
        self.status_rc_sumd = kwargs.get('status_rc_sumd', bool())
        self.status_safety_button_event = kwargs.get('status_safety_button_event', bool())
        self.alarm_pwm_error = kwargs.get('alarm_pwm_error', bool())
        self.alarm_rc_lost = kwargs.get('alarm_rc_lost', bool())
        self.arming_failsafe_custom = kwargs.get('arming_failsafe_custom', bool())
        self.arming_fmu_armed = kwargs.get('arming_fmu_armed', bool())
        self.arming_fmu_prearmed = kwargs.get('arming_fmu_prearmed', bool())
        self.arming_force_failsafe = kwargs.get('arming_force_failsafe', bool())
        self.arming_io_arm_ok = kwargs.get('arming_io_arm_ok', bool())
        self.arming_lockdown = kwargs.get('arming_lockdown', bool())
        self.arming_termination_failsafe = kwargs.get('arming_termination_failsafe', bool())
        if 'pwm' not in kwargs:
            self.pwm = numpy.zeros(8, dtype=numpy.uint16)
        else:
            self.pwm = numpy.array(kwargs.get('pwm'), dtype=numpy.uint16)
            assert self.pwm.shape == (8, )
        if 'pwm_disarmed' not in kwargs:
            self.pwm_disarmed = numpy.zeros(8, dtype=numpy.uint16)
        else:
            self.pwm_disarmed = numpy.array(kwargs.get('pwm_disarmed'), dtype=numpy.uint16)
            assert self.pwm_disarmed.shape == (8, )
        if 'pwm_failsafe' not in kwargs:
            self.pwm_failsafe = numpy.zeros(8, dtype=numpy.uint16)
        else:
            self.pwm_failsafe = numpy.array(kwargs.get('pwm_failsafe'), dtype=numpy.uint16)
            assert self.pwm_failsafe.shape == (8, )
        if 'pwm_rate_hz' not in kwargs:
            self.pwm_rate_hz = numpy.zeros(8, dtype=numpy.uint16)
        else:
            self.pwm_rate_hz = numpy.array(kwargs.get('pwm_rate_hz'), dtype=numpy.uint16)
            assert self.pwm_rate_hz.shape == (8, )
        if 'raw_inputs' not in kwargs:
            self.raw_inputs = numpy.zeros(18, dtype=numpy.uint16)
        else:
            self.raw_inputs = numpy.array(kwargs.get('raw_inputs'), dtype=numpy.uint16)
            assert self.raw_inputs.shape == (18, )

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
        if self.free_memory_bytes != other.free_memory_bytes:
            return False
        if self.voltage_v != other.voltage_v:
            return False
        if self.rssi_v != other.rssi_v:
            return False
        if self.status_arm_sync != other.status_arm_sync:
            return False
        if self.status_failsafe != other.status_failsafe:
            return False
        if self.status_fmu_initialized != other.status_fmu_initialized:
            return False
        if self.status_fmu_ok != other.status_fmu_ok:
            return False
        if self.status_init_ok != other.status_init_ok:
            return False
        if self.status_outputs_armed != other.status_outputs_armed:
            return False
        if self.status_raw_pwm != other.status_raw_pwm:
            return False
        if self.status_rc_ok != other.status_rc_ok:
            return False
        if self.status_rc_dsm != other.status_rc_dsm:
            return False
        if self.status_rc_ppm != other.status_rc_ppm:
            return False
        if self.status_rc_sbus != other.status_rc_sbus:
            return False
        if self.status_rc_st24 != other.status_rc_st24:
            return False
        if self.status_rc_sumd != other.status_rc_sumd:
            return False
        if self.status_safety_button_event != other.status_safety_button_event:
            return False
        if self.alarm_pwm_error != other.alarm_pwm_error:
            return False
        if self.alarm_rc_lost != other.alarm_rc_lost:
            return False
        if self.arming_failsafe_custom != other.arming_failsafe_custom:
            return False
        if self.arming_fmu_armed != other.arming_fmu_armed:
            return False
        if self.arming_fmu_prearmed != other.arming_fmu_prearmed:
            return False
        if self.arming_force_failsafe != other.arming_force_failsafe:
            return False
        if self.arming_io_arm_ok != other.arming_io_arm_ok:
            return False
        if self.arming_lockdown != other.arming_lockdown:
            return False
        if self.arming_termination_failsafe != other.arming_termination_failsafe:
            return False
        if all(self.pwm != other.pwm):
            return False
        if all(self.pwm_disarmed != other.pwm_disarmed):
            return False
        if all(self.pwm_failsafe != other.pwm_failsafe):
            return False
        if all(self.pwm_rate_hz != other.pwm_rate_hz):
            return False
        if all(self.raw_inputs != other.raw_inputs):
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
    def free_memory_bytes(self):
        """Message field 'free_memory_bytes'."""
        return self._free_memory_bytes

    @free_memory_bytes.setter
    def free_memory_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'free_memory_bytes' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'free_memory_bytes' field must be an unsigned integer in [0, 65535]"
        self._free_memory_bytes = value

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
    def rssi_v(self):
        """Message field 'rssi_v'."""
        return self._rssi_v

    @rssi_v.setter
    def rssi_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rssi_v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rssi_v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rssi_v = value

    @builtins.property
    def status_arm_sync(self):
        """Message field 'status_arm_sync'."""
        return self._status_arm_sync

    @status_arm_sync.setter
    def status_arm_sync(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_arm_sync' field must be of type 'bool'"
        self._status_arm_sync = value

    @builtins.property
    def status_failsafe(self):
        """Message field 'status_failsafe'."""
        return self._status_failsafe

    @status_failsafe.setter
    def status_failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_failsafe' field must be of type 'bool'"
        self._status_failsafe = value

    @builtins.property
    def status_fmu_initialized(self):
        """Message field 'status_fmu_initialized'."""
        return self._status_fmu_initialized

    @status_fmu_initialized.setter
    def status_fmu_initialized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_fmu_initialized' field must be of type 'bool'"
        self._status_fmu_initialized = value

    @builtins.property
    def status_fmu_ok(self):
        """Message field 'status_fmu_ok'."""
        return self._status_fmu_ok

    @status_fmu_ok.setter
    def status_fmu_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_fmu_ok' field must be of type 'bool'"
        self._status_fmu_ok = value

    @builtins.property
    def status_init_ok(self):
        """Message field 'status_init_ok'."""
        return self._status_init_ok

    @status_init_ok.setter
    def status_init_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_init_ok' field must be of type 'bool'"
        self._status_init_ok = value

    @builtins.property
    def status_outputs_armed(self):
        """Message field 'status_outputs_armed'."""
        return self._status_outputs_armed

    @status_outputs_armed.setter
    def status_outputs_armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_outputs_armed' field must be of type 'bool'"
        self._status_outputs_armed = value

    @builtins.property
    def status_raw_pwm(self):
        """Message field 'status_raw_pwm'."""
        return self._status_raw_pwm

    @status_raw_pwm.setter
    def status_raw_pwm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_raw_pwm' field must be of type 'bool'"
        self._status_raw_pwm = value

    @builtins.property
    def status_rc_ok(self):
        """Message field 'status_rc_ok'."""
        return self._status_rc_ok

    @status_rc_ok.setter
    def status_rc_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_rc_ok' field must be of type 'bool'"
        self._status_rc_ok = value

    @builtins.property
    def status_rc_dsm(self):
        """Message field 'status_rc_dsm'."""
        return self._status_rc_dsm

    @status_rc_dsm.setter
    def status_rc_dsm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_rc_dsm' field must be of type 'bool'"
        self._status_rc_dsm = value

    @builtins.property
    def status_rc_ppm(self):
        """Message field 'status_rc_ppm'."""
        return self._status_rc_ppm

    @status_rc_ppm.setter
    def status_rc_ppm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_rc_ppm' field must be of type 'bool'"
        self._status_rc_ppm = value

    @builtins.property
    def status_rc_sbus(self):
        """Message field 'status_rc_sbus'."""
        return self._status_rc_sbus

    @status_rc_sbus.setter
    def status_rc_sbus(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_rc_sbus' field must be of type 'bool'"
        self._status_rc_sbus = value

    @builtins.property
    def status_rc_st24(self):
        """Message field 'status_rc_st24'."""
        return self._status_rc_st24

    @status_rc_st24.setter
    def status_rc_st24(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_rc_st24' field must be of type 'bool'"
        self._status_rc_st24 = value

    @builtins.property
    def status_rc_sumd(self):
        """Message field 'status_rc_sumd'."""
        return self._status_rc_sumd

    @status_rc_sumd.setter
    def status_rc_sumd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_rc_sumd' field must be of type 'bool'"
        self._status_rc_sumd = value

    @builtins.property
    def status_safety_button_event(self):
        """Message field 'status_safety_button_event'."""
        return self._status_safety_button_event

    @status_safety_button_event.setter
    def status_safety_button_event(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status_safety_button_event' field must be of type 'bool'"
        self._status_safety_button_event = value

    @builtins.property
    def alarm_pwm_error(self):
        """Message field 'alarm_pwm_error'."""
        return self._alarm_pwm_error

    @alarm_pwm_error.setter
    def alarm_pwm_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'alarm_pwm_error' field must be of type 'bool'"
        self._alarm_pwm_error = value

    @builtins.property
    def alarm_rc_lost(self):
        """Message field 'alarm_rc_lost'."""
        return self._alarm_rc_lost

    @alarm_rc_lost.setter
    def alarm_rc_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'alarm_rc_lost' field must be of type 'bool'"
        self._alarm_rc_lost = value

    @builtins.property
    def arming_failsafe_custom(self):
        """Message field 'arming_failsafe_custom'."""
        return self._arming_failsafe_custom

    @arming_failsafe_custom.setter
    def arming_failsafe_custom(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_failsafe_custom' field must be of type 'bool'"
        self._arming_failsafe_custom = value

    @builtins.property
    def arming_fmu_armed(self):
        """Message field 'arming_fmu_armed'."""
        return self._arming_fmu_armed

    @arming_fmu_armed.setter
    def arming_fmu_armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_fmu_armed' field must be of type 'bool'"
        self._arming_fmu_armed = value

    @builtins.property
    def arming_fmu_prearmed(self):
        """Message field 'arming_fmu_prearmed'."""
        return self._arming_fmu_prearmed

    @arming_fmu_prearmed.setter
    def arming_fmu_prearmed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_fmu_prearmed' field must be of type 'bool'"
        self._arming_fmu_prearmed = value

    @builtins.property
    def arming_force_failsafe(self):
        """Message field 'arming_force_failsafe'."""
        return self._arming_force_failsafe

    @arming_force_failsafe.setter
    def arming_force_failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_force_failsafe' field must be of type 'bool'"
        self._arming_force_failsafe = value

    @builtins.property
    def arming_io_arm_ok(self):
        """Message field 'arming_io_arm_ok'."""
        return self._arming_io_arm_ok

    @arming_io_arm_ok.setter
    def arming_io_arm_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_io_arm_ok' field must be of type 'bool'"
        self._arming_io_arm_ok = value

    @builtins.property
    def arming_lockdown(self):
        """Message field 'arming_lockdown'."""
        return self._arming_lockdown

    @arming_lockdown.setter
    def arming_lockdown(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_lockdown' field must be of type 'bool'"
        self._arming_lockdown = value

    @builtins.property
    def arming_termination_failsafe(self):
        """Message field 'arming_termination_failsafe'."""
        return self._arming_termination_failsafe

    @arming_termination_failsafe.setter
    def arming_termination_failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arming_termination_failsafe' field must be of type 'bool'"
        self._arming_termination_failsafe = value

    @builtins.property
    def pwm(self):
        """Message field 'pwm'."""
        return self._pwm

    @pwm.setter
    def pwm(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'pwm' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 8, \
                "The 'pwm' numpy.ndarray() must have a size of 8"
            self._pwm = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'pwm' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._pwm = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def pwm_disarmed(self):
        """Message field 'pwm_disarmed'."""
        return self._pwm_disarmed

    @pwm_disarmed.setter
    def pwm_disarmed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'pwm_disarmed' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 8, \
                "The 'pwm_disarmed' numpy.ndarray() must have a size of 8"
            self._pwm_disarmed = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'pwm_disarmed' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._pwm_disarmed = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def pwm_failsafe(self):
        """Message field 'pwm_failsafe'."""
        return self._pwm_failsafe

    @pwm_failsafe.setter
    def pwm_failsafe(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'pwm_failsafe' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 8, \
                "The 'pwm_failsafe' numpy.ndarray() must have a size of 8"
            self._pwm_failsafe = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'pwm_failsafe' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._pwm_failsafe = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def pwm_rate_hz(self):
        """Message field 'pwm_rate_hz'."""
        return self._pwm_rate_hz

    @pwm_rate_hz.setter
    def pwm_rate_hz(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'pwm_rate_hz' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 8, \
                "The 'pwm_rate_hz' numpy.ndarray() must have a size of 8"
            self._pwm_rate_hz = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'pwm_rate_hz' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._pwm_rate_hz = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def raw_inputs(self):
        """Message field 'raw_inputs'."""
        return self._raw_inputs

    @raw_inputs.setter
    def raw_inputs(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'raw_inputs' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 18, \
                "The 'raw_inputs' numpy.ndarray() must have a size of 18"
            self._raw_inputs = value
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
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'raw_inputs' field must be a set or sequence with length 18 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._raw_inputs = numpy.array(value, dtype=numpy.uint16)
