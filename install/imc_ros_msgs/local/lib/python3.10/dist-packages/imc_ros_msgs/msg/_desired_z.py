# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/DesiredZ.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DesiredZ(type):
    """Metaclass of message 'DesiredZ'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'Z_NONE': 0,
        'Z_DEPTH': 1,
        'Z_ALTITUDE': 2,
        'Z_HEIGHT': 3,
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
                'imc_ros_msgs.msg.DesiredZ')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__desired_z
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__desired_z
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__desired_z
            cls._TYPE_SUPPORT = module.type_support_msg__msg__desired_z
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__desired_z

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'Z_NONE': cls.__constants['Z_NONE'],
            'Z_DEPTH': cls.__constants['Z_DEPTH'],
            'Z_ALTITUDE': cls.__constants['Z_ALTITUDE'],
            'Z_HEIGHT': cls.__constants['Z_HEIGHT'],
        }

    @property
    def Z_NONE(self):
        """Message constant 'Z_NONE'."""
        return Metaclass_DesiredZ.__constants['Z_NONE']

    @property
    def Z_DEPTH(self):
        """Message constant 'Z_DEPTH'."""
        return Metaclass_DesiredZ.__constants['Z_DEPTH']

    @property
    def Z_ALTITUDE(self):
        """Message constant 'Z_ALTITUDE'."""
        return Metaclass_DesiredZ.__constants['Z_ALTITUDE']

    @property
    def Z_HEIGHT(self):
        """Message constant 'Z_HEIGHT'."""
        return Metaclass_DesiredZ.__constants['Z_HEIGHT']


class DesiredZ(metaclass=Metaclass_DesiredZ):
    """
    Message class 'DesiredZ'.

    Constants:
      Z_NONE
      Z_DEPTH
      Z_ALTITUDE
      Z_HEIGHT
    """

    __slots__ = [
        '_value',
        '_z_units',
    ]

    _fields_and_field_types = {
        'value': 'double',
        'z_units': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', float())
        self.z_units = kwargs.get('z_units', int())

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
        if self.value != other.value:
            return False
        if self.z_units != other.z_units:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value = value

    @builtins.property
    def z_units(self):
        """Message field 'z_units'."""
        return self._z_units

    @z_units.setter
    def z_units(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z_units' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'z_units' field must be an unsigned integer in [0, 255]"
        self._z_units = value
