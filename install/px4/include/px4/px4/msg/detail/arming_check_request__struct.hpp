// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/ArmingCheckRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_HPP_
#define PX4__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__ArmingCheckRequest __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__ArmingCheckRequest __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmingCheckRequest_
{
  using Type = ArmingCheckRequest_<ContainerAllocator>;

  explicit ArmingCheckRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0;
    }
  }

  explicit ArmingCheckRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->request_id = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _request_id_type =
    uint8_t;
  _request_id_type request_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__request_id(
    const uint8_t & _arg)
  {
    this->request_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MESSAGE_VERSION =
    0u;

  // pointer types
  using RawPtr =
    px4::msg::ArmingCheckRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::ArmingCheckRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::ArmingCheckRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::ArmingCheckRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__ArmingCheckRequest
    std::shared_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__ArmingCheckRequest
    std::shared_ptr<px4::msg::ArmingCheckRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmingCheckRequest_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->request_id != other.request_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmingCheckRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmingCheckRequest_

// alias to use template instance with default allocator
using ArmingCheckRequest =
  px4::msg::ArmingCheckRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ArmingCheckRequest_<ContainerAllocator>::MESSAGE_VERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_HPP_
