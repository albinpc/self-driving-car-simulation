// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from webots_ros2_msgs:srv/EmitterSendString.idl
// generated code does not contain a copyright notice
#include "webots_ros2_msgs/srv/detail/emitter_send_string__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "webots_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "webots_ros2_msgs/srv/detail/emitter_send_string__struct.h"
#include "webots_ros2_msgs/srv/detail/emitter_send_string__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // value
#include "rosidl_runtime_c/string_functions.h"  // value

// forward declare type support functions


using _EmitterSendString_Request__ros_msg_type = webots_ros2_msgs__srv__EmitterSendString_Request;

static bool _EmitterSendString_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EmitterSendString_Request__ros_msg_type * ros_message = static_cast<const _EmitterSendString_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    const rosidl_runtime_c__String * str = &ros_message->value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _EmitterSendString_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EmitterSendString_Request__ros_msg_type * ros_message = static_cast<_EmitterSendString_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->value.data) {
      rosidl_runtime_c__String__init(&ros_message->value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'value'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EmitterSendString_Request__ros_msg_type * ros_message = static_cast<const _EmitterSendString_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->value.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _EmitterSendString_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: value
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = webots_ros2_msgs__srv__EmitterSendString_Request;
    is_plain =
      (
      offsetof(DataType, value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EmitterSendString_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EmitterSendString_Request = {
  "webots_ros2_msgs::srv",
  "EmitterSendString_Request",
  _EmitterSendString_Request__cdr_serialize,
  _EmitterSendString_Request__cdr_deserialize,
  _EmitterSendString_Request__get_serialized_size,
  _EmitterSendString_Request__max_serialized_size
};

static rosidl_message_type_support_t _EmitterSendString_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EmitterSendString_Request,
  get_message_typesupport_handle_function,
  &webots_ros2_msgs__srv__EmitterSendString_Request__get_type_hash,
  &webots_ros2_msgs__srv__EmitterSendString_Request__get_type_description,
  &webots_ros2_msgs__srv__EmitterSendString_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Request)() {
  return &_EmitterSendString_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "webots_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "webots_ros2_msgs/srv/detail/emitter_send_string__struct.h"
// already included above
// #include "webots_ros2_msgs/srv/detail/emitter_send_string__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EmitterSendString_Response__ros_msg_type = webots_ros2_msgs__srv__EmitterSendString_Response;

static bool _EmitterSendString_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EmitterSendString_Response__ros_msg_type * ros_message = static_cast<const _EmitterSendString_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _EmitterSendString_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EmitterSendString_Response__ros_msg_type * ros_message = static_cast<_EmitterSendString_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EmitterSendString_Response__ros_msg_type * ros_message = static_cast<const _EmitterSendString_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EmitterSendString_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = webots_ros2_msgs__srv__EmitterSendString_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EmitterSendString_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EmitterSendString_Response = {
  "webots_ros2_msgs::srv",
  "EmitterSendString_Response",
  _EmitterSendString_Response__cdr_serialize,
  _EmitterSendString_Response__cdr_deserialize,
  _EmitterSendString_Response__get_serialized_size,
  _EmitterSendString_Response__max_serialized_size
};

static rosidl_message_type_support_t _EmitterSendString_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EmitterSendString_Response,
  get_message_typesupport_handle_function,
  &webots_ros2_msgs__srv__EmitterSendString_Response__get_type_hash,
  &webots_ros2_msgs__srv__EmitterSendString_Response__get_type_description,
  &webots_ros2_msgs__srv__EmitterSendString_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Response)() {
  return &_EmitterSendString_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "webots_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "webots_ros2_msgs/srv/detail/emitter_send_string__struct.h"
// already included above
// #include "webots_ros2_msgs/srv/detail/emitter_send_string__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_webots_ros2_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_webots_ros2_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_webots_ros2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();
size_t get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Request)();
size_t get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Response)();


using _EmitterSendString_Event__ros_msg_type = webots_ros2_msgs__srv__EmitterSendString_Event;

static bool _EmitterSendString_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EmitterSendString_Event__ros_msg_type * ros_message = static_cast<const _EmitterSendString_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _EmitterSendString_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EmitterSendString_Event__ros_msg_type * ros_message = static_cast<_EmitterSendString_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      webots_ros2_msgs__srv__EmitterSendString_Request__Sequence__fini(&ros_message->request);
    }
    if (!webots_ros2_msgs__srv__EmitterSendString_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      webots_ros2_msgs__srv__EmitterSendString_Response__Sequence__fini(&ros_message->response);
    }
    if (!webots_ros2_msgs__srv__EmitterSendString_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EmitterSendString_Event__ros_msg_type * ros_message = static_cast<const _EmitterSendString_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EmitterSendString_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_webots_ros2_msgs
size_t max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = webots_ros2_msgs__srv__EmitterSendString_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EmitterSendString_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_webots_ros2_msgs__srv__EmitterSendString_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EmitterSendString_Event = {
  "webots_ros2_msgs::srv",
  "EmitterSendString_Event",
  _EmitterSendString_Event__cdr_serialize,
  _EmitterSendString_Event__cdr_deserialize,
  _EmitterSendString_Event__get_serialized_size,
  _EmitterSendString_Event__max_serialized_size
};

static rosidl_message_type_support_t _EmitterSendString_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EmitterSendString_Event,
  get_message_typesupport_handle_function,
  &webots_ros2_msgs__srv__EmitterSendString_Event__get_type_hash,
  &webots_ros2_msgs__srv__EmitterSendString_Event__get_type_description,
  &webots_ros2_msgs__srv__EmitterSendString_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Event)() {
  return &_EmitterSendString_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "webots_ros2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "webots_ros2_msgs/srv/emitter_send_string.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EmitterSendString__callbacks = {
  "webots_ros2_msgs::srv",
  "EmitterSendString",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString_Response)(),
};

static rosidl_service_type_support_t EmitterSendString__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EmitterSendString__callbacks,
  get_service_typesupport_handle_function,
  &_EmitterSendString_Request__type_support,
  &_EmitterSendString_Response__type_support,
  &_EmitterSendString_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    webots_ros2_msgs,
    srv,
    EmitterSendString
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    webots_ros2_msgs,
    srv,
    EmitterSendString
  ),
  &webots_ros2_msgs__srv__EmitterSendString__get_type_hash,
  &webots_ros2_msgs__srv__EmitterSendString__get_type_description,
  &webots_ros2_msgs__srv__EmitterSendString__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, webots_ros2_msgs, srv, EmitterSendString)() {
  return &EmitterSendString__handle;
}

#if defined(__cplusplus)
}
#endif
