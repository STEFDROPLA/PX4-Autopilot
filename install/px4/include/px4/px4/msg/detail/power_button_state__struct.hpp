// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4:msg/PowerButtonState.idl
// generated code does not contain a copyright notice

#ifndef PX4__MSG__DETAIL__POWER_BUTTON_STATE__STRUCT_HPP_
#define PX4__MSG__DETAIL__POWER_BUTTON_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4__msg__PowerButtonState __attribute__((deprecated))
#else
# define DEPRECATED__px4__msg__PowerButtonState __declspec(deprecated)
#endif

namespace px4
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PowerButtonState_
{
  using Type = PowerButtonState_<ContainerAllocator>;

  explicit PowerButtonState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->event = 0;
    }
  }

  explicit PowerButtonState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->event = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _event_type =
    uint8_t;
  _event_type event;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__event(
    const uint8_t & _arg)
  {
    this->event = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PWR_BUTTON_STATE_IDEL =
    0u;
  static constexpr uint8_t PWR_BUTTON_STATE_DOWN =
    1u;
  static constexpr uint8_t PWR_BUTTON_STATE_UP =
    2u;
  static constexpr uint8_t PWR_BUTTON_STATE_REQUEST_SHUTDOWN =
    3u;

  // pointer types
  using RawPtr =
    px4::msg::PowerButtonState_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4::msg::PowerButtonState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4::msg::PowerButtonState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4::msg::PowerButtonState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4::msg::PowerButtonState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4::msg::PowerButtonState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4::msg::PowerButtonState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4::msg::PowerButtonState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4::msg::PowerButtonState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4::msg::PowerButtonState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4__msg__PowerButtonState
    std::shared_ptr<px4::msg::PowerButtonState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4__msg__PowerButtonState
    std::shared_ptr<px4::msg::PowerButtonState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PowerButtonState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->event != other.event) {
      return false;
    }
    return true;
  }
  bool operator!=(const PowerButtonState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PowerButtonState_

// alias to use template instance with default allocator
using PowerButtonState =
  px4::msg::PowerButtonState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PowerButtonState_<ContainerAllocator>::PWR_BUTTON_STATE_IDEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PowerButtonState_<ContainerAllocator>::PWR_BUTTON_STATE_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PowerButtonState_<ContainerAllocator>::PWR_BUTTON_STATE_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PowerButtonState_<ContainerAllocator>::PWR_BUTTON_STATE_REQUEST_SHUTDOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace px4

#endif  // PX4__MSG__DETAIL__POWER_BUTTON_STATE__STRUCT_HPP_
