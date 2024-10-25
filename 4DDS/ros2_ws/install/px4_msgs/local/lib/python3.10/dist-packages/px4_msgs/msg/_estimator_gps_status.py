# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorGpsStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorGpsStatus(type):
    """Metaclass of message 'EstimatorGpsStatus'."""

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
                'px4_msgs.msg.EstimatorGpsStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_gps_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_gps_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_gps_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_gps_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_gps_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorGpsStatus(metaclass=Metaclass_EstimatorGpsStatus):
    """Message class 'EstimatorGpsStatus'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_checks_passed',
        '_check_fail_gps_fix',
        '_check_fail_min_sat_count',
        '_check_fail_max_pdop',
        '_check_fail_max_horz_err',
        '_check_fail_max_vert_err',
        '_check_fail_max_spd_err',
        '_check_fail_max_horz_drift',
        '_check_fail_max_vert_drift',
        '_check_fail_max_horz_spd_err',
        '_check_fail_max_vert_spd_err',
        '_position_drift_rate_horizontal_m_s',
        '_position_drift_rate_vertical_m_s',
        '_filtered_horizontal_speed_m_s',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'checks_passed': 'boolean',
        'check_fail_gps_fix': 'boolean',
        'check_fail_min_sat_count': 'boolean',
        'check_fail_max_pdop': 'boolean',
        'check_fail_max_horz_err': 'boolean',
        'check_fail_max_vert_err': 'boolean',
        'check_fail_max_spd_err': 'boolean',
        'check_fail_max_horz_drift': 'boolean',
        'check_fail_max_vert_drift': 'boolean',
        'check_fail_max_horz_spd_err': 'boolean',
        'check_fail_max_vert_spd_err': 'boolean',
        'position_drift_rate_horizontal_m_s': 'float',
        'position_drift_rate_vertical_m_s': 'float',
        'filtered_horizontal_speed_m_s': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.checks_passed = kwargs.get('checks_passed', bool())
        self.check_fail_gps_fix = kwargs.get('check_fail_gps_fix', bool())
        self.check_fail_min_sat_count = kwargs.get('check_fail_min_sat_count', bool())
        self.check_fail_max_pdop = kwargs.get('check_fail_max_pdop', bool())
        self.check_fail_max_horz_err = kwargs.get('check_fail_max_horz_err', bool())
        self.check_fail_max_vert_err = kwargs.get('check_fail_max_vert_err', bool())
        self.check_fail_max_spd_err = kwargs.get('check_fail_max_spd_err', bool())
        self.check_fail_max_horz_drift = kwargs.get('check_fail_max_horz_drift', bool())
        self.check_fail_max_vert_drift = kwargs.get('check_fail_max_vert_drift', bool())
        self.check_fail_max_horz_spd_err = kwargs.get('check_fail_max_horz_spd_err', bool())
        self.check_fail_max_vert_spd_err = kwargs.get('check_fail_max_vert_spd_err', bool())
        self.position_drift_rate_horizontal_m_s = kwargs.get('position_drift_rate_horizontal_m_s', float())
        self.position_drift_rate_vertical_m_s = kwargs.get('position_drift_rate_vertical_m_s', float())
        self.filtered_horizontal_speed_m_s = kwargs.get('filtered_horizontal_speed_m_s', float())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.checks_passed != other.checks_passed:
            return False
        if self.check_fail_gps_fix != other.check_fail_gps_fix:
            return False
        if self.check_fail_min_sat_count != other.check_fail_min_sat_count:
            return False
        if self.check_fail_max_pdop != other.check_fail_max_pdop:
            return False
        if self.check_fail_max_horz_err != other.check_fail_max_horz_err:
            return False
        if self.check_fail_max_vert_err != other.check_fail_max_vert_err:
            return False
        if self.check_fail_max_spd_err != other.check_fail_max_spd_err:
            return False
        if self.check_fail_max_horz_drift != other.check_fail_max_horz_drift:
            return False
        if self.check_fail_max_vert_drift != other.check_fail_max_vert_drift:
            return False
        if self.check_fail_max_horz_spd_err != other.check_fail_max_horz_spd_err:
            return False
        if self.check_fail_max_vert_spd_err != other.check_fail_max_vert_spd_err:
            return False
        if self.position_drift_rate_horizontal_m_s != other.position_drift_rate_horizontal_m_s:
            return False
        if self.position_drift_rate_vertical_m_s != other.position_drift_rate_vertical_m_s:
            return False
        if self.filtered_horizontal_speed_m_s != other.filtered_horizontal_speed_m_s:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def checks_passed(self):
        """Message field 'checks_passed'."""
        return self._checks_passed

    @checks_passed.setter
    def checks_passed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'checks_passed' field must be of type 'bool'"
        self._checks_passed = value

    @builtins.property
    def check_fail_gps_fix(self):
        """Message field 'check_fail_gps_fix'."""
        return self._check_fail_gps_fix

    @check_fail_gps_fix.setter
    def check_fail_gps_fix(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_gps_fix' field must be of type 'bool'"
        self._check_fail_gps_fix = value

    @builtins.property
    def check_fail_min_sat_count(self):
        """Message field 'check_fail_min_sat_count'."""
        return self._check_fail_min_sat_count

    @check_fail_min_sat_count.setter
    def check_fail_min_sat_count(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_min_sat_count' field must be of type 'bool'"
        self._check_fail_min_sat_count = value

    @builtins.property
    def check_fail_max_pdop(self):
        """Message field 'check_fail_max_pdop'."""
        return self._check_fail_max_pdop

    @check_fail_max_pdop.setter
    def check_fail_max_pdop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_pdop' field must be of type 'bool'"
        self._check_fail_max_pdop = value

    @builtins.property
    def check_fail_max_horz_err(self):
        """Message field 'check_fail_max_horz_err'."""
        return self._check_fail_max_horz_err

    @check_fail_max_horz_err.setter
    def check_fail_max_horz_err(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_horz_err' field must be of type 'bool'"
        self._check_fail_max_horz_err = value

    @builtins.property
    def check_fail_max_vert_err(self):
        """Message field 'check_fail_max_vert_err'."""
        return self._check_fail_max_vert_err

    @check_fail_max_vert_err.setter
    def check_fail_max_vert_err(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_vert_err' field must be of type 'bool'"
        self._check_fail_max_vert_err = value

    @builtins.property
    def check_fail_max_spd_err(self):
        """Message field 'check_fail_max_spd_err'."""
        return self._check_fail_max_spd_err

    @check_fail_max_spd_err.setter
    def check_fail_max_spd_err(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_spd_err' field must be of type 'bool'"
        self._check_fail_max_spd_err = value

    @builtins.property
    def check_fail_max_horz_drift(self):
        """Message field 'check_fail_max_horz_drift'."""
        return self._check_fail_max_horz_drift

    @check_fail_max_horz_drift.setter
    def check_fail_max_horz_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_horz_drift' field must be of type 'bool'"
        self._check_fail_max_horz_drift = value

    @builtins.property
    def check_fail_max_vert_drift(self):
        """Message field 'check_fail_max_vert_drift'."""
        return self._check_fail_max_vert_drift

    @check_fail_max_vert_drift.setter
    def check_fail_max_vert_drift(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_vert_drift' field must be of type 'bool'"
        self._check_fail_max_vert_drift = value

    @builtins.property
    def check_fail_max_horz_spd_err(self):
        """Message field 'check_fail_max_horz_spd_err'."""
        return self._check_fail_max_horz_spd_err

    @check_fail_max_horz_spd_err.setter
    def check_fail_max_horz_spd_err(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_horz_spd_err' field must be of type 'bool'"
        self._check_fail_max_horz_spd_err = value

    @builtins.property
    def check_fail_max_vert_spd_err(self):
        """Message field 'check_fail_max_vert_spd_err'."""
        return self._check_fail_max_vert_spd_err

    @check_fail_max_vert_spd_err.setter
    def check_fail_max_vert_spd_err(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'check_fail_max_vert_spd_err' field must be of type 'bool'"
        self._check_fail_max_vert_spd_err = value

    @builtins.property
    def position_drift_rate_horizontal_m_s(self):
        """Message field 'position_drift_rate_horizontal_m_s'."""
        return self._position_drift_rate_horizontal_m_s

    @position_drift_rate_horizontal_m_s.setter
    def position_drift_rate_horizontal_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_drift_rate_horizontal_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_drift_rate_horizontal_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_drift_rate_horizontal_m_s = value

    @builtins.property
    def position_drift_rate_vertical_m_s(self):
        """Message field 'position_drift_rate_vertical_m_s'."""
        return self._position_drift_rate_vertical_m_s

    @position_drift_rate_vertical_m_s.setter
    def position_drift_rate_vertical_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_drift_rate_vertical_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_drift_rate_vertical_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_drift_rate_vertical_m_s = value

    @builtins.property
    def filtered_horizontal_speed_m_s(self):
        """Message field 'filtered_horizontal_speed_m_s'."""
        return self._filtered_horizontal_speed_m_s

    @filtered_horizontal_speed_m_s.setter
    def filtered_horizontal_speed_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'filtered_horizontal_speed_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'filtered_horizontal_speed_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._filtered_horizontal_speed_m_s = value
