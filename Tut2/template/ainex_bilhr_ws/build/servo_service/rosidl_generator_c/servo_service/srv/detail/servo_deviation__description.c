// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:srv/ServoDeviation.idl
// generated code does not contain a copyright notice

#include "servo_service/srv/detail/servo_deviation__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__ServoDeviation__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x42, 0xdb, 0x97, 0xaf, 0xe7, 0x0c, 0x9c,
      0xff, 0x7e, 0xe3, 0x2c, 0xb4, 0x2d, 0xdf, 0xe6,
      0xed, 0x0b, 0x54, 0x70, 0x28, 0x1f, 0xa5, 0xa8,
      0xa7, 0xc7, 0x14, 0x05, 0x69, 0x41, 0xe4, 0x13,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__ServoDeviation_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6b, 0x1b, 0x39, 0x5c, 0x5e, 0x8d, 0xab, 0x18,
      0xf6, 0x3f, 0xe1, 0x34, 0x83, 0xbe, 0xcd, 0x59,
      0xc6, 0xcd, 0x17, 0xbc, 0x63, 0x24, 0xc4, 0x91,
      0x1b, 0x60, 0xc8, 0xbc, 0xb1, 0xe4, 0x99, 0x5d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__ServoDeviation_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x76, 0xe1, 0x4e, 0x16, 0xc2, 0x18, 0xe3,
      0x73, 0x59, 0x49, 0x92, 0x98, 0xd5, 0x93, 0x90,
      0xc5, 0xee, 0x71, 0x01, 0x1a, 0xa6, 0x11, 0x85,
      0xaf, 0x15, 0x4b, 0x5f, 0x74, 0x26, 0xba, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__ServoDeviation_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x0d, 0xf9, 0x5b, 0x17, 0x17, 0x41, 0x87,
      0xa2, 0x99, 0x51, 0x52, 0xa1, 0xf5, 0xd8, 0x5d,
      0x93, 0x61, 0x33, 0x1a, 0x66, 0xf0, 0x37, 0x3a,
      0xe7, 0xba, 0x95, 0xf7, 0xae, 0xf8, 0xb7, 0xd9,
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

static char servo_service__srv__ServoDeviation__TYPE_NAME[] = "servo_service/srv/ServoDeviation";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char servo_service__srv__ServoDeviation_Event__TYPE_NAME[] = "servo_service/srv/ServoDeviation_Event";
static char servo_service__srv__ServoDeviation_Request__TYPE_NAME[] = "servo_service/srv/ServoDeviation_Request";
static char servo_service__srv__ServoDeviation_Response__TYPE_NAME[] = "servo_service/srv/ServoDeviation_Response";

// Define type names, field names, and default values
static char servo_service__srv__ServoDeviation__FIELD_NAME__request_message[] = "request_message";
static char servo_service__srv__ServoDeviation__FIELD_NAME__response_message[] = "response_message";
static char servo_service__srv__ServoDeviation__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field servo_service__srv__ServoDeviation__FIELDS[] = {
  {
    {servo_service__srv__ServoDeviation__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {servo_service__srv__ServoDeviation_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {servo_service__srv__ServoDeviation_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {servo_service__srv__ServoDeviation_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription servo_service__srv__ServoDeviation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__ServoDeviation__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__ServoDeviation__TYPE_NAME, 32, 32},
      {servo_service__srv__ServoDeviation__FIELDS, 3, 3},
    },
    {servo_service__srv__ServoDeviation__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = servo_service__srv__ServoDeviation_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = servo_service__srv__ServoDeviation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = servo_service__srv__ServoDeviation_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char servo_service__srv__ServoDeviation_Request__FIELD_NAME__ids[] = "ids";

static rosidl_runtime_c__type_description__Field servo_service__srv__ServoDeviation_Request__FIELDS[] = {
  {
    {servo_service__srv__ServoDeviation_Request__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__ServoDeviation_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__ServoDeviation_Request__TYPE_NAME, 40, 40},
      {servo_service__srv__ServoDeviation_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char servo_service__srv__ServoDeviation_Response__FIELD_NAME__deviation[] = "deviation";

static rosidl_runtime_c__type_description__Field servo_service__srv__ServoDeviation_Response__FIELDS[] = {
  {
    {servo_service__srv__ServoDeviation_Response__FIELD_NAME__deviation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__ServoDeviation_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__ServoDeviation_Response__TYPE_NAME, 41, 41},
      {servo_service__srv__ServoDeviation_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char servo_service__srv__ServoDeviation_Event__FIELD_NAME__info[] = "info";
static char servo_service__srv__ServoDeviation_Event__FIELD_NAME__request[] = "request";
static char servo_service__srv__ServoDeviation_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field servo_service__srv__ServoDeviation_Event__FIELDS[] = {
  {
    {servo_service__srv__ServoDeviation_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {servo_service__srv__ServoDeviation_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {servo_service__srv__ServoDeviation_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription servo_service__srv__ServoDeviation_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__ServoDeviation_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__ServoDeviation_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__ServoDeviation_Event__TYPE_NAME, 38, 38},
      {servo_service__srv__ServoDeviation_Event__FIELDS, 3, 3},
    },
    {servo_service__srv__ServoDeviation_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = servo_service__srv__ServoDeviation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = servo_service__srv__ServoDeviation_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8[] ids\n"
  "---\n"
  "int16[] deviation";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__ServoDeviation__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__ServoDeviation__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__ServoDeviation_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__ServoDeviation_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__ServoDeviation_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__ServoDeviation_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__ServoDeviation_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__ServoDeviation_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__ServoDeviation__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__ServoDeviation__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *servo_service__srv__ServoDeviation_Event__get_individual_type_description_source(NULL);
    sources[4] = *servo_service__srv__ServoDeviation_Request__get_individual_type_description_source(NULL);
    sources[5] = *servo_service__srv__ServoDeviation_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__ServoDeviation_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__ServoDeviation_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__ServoDeviation_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__ServoDeviation_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__ServoDeviation_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__ServoDeviation_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *servo_service__srv__ServoDeviation_Request__get_individual_type_description_source(NULL);
    sources[4] = *servo_service__srv__ServoDeviation_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
