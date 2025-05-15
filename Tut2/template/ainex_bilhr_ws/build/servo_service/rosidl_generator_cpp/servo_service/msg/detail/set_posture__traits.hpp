// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from servo_service:msg/SetPosture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "servo_service/msg/set_posture.hpp"


#ifndef SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__TRAITS_HPP_
#define SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "servo_service/msg/detail/set_posture__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace servo_service
{

namespace msg
{

inline void to_flow_style_yaml(
  const SetPosture & msg,
  std::ostream & out)
{
  out << "{";
  // member: posture_name
  {
    out << "posture_name: ";
    rosidl_generator_traits::value_to_yaml(msg.posture_name, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPosture & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: posture_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posture_name: ";
    rosidl_generator_traits::value_to_yaml(msg.posture_name, out);
    out << "\n";
  }

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPosture & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace servo_service

namespace rosidl_generator_traits
{

[[deprecated("use servo_service::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const servo_service::msg::SetPosture & msg,
  std::ostream & out, size_t indentation = 0)
{
  servo_service::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use servo_service::msg::to_yaml() instead")]]
inline std::string to_yaml(const servo_service::msg::SetPosture & msg)
{
  return servo_service::msg::to_yaml(msg);
}

template<>
inline const char * data_type<servo_service::msg::SetPosture>()
{
  return "servo_service::msg::SetPosture";
}

template<>
inline const char * name<servo_service::msg::SetPosture>()
{
  return "servo_service/msg/SetPosture";
}

template<>
struct has_fixed_size<servo_service::msg::SetPosture>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<servo_service::msg::SetPosture>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<servo_service::msg::SetPosture>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERVO_SERVICE__MSG__DETAIL__SET_POSTURE__TRAITS_HPP_
