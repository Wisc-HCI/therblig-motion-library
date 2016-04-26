# Install script for directory: /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_core

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/catkin_generated/installspace/moveit_core.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_core/cmake" TYPE FILE FILES
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/catkin_generated/installspace/moveit_coreConfig.cmake"
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/catkin_generated/installspace/moveit_coreConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_core" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_core/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/include/moveit/version.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/version/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/macros/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/backtrace/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/exceptions/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/profiler/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/background_processing/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/kinematics_base/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/controller_manager/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/sensor_manager/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/robot_model/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/transforms/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/robot_state/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/robot_trajectory/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/collision_detection/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/collision_detection_fcl/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/kinematic_constraints/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/planning_scene/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/constraint_samplers/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/planning_interface/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/planning_request_adapter/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/trajectory_processing/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/distance_field/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/kinematics_metrics/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_core/dynamics_solver/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

