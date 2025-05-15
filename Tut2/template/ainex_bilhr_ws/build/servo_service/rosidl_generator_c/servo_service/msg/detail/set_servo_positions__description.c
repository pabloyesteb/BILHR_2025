// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:msg/SetServoPositions.idl
// generated code does not contain a copyright notice

#include "servo_service/msg/detail/set_servo_positions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__msg__SetServoPositions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0x29, 0x82, 0x5d, 0x89, 0x93, 0x4c, 0xf1,
      0xd4, 0x4d, 0x57, 0x5b, 0xae, 0x03, 0x8e, 0xe3,
      0xc5, 0x51, 0xd2, 0x4c, 0xfd, 0x3f, 0xa8, 0x65,
      0xbf, 0x8f, 0xe1, 0xec, 0x24, 0x76, 0xdc, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char servo_service__msg__SetServoPositions__TYPE_NAME[] = "servo_service/msg/SetServoPositions";

// Define type names, field names, and default values
static char servo_service__msg__SetServoPositions__FIELD_NAME__ids[] = "ids";
static char servo_service__msg__SetServoPositions__FIELD_NAME__positions[] = "positions";
static char servo_service__msg__SetServoPositions__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field servo_service__msg__SetServoPositions__FIELDS[] = {
  {
    {servo_service__msg__SetServoPositions__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__SetServoPositions__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__SetServoPositions__FIELD_NAME__duration, 8, 8},
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
servo_service__msg__SetServoPositions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__msg__SetServoPositions__TYPE_NAME, 35, 35},
      {servo_service__msg__SetServoPositions__FIELDS, 3, 3},
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
servo_service__msg__SetServoPositions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__msg__SetServoPositions__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__msg__SetServoPositions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__msg__SetServoPositions__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
