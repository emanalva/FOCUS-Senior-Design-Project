# generated from rosidl_generator_py/resource/_idl.py.em
# with input from composition_interfaces:srv/LoadNode.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoadNode_Request(type):
    """Metaclass of message 'LoadNode_Request'."""

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
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.LoadNode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_node__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_node__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_node__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_node__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_node__request

            from rcl_interfaces.msg import Parameter
            if Parameter.__class__._TYPE_SUPPORT is None:
                Parameter.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadNode_Request(metaclass=Metaclass_LoadNode_Request):
    """Message class 'LoadNode_Request'."""

    __slots__ = [
        '_package_name',
        '_plugin_name',
        '_node_name',
        '_node_namespace',
        '_log_level',
        '_remap_rules',
        '_parameters',
        '_extra_arguments',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'package_name': 'string',
        'plugin_name': 'string',
        'node_name': 'string',
        'node_namespace': 'string',
        'log_level': 'uint8',
        'remap_rules': 'sequence<string>',
        'parameters': 'sequence<rcl_interfaces/Parameter>',
        'extra_arguments': 'sequence<rcl_interfaces/Parameter>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'Parameter')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['rcl_interfaces', 'msg'], 'Parameter')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.package_name = kwargs.get('package_name', str())
        self.plugin_name = kwargs.get('plugin_name', str())
        self.node_name = kwargs.get('node_name', str())
        self.node_namespace = kwargs.get('node_namespace', str())
        self.log_level = kwargs.get('log_level', int())
        self.remap_rules = kwargs.get('remap_rules', [])
        self.parameters = kwargs.get('parameters', [])
        self.extra_arguments = kwargs.get('extra_arguments', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.package_name != other.package_name:
            return False
        if self.plugin_name != other.plugin_name:
            return False
        if self.node_name != other.node_name:
            return False
        if self.node_namespace != other.node_namespace:
            return False
        if self.log_level != other.log_level:
            return False
        if self.remap_rules != other.remap_rules:
            return False
        if self.parameters != other.parameters:
            return False
        if self.extra_arguments != other.extra_arguments:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def package_name(self):
        """Message field 'package_name'."""
        return self._package_name

    @package_name.setter
    def package_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'package_name' field must be of type 'str'"
        self._package_name = value

    @builtins.property
    def plugin_name(self):
        """Message field 'plugin_name'."""
        return self._plugin_name

    @plugin_name.setter
    def plugin_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'plugin_name' field must be of type 'str'"
        self._plugin_name = value

    @builtins.property
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def node_namespace(self):
        """Message field 'node_namespace'."""
        return self._node_namespace

    @node_namespace.setter
    def node_namespace(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_namespace' field must be of type 'str'"
        self._node_namespace = value

    @builtins.property
    def log_level(self):
        """Message field 'log_level'."""
        return self._log_level

    @log_level.setter
    def log_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'log_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'log_level' field must be an unsigned integer in [0, 255]"
        self._log_level = value

    @builtins.property
    def remap_rules(self):
        """Message field 'remap_rules'."""
        return self._remap_rules

    @remap_rules.setter
    def remap_rules(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'remap_rules' field must be a set or sequence and each value of type 'str'"
        self._remap_rules = value

    @builtins.property
    def parameters(self):
        """Message field 'parameters'."""
        return self._parameters

    @parameters.setter
    def parameters(self, value):
        if self._check_fields:
            from rcl_interfaces.msg import Parameter
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
                 all(isinstance(v, Parameter) for v in value) and
                 True), \
                "The 'parameters' field must be a set or sequence and each value of type 'Parameter'"
        self._parameters = value

    @builtins.property
    def extra_arguments(self):
        """Message field 'extra_arguments'."""
        return self._extra_arguments

    @extra_arguments.setter
    def extra_arguments(self, value):
        if self._check_fields:
            from rcl_interfaces.msg import Parameter
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
                 all(isinstance(v, Parameter) for v in value) and
                 True), \
                "The 'extra_arguments' field must be a set or sequence and each value of type 'Parameter'"
        self._extra_arguments = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LoadNode_Response(type):
    """Metaclass of message 'LoadNode_Response'."""

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
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.LoadNode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_node__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_node__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_node__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_node__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_node__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadNode_Response(metaclass=Metaclass_LoadNode_Response):
    """Message class 'LoadNode_Response'."""

    __slots__ = [
        '_success',
        '_error_message',
        '_full_node_name',
        '_unique_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_message': 'string',
        'full_node_name': 'string',
        'unique_id': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_message = kwargs.get('error_message', str())
        self.full_node_name = kwargs.get('full_node_name', str())
        self.unique_id = kwargs.get('unique_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.error_message != other.error_message:
            return False
        if self.full_node_name != other.full_node_name:
            return False
        if self.unique_id != other.unique_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value

    @builtins.property
    def full_node_name(self):
        """Message field 'full_node_name'."""
        return self._full_node_name

    @full_node_name.setter
    def full_node_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'full_node_name' field must be of type 'str'"
        self._full_node_name = value

    @builtins.property
    def unique_id(self):
        """Message field 'unique_id'."""
        return self._unique_id

    @unique_id.setter
    def unique_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unique_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'unique_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._unique_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LoadNode_Event(type):
    """Metaclass of message 'LoadNode_Event'."""

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
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.LoadNode_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__load_node__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__load_node__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__load_node__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__load_node__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__load_node__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LoadNode_Event(metaclass=Metaclass_LoadNode_Event):
    """Message class 'LoadNode_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<composition_interfaces/LoadNode_Request, 1>',
        'response': 'sequence<composition_interfaces/LoadNode_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['composition_interfaces', 'srv'], 'LoadNode_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['composition_interfaces', 'srv'], 'LoadNode_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from composition_interfaces.srv import LoadNode_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, LoadNode_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'LoadNode_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from composition_interfaces.srv import LoadNode_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, LoadNode_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'LoadNode_Response'"
        self._response = value


class Metaclass_LoadNode(type):
    """Metaclass of service 'LoadNode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('composition_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'composition_interfaces.srv.LoadNode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__load_node

            from composition_interfaces.srv import _load_node
            if _load_node.Metaclass_LoadNode_Request._TYPE_SUPPORT is None:
                _load_node.Metaclass_LoadNode_Request.__import_type_support__()
            if _load_node.Metaclass_LoadNode_Response._TYPE_SUPPORT is None:
                _load_node.Metaclass_LoadNode_Response.__import_type_support__()
            if _load_node.Metaclass_LoadNode_Event._TYPE_SUPPORT is None:
                _load_node.Metaclass_LoadNode_Event.__import_type_support__()


class LoadNode(metaclass=Metaclass_LoadNode):
    from composition_interfaces.srv._load_node import LoadNode_Request as Request
    from composition_interfaces.srv._load_node import LoadNode_Response as Response
    from composition_interfaces.srv._load_node import LoadNode_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
