# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorEventFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorEventFlags(type):
    """Metaclass of message 'EstimatorEventFlags'."""

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
                'px4_msgs.msg.EstimatorEventFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_event_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_event_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_event_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_event_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_event_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorEventFlags(metaclass=Metaclass_EstimatorEventFlags):
    """Message class 'EstimatorEventFlags'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_information_event_changes',
        '_gps_checks_passed',
        '_reset_vel_to_gps',
        '_reset_vel_to_flow',
        '_reset_vel_to_vision',
        '_reset_vel_to_zero',
        '_reset_pos_to_last_known',
        '_reset_pos_to_gps',
        '_reset_pos_to_vision',
        '_starting_gps_fusion',
        '_starting_vision_pos_fusion',
        '_starting_vision_vel_fusion',
        '_starting_vision_yaw_fusion',
        '_yaw_aligned_to_imu_gps',
        '_reset_hgt_to_baro',
        '_reset_hgt_to_gps',
        '_reset_hgt_to_rng',
        '_reset_hgt_to_ev',
        '_warning_event_changes',
        '_gps_quality_poor',
        '_gps_fusion_timout',
        '_gps_data_stopped',
        '_gps_data_stopped_using_alternate',
        '_height_sensor_timeout',
        '_stopping_navigation',
        '_invalid_accel_bias_cov_reset',
        '_bad_yaw_using_gps_course',
        '_stopping_mag_use',
        '_vision_data_stopped',
        '_emergency_yaw_reset_mag_stopped',
        '_emergency_yaw_reset_gps_yaw_stopped',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'information_event_changes': 'uint32',
        'gps_checks_passed': 'boolean',
        'reset_vel_to_gps': 'boolean',
        'reset_vel_to_flow': 'boolean',
        'reset_vel_to_vision': 'boolean',
        'reset_vel_to_zero': 'boolean',
        'reset_pos_to_last_known': 'boolean',
        'reset_pos_to_gps': 'boolean',
        'reset_pos_to_vision': 'boolean',
        'starting_gps_fusion': 'boolean',
        'starting_vision_pos_fusion': 'boolean',
        'starting_vision_vel_fusion': 'boolean',
        'starting_vision_yaw_fusion': 'boolean',
        'yaw_aligned_to_imu_gps': 'boolean',
        'reset_hgt_to_baro': 'boolean',
        'reset_hgt_to_gps': 'boolean',
        'reset_hgt_to_rng': 'boolean',
        'reset_hgt_to_ev': 'boolean',
        'warning_event_changes': 'uint32',
        'gps_quality_poor': 'boolean',
        'gps_fusion_timout': 'boolean',
        'gps_data_stopped': 'boolean',
        'gps_data_stopped_using_alternate': 'boolean',
        'height_sensor_timeout': 'boolean',
        'stopping_navigation': 'boolean',
        'invalid_accel_bias_cov_reset': 'boolean',
        'bad_yaw_using_gps_course': 'boolean',
        'stopping_mag_use': 'boolean',
        'vision_data_stopped': 'boolean',
        'emergency_yaw_reset_mag_stopped': 'boolean',
        'emergency_yaw_reset_gps_yaw_stopped': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.information_event_changes = kwargs.get('information_event_changes', int())
        self.gps_checks_passed = kwargs.get('gps_checks_passed', bool())
        self.reset_vel_to_gps = kwargs.get('reset_vel_to_gps', bool())
        self.reset_vel_to_flow = kwargs.get('reset_vel_to_flow', bool())
        self.reset_vel_to_vision = kwargs.get('reset_vel_to_vision', bool())
        self.reset_vel_to_zero = kwargs.get('reset_vel_to_zero', bool())
        self.reset_pos_to_last_known = kwargs.get('reset_pos_to_last_known', bool())
        self.reset_pos_to_gps = kwargs.get('reset_pos_to_gps', bool())
        self.reset_pos_to_vision = kwargs.get('reset_pos_to_vision', bool())
        self.starting_gps_fusion = kwargs.get('starting_gps_fusion', bool())
        self.starting_vision_pos_fusion = kwargs.get('starting_vision_pos_fusion', bool())
        self.starting_vision_vel_fusion = kwargs.get('starting_vision_vel_fusion', bool())
        self.starting_vision_yaw_fusion = kwargs.get('starting_vision_yaw_fusion', bool())
        self.yaw_aligned_to_imu_gps = kwargs.get('yaw_aligned_to_imu_gps', bool())
        self.reset_hgt_to_baro = kwargs.get('reset_hgt_to_baro', bool())
        self.reset_hgt_to_gps = kwargs.get('reset_hgt_to_gps', bool())
        self.reset_hgt_to_rng = kwargs.get('reset_hgt_to_rng', bool())
        self.reset_hgt_to_ev = kwargs.get('reset_hgt_to_ev', bool())
        self.warning_event_changes = kwargs.get('warning_event_changes', int())
        self.gps_quality_poor = kwargs.get('gps_quality_poor', bool())
        self.gps_fusion_timout = kwargs.get('gps_fusion_timout', bool())
        self.gps_data_stopped = kwargs.get('gps_data_stopped', bool())
        self.gps_data_stopped_using_alternate = kwargs.get('gps_data_stopped_using_alternate', bool())
        self.height_sensor_timeout = kwargs.get('height_sensor_timeout', bool())
        self.stopping_navigation = kwargs.get('stopping_navigation', bool())
        self.invalid_accel_bias_cov_reset = kwargs.get('invalid_accel_bias_cov_reset', bool())
        self.bad_yaw_using_gps_course = kwargs.get('bad_yaw_using_gps_course', bool())
        self.stopping_mag_use = kwargs.get('stopping_mag_use', bool())
        self.vision_data_stopped = kwargs.get('vision_data_stopped', bool())
        self.emergency_yaw_reset_mag_stopped = kwargs.get('emergency_yaw_reset_mag_stopped', bool())
        self.emergency_yaw_reset_gps_yaw_stopped = kwargs.get('emergency_yaw_reset_gps_yaw_stopped', bool())

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
        if self.information_event_changes != other.information_event_changes:
            return False
        if self.gps_checks_passed != other.gps_checks_passed:
            return False
        if self.reset_vel_to_gps != other.reset_vel_to_gps:
            return False
        if self.reset_vel_to_flow != other.reset_vel_to_flow:
            return False
        if self.reset_vel_to_vision != other.reset_vel_to_vision:
            return False
        if self.reset_vel_to_zero != other.reset_vel_to_zero:
            return False
        if self.reset_pos_to_last_known != other.reset_pos_to_last_known:
            return False
        if self.reset_pos_to_gps != other.reset_pos_to_gps:
            return False
        if self.reset_pos_to_vision != other.reset_pos_to_vision:
            return False
        if self.starting_gps_fusion != other.starting_gps_fusion:
            return False
        if self.starting_vision_pos_fusion != other.starting_vision_pos_fusion:
            return False
        if self.starting_vision_vel_fusion != other.starting_vision_vel_fusion:
            return False
        if self.starting_vision_yaw_fusion != other.starting_vision_yaw_fusion:
            return False
        if self.yaw_aligned_to_imu_gps != other.yaw_aligned_to_imu_gps:
            return False
        if self.reset_hgt_to_baro != other.reset_hgt_to_baro:
            return False
        if self.reset_hgt_to_gps != other.reset_hgt_to_gps:
            return False
        if self.reset_hgt_to_rng != other.reset_hgt_to_rng:
            return False
        if self.reset_hgt_to_ev != other.reset_hgt_to_ev:
            return False
        if self.warning_event_changes != other.warning_event_changes:
            return False
        if self.gps_quality_poor != other.gps_quality_poor:
            return False
        if self.gps_fusion_timout != other.gps_fusion_timout:
            return False
        if self.gps_data_stopped != other.gps_data_stopped:
            return False
        if self.gps_data_stopped_using_alternate != other.gps_data_stopped_using_alternate:
            return False
        if self.height_sensor_timeout != other.height_sensor_timeout:
            return False
        if self.stopping_navigation != other.stopping_navigation:
            return False
        if self.invalid_accel_bias_cov_reset != other.invalid_accel_bias_cov_reset:
            return False
        if self.bad_yaw_using_gps_course != other.bad_yaw_using_gps_course:
            return False
        if self.stopping_mag_use != other.stopping_mag_use:
            return False
        if self.vision_data_stopped != other.vision_data_stopped:
            return False
        if self.emergency_yaw_reset_mag_stopped != other.emergency_yaw_reset_mag_stopped:
            return False
        if self.emergency_yaw_reset_gps_yaw_stopped != other.emergency_yaw_reset_gps_yaw_stopped:
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
    def information_event_changes(self):
        """Message field 'information_event_changes'."""
        return self._information_event_changes

    @information_event_changes.setter
    def information_event_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'information_event_changes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'information_event_changes' field must be an unsigned integer in [0, 4294967295]"
        self._information_event_changes = value

    @builtins.property
    def gps_checks_passed(self):
        """Message field 'gps_checks_passed'."""
        return self._gps_checks_passed

    @gps_checks_passed.setter
    def gps_checks_passed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_checks_passed' field must be of type 'bool'"
        self._gps_checks_passed = value

    @builtins.property
    def reset_vel_to_gps(self):
        """Message field 'reset_vel_to_gps'."""
        return self._reset_vel_to_gps

    @reset_vel_to_gps.setter
    def reset_vel_to_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_vel_to_gps' field must be of type 'bool'"
        self._reset_vel_to_gps = value

    @builtins.property
    def reset_vel_to_flow(self):
        """Message field 'reset_vel_to_flow'."""
        return self._reset_vel_to_flow

    @reset_vel_to_flow.setter
    def reset_vel_to_flow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_vel_to_flow' field must be of type 'bool'"
        self._reset_vel_to_flow = value

    @builtins.property
    def reset_vel_to_vision(self):
        """Message field 'reset_vel_to_vision'."""
        return self._reset_vel_to_vision

    @reset_vel_to_vision.setter
    def reset_vel_to_vision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_vel_to_vision' field must be of type 'bool'"
        self._reset_vel_to_vision = value

    @builtins.property
    def reset_vel_to_zero(self):
        """Message field 'reset_vel_to_zero'."""
        return self._reset_vel_to_zero

    @reset_vel_to_zero.setter
    def reset_vel_to_zero(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_vel_to_zero' field must be of type 'bool'"
        self._reset_vel_to_zero = value

    @builtins.property
    def reset_pos_to_last_known(self):
        """Message field 'reset_pos_to_last_known'."""
        return self._reset_pos_to_last_known

    @reset_pos_to_last_known.setter
    def reset_pos_to_last_known(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_pos_to_last_known' field must be of type 'bool'"
        self._reset_pos_to_last_known = value

    @builtins.property
    def reset_pos_to_gps(self):
        """Message field 'reset_pos_to_gps'."""
        return self._reset_pos_to_gps

    @reset_pos_to_gps.setter
    def reset_pos_to_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_pos_to_gps' field must be of type 'bool'"
        self._reset_pos_to_gps = value

    @builtins.property
    def reset_pos_to_vision(self):
        """Message field 'reset_pos_to_vision'."""
        return self._reset_pos_to_vision

    @reset_pos_to_vision.setter
    def reset_pos_to_vision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_pos_to_vision' field must be of type 'bool'"
        self._reset_pos_to_vision = value

    @builtins.property
    def starting_gps_fusion(self):
        """Message field 'starting_gps_fusion'."""
        return self._starting_gps_fusion

    @starting_gps_fusion.setter
    def starting_gps_fusion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'starting_gps_fusion' field must be of type 'bool'"
        self._starting_gps_fusion = value

    @builtins.property
    def starting_vision_pos_fusion(self):
        """Message field 'starting_vision_pos_fusion'."""
        return self._starting_vision_pos_fusion

    @starting_vision_pos_fusion.setter
    def starting_vision_pos_fusion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'starting_vision_pos_fusion' field must be of type 'bool'"
        self._starting_vision_pos_fusion = value

    @builtins.property
    def starting_vision_vel_fusion(self):
        """Message field 'starting_vision_vel_fusion'."""
        return self._starting_vision_vel_fusion

    @starting_vision_vel_fusion.setter
    def starting_vision_vel_fusion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'starting_vision_vel_fusion' field must be of type 'bool'"
        self._starting_vision_vel_fusion = value

    @builtins.property
    def starting_vision_yaw_fusion(self):
        """Message field 'starting_vision_yaw_fusion'."""
        return self._starting_vision_yaw_fusion

    @starting_vision_yaw_fusion.setter
    def starting_vision_yaw_fusion(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'starting_vision_yaw_fusion' field must be of type 'bool'"
        self._starting_vision_yaw_fusion = value

    @builtins.property
    def yaw_aligned_to_imu_gps(self):
        """Message field 'yaw_aligned_to_imu_gps'."""
        return self._yaw_aligned_to_imu_gps

    @yaw_aligned_to_imu_gps.setter
    def yaw_aligned_to_imu_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_aligned_to_imu_gps' field must be of type 'bool'"
        self._yaw_aligned_to_imu_gps = value

    @builtins.property
    def reset_hgt_to_baro(self):
        """Message field 'reset_hgt_to_baro'."""
        return self._reset_hgt_to_baro

    @reset_hgt_to_baro.setter
    def reset_hgt_to_baro(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_hgt_to_baro' field must be of type 'bool'"
        self._reset_hgt_to_baro = value

    @builtins.property
    def reset_hgt_to_gps(self):
        """Message field 'reset_hgt_to_gps'."""
        return self._reset_hgt_to_gps

    @reset_hgt_to_gps.setter
    def reset_hgt_to_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_hgt_to_gps' field must be of type 'bool'"
        self._reset_hgt_to_gps = value

    @builtins.property
    def reset_hgt_to_rng(self):
        """Message field 'reset_hgt_to_rng'."""
        return self._reset_hgt_to_rng

    @reset_hgt_to_rng.setter
    def reset_hgt_to_rng(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_hgt_to_rng' field must be of type 'bool'"
        self._reset_hgt_to_rng = value

    @builtins.property
    def reset_hgt_to_ev(self):
        """Message field 'reset_hgt_to_ev'."""
        return self._reset_hgt_to_ev

    @reset_hgt_to_ev.setter
    def reset_hgt_to_ev(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reset_hgt_to_ev' field must be of type 'bool'"
        self._reset_hgt_to_ev = value

    @builtins.property
    def warning_event_changes(self):
        """Message field 'warning_event_changes'."""
        return self._warning_event_changes

    @warning_event_changes.setter
    def warning_event_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'warning_event_changes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'warning_event_changes' field must be an unsigned integer in [0, 4294967295]"
        self._warning_event_changes = value

    @builtins.property
    def gps_quality_poor(self):
        """Message field 'gps_quality_poor'."""
        return self._gps_quality_poor

    @gps_quality_poor.setter
    def gps_quality_poor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_quality_poor' field must be of type 'bool'"
        self._gps_quality_poor = value

    @builtins.property
    def gps_fusion_timout(self):
        """Message field 'gps_fusion_timout'."""
        return self._gps_fusion_timout

    @gps_fusion_timout.setter
    def gps_fusion_timout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_fusion_timout' field must be of type 'bool'"
        self._gps_fusion_timout = value

    @builtins.property
    def gps_data_stopped(self):
        """Message field 'gps_data_stopped'."""
        return self._gps_data_stopped

    @gps_data_stopped.setter
    def gps_data_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_data_stopped' field must be of type 'bool'"
        self._gps_data_stopped = value

    @builtins.property
    def gps_data_stopped_using_alternate(self):
        """Message field 'gps_data_stopped_using_alternate'."""
        return self._gps_data_stopped_using_alternate

    @gps_data_stopped_using_alternate.setter
    def gps_data_stopped_using_alternate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_data_stopped_using_alternate' field must be of type 'bool'"
        self._gps_data_stopped_using_alternate = value

    @builtins.property
    def height_sensor_timeout(self):
        """Message field 'height_sensor_timeout'."""
        return self._height_sensor_timeout

    @height_sensor_timeout.setter
    def height_sensor_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'height_sensor_timeout' field must be of type 'bool'"
        self._height_sensor_timeout = value

    @builtins.property
    def stopping_navigation(self):
        """Message field 'stopping_navigation'."""
        return self._stopping_navigation

    @stopping_navigation.setter
    def stopping_navigation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stopping_navigation' field must be of type 'bool'"
        self._stopping_navigation = value

    @builtins.property
    def invalid_accel_bias_cov_reset(self):
        """Message field 'invalid_accel_bias_cov_reset'."""
        return self._invalid_accel_bias_cov_reset

    @invalid_accel_bias_cov_reset.setter
    def invalid_accel_bias_cov_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'invalid_accel_bias_cov_reset' field must be of type 'bool'"
        self._invalid_accel_bias_cov_reset = value

    @builtins.property
    def bad_yaw_using_gps_course(self):
        """Message field 'bad_yaw_using_gps_course'."""
        return self._bad_yaw_using_gps_course

    @bad_yaw_using_gps_course.setter
    def bad_yaw_using_gps_course(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bad_yaw_using_gps_course' field must be of type 'bool'"
        self._bad_yaw_using_gps_course = value

    @builtins.property
    def stopping_mag_use(self):
        """Message field 'stopping_mag_use'."""
        return self._stopping_mag_use

    @stopping_mag_use.setter
    def stopping_mag_use(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stopping_mag_use' field must be of type 'bool'"
        self._stopping_mag_use = value

    @builtins.property
    def vision_data_stopped(self):
        """Message field 'vision_data_stopped'."""
        return self._vision_data_stopped

    @vision_data_stopped.setter
    def vision_data_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vision_data_stopped' field must be of type 'bool'"
        self._vision_data_stopped = value

    @builtins.property
    def emergency_yaw_reset_mag_stopped(self):
        """Message field 'emergency_yaw_reset_mag_stopped'."""
        return self._emergency_yaw_reset_mag_stopped

    @emergency_yaw_reset_mag_stopped.setter
    def emergency_yaw_reset_mag_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_yaw_reset_mag_stopped' field must be of type 'bool'"
        self._emergency_yaw_reset_mag_stopped = value

    @builtins.property
    def emergency_yaw_reset_gps_yaw_stopped(self):
        """Message field 'emergency_yaw_reset_gps_yaw_stopped'."""
        return self._emergency_yaw_reset_gps_yaw_stopped

    @emergency_yaw_reset_gps_yaw_stopped.setter
    def emergency_yaw_reset_gps_yaw_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_yaw_reset_gps_yaw_stopped' field must be of type 'bool'"
        self._emergency_yaw_reset_gps_yaw_stopped = value
