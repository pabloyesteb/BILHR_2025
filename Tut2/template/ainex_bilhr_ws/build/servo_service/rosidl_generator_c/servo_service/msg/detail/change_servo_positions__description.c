// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:msg/ChangeServoPositions.idl
// generated code does not contain a copyright notice

#include "servo_service/msg/detail/change_servo_positions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__msg__ChangeServoPositions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x38, 0x33, 0x77, 0xdd, 0x9f, 0xa4, 0x39,
      0xb7, 0x80, 0x5c, 0x64, 0xdd, 0x67, 0xd8, 0x7b,
      0xcb, 0xd3, 0xbc, 0x6f, 0x09, 0xbf, 0xa8, 0x07,
      0x9e, 0xcd, 0x83, 0xdf, 0x6d, 0x3f, 0xda, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char servo_service__msg__ChangeServoPositions__TYPE_NAME[] = "servo_service/msg/ChangeServoPositions";

// Define type names, field names, and default values
static char servo_service__msg__ChangeServoPositions__FIELD_NAME__ids[] = "ids";
static char servo_service__msg__ChangeServoPositions__FIELD_NAME__positions[] = "positions";
static char servo_service__msg__ChangeServoPositions__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field servo_service__msg__ChangeServoPositions__FIELDS[] = {
  {
    {servo_service__msg__ChangeServoPositions__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__ChangeServoPositions__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__ChangeServoPositions__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
servo_service__msg__ChangeServoPositions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__msg__ChangeServoPositions__TYPE_NAME, 38, 38},
      {servo_service__msg__ChangeServoPositions__FIELDS, 3, 3},
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
  "float32[] positions\n"
  "float32 duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
servo_service__msg__ChangeServoPositions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__msg__ChangeServoPositions__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__msg__ChangeServoPositions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__msg__ChangeServoPositions__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
