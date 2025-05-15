// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:srv/JointRange.idl
// generated code does not contain a copyright notice

#include "servo_service/srv/detail/joint_range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__JointRange__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x2b, 0x5c, 0x40, 0xae, 0xd6, 0x4e, 0xca,
      0xa5, 0xb4, 0xbe, 0x90, 0x78, 0x96, 0x05, 0x61,
      0x21, 0xd7, 0x6d, 0xea, 0x4d, 0x67, 0xb0, 0xfa,
      0xa8, 0x55, 0xb6, 0xca, 0xf5, 0x68, 0x79, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__JointRange_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x45, 0x1a, 0x3b, 0x23, 0x88, 0x35, 0xd5,
      0x9f, 0x79, 0xba, 0x85, 0x60, 0x1b, 0x8a, 0x7a,
      0xf9, 0x6f, 0xfd, 0xd2, 0x21, 0xb8, 0x7b, 0xd6,
      0xf2, 0xfa, 0x85, 0xb6, 0x90, 0x6c, 0x82, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__JointRange_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x78, 0x12, 0x47, 0xa8, 0x06, 0x48, 0x5b,
      0x6c, 0xa2, 0x59, 0xf6, 0x26, 0x48, 0xe2, 0x55,
      0x5f, 0x65, 0xd0, 0x64, 0xc2, 0xc7, 0xc3, 0x80,
      0xdc, 0x4a, 0xff, 0x68, 0x66, 0x42, 0x2c, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__srv__JointRange_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x3d, 0xbe, 0x55, 0xa3, 0xbf, 0x5d, 0xcc,
      0x2a, 0xc0, 0x09, 0x6b, 0x37, 0x74, 0xb6, 0x7b,
      0x75, 0xe8, 0x68, 0xcd, 0x10, 0xd1, 0x21, 0x39,
      0x05, 0x05, 0xa0, 0x24, 0x93, 0x2e, 0x90, 0x14,
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

static char servo_service__srv__JointRange__TYPE_NAME[] = "servo_service/srv/JointRange";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char servo_service__srv__JointRange_Event__TYPE_NAME[] = "servo_service/srv/JointRange_Event";
static char servo_service__srv__JointRange_Request__TYPE_NAME[] = "servo_service/srv/JointRange_Request";
static char servo_service__srv__JointRange_Response__TYPE_NAME[] = "servo_service/srv/JointRange_Response";

// Define type names, field names, and default values
static char servo_service__srv__JointRange__FIELD_NAME__request_message[] = "request_message";
static char servo_service__srv__JointRange__FIELD_NAME__response_message[] = "response_message";
static char servo_service__srv__JointRange__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field servo_service__srv__JointRange__FIELDS[] = {
  {
    {servo_service__srv__JointRange__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {servo_service__srv__JointRange_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {servo_service__srv__JointRange_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {servo_service__srv__JointRange_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription servo_service__srv__JointRange__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__JointRange__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__JointRange__TYPE_NAME, 28, 28},
      {servo_service__srv__JointRange__FIELDS, 3, 3},
    },
    {servo_service__srv__JointRange__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = servo_service__srv__JointRange_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = servo_service__srv__JointRange_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = servo_service__srv__JointRange_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char servo_service__srv__JointRange_Request__FIELD_NAME__ids[] = "ids";

static rosidl_runtime_c__type_description__Field servo_service__srv__JointRange_Request__FIELDS[] = {
  {
    {servo_service__srv__JointRange_Request__FIELD_NAME__ids, 3, 3},
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
servo_service__srv__JointRange_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__JointRange_Request__TYPE_NAME, 36, 36},
      {servo_service__srv__JointRange_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char servo_service__srv__JointRange_Response__FIELD_NAME__angle_min[] = "angle_min";
static char servo_service__srv__JointRange_Response__FIELD_NAME__angle_max[] = "angle_max";

static rosidl_runtime_c__type_description__Field servo_service__srv__JointRange_Response__FIELDS[] = {
  {
    {servo_service__srv__JointRange_Response__FIELD_NAME__angle_min, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Response__FIELD_NAME__angle_max, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__JointRange_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__JointRange_Response__TYPE_NAME, 37, 37},
      {servo_service__srv__JointRange_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char servo_service__srv__JointRange_Event__FIELD_NAME__info[] = "info";
static char servo_service__srv__JointRange_Event__FIELD_NAME__request[] = "request";
static char servo_service__srv__JointRange_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field servo_service__srv__JointRange_Event__FIELDS[] = {
  {
    {servo_service__srv__JointRange_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {servo_service__srv__JointRange_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {servo_service__srv__JointRange_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription servo_service__srv__JointRange_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {servo_service__srv__JointRange_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__srv__JointRange_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__srv__JointRange_Event__TYPE_NAME, 34, 34},
      {servo_service__srv__JointRange_Event__FIELDS, 3, 3},
    },
    {servo_service__srv__JointRange_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = servo_service__srv__JointRange_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = servo_service__srv__JointRange_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8[] ids\n"
  "---\n"
  "float32[] angle_min\n"
  "float32[] angle_max";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__JointRange__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__JointRange__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__JointRange_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__JointRange_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__JointRange_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__JointRange_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
servo_service__srv__JointRange_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__srv__JointRange_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__JointRange__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__JointRange__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *servo_service__srv__JointRange_Event__get_individual_type_description_source(NULL);
    sources[4] = *servo_service__srv__JointRange_Request__get_individual_type_description_source(NULL);
    sources[5] = *servo_service__srv__JointRange_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__JointRange_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__JointRange_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__JointRange_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__JointRange_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__srv__JointRange_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__srv__JointRange_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *servo_service__srv__JointRange_Request__get_individual_type_description_source(NULL);
    sources[4] = *servo_service__srv__JointRange_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
