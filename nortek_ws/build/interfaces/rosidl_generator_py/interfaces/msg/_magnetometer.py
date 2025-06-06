# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/Magnetometer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Magnetometer(type):
    """Metaclass of message 'Magnetometer'."""

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
                'interfaces.msg.Magnetometer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__magnetometer
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__magnetometer
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__magnetometer
            cls._TYPE_SUPPORT = module.type_support_msg__msg__magnetometer
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__magnetometer

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


class Magnetometer(metaclass=Metaclass_Magnetometer):
    """Message class 'Magnetometer'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_is_compensated_for_hard_iron',
        '_dvl_active',
        '_dvl_acoustics_active',
        '_dvl_transmitter_active',
        '_magnetometer_x',
        '_magnetometer_y',
        '_magnetometer_z',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'is_compensated_for_hard_iron': 'boolean',
        'dvl_active': 'boolean',
        'dvl_acoustics_active': 'boolean',
        'dvl_transmitter_active': 'boolean',
        'magnetometer_x': 'float',
        'magnetometer_y': 'float',
        'magnetometer_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.system_timestamp = kwargs.get('system_timestamp', Time())
        self.posix_time = kwargs.get('posix_time', bool())
        self.timestamp = kwargs.get('timestamp', int())
        self.microseconds = kwargs.get('microseconds', int())
        self.is_compensated_for_hard_iron = kwargs.get('is_compensated_for_hard_iron', bool())
        self.dvl_active = kwargs.get('dvl_active', bool())
        self.dvl_acoustics_active = kwargs.get('dvl_acoustics_active', bool())
        self.dvl_transmitter_active = kwargs.get('dvl_transmitter_active', bool())
        self.magnetometer_x = kwargs.get('magnetometer_x', float())
        self.magnetometer_y = kwargs.get('magnetometer_y', float())
        self.magnetometer_z = kwargs.get('magnetometer_z', float())

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
        if self.is_compensated_for_hard_iron != other.is_compensated_for_hard_iron:
            return False
        if self.dvl_active != other.dvl_active:
            return False
        if self.dvl_acoustics_active != other.dvl_acoustics_active:
            return False
        if self.dvl_transmitter_active != other.dvl_transmitter_active:
            return False
        if self.magnetometer_x != other.magnetometer_x:
            return False
        if self.magnetometer_y != other.magnetometer_y:
            return False
        if self.magnetometer_z != other.magnetometer_z:
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
    def is_compensated_for_hard_iron(self):
        """Message field 'is_compensated_for_hard_iron'."""
        return self._is_compensated_for_hard_iron

    @is_compensated_for_hard_iron.setter
    def is_compensated_for_hard_iron(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_compensated_for_hard_iron' field must be of type 'bool'"
        self._is_compensated_for_hard_iron = value

    @builtins.property
    def dvl_active(self):
        """Message field 'dvl_active'."""
        return self._dvl_active

    @dvl_active.setter
    def dvl_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dvl_active' field must be of type 'bool'"
        self._dvl_active = value

    @builtins.property
    def dvl_acoustics_active(self):
        """Message field 'dvl_acoustics_active'."""
        return self._dvl_acoustics_active

    @dvl_acoustics_active.setter
    def dvl_acoustics_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dvl_acoustics_active' field must be of type 'bool'"
        self._dvl_acoustics_active = value

    @builtins.property
    def dvl_transmitter_active(self):
        """Message field 'dvl_transmitter_active'."""
        return self._dvl_transmitter_active

    @dvl_transmitter_active.setter
    def dvl_transmitter_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dvl_transmitter_active' field must be of type 'bool'"
        self._dvl_transmitter_active = value

    @builtins.property
    def magnetometer_x(self):
        """Message field 'magnetometer_x'."""
        return self._magnetometer_x

    @magnetometer_x.setter
    def magnetometer_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'magnetometer_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'magnetometer_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._magnetometer_x = value

    @builtins.property
    def magnetometer_y(self):
        """Message field 'magnetometer_y'."""
        return self._magnetometer_y

    @magnetometer_y.setter
    def magnetometer_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'magnetometer_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'magnetometer_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._magnetometer_y = value

    @builtins.property
    def magnetometer_z(self):
        """Message field 'magnetometer_z'."""
        return self._magnetometer_z

    @magnetometer_z.setter
    def magnetometer_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'magnetometer_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'magnetometer_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._magnetometer_z = value
