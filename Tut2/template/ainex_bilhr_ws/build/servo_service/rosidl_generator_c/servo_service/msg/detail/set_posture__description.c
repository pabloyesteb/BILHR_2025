// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

#include "servo_service/msg/detail/set_posture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__msg__SetPosture__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x63, 0xe7, 0x96, 0x3f, 0xe4, 0x70, 0xb6,
      0x18, 0xb1, 0x34, 0xdf, 0x4d, 0x72, 0xf9, 0x3c,
      0x78, 0x0b, 0x1b, 0x53, 0xf6, 0xf8, 0x62, 0x50,
      0x68, 0xfd, 0x63, 0x89, 0x98, 0x68, 0x5a, 0x13,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char servo_service__msg__SetPosture__TYPE_NAME[] = "servo_service/msg/SetPosture";

// Define type names, field names, and default values
static char servo_service__msg__SetPosture__FIELD_NAME__posture_name[] = "posture_name";
static char servo_service__msg__SetPosture__FIELD_NAME__duration[] = "duration";

static rosidl_runtime_c__type_description__Field servo_service__msg__SetPosture__FIELDS[] = {
  {
    {servo_service__msg__SetPosture__FIELD_NAME__posture_name, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__SetPosture__FIELD_NAME__duration, 8, 8},
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
servo_service__msg__SetPosture__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__msg__SetPosture__TYPE_NAME, 28, 28},
      {servo_service__msg__SetPosture__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string posture_name\n"
  "float32 duration";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
servo_service__msg__SetPosture__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__msg__SetPosture__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__msg__SetPosture__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__msg__SetPosture__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
