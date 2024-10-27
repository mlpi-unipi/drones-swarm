# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/IridiumsbdStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IridiumsbdStatus(type):
    """Metaclass of message 'IridiumsbdStatus'."""

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
                'px4_msgs.msg.IridiumsbdStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__iridiumsbd_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__iridiumsbd_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__iridiumsbd_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__iridiumsbd_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__iridiumsbd_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IridiumsbdStatus(metaclass=Metaclass_IridiumsbdStatus):
    """Message class 'IridiumsbdStatus'."""

    __slots__ = [
        '_timestamp',
        '_last_heartbeat',
        '_tx_buf_write_index',
        '_rx_buf_read_index',
        '_rx_buf_end_index',
        '_failed_sbd_sessions',
        '_successful_sbd_sessions',
        '_num_tx_buf_reset',
        '_signal_quality',
        '_state',
        '_ring_pending',
        '_tx_buf_write_pending',
        '_tx_session_pending',
        '_rx_read_pending',
        '_rx_session_pending',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'last_heartbeat': 'uint64',
        'tx_buf_write_index': 'uint16',
        'rx_buf_read_index': 'uint16',
        'rx_buf_end_index': 'uint16',
        'failed_sbd_sessions': 'uint16',
        'successful_sbd_sessions': 'uint16',
        'num_tx_buf_reset': 'uint16',
        'signal_quality': 'uint8',
        'state': 'uint8',
        'ring_pending': 'boolean',
        'tx_buf_write_pending': 'boolean',
        'tx_session_pending': 'boolean',
        'rx_read_pending': 'boolean',
        'rx_session_pending': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.last_heartbeat = kwargs.get('last_heartbeat', int())
        self.tx_buf_write_index = kwargs.get('tx_buf_write_index', int())
        self.rx_buf_read_index = kwargs.get('rx_buf_read_index', int())
        self.rx_buf_end_index = kwargs.get('rx_buf_end_index', int())
        self.failed_sbd_sessions = kwargs.get('failed_sbd_sessions', int())
        self.successful_sbd_sessions = kwargs.get('successful_sbd_sessions', int())
        self.num_tx_buf_reset = kwargs.get('num_tx_buf_reset', int())
        self.signal_quality = kwargs.get('signal_quality', int())
        self.state = kwargs.get('state', int())
        self.ring_pending = kwargs.get('ring_pending', bool())
        self.tx_buf_write_pending = kwargs.get('tx_buf_write_pending', bool())
        self.tx_session_pending = kwargs.get('tx_session_pending', bool())
        self.rx_read_pending = kwargs.get('rx_read_pending', bool())
        self.rx_session_pending = kwargs.get('rx_session_pending', bool())

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
        if self.last_heartbeat != other.last_heartbeat:
            return False
        if self.tx_buf_write_index != other.tx_buf_write_index:
            return False
        if self.rx_buf_read_index != other.rx_buf_read_index:
            return False
        if self.rx_buf_end_index != other.rx_buf_end_index:
            return False
        if self.failed_sbd_sessions != other.failed_sbd_sessions:
            return False
        if self.successful_sbd_sessions != other.successful_sbd_sessions:
            return False
        if self.num_tx_buf_reset != other.num_tx_buf_reset:
            return False
        if self.signal_quality != other.signal_quality:
            return False
        if self.state != other.state:
            return False
        if self.ring_pending != other.ring_pending:
            return False
        if self.tx_buf_write_pending != other.tx_buf_write_pending:
            return False
        if self.tx_session_pending != other.tx_session_pending:
            return False
        if self.rx_read_pending != other.rx_read_pending:
            return False
        if self.rx_session_pending != other.rx_session_pending:
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
    def last_heartbeat(self):
        """Message field 'last_heartbeat'."""
        return self._last_heartbeat

    @last_heartbeat.setter
    def last_heartbeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_heartbeat' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_heartbeat' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_heartbeat = value

    @builtins.property
    def tx_buf_write_index(self):
        """Message field 'tx_buf_write_index'."""
        return self._tx_buf_write_index

    @tx_buf_write_index.setter
    def tx_buf_write_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tx_buf_write_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'tx_buf_write_index' field must be an unsigned integer in [0, 65535]"
        self._tx_buf_write_index = value

    @builtins.property
    def rx_buf_read_index(self):
        """Message field 'rx_buf_read_index'."""
        return self._rx_buf_read_index

    @rx_buf_read_index.setter
    def rx_buf_read_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_buf_read_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rx_buf_read_index' field must be an unsigned integer in [0, 65535]"
        self._rx_buf_read_index = value

    @builtins.property
    def rx_buf_end_index(self):
        """Message field 'rx_buf_end_index'."""
        return self._rx_buf_end_index

    @rx_buf_end_index.setter
    def rx_buf_end_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rx_buf_end_index' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rx_buf_end_index' field must be an unsigned integer in [0, 65535]"
        self._rx_buf_end_index = value

    @builtins.property
    def failed_sbd_sessions(self):
        """Message field 'failed_sbd_sessions'."""
        return self._failed_sbd_sessions

    @failed_sbd_sessions.setter
    def failed_sbd_sessions(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failed_sbd_sessions' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'failed_sbd_sessions' field must be an unsigned integer in [0, 65535]"
        self._failed_sbd_sessions = value

    @builtins.property
    def successful_sbd_sessions(self):
        """Message field 'successful_sbd_sessions'."""
        return self._successful_sbd_sessions

    @successful_sbd_sessions.setter
    def successful_sbd_sessions(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'successful_sbd_sessions' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'successful_sbd_sessions' field must be an unsigned integer in [0, 65535]"
        self._successful_sbd_sessions = value

    @builtins.property
    def num_tx_buf_reset(self):
        """Message field 'num_tx_buf_reset'."""
        return self._num_tx_buf_reset

    @num_tx_buf_reset.setter
    def num_tx_buf_reset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_tx_buf_reset' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_tx_buf_reset' field must be an unsigned integer in [0, 65535]"
        self._num_tx_buf_reset = value

    @builtins.property
    def signal_quality(self):
        """Message field 'signal_quality'."""
        return self._signal_quality

    @signal_quality.setter
    def signal_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_quality' field must be an unsigned integer in [0, 255]"
        self._signal_quality = value

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

    @builtins.property
    def ring_pending(self):
        """Message field 'ring_pending'."""
        return self._ring_pending

    @ring_pending.setter
    def ring_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ring_pending' field must be of type 'bool'"
        self._ring_pending = value

    @builtins.property
    def tx_buf_write_pending(self):
        """Message field 'tx_buf_write_pending'."""
        return self._tx_buf_write_pending

    @tx_buf_write_pending.setter
    def tx_buf_write_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tx_buf_write_pending' field must be of type 'bool'"
        self._tx_buf_write_pending = value

    @builtins.property
    def tx_session_pending(self):
        """Message field 'tx_session_pending'."""
        return self._tx_session_pending

    @tx_session_pending.setter
    def tx_session_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tx_session_pending' field must be of type 'bool'"
        self._tx_session_pending = value

    @builtins.property
    def rx_read_pending(self):
        """Message field 'rx_read_pending'."""
        return self._rx_read_pending

    @rx_read_pending.setter
    def rx_read_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rx_read_pending' field must be of type 'bool'"
        self._rx_read_pending = value

    @builtins.property
    def rx_session_pending(self):
        """Message field 'rx_session_pending'."""
        return self._rx_session_pending

    @rx_session_pending.setter
    def rx_session_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rx_session_pending' field must be of type 'bool'"
        self._rx_session_pending = value
