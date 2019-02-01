/*
 * Cross platform macros.
 *
 */
#ifndef TF2_ROS__DECL_H_
#define TF2_ROS__DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef tf2_ros_EXPORTS  // we are building a shared lib/dll
    #define TF2_ROS_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define TF2_ROS_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define TF2_ROS_DECL
#endif

#endif