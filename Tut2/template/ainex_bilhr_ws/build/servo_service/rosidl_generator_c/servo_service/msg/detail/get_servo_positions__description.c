// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:msg/GetServoPositions.idl
// generated code does not contain a copyright notice

#include "servo_service/msg/detail/get_servo_positions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__msg__GetServoPositions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x1d, 0xf4, 0xd8, 0x88, 0xaa, 0xff, 0xeb,
      0x06, 0xe1, 0x3a, 0x56, 0x80, 0xc3, 0xb1, 0xcc,
      0xf0, 0x4c, 0x23, 0xb8, 0x4e, 0x81, 0x2b, 0x8d,
      0x93, 0xa6, 0x11, 0x50, 0xd8, 0xa7, 0xbe, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char servo_service__msg__GetServoPositions__TYPE_NAME[] = "servo_service/msg/GetServoPositions";

// Define type names, field names, and default values
static char servo_service__msg__GetServoPositions__FIELD_NAME__ids[] = "ids";
static char servo_service__msg__GetServoPositions__FIELD_NAME__positions[] = "positions";

static rosidl_runtime_c__type_description__Field servo_service__msg__GetServoPositions__FIELDS[] = {
  {
    {servo_service__msg__GetServoPositions__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__GetServoPositions__FIELD_NAME__positions, 9, 9},
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
servo_service__msg__GetServoPositions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__msg__GetServoPositions__TYPE_NAME, 35, 35},
      {servo_service__msg__GetServoPositions__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8[] ids\n"
  "float32[] positions";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
servo_service__msg__GetServoPositions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__msg__GetServoPositions__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__msg__GetServoPositions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__msg__GetServoPositions__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
