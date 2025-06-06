# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/CurrentProfile.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'velocity_data'
# Member 'amplitude_data'
# Member 'correlation_data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CurrentProfile(type):
    """Metaclass of message 'CurrentProfile'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.CurrentProfile')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__current_profile
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__current_profile
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__current_profile
            cls._TYPE_SUPPORT = module.type_support_msg__msg__current_profile
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__current_profile

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CurrentProfile(metaclass=Metaclass_CurrentProfile):
    """Message class 'CurrentProfile'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_serial_number',
        '_sound_velocity',
        '_temperature',
        '_pressure',
        '_cell_size',
        '_blanking',
        '_number_of_cells',
        '_ambiguity_velocity',
        '_velocity_data',
        '_amplitude_data',
        '_correlation_data',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'serial_number': 'uint32',
        'sound_velocity': 'float',
        'temperature': 'float',
        'pressure': 'float',
        'cell_size': 'float',
        'blanking': 'float',
        'number_of_cells': 'uint16',
        'ambiguity_velocity': 'uint16',
        'velocity_data': 'sequence<int16>',
        'amplitude_data': 'sequence<uint8>',
        'correlation_data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.system_timestamp = kwargs.get('system_timestamp', Time())
        self.posix_time = kwargs.get('posix_time', bool())
        self.timestamp = kwargs.get('timestamp', int())
        self.microseconds = kwargs.get('microseconds', int())
        self.serial_number = kwargs.get('serial_number', int())
        self.sound_velocity = kwargs.get('sound_velocity', float())
        self.temperature = kwargs.get('temperature', float())
        self.pressure = kwargs.get('pressure', float())
        self.cell_size = kwargs.get('cell_size', float())
        self.blanking = kwargs.get('blanking', float())
        self.number_of_cells = kwargs.get('number_of_cells', int())
        self.ambiguity_velocity = kwargs.get('ambiguity_velocity', int())
        self.velocity_data = array.array('h', kwargs.get('velocity_data', []))
        self.amplitude_data = array.array('B', kwargs.get('amplitude_data', []))
        self.correlation_data = array.array('B', kwargs.get('correlation_data', []))

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
        if self.system_timestamp != other.system_timestamp:
            return False
        if self.posix_time != other.posix_time:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.microseconds != other.microseconds:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.sound_velocity != other.sound_velocity:
            return False
        if self.temperature != other.temperature:
            return False
        if self.pressure != other.pressure:
            return False
        if self.cell_size != other.cell_size:
            return False
        if self.blanking != other.blanking:
            return False
        if self.number_of_cells != other.number_of_cells:
            return False
        if self.ambiguity_velocity != other.ambiguity_velocity:
            return False
        if self.velocity_data != other.velocity_data:
            return False
        if self.amplitude_data != other.amplitude_data:
            return False
        if self.correlation_data != other.correlation_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def system_timestamp(self):
        """Message field 'system_timestamp'."""
        return self._system_timestamp

    @system_timestamp.setter
    def system_timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'system_timestamp' field must be a sub message of type 'Time'"
        self._system_timestamp = value

    @builtins.property
    def posix_time(self):
        """Message field 'posix_time'."""
        return self._posix_time

    @posix_time.setter
    def posix_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'posix_time' field must be of type 'bool'"
        self._posix_time = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp = value

    @builtins.property
    def microseconds(self):
        """Message field 'microseconds'."""
        return self._microseconds

    @microseconds.setter
    def microseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'microseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'microseconds' field must be an unsigned integer in [0, 4294967295]"
        self._microseconds = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'serial_number' field must be an unsigned integer in [0, 4294967295]"
        self._serial_number = value

    @builtins.property
    def sound_velocity(self):
        """Message field 'sound_velocity'."""
        return self._sound_velocity

    @sound_velocity.setter
    def sound_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sound_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sound_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sound_velocity = value

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
    def pressure(self):
        """Message field 'pressure'."""
        return self._pressure

    @pressure.setter
    def pressure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pressure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pressure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pressure = value

    @builtins.property
    def cell_size(self):
        """Message field 'cell_size'."""
        return self._cell_size

    @cell_size.setter
    def cell_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cell_size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cell_size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cell_size = value

    @builtins.property
    def blanking(self):
        """Message field 'blanking'."""
        return self._blanking

    @blanking.setter
    def blanking(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blanking' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'blanking' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._blanking = value

    @builtins.property
    def number_of_cells(self):
        """Message field 'number_of_cells'."""
        return self._number_of_cells

    @number_of_cells.setter
    def number_of_cells(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number_of_cells' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'number_of_cells' field must be an unsigned integer in [0, 65535]"
        self._number_of_cells = value

    @builtins.property
    def ambiguity_velocity(self):
        """Message field 'ambiguity_velocity'."""
        return self._ambiguity_velocity

    @ambiguity_velocity.setter
    def ambiguity_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ambiguity_velocity' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ambiguity_velocity' field must be an unsigned integer in [0, 65535]"
        self._ambiguity_velocity = value

    @builtins.property
    def velocity_data(self):
        """Message field 'velocity_data'."""
        return self._velocity_data

    @velocity_data.setter
    def velocity_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'velocity_data' array.array() must have the type code of 'h'"
            self._velocity_data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'velocity_data' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._velocity_data = array.array('h', value)

    @builtins.property
    def amplitude_data(self):
        """Message field 'amplitude_data'."""
        return self._amplitude_data

    @amplitude_data.setter
    def amplitude_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'amplitude_data' array.array() must have the type code of 'B'"
            self._amplitude_data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'amplitude_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._amplitude_data = array.array('B', value)

    @builtins.property
    def correlation_data(self):
        """Message field 'correlation_data'."""
        return self._correlation_data

    @correlation_data.setter
    def correlation_data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'correlation_data' array.array() must have the type code of 'B'"
            self._correlation_data = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'correlation_data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._correlation_data = array.array('B', value)
