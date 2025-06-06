# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgGpsHdt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgGpsHdt(type):
    """Metaclass of message 'SbgGpsHdt'."""

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
            module = import_type_support('sbg_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbg_driver.msg.SbgGpsHdt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_gps_hdt
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_gps_hdt
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_gps_hdt
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_gps_hdt
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_gps_hdt

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgGpsHdt(metaclass=Metaclass_SbgGpsHdt):
    """Message class 'SbgGpsHdt'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_status',
        '_tow',
        '_true_heading',
        '_true_heading_acc',
        '_pitch',
        '_pitch_acc',
        '_baseline',
        '_num_sv_tracked',
        '_num_sv_used',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'status': 'uint16',
        'tow': 'uint32',
        'true_heading': 'float',
        'true_heading_acc': 'float',
        'pitch': 'float',
        'pitch_acc': 'float',
        'baseline': 'float',
        'num_sv_tracked': 'uint8',
        'num_sv_used': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        self.status = kwargs.get('status', int())
        self.tow = kwargs.get('tow', int())
        self.true_heading = kwargs.get('true_heading', float())
        self.true_heading_acc = kwargs.get('true_heading_acc', float())
        self.pitch = kwargs.get('pitch', float())
        self.pitch_acc = kwargs.get('pitch_acc', float())
        self.baseline = kwargs.get('baseline', float())
        self.num_sv_tracked = kwargs.get('num_sv_tracked', int())
        self.num_sv_used = kwargs.get('num_sv_used', int())

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
        if self.header != other.header:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.status != other.status:
            return False
        if self.tow != other.tow:
            return False
        if self.true_heading != other.true_heading:
            return False
        if self.true_heading_acc != other.true_heading_acc:
            return False
        if self.pitch != other.pitch:
            return False
        if self.pitch_acc != other.pitch_acc:
            return False
        if self.baseline != other.baseline:
            return False
        if self.num_sv_tracked != other.num_sv_tracked:
            return False
        if self.num_sv_used != other.num_sv_used:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
        self._time_stamp = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'status' field must be an unsigned integer in [0, 65535]"
        self._status = value

    @builtins.property
    def tow(self):
        """Message field 'tow'."""
        return self._tow

    @tow.setter
    def tow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tow' field must be an unsigned integer in [0, 4294967295]"
        self._tow = value

    @builtins.property
    def true_heading(self):
        """Message field 'true_heading'."""
        return self._true_heading

    @true_heading.setter
    def true_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'true_heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'true_heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._true_heading = value

    @builtins.property
    def true_heading_acc(self):
        """Message field 'true_heading_acc'."""
        return self._true_heading_acc

    @true_heading_acc.setter
    def true_heading_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'true_heading_acc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'true_heading_acc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._true_heading_acc = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def pitch_acc(self):
        """Message field 'pitch_acc'."""
        return self._pitch_acc

    @pitch_acc.setter
    def pitch_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_acc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_acc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_acc = value

    @builtins.property
    def baseline(self):
        """Message field 'baseline'."""
        return self._baseline

    @baseline.setter
    def baseline(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baseline' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baseline' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baseline = value

    @builtins.property
    def num_sv_tracked(self):
        """Message field 'num_sv_tracked'."""
        return self._num_sv_tracked

    @num_sv_tracked.setter
    def num_sv_tracked(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_tracked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_tracked' field must be an unsigned integer in [0, 255]"
        self._num_sv_tracked = value

    @builtins.property
    def num_sv_used(self):
        """Message field 'num_sv_used'."""
        return self._num_sv_used

    @num_sv_used.setter
    def num_sv_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_sv_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_sv_used' field must be an unsigned integer in [0, 255]"
        self._num_sv_used = value
