# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/PlanDB.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'plan_spec_md5'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanDB(type):
    """Metaclass of message 'PlanDB'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'REQUEST': 0,
        'SUCCESS': 1,
        'FAILURE': 2,
        'IN_PROGESS': 3,
        'SET': 0,
        'DEL': 1,
        'GET': 2,
        'GET_INFO': 3,
        'CLEAR': 4,
        'GET_STATE': 5,
        'GET_DSTATE': 6,
        'BOOT': 7,
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
                'imc_ros_msgs.msg.PlanDB')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan_db
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan_db
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan_db
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan_db
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan_db

            from imc_ros_msgs.msg import PlanDBInformation
            if PlanDBInformation.__class__._TYPE_SUPPORT is None:
                PlanDBInformation.__class__.__import_type_support__()

            from imc_ros_msgs.msg import PlanDBState
            if PlanDBState.__class__._TYPE_SUPPORT is None:
                PlanDBState.__class__.__import_type_support__()

            from imc_ros_msgs.msg import PlanSpecification
            if PlanSpecification.__class__._TYPE_SUPPORT is None:
                PlanSpecification.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'REQUEST': cls.__constants['REQUEST'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILURE': cls.__constants['FAILURE'],
            'IN_PROGESS': cls.__constants['IN_PROGESS'],
            'SET': cls.__constants['SET'],
            'DEL': cls.__constants['DEL'],
            'GET': cls.__constants['GET'],
            'GET_INFO': cls.__constants['GET_INFO'],
            'CLEAR': cls.__constants['CLEAR'],
            'GET_STATE': cls.__constants['GET_STATE'],
            'GET_DSTATE': cls.__constants['GET_DSTATE'],
            'BOOT': cls.__constants['BOOT'],
        }

    @property
    def REQUEST(self):
        """Message constant 'REQUEST'."""
        return Metaclass_PlanDB.__constants['REQUEST']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_PlanDB.__constants['SUCCESS']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_PlanDB.__constants['FAILURE']

    @property
    def IN_PROGESS(self):
        """Message constant 'IN_PROGESS'."""
        return Metaclass_PlanDB.__constants['IN_PROGESS']

    @property
    def SET(self):
        """Message constant 'SET'."""
        return Metaclass_PlanDB.__constants['SET']

    @property
    def DEL(self):
        """Message constant 'DEL'."""
        return Metaclass_PlanDB.__constants['DEL']

    @property
    def GET(self):
        """Message constant 'GET'."""
        return Metaclass_PlanDB.__constants['GET']

    @property
    def GET_INFO(self):
        """Message constant 'GET_INFO'."""
        return Metaclass_PlanDB.__constants['GET_INFO']

    @property
    def CLEAR(self):
        """Message constant 'CLEAR'."""
        return Metaclass_PlanDB.__constants['CLEAR']

    @property
    def GET_STATE(self):
        """Message constant 'GET_STATE'."""
        return Metaclass_PlanDB.__constants['GET_STATE']

    @property
    def GET_DSTATE(self):
        """Message constant 'GET_DSTATE'."""
        return Metaclass_PlanDB.__constants['GET_DSTATE']

    @property
    def BOOT(self):
        """Message constant 'BOOT'."""
        return Metaclass_PlanDB.__constants['BOOT']


class PlanDB(metaclass=Metaclass_PlanDB):
    """
    Message class 'PlanDB'.

    Constants:
      REQUEST
      SUCCESS
      FAILURE
      IN_PROGESS
      SET
      DEL
      GET
      GET_INFO
      CLEAR
      GET_STATE
      GET_DSTATE
      BOOT
    """

    __slots__ = [
        '_type',
        '_op',
        '_request_id',
        '_plan_id',
        '_plan_spec',
        '_plan_spec_md5',
        '_plandb_information',
        '_plandb_state',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'op': 'uint8',
        'request_id': 'uint16',
        'plan_id': 'string',
        'plan_spec': 'imc_ros_msgs/PlanSpecification',
        'plan_spec_md5': 'sequence<uint8>',
        'plandb_information': 'imc_ros_msgs/PlanDBInformation',
        'plandb_state': 'imc_ros_msgs/PlanDBState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'PlanSpecification'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'PlanDBInformation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'PlanDBState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.op = kwargs.get('op', int())
        self.request_id = kwargs.get('request_id', int())
        self.plan_id = kwargs.get('plan_id', str())
        from imc_ros_msgs.msg import PlanSpecification
        self.plan_spec = kwargs.get('plan_spec', PlanSpecification())
        self.plan_spec_md5 = array.array('B', kwargs.get('plan_spec_md5', []))
        from imc_ros_msgs.msg import PlanDBInformation
        self.plandb_information = kwargs.get('plandb_information', PlanDBInformation())
        from imc_ros_msgs.msg import PlanDBState
        self.plandb_state = kwargs.get('plandb_state', PlanDBState())

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
        if self.op != other.op:
            return False
        if self.request_id != other.request_id:
            return False
        if self.plan_id != other.plan_id:
            return False
        if self.plan_spec != other.plan_spec:
            return False
        if self.plan_spec_md5 != other.plan_spec_md5:
            return False
        if self.plandb_information != other.plandb_information:
            return False
        if self.plandb_state != other.plandb_state:
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
    def op(self):
        """Message field 'op'."""
        return self._op

    @op.setter
    def op(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'op' field must be an unsigned integer in [0, 255]"
        self._op = value

    @builtins.property
    def request_id(self):
        """Message field 'request_id'."""
        return self._request_id

    @request_id.setter
    def request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'request_id' field must be an unsigned integer in [0, 65535]"
        self._request_id = value

    @builtins.property
    def plan_id(self):
        """Message field 'plan_id'."""
        return self._plan_id

    @plan_id.setter
    def plan_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'plan_id' field must be of type 'str'"
        self._plan_id = value

    @builtins.property
    def plan_spec(self):
        """Message field 'plan_spec'."""
        return self._plan_spec

    @plan_spec.setter
    def plan_spec(self, value):
        if __debug__:
            from imc_ros_msgs.msg import PlanSpecification
            assert \
                isinstance(value, PlanSpecification), \
                "The 'plan_spec' field must be a sub message of type 'PlanSpecification'"
        self._plan_spec = value

    @builtins.property
    def plan_spec_md5(self):
        """Message field 'plan_spec_md5'."""
        return self._plan_spec_md5

    @plan_spec_md5.setter
    def plan_spec_md5(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'plan_spec_md5' array.array() must have the type code of 'B'"
            self._plan_spec_md5 = value
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
                "The 'plan_spec_md5' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._plan_spec_md5 = array.array('B', value)

    @builtins.property
    def plandb_information(self):
        """Message field 'plandb_information'."""
        return self._plandb_information

    @plandb_information.setter
    def plandb_information(self, value):
        if __debug__:
            from imc_ros_msgs.msg import PlanDBInformation
            assert \
                isinstance(value, PlanDBInformation), \
                "The 'plandb_information' field must be a sub message of type 'PlanDBInformation'"
        self._plandb_information = value

    @builtins.property
    def plandb_state(self):
        """Message field 'plandb_state'."""
        return self._plandb_state

    @plandb_state.setter
    def plandb_state(self, value):
        if __debug__:
            from imc_ros_msgs.msg import PlanDBState
            assert \
                isinstance(value, PlanDBState), \
                "The 'plandb_state' field must be a sub message of type 'PlanDBState'"
        self._plandb_state = value
