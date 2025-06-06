// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/IMU.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__IMU__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__IMU__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'system_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces__msg__IMU __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__IMU __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMU_
{
  using Type = IMU_<ContainerAllocator>;

  explicit IMU_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->is_valid = false;
      this->has_data_path_overrun = false;
      this->has_flash_update_failure = false;
      this->has_spi_com_error = false;
      this->has_low_voltage = false;
      this->has_sensor_failure = false;
      this->has_memory_failure = false;
      this->has_gyro_1_failure = false;
      this->has_gyro_2_failure = false;
      this->has_accelerometer_failure = false;
      this->accelerometer_x = 0.0f;
      this->accelerometer_y = 0.0f;
      this->accelerometer_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->temperature = 0.0f;
    }
  }

  explicit IMU_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posix_time = false;
      this->timestamp = 0ul;
      this->microseconds = 0ul;
      this->is_valid = false;
      this->has_data_path_overrun = false;
      this->has_flash_update_failure = false;
      this->has_spi_com_error = false;
      this->has_low_voltage = false;
      this->has_sensor_failure = false;
      this->has_memory_failure = false;
      this->has_gyro_1_failure = false;
      this->has_gyro_2_failure = false;
      this->has_accelerometer_failure = false;
      this->accelerometer_x = 0.0f;
      this->accelerometer_y = 0.0f;
      this->accelerometer_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->temperature = 0.0f;
    }
  }

  // field types and members
  using _system_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _system_timestamp_type system_timestamp;
  using _posix_time_type =
    bool;
  _posix_time_type posix_time;
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _microseconds_type =
    uint32_t;
  _microseconds_type microseconds;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _has_data_path_overrun_type =
    bool;
  _has_data_path_overrun_type has_data_path_overrun;
  using _has_flash_update_failure_type =
    bool;
  _has_flash_update_failure_type has_flash_update_failure;
  using _has_spi_com_error_type =
    bool;
  _has_spi_com_error_type has_spi_com_error;
  using _has_low_voltage_type =
    bool;
  _has_low_voltage_type has_low_voltage;
  using _has_sensor_failure_type =
    bool;
  _has_sensor_failure_type has_sensor_failure;
  using _has_memory_failure_type =
    bool;
  _has_memory_failure_type has_memory_failure;
  using _has_gyro_1_failure_type =
    bool;
  _has_gyro_1_failure_type has_gyro_1_failure;
  using _has_gyro_2_failure_type =
    bool;
  _has_gyro_2_failure_type has_gyro_2_failure;
  using _has_accelerometer_failure_type =
    bool;
  _has_accelerometer_failure_type has_accelerometer_failure;
  using _accelerometer_x_type =
    float;
  _accelerometer_x_type accelerometer_x;
  using _accelerometer_y_type =
    float;
  _accelerometer_y_type accelerometer_y;
  using _accelerometer_z_type =
    float;
  _accelerometer_z_type accelerometer_z;
  using _gyro_x_type =
    float;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    float;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    float;
  _gyro_z_type gyro_z;
  using _temperature_type =
    float;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__system_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->system_timestamp = _arg;
    return *this;
  }
  Type & set__posix_time(
    const bool & _arg)
  {
    this->posix_time = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__microseconds(
    const uint32_t & _arg)
  {
    this->microseconds = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__has_data_path_overrun(
    const bool & _arg)
  {
    this->has_data_path_overrun = _arg;
    return *this;
  }
  Type & set__has_flash_update_failure(
    const bool & _arg)
  {
    this->has_flash_update_failure = _arg;
    return *this;
  }
  Type & set__has_spi_com_error(
    const bool & _arg)
  {
    this->has_spi_com_error = _arg;
    return *this;
  }
  Type & set__has_low_voltage(
    const bool & _arg)
  {
    this->has_low_voltage = _arg;
    return *this;
  }
  Type & set__has_sensor_failure(
    const bool & _arg)
  {
    this->has_sensor_failure = _arg;
    return *this;
  }
  Type & set__has_memory_failure(
    const bool & _arg)
  {
    this->has_memory_failure = _arg;
    return *this;
  }
  Type & set__has_gyro_1_failure(
    const bool & _arg)
  {
    this->has_gyro_1_failure = _arg;
    return *this;
  }
  Type & set__has_gyro_2_failure(
    const bool & _arg)
  {
    this->has_gyro_2_failure = _arg;
    return *this;
  }
  Type & set__has_accelerometer_failure(
    const bool & _arg)
  {
    this->has_accelerometer_failure = _arg;
    return *this;
  }
  Type & set__accelerometer_x(
    const float & _arg)
  {
    this->accelerometer_x = _arg;
    return *this;
  }
  Type & set__accelerometer_y(
    const float & _arg)
  {
    this->accelerometer_y = _arg;
    return *this;
  }
  Type & set__accelerometer_z(
    const float & _arg)
  {
    this->accelerometer_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const float & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const float & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const float & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::IMU_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::IMU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::IMU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::IMU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IMU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IMU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::IMU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::IMU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::IMU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::IMU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__IMU
    std::shared_ptr<interfaces::msg::IMU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__IMU
    std::shared_ptr<interfaces::msg::IMU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMU_ & other) const
  {
    if (this->system_timestamp != other.system_timestamp) {
      return false;
    }
    if (this->posix_time != other.posix_time) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->microseconds != other.microseconds) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->has_data_path_overrun != other.has_data_path_overrun) {
      return false;
    }
    if (this->has_flash_update_failure != other.has_flash_update_failure) {
      return false;
    }
    if (this->has_spi_com_error != other.has_spi_com_error) {
      return false;
    }
    if (this->has_low_voltage != other.has_low_voltage) {
      return false;
    }
    if (this->has_sensor_failure != other.has_sensor_failure) {
      return false;
    }
    if (this->has_memory_failure != other.has_memory_failure) {
      return false;
    }
    if (this->has_gyro_1_failure != other.has_gyro_1_failure) {
      return false;
    }
    if (this->has_gyro_2_failure != other.has_gyro_2_failure) {
      return false;
    }
    if (this->has_accelerometer_failure != other.has_accelerometer_failure) {
      return false;
    }
    if (this->accelerometer_x != other.accelerometer_x) {
      return false;
    }
    if (this->accelerometer_y != other.accelerometer_y) {
      return false;
    }
    if (this->accelerometer_z != other.accelerometer_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMU_

// alias to use template instance with default allocator
using IMU =
  interfaces::msg::IMU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__IMU__STRUCT_HPP_
