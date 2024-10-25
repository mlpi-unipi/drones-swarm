# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/MissionResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionResult(type):
    """Metaclass of message 'MissionResult'."""

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
                'px4_msgs.msg.MissionResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MissionResult(metaclass=Metaclass_MissionResult):
    """Message class 'MissionResult'."""

    __slots__ = [
        '_timestamp',
        '_mission_id',
        '_geofence_id',
        '_home_position_counter',
        '_seq_reached',
        '_seq_current',
        '_seq_total',
        '_valid',
        '_warning',
        '_finished',
        '_failure',
        '_item_do_jump_changed',
        '_item_changed_index',
        '_item_do_jump_remaining',
        '_execution_mode',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'mission_id': 'uint32',
        'geofence_id': 'uint32',
        'home_position_counter': 'uint32',
        'seq_reached': 'int32',
        'seq_current': 'uint16',
        'seq_total': 'uint16',
        'valid': 'boolean',
        'warning': 'boolean',
        'finished': 'boolean',
        'failure': 'boolean',
        'item_do_jump_changed': 'boolean',
        'item_changed_index': 'uint16',
        'item_do_jump_remaining': 'uint16',
        'execution_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.mission_id = kwargs.get('mission_id', int())
        self.geofence_id = kwargs.get('geofence_id', int())
        self.home_position_counter = kwargs.get('home_position_counter', int())
        self.seq_reached = kwargs.get('seq_reached', int())
        self.seq_current = kwargs.get('seq_current', int())
        self.seq_total = kwargs.get('seq_total', int())
        self.valid = kwargs.get('valid', bool())
        self.warning = kwargs.get('warning', bool())
        self.finished = kwargs.get('finished', bool())
        self.failure = kwargs.get('failure', bool())
        self.item_do_jump_changed = kwargs.get('item_do_jump_changed', bool())
        self.item_changed_index = kwargs.get('item_changed_index', int())
        self.item_do_jump_remaining = kwargs.get('item_do_jump_remaining', int())
        self.execution_mode = kwargs.get('execution_mode', int())

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
        if self.mission_id != other.mission_id:
            return False
        if self.geofence_id != other.geofence_id:
            return False
        if self.home_position_counter != other.home_position_counter:
            return False
        if self.seq_reached != other.seq_reached:
            return False
        if self.seq_current != other.seq_current:
            return False
        if self.seq_total != other.seq_total:
            return False
        if self.valid != other.valid:
            return False
        if self.warning != other.warning:
            return False
        if self.finished != other.finished:
            return False
        if self.failure != other.failure:
            return False
        if self.item_do_jump_changed != other.item_do_jump_changed:
            return False
        if self.item_changed_index != other.item_changed_index:
            return False
        if self.item_do_jump_remaining != other.item_do_jump_remaining:
            return False
        if self.execution_mode != other.execution_mode:
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
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mission_id' field must be an unsigned integer in [0, 4294967295]"
        self._mission_id = value

    @builtins.property
    def geofence_id(self):
        """Message field 'geofence_id'."""
        return self._geofence_id

    @geofence_id.setter
    def geofence_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'geofence_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'geofence_id' field must be an unsigned integer in [0, 4294967295]"
        self._geofence_id = value

    @builtins.property
    def home_position_counter(self):
        """Message field 'home_position_counter'."""
        return self._home_position_counter

    @home_position_counter.setter
    def home_position_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'home_position_counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'home_position_counter' field must be an unsigned integer in [0, 4294967295]"
        self._home_position_counter = value

    @builtins.property
    def seq_reached(self):
        """Message field 'seq_reached'."""
        return self._seq_reached

    @seq_reached.setter
    def seq_reached(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq_reached' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seq_reached' field must be an integer in [-2147483648, 2147483647]"
        self._seq_reached = value

    @builtins.property
    def seq_current(self):
        """Message field 'seq_current'."""
        return self._seq_current

    @seq_current.setter
    def seq_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'seq_current' field must be an unsigned integer in [0, 65535]"
        self._seq_current = value

    @builtins.property
    def seq_total(self):
        """Message field 'seq_total'."""
        return self._seq_total

    @seq_total.setter
    def seq_total(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq_total' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'seq_total' field must be an unsigned integer in [0, 65535]"
        self._seq_total = value

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def warning(self):
        """Message field 'warning'."""
        return self._warning

    @warning.setter
    def warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'warning' field must be of type 'bool'"
        self._warning = value

    @builtins.property
    def finished(self):
        """Message field 'finished'."""
        return self._finished

    @finished.setter
    def finished(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'finished' field must be of type 'bool'"
        self._finished = value

    @builtins.property
    def failure(self):
        """Message field 'failure'."""
        return self._failure

    @failure.setter
    def failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'failure' field must be of type 'bool'"
        self._failure = value

    @builtins.property
    def item_do_jump_changed(self):
        """Message field 'item_do_jump_changed'."""
        return self._item_do_jump_changed

    @item_do_jump_changed.setter
    def item_do_jump_changed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'item_do_jump_changed' field must be of type 'bool'"
        self._item_do_jump_changed = value

    @builtins.property
    def item_changed_index(self):
        """Message field 'item_changed_index'."""
        return self._item_changed_index

    @item_changed_index.setter
    def item_changed_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'item_changed_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'item_changed_index' field must be an unsigned integer in [0, 65535]"
        self._item_changed_index = value

    @builtins.property
    def item_do_jump_remaining(self):
        """Message field 'item_do_jump_remaining'."""
        return self._item_do_jump_remaining

    @item_do_jump_remaining.setter
    def item_do_jump_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'item_do_jump_remaining' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'item_do_jump_remaining' field must be an unsigned integer in [0, 65535]"
        self._item_do_jump_remaining = value

    @builtins.property
    def execution_mode(self):
        """Message field 'execution_mode'."""
        return self._execution_mode

    @execution_mode.setter
    def execution_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'execution_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'execution_mode' field must be an unsigned integer in [0, 255]"
        self._execution_mode = value
