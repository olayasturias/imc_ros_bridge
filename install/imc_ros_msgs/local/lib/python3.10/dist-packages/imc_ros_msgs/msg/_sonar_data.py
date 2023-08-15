# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/SonarData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SonarData(type):
    """Metaclass of message 'SonarData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ST_SIDESCAN': 0,
        'ST_ECHOSOUNDER': 1,
        'ST_MULTIBEAM': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imc_ros_msgs.msg.SonarData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sonar_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sonar_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sonar_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sonar_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sonar_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ST_SIDESCAN': cls.__constants['ST_SIDESCAN'],
            'ST_ECHOSOUNDER': cls.__constants['ST_ECHOSOUNDER'],
            'ST_MULTIBEAM': cls.__constants['ST_MULTIBEAM'],
        }

    @property
    def ST_SIDESCAN(self):
        """Message constant 'ST_SIDESCAN'."""
        return Metaclass_SonarData.__constants['ST_SIDESCAN']

    @property
    def ST_ECHOSOUNDER(self):
        """Message constant 'ST_ECHOSOUNDER'."""
        return Metaclass_SonarData.__constants['ST_ECHOSOUNDER']

    @property
    def ST_MULTIBEAM(self):
        """Message constant 'ST_MULTIBEAM'."""
        return Metaclass_SonarData.__constants['ST_MULTIBEAM']


class SonarData(metaclass=Metaclass_SonarData):
    """
    Message class 'SonarData'.

    Constants:
      ST_SIDESCAN
      ST_ECHOSOUNDER
      ST_MULTIBEAM
    """

    __slots__ = [
        '_type',
        '_frequency',
        '_min_range',
        '_max_range',
        '_bits_per_point',
        '_scale_factor',
        '_data',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'frequency': 'uint32',
        'min_range': 'uint16',
        'max_range': 'uint16',
        'bits_per_point': 'uint8',
        'scale_factor': 'float',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.frequency = kwargs.get('frequency', int())
        self.min_range = kwargs.get('min_range', int())
        self.max_range = kwargs.get('max_range', int())
        self.bits_per_point = kwargs.get('bits_per_point', int())
        self.scale_factor = kwargs.get('scale_factor', float())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.type != other.type:
            return False
        if self.frequency != other.frequency:
            return False
        if self.min_range != other.min_range:
            return False
        if self.max_range != other.max_range:
            return False
        if self.bits_per_point != other.bits_per_point:
            return False
        if self.scale_factor != other.scale_factor:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frequency' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'frequency' field must be an unsigned integer in [0, 4294967295]"
        self._frequency = value

    @builtins.property
    def min_range(self):
        """Message field 'min_range'."""
        return self._min_range

    @min_range.setter
    def min_range(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_range' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'min_range' field must be an unsigned integer in [0, 65535]"
        self._min_range = value

    @builtins.property
    def max_range(self):
        """Message field 'max_range'."""
        return self._max_range

    @max_range.setter
    def max_range(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_range' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_range' field must be an unsigned integer in [0, 65535]"
        self._max_range = value

    @builtins.property
    def bits_per_point(self):
        """Message field 'bits_per_point'."""
        return self._bits_per_point

    @bits_per_point.setter
    def bits_per_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bits_per_point' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bits_per_point' field must be an unsigned integer in [0, 255]"
        self._bits_per_point = value

    @builtins.property
    def scale_factor(self):
        """Message field 'scale_factor'."""
        return self._scale_factor

    @scale_factor.setter
    def scale_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale_factor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'scale_factor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._scale_factor = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
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
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
