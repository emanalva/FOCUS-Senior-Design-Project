// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim:srv/SetPen.idl
// generated code does not contain a copyright notice

#include "turtlesim/srv/detail/set_pen__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__SetPen__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x45, 0xca, 0x24, 0x6c, 0x72, 0x58, 0x17, 0x2a,
      0x89, 0xa5, 0x88, 0x56, 0x03, 0x7d, 0x6b, 0x44,
      0x89, 0xeb, 0x46, 0xa1, 0x8f, 0x1d, 0x8e, 0xe1,
      0x98, 0x8c, 0x01, 0x8e, 0xf4, 0x6f, 0xcf, 0xce,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__SetPen_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0xbc, 0xdb, 0xf5, 0x65, 0x93, 0xf3, 0xff,
      0x08, 0xd0, 0x43, 0xd5, 0xf1, 0xee, 0x5f, 0x78,
      0xaa, 0x6a, 0x19, 0x80, 0xc7, 0x0b, 0x1c, 0x5b,
      0x77, 0xbe, 0x1d, 0x87, 0x3e, 0xa7, 0x7a, 0x13,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__SetPen_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0xff, 0xee, 0xf1, 0x6e, 0xb3, 0x1f, 0x6d,
      0x08, 0x14, 0x3c, 0x64, 0x81, 0x12, 0x92, 0xea,
      0xae, 0xc0, 0x01, 0x42, 0x63, 0x6f, 0x6a, 0x74,
      0xa2, 0x90, 0x1d, 0xba, 0xdd, 0x3f, 0xac, 0x33,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim
const rosidl_type_hash_t *
turtlesim__srv__SetPen_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x29, 0xf6, 0xfe, 0x15, 0x4a, 0x36, 0x06,
      0x5b, 0x21, 0x69, 0xc0, 0x20, 0x23, 0x7d, 0x60,
      0xea, 0x6d, 0x51, 0xbc, 0x77, 0xef, 0xfd, 0x63,
      0x0f, 0x9d, 0xc5, 0x43, 0xac, 0x05, 0xcf, 0xe2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char turtlesim__srv__SetPen__TYPE_NAME[] = "turtlesim/srv/SetPen";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtlesim__srv__SetPen_Event__TYPE_NAME[] = "turtlesim/srv/SetPen_Event";
static char turtlesim__srv__SetPen_Request__TYPE_NAME[] = "turtlesim/srv/SetPen_Request";
static char turtlesim__srv__SetPen_Response__TYPE_NAME[] = "turtlesim/srv/SetPen_Response";

// Define type names, field names, and default values
static char turtlesim__srv__SetPen__FIELD_NAME__request_message[] = "request_message";
static char turtlesim__srv__SetPen__FIELD_NAME__response_message[] = "response_message";
static char turtlesim__srv__SetPen__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtlesim__srv__SetPen__FIELDS[] = {
  {
    {turtlesim__srv__SetPen__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__SetPen_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__SetPen_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim__srv__SetPen_Event__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim__srv__SetPen__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Event__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__SetPen__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__SetPen__TYPE_NAME, 20, 20},
      {turtlesim__srv__SetPen__FIELDS, 3, 3},
    },
    {turtlesim__srv__SetPen__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim__srv__SetPen_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim__srv__SetPen_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtlesim__srv__SetPen_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__SetPen_Request__FIELD_NAME__r[] = "r";
static char turtlesim__srv__SetPen_Request__FIELD_NAME__g[] = "g";
static char turtlesim__srv__SetPen_Request__FIELD_NAME__b[] = "b";
static char turtlesim__srv__SetPen_Request__FIELD_NAME__width[] = "width";
static char turtlesim__srv__SetPen_Request__FIELD_NAME__off[] = "off";

static rosidl_runtime_c__type_description__Field turtlesim__srv__SetPen_Request__FIELDS[] = {
  {
    {turtlesim__srv__SetPen_Request__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Request__FIELD_NAME__g, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Request__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Request__FIELD_NAME__off, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__SetPen_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__SetPen_Request__TYPE_NAME, 28, 28},
      {turtlesim__srv__SetPen_Request__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__SetPen_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field turtlesim__srv__SetPen_Response__FIELDS[] = {
  {
    {turtlesim__srv__SetPen_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__SetPen_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__SetPen_Response__TYPE_NAME, 29, 29},
      {turtlesim__srv__SetPen_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim__srv__SetPen_Event__FIELD_NAME__info[] = "info";
static char turtlesim__srv__SetPen_Event__FIELD_NAME__request[] = "request";
static char turtlesim__srv__SetPen_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtlesim__srv__SetPen_Event__FIELDS[] = {
  {
    {turtlesim__srv__SetPen_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim__srv__SetPen_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim__srv__SetPen_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim__srv__SetPen_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {turtlesim__srv__SetPen_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim__srv__SetPen_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim__srv__SetPen_Event__TYPE_NAME, 26, 26},
      {turtlesim__srv__SetPen_Event__FIELDS, 3, 3},
    },
    {turtlesim__srv__SetPen_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim__srv__SetPen_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim__srv__SetPen_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 r\n"
  "uint8 g\n"
  "uint8 b\n"
  "uint8 width\n"
  "uint8 off\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__SetPen__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__SetPen__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__SetPen_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__SetPen_Request__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__SetPen_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__SetPen_Response__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim__srv__SetPen_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim__srv__SetPen_Event__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__SetPen__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__SetPen__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim__srv__SetPen_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim__srv__SetPen_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtlesim__srv__SetPen_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__SetPen_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__SetPen_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__SetPen_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__SetPen_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim__srv__SetPen_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim__srv__SetPen_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim__srv__SetPen_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim__srv__SetPen_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
