# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'coeff'
# Member 'coeff_var'
# Member 'rate_sp'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutotuneAttitudeControlStatus(type):
    """Metaclass of message 'AutotuneAttitudeControlStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_IDLE': 0,
        'STATE_INIT': 1,
        'STATE_ROLL': 2,
        'STATE_ROLL_PAUSE': 3,
        'STATE_PITCH': 4,
        'STATE_PITCH_PAUSE': 5,
        'STATE_YAW': 6,
        'STATE_YAW_PAUSE': 7,
        'STATE_VERIFICATION': 8,
        'STATE_APPLY': 9,
        'STATE_TEST': 10,
        'STATE_COMPLETE': 11,
        'STATE_FAIL': 12,
        'STATE_WAIT_FOR_DISARM': 13,
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
                'px4_msgs.msg.AutotuneAttitudeControlStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__autotune_attitude_control_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__autotune_attitude_control_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__autotune_attitude_control_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__autotune_attitude_control_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__autotune_attitude_control_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_IDLE': cls.__constants['STATE_IDLE'],
            'STATE_INIT': cls.__constants['STATE_INIT'],
            'STATE_ROLL': cls.__constants['STATE_ROLL'],
            'STATE_ROLL_PAUSE': cls.__constants['STATE_ROLL_PAUSE'],
            'STATE_PITCH': cls.__constants['STATE_PITCH'],
            'STATE_PITCH_PAUSE': cls.__constants['STATE_PITCH_PAUSE'],
            'STATE_YAW': cls.__constants['STATE_YAW'],
            'STATE_YAW_PAUSE': cls.__constants['STATE_YAW_PAUSE'],
            'STATE_VERIFICATION': cls.__constants['STATE_VERIFICATION'],
            'STATE_APPLY': cls.__constants['STATE_APPLY'],
            'STATE_TEST': cls.__constants['STATE_TEST'],
            'STATE_COMPLETE': cls.__constants['STATE_COMPLETE'],
            'STATE_FAIL': cls.__constants['STATE_FAIL'],
            'STATE_WAIT_FOR_DISARM': cls.__constants['STATE_WAIT_FOR_DISARM'],
        }

    @property
    def STATE_IDLE(self):
        """Message constant 'STATE_IDLE'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_IDLE']

    @property
    def STATE_INIT(self):
        """Message constant 'STATE_INIT'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_INIT']

    @property
    def STATE_ROLL(self):
        """Message constant 'STATE_ROLL'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_ROLL']

    @property
    def STATE_ROLL_PAUSE(self):
        """Message constant 'STATE_ROLL_PAUSE'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_ROLL_PAUSE']

    @property
    def STATE_PITCH(self):
        """Message constant 'STATE_PITCH'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_PITCH']

    @property
    def STATE_PITCH_PAUSE(self):
        """Message constant 'STATE_PITCH_PAUSE'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_PITCH_PAUSE']

    @property
    def STATE_YAW(self):
        """Message constant 'STATE_YAW'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_YAW']

    @property
    def STATE_YAW_PAUSE(self):
        """Message constant 'STATE_YAW_PAUSE'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_YAW_PAUSE']

    @property
    def STATE_VERIFICATION(self):
        """Message constant 'STATE_VERIFICATION'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_VERIFICATION']

    @property
    def STATE_APPLY(self):
        """Message constant 'STATE_APPLY'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_APPLY']

    @property
    def STATE_TEST(self):
        """Message constant 'STATE_TEST'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_TEST']

    @property
    def STATE_COMPLETE(self):
        """Message constant 'STATE_COMPLETE'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_COMPLETE']

    @property
    def STATE_FAIL(self):
        """Message constant 'STATE_FAIL'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_FAIL']

    @property
    def STATE_WAIT_FOR_DISARM(self):
        """Message constant 'STATE_WAIT_FOR_DISARM'."""
        return Metaclass_AutotuneAttitudeControlStatus.__constants['STATE_WAIT_FOR_DISARM']


class AutotuneAttitudeControlStatus(metaclass=Metaclass_AutotuneAttitudeControlStatus):
    """
    Message class 'AutotuneAttitudeControlStatus'.

    Constants:
      STATE_IDLE
      STATE_INIT
      STATE_ROLL
      STATE_ROLL_PAUSE
      STATE_PITCH
      STATE_PITCH_PAUSE
      STATE_YAW
      STATE_YAW_PAUSE
      STATE_VERIFICATION
      STATE_APPLY
      STATE_TEST
      STATE_COMPLETE
      STATE_FAIL
      STATE_WAIT_FOR_DISARM
    """

    __slots__ = [
        '_timestamp',
        '_coeff',
        '_coeff_var',
        '_fitness',
        '_innov',
        '_dt_model',
        '_kc',
        '_ki',
        '_kd',
        '_kff',
        '_att_p',
        '_rate_sp',
        '_u_filt',
        '_y_filt',
        '_state',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'coeff': 'float[5]',
        'coeff_var': 'float[5]',
        'fitness': 'float',
        'innov': 'float',
        'dt_model': 'float',
        'kc': 'float',
        'ki': 'float',
        'kd': 'float',
        'kff': 'float',
        'att_p': 'float',
        'rate_sp': 'float[3]',
        'u_filt': 'float',
        'y_filt': 'float',
        'state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'coeff' not in kwargs:
            self.coeff = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.coeff = numpy.array(kwargs.get('coeff'), dtype=numpy.float32)
            assert self.coeff.shape == (5, )
        if 'coeff_var' not in kwargs:
            self.coeff_var = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.coeff_var = numpy.array(kwargs.get('coeff_var'), dtype=numpy.float32)
            assert self.coeff_var.shape == (5, )
        self.fitness = kwargs.get('fitness', float())
        self.innov = kwargs.get('innov', float())
        self.dt_model = kwargs.get('dt_model', float())
        self.kc = kwargs.get('kc', float())
        self.ki = kwargs.get('ki', float())
        self.kd = kwargs.get('kd', float())
        self.kff = kwargs.get('kff', float())
        self.att_p = kwargs.get('att_p', float())
        if 'rate_sp' not in kwargs:
            self.rate_sp = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.rate_sp = numpy.array(kwargs.get('rate_sp'), dtype=numpy.float32)
            assert self.rate_sp.shape == (3, )
        self.u_filt = kwargs.get('u_filt', float())
        self.y_filt = kwargs.get('y_filt', float())
        self.state = kwargs.get('state', int())

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
        if all(self.coeff != other.coeff):
            return False
        if all(self.coeff_var != other.coeff_var):
            return False
        if self.fitness != other.fitness:
            return False
        if self.innov != other.innov:
            return False
        if self.dt_model != other.dt_model:
            return False
        if self.kc != other.kc:
            return False
        if self.ki != other.ki:
            return False
        if self.kd != other.kd:
            return False
        if self.kff != other.kff:
            return False
        if self.att_p != other.att_p:
            return False
        if all(self.rate_sp != other.rate_sp):
            return False
        if self.u_filt != other.u_filt:
            return False
        if self.y_filt != other.y_filt:
            return False
        if self.state != other.state:
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
    def coeff(self):
        """Message field 'coeff'."""
        return self._coeff

    @coeff.setter
    def coeff(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'coeff' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'coeff' numpy.ndarray() must have a size of 5"
            self._coeff = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'coeff' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._coeff = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def coeff_var(self):
        """Message field 'coeff_var'."""
        return self._coeff_var

    @coeff_var.setter
    def coeff_var(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'coeff_var' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'coeff_var' numpy.ndarray() must have a size of 5"
            self._coeff_var = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'coeff_var' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._coeff_var = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def fitness(self):
        """Message field 'fitness'."""
        return self._fitness

    @fitness.setter
    def fitness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fitness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fitness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fitness = value

    @builtins.property
    def innov(self):
        """Message field 'innov'."""
        return self._innov

    @innov.setter
    def innov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'innov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'innov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._innov = value

    @builtins.property
    def dt_model(self):
        """Message field 'dt_model'."""
        return self._dt_model

    @dt_model.setter
    def dt_model(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_model' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dt_model' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dt_model = value

    @builtins.property
    def kc(self):
        """Message field 'kc'."""
        return self._kc

    @kc.setter
    def kc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kc = value

    @builtins.property
    def ki(self):
        """Message field 'ki'."""
        return self._ki

    @ki.setter
    def ki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ki' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ki' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ki = value

    @builtins.property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kd = value

    @builtins.property
    def kff(self):
        """Message field 'kff'."""
        return self._kff

    @kff.setter
    def kff(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kff' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kff' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kff = value

    @builtins.property
    def att_p(self):
        """Message field 'att_p'."""
        return self._att_p

    @att_p.setter
    def att_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'att_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'att_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._att_p = value

    @builtins.property
    def rate_sp(self):
        """Message field 'rate_sp'."""
        return self._rate_sp

    @rate_sp.setter
    def rate_sp(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'rate_sp' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'rate_sp' numpy.ndarray() must have a size of 3"
            self._rate_sp = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'rate_sp' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._rate_sp = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def u_filt(self):
        """Message field 'u_filt'."""
        return self._u_filt

    @u_filt.setter
    def u_filt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'u_filt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'u_filt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._u_filt = value

    @builtins.property
    def y_filt(self):
        """Message field 'y_filt'."""
        return self._y_filt

    @y_filt.setter
    def y_filt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_filt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_filt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_filt = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
