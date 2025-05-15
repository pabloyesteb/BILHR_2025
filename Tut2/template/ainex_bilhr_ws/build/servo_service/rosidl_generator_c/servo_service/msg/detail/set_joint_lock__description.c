// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from servo_service:msg/SetJointLock.idl
// generated code does not contain a copyright notice

#include "servo_service/msg/detail/set_joint_lock__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_servo_service
const rosidl_type_hash_t *
servo_service__msg__SetJointLock__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x1b, 0x19, 0xd3, 0x63, 0x5d, 0x86, 0xfb,
      0x6d, 0xd1, 0xbd, 0x79, 0xf4, 0xc4, 0x28, 0xb1,
      0x11, 0xfd, 0xca, 0x01, 0x8c, 0x73, 0x7d, 0x04,
      0x44, 0x35, 0x92, 0xf1, 0x31, 0xe3, 0xe1, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char servo_service__msg__SetJointLock__TYPE_NAME[] = "servo_service/msg/SetJointLock";

// Define type names, field names, and default values
static char servo_service__msg__SetJointLock__FIELD_NAME__ids[] = "ids";
static char servo_service__msg__SetJointLock__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field servo_service__msg__SetJointLock__FIELDS[] = {
  {
    {servo_service__msg__SetJointLock__FIELD_NAME__ids, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {servo_service__msg__SetJointLock__FIELD_NAME__status, 6, 6},
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
servo_service__msg__SetJointLock__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {servo_service__msg__SetJointLock__TYPE_NAME, 30, 30},
      {servo_service__msg__SetJointLock__FIELDS, 2, 2},
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
  "uint8[] status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
servo_service__msg__SetJointLock__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {servo_service__msg__SetJointLock__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 26, 26},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
servo_service__msg__SetJointLock__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *servo_service__msg__SetJointLock__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
