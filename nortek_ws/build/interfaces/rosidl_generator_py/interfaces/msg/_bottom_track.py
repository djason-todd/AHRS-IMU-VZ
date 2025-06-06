# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/BottomTrack.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BottomTrack(type):
    """Metaclass of message 'BottomTrack'."""

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
                'interfaces.msg.BottomTrack')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bottom_track
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bottom_track
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bottom_track
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bottom_track
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bottom_track

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


class BottomTrack(metaclass=Metaclass_BottomTrack):
    """Message class 'BottomTrack'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_beam_1_velocity_valid',
        '_beam_2_velocity_valid',
        '_beam_3_velocity_valid',
        '_beam_1_distance_valid',
        '_beam_2_distance_valid',
        '_beam_3_distance_valid',
        '_beam_1_fom_valid',
        '_beam_2_fom_valid',
        '_beam_3_fom_valid',
        '_x_velocity_valid',
        '_y_velocity_valid',
        '_z_velocity_valid',
        '_x_fom_valid',
        '_y_fom_valid',
        '_z_fom_valid',
        '_serial_number',
        '_sound_speed',
        '_temperature',
        '_pressure',
        '_velocity_beam_1',
        '_velocity_beam_2',
        '_velocity_beam_3',
        '_distance_beam_1',
        '_distance_beam_2',
        '_distance_beam_3',
        '_fom_beam_1',
        '_fom_beam_2',
        '_fom_beam_3',
        '_dt_beam_1',
        '_dt_beam_2',
        '_dt_beam_3',
        '_time_vel_beam_1',
        '_time_vel_beam_2',
        '_time_vel_beam_3',
        '_velocity_x',
        '_velocity_y',
        '_velocity_z',
        '_fom_x',
        '_fom_y',
        '_fom_z',
        '_dt_xyz',
        '_time_vel_xyz',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'beam_1_velocity_valid': 'boolean',
        'beam_2_velocity_valid': 'boolean',
        'beam_3_velocity_valid': 'boolean',
        'beam_1_distance_valid': 'boolean',
        'beam_2_distance_valid': 'boolean',
        'beam_3_distance_valid': 'boolean',
        'beam_1_fom_valid': 'boolean',
        'beam_2_fom_valid': 'boolean',
        'beam_3_fom_valid': 'boolean',
        'x_velocity_valid': 'boolean',
        'y_velocity_valid': 'boolean',
        'z_velocity_valid': 'boolean',
        'x_fom_valid': 'boolean',
        'y_fom_valid': 'boolean',
        'z_fom_valid': 'boolean',
        'serial_number': 'uint32',
        'sound_speed': 'float',
        'temperature': 'float',
        'pressure': 'float',
        'velocity_beam_1': 'float',
        'velocity_beam_2': 'float',
        'velocity_beam_3': 'float',
        'distance_beam_1': 'float',
        'distance_beam_2': 'float',
        'distance_beam_3': 'float',
        'fom_beam_1': 'float',
        'fom_beam_2': 'float',
        'fom_beam_3': 'float',
        'dt_beam_1': 'float',
        'dt_beam_2': 'float',
        'dt_beam_3': 'float',
        'time_vel_beam_1': 'float',
        'time_vel_beam_2': 'float',
        'time_vel_beam_3': 'float',
        'velocity_x': 'float',
        'velocity_y': 'float',
        'velocity_z': 'float',
        'fom_x': 'float',
        'fom_y': 'float',
        'fom_z': 'float',
        'dt_xyz': 'float',
        'time_vel_xyz': 'float',
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.beam_1_velocity_valid = kwargs.get('beam_1_velocity_valid', bool())
        self.beam_2_velocity_valid = kwargs.get('beam_2_velocity_valid', bool())
        self.beam_3_velocity_valid = kwargs.get('beam_3_velocity_valid', bool())
        self.beam_1_distance_valid = kwargs.get('beam_1_distance_valid', bool())
        self.beam_2_distance_valid = kwargs.get('beam_2_distance_valid', bool())
        self.beam_3_distance_valid = kwargs.get('beam_3_distance_valid', bool())
        self.beam_1_fom_valid = kwargs.get('beam_1_fom_valid', bool())
        self.beam_2_fom_valid = kwargs.get('beam_2_fom_valid', bool())
        self.beam_3_fom_valid = kwargs.get('beam_3_fom_valid', bool())
        self.x_velocity_valid = kwargs.get('x_velocity_valid', bool())
        self.y_velocity_valid = kwargs.get('y_velocity_valid', bool())
        self.z_velocity_valid = kwargs.get('z_velocity_valid', bool())
        self.x_fom_valid = kwargs.get('x_fom_valid', bool())
        self.y_fom_valid = kwargs.get('y_fom_valid', bool())
        self.z_fom_valid = kwargs.get('z_fom_valid', bool())
        self.serial_number = kwargs.get('serial_number', int())
        self.sound_speed = kwargs.get('sound_speed', float())
        self.temperature = kwargs.get('temperature', float())
        self.pressure = kwargs.get('pressure', float())
        self.velocity_beam_1 = kwargs.get('velocity_beam_1', float())
        self.velocity_beam_2 = kwargs.get('velocity_beam_2', float())
        self.velocity_beam_3 = kwargs.get('velocity_beam_3', float())
        self.distance_beam_1 = kwargs.get('distance_beam_1', float())
        self.distance_beam_2 = kwargs.get('distance_beam_2', float())
        self.distance_beam_3 = kwargs.get('distance_beam_3', float())
        self.fom_beam_1 = kwargs.get('fom_beam_1', float())
        self.fom_beam_2 = kwargs.get('fom_beam_2', float())
        self.fom_beam_3 = kwargs.get('fom_beam_3', float())
        self.dt_beam_1 = kwargs.get('dt_beam_1', float())
        self.dt_beam_2 = kwargs.get('dt_beam_2', float())
        self.dt_beam_3 = kwargs.get('dt_beam_3', float())
        self.time_vel_beam_1 = kwargs.get('time_vel_beam_1', float())
        self.time_vel_beam_2 = kwargs.get('time_vel_beam_2', float())
        self.time_vel_beam_3 = kwargs.get('time_vel_beam_3', float())
        self.velocity_x = kwargs.get('velocity_x', float())
        self.velocity_y = kwargs.get('velocity_y', float())
        self.velocity_z = kwargs.get('velocity_z', float())
        self.fom_x = kwargs.get('fom_x', float())
        self.fom_y = kwargs.get('fom_y', float())
        self.fom_z = kwargs.get('fom_z', float())
        self.dt_xyz = kwargs.get('dt_xyz', float())
        self.time_vel_xyz = kwargs.get('time_vel_xyz', float())

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
        if self.beam_1_velocity_valid != other.beam_1_velocity_valid:
            return False
        if self.beam_2_velocity_valid != other.beam_2_velocity_valid:
            return False
        if self.beam_3_velocity_valid != other.beam_3_velocity_valid:
            return False
        if self.beam_1_distance_valid != other.beam_1_distance_valid:
            return False
        if self.beam_2_distance_valid != other.beam_2_distance_valid:
            return False
        if self.beam_3_distance_valid != other.beam_3_distance_valid:
            return False
        if self.beam_1_fom_valid != other.beam_1_fom_valid:
            return False
        if self.beam_2_fom_valid != other.beam_2_fom_valid:
            return False
        if self.beam_3_fom_valid != other.beam_3_fom_valid:
            return False
        if self.x_velocity_valid != other.x_velocity_valid:
            return False
        if self.y_velocity_valid != other.y_velocity_valid:
            return False
        if self.z_velocity_valid != other.z_velocity_valid:
            return False
        if self.x_fom_valid != other.x_fom_valid:
            return False
        if self.y_fom_valid != other.y_fom_valid:
            return False
        if self.z_fom_valid != other.z_fom_valid:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.sound_speed != other.sound_speed:
            return False
        if self.temperature != other.temperature:
            return False
        if self.pressure != other.pressure:
            return False
        if self.velocity_beam_1 != other.velocity_beam_1:
            return False
        if self.velocity_beam_2 != other.velocity_beam_2:
            return False
        if self.velocity_beam_3 != other.velocity_beam_3:
            return False
        if self.distance_beam_1 != other.distance_beam_1:
            return False
        if self.distance_beam_2 != other.distance_beam_2:
            return False
        if self.distance_beam_3 != other.distance_beam_3:
            return False
        if self.fom_beam_1 != other.fom_beam_1:
            return False
        if self.fom_beam_2 != other.fom_beam_2:
            return False
        if self.fom_beam_3 != other.fom_beam_3:
            return False
        if self.dt_beam_1 != other.dt_beam_1:
            return False
        if self.dt_beam_2 != other.dt_beam_2:
            return False
        if self.dt_beam_3 != other.dt_beam_3:
            return False
        if self.time_vel_beam_1 != other.time_vel_beam_1:
            return False
        if self.time_vel_beam_2 != other.time_vel_beam_2:
            return False
        if self.time_vel_beam_3 != other.time_vel_beam_3:
            return False
        if self.velocity_x != other.velocity_x:
            return False
        if self.velocity_y != other.velocity_y:
            return False
        if self.velocity_z != other.velocity_z:
            return False
        if self.fom_x != other.fom_x:
            return False
        if self.fom_y != other.fom_y:
            return False
        if self.fom_z != other.fom_z:
            return False
        if self.dt_xyz != other.dt_xyz:
            return False
        if self.time_vel_xyz != other.time_vel_xyz:
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
    def beam_1_velocity_valid(self):
        """Message field 'beam_1_velocity_valid'."""
        return self._beam_1_velocity_valid

    @beam_1_velocity_valid.setter
    def beam_1_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_1_velocity_valid' field must be of type 'bool'"
        self._beam_1_velocity_valid = value

    @builtins.property
    def beam_2_velocity_valid(self):
        """Message field 'beam_2_velocity_valid'."""
        return self._beam_2_velocity_valid

    @beam_2_velocity_valid.setter
    def beam_2_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_2_velocity_valid' field must be of type 'bool'"
        self._beam_2_velocity_valid = value

    @builtins.property
    def beam_3_velocity_valid(self):
        """Message field 'beam_3_velocity_valid'."""
        return self._beam_3_velocity_valid

    @beam_3_velocity_valid.setter
    def beam_3_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_3_velocity_valid' field must be of type 'bool'"
        self._beam_3_velocity_valid = value

    @builtins.property
    def beam_1_distance_valid(self):
        """Message field 'beam_1_distance_valid'."""
        return self._beam_1_distance_valid

    @beam_1_distance_valid.setter
    def beam_1_distance_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_1_distance_valid' field must be of type 'bool'"
        self._beam_1_distance_valid = value

    @builtins.property
    def beam_2_distance_valid(self):
        """Message field 'beam_2_distance_valid'."""
        return self._beam_2_distance_valid

    @beam_2_distance_valid.setter
    def beam_2_distance_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_2_distance_valid' field must be of type 'bool'"
        self._beam_2_distance_valid = value

    @builtins.property
    def beam_3_distance_valid(self):
        """Message field 'beam_3_distance_valid'."""
        return self._beam_3_distance_valid

    @beam_3_distance_valid.setter
    def beam_3_distance_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_3_distance_valid' field must be of type 'bool'"
        self._beam_3_distance_valid = value

    @builtins.property
    def beam_1_fom_valid(self):
        """Message field 'beam_1_fom_valid'."""
        return self._beam_1_fom_valid

    @beam_1_fom_valid.setter
    def beam_1_fom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_1_fom_valid' field must be of type 'bool'"
        self._beam_1_fom_valid = value

    @builtins.property
    def beam_2_fom_valid(self):
        """Message field 'beam_2_fom_valid'."""
        return self._beam_2_fom_valid

    @beam_2_fom_valid.setter
    def beam_2_fom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_2_fom_valid' field must be of type 'bool'"
        self._beam_2_fom_valid = value

    @builtins.property
    def beam_3_fom_valid(self):
        """Message field 'beam_3_fom_valid'."""
        return self._beam_3_fom_valid

    @beam_3_fom_valid.setter
    def beam_3_fom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beam_3_fom_valid' field must be of type 'bool'"
        self._beam_3_fom_valid = value

    @builtins.property
    def x_velocity_valid(self):
        """Message field 'x_velocity_valid'."""
        return self._x_velocity_valid

    @x_velocity_valid.setter
    def x_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'x_velocity_valid' field must be of type 'bool'"
        self._x_velocity_valid = value

    @builtins.property
    def y_velocity_valid(self):
        """Message field 'y_velocity_valid'."""
        return self._y_velocity_valid

    @y_velocity_valid.setter
    def y_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'y_velocity_valid' field must be of type 'bool'"
        self._y_velocity_valid = value

    @builtins.property
    def z_velocity_valid(self):
        """Message field 'z_velocity_valid'."""
        return self._z_velocity_valid

    @z_velocity_valid.setter
    def z_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'z_velocity_valid' field must be of type 'bool'"
        self._z_velocity_valid = value

    @builtins.property
    def x_fom_valid(self):
        """Message field 'x_fom_valid'."""
        return self._x_fom_valid

    @x_fom_valid.setter
    def x_fom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'x_fom_valid' field must be of type 'bool'"
        self._x_fom_valid = value

    @builtins.property
    def y_fom_valid(self):
        """Message field 'y_fom_valid'."""
        return self._y_fom_valid

    @y_fom_valid.setter
    def y_fom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'y_fom_valid' field must be of type 'bool'"
        self._y_fom_valid = value

    @builtins.property
    def z_fom_valid(self):
        """Message field 'z_fom_valid'."""
        return self._z_fom_valid

    @z_fom_valid.setter
    def z_fom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'z_fom_valid' field must be of type 'bool'"
        self._z_fom_valid = value

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
    def sound_speed(self):
        """Message field 'sound_speed'."""
        return self._sound_speed

    @sound_speed.setter
    def sound_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sound_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sound_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sound_speed = value

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
    def velocity_beam_1(self):
        """Message field 'velocity_beam_1'."""
        return self._velocity_beam_1

    @velocity_beam_1.setter
    def velocity_beam_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_beam_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_beam_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_beam_1 = value

    @builtins.property
    def velocity_beam_2(self):
        """Message field 'velocity_beam_2'."""
        return self._velocity_beam_2

    @velocity_beam_2.setter
    def velocity_beam_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_beam_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_beam_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_beam_2 = value

    @builtins.property
    def velocity_beam_3(self):
        """Message field 'velocity_beam_3'."""
        return self._velocity_beam_3

    @velocity_beam_3.setter
    def velocity_beam_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_beam_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_beam_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_beam_3 = value

    @builtins.property
    def distance_beam_1(self):
        """Message field 'distance_beam_1'."""
        return self._distance_beam_1

    @distance_beam_1.setter
    def distance_beam_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_beam_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_beam_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_beam_1 = value

    @builtins.property
    def distance_beam_2(self):
        """Message field 'distance_beam_2'."""
        return self._distance_beam_2

    @distance_beam_2.setter
    def distance_beam_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_beam_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_beam_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_beam_2 = value

    @builtins.property
    def distance_beam_3(self):
        """Message field 'distance_beam_3'."""
        return self._distance_beam_3

    @distance_beam_3.setter
    def distance_beam_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_beam_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_beam_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_beam_3 = value

    @builtins.property
    def fom_beam_1(self):
        """Message field 'fom_beam_1'."""
        return self._fom_beam_1

    @fom_beam_1.setter
    def fom_beam_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_beam_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_beam_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_beam_1 = value

    @builtins.property
    def fom_beam_2(self):
        """Message field 'fom_beam_2'."""
        return self._fom_beam_2

    @fom_beam_2.setter
    def fom_beam_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_beam_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_beam_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_beam_2 = value

    @builtins.property
    def fom_beam_3(self):
        """Message field 'fom_beam_3'."""
        return self._fom_beam_3

    @fom_beam_3.setter
    def fom_beam_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_beam_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_beam_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_beam_3 = value

    @builtins.property
    def dt_beam_1(self):
        """Message field 'dt_beam_1'."""
        return self._dt_beam_1

    @dt_beam_1.setter
    def dt_beam_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_beam_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dt_beam_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dt_beam_1 = value

    @builtins.property
    def dt_beam_2(self):
        """Message field 'dt_beam_2'."""
        return self._dt_beam_2

    @dt_beam_2.setter
    def dt_beam_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_beam_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dt_beam_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dt_beam_2 = value

    @builtins.property
    def dt_beam_3(self):
        """Message field 'dt_beam_3'."""
        return self._dt_beam_3

    @dt_beam_3.setter
    def dt_beam_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_beam_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dt_beam_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dt_beam_3 = value

    @builtins.property
    def time_vel_beam_1(self):
        """Message field 'time_vel_beam_1'."""
        return self._time_vel_beam_1

    @time_vel_beam_1.setter
    def time_vel_beam_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_vel_beam_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_vel_beam_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_vel_beam_1 = value

    @builtins.property
    def time_vel_beam_2(self):
        """Message field 'time_vel_beam_2'."""
        return self._time_vel_beam_2

    @time_vel_beam_2.setter
    def time_vel_beam_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_vel_beam_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_vel_beam_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_vel_beam_2 = value

    @builtins.property
    def time_vel_beam_3(self):
        """Message field 'time_vel_beam_3'."""
        return self._time_vel_beam_3

    @time_vel_beam_3.setter
    def time_vel_beam_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_vel_beam_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_vel_beam_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_vel_beam_3 = value

    @builtins.property
    def velocity_x(self):
        """Message field 'velocity_x'."""
        return self._velocity_x

    @velocity_x.setter
    def velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_x = value

    @builtins.property
    def velocity_y(self):
        """Message field 'velocity_y'."""
        return self._velocity_y

    @velocity_y.setter
    def velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_y = value

    @builtins.property
    def velocity_z(self):
        """Message field 'velocity_z'."""
        return self._velocity_z

    @velocity_z.setter
    def velocity_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_z = value

    @builtins.property
    def fom_x(self):
        """Message field 'fom_x'."""
        return self._fom_x

    @fom_x.setter
    def fom_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_x = value

    @builtins.property
    def fom_y(self):
        """Message field 'fom_y'."""
        return self._fom_y

    @fom_y.setter
    def fom_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_y = value

    @builtins.property
    def fom_z(self):
        """Message field 'fom_z'."""
        return self._fom_z

    @fom_z.setter
    def fom_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_z = value

    @builtins.property
    def dt_xyz(self):
        """Message field 'dt_xyz'."""
        return self._dt_xyz

    @dt_xyz.setter
    def dt_xyz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dt_xyz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dt_xyz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dt_xyz = value

    @builtins.property
    def time_vel_xyz(self):
        """Message field 'time_vel_xyz'."""
        return self._time_vel_xyz

    @time_vel_xyz.setter
    def time_vel_xyz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_vel_xyz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_vel_xyz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_vel_xyz = value
