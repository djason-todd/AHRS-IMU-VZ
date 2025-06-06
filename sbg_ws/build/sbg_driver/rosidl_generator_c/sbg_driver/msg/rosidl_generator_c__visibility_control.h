// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef SBG_DRIVER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define SBG_DRIVER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_sbg_driver __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_sbg_driver __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_sbg_driver __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_sbg_driver __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_sbg_driver
    #define ROSIDL_GENERATOR_C_PUBLIC_sbg_driver ROSIDL_GENERATOR_C_EXPORT_sbg_driver
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_sbg_driver ROSIDL_GENERATOR_C_IMPORT_sbg_driver
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_sbg_driver __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_sbg_driver
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_sbg_driver __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_sbg_driver
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // SBG_DRIVER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
