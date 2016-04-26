# Install script for directory: /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_ros/planning

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/include/moveit_ros_planning/PlanningSceneMonitorDynamicReconfigureConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/include/moveit_ros_planning/TrajectoryExecutionDynamicReconfigureConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/include/moveit_ros_planning/PlanExecutionDynamicReconfigureConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/moveit_ros_planning" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/include/moveit_ros_planning/SenseForPlanDynamicReconfigureConfig.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/moveit_ros_planning" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/python2.7/dist-packages/moveit_ros_planning/__init__.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/python2.7/dist-packages/moveit_ros_planning/cfg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/moveit_ros_planning" TYPE DIRECTORY FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/python2.7/dist-packages/moveit_ros_planning/cfg")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/catkin_generated/installspace/moveit_ros_planning.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning/cmake" TYPE FILE FILES
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/catkin_generated/installspace/moveit_ros_planningConfig.cmake"
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/catkin_generated/installspace/moveit_ros_planningConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning" TYPE FILE FILES "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_ros/planning/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_ros_planning" TYPE FILE FILES
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_ros/planning/planning_request_adapters_plugin_description.xml"
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_ros/planning/kdl_kinematics_plugin_description.xml"
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_ros/planning/srv_kinematics_plugin_description.xml"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/rdf_loader/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/collision_plugin_loader/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/kdl_kinematics_plugin/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/srv_kinematics_plugin/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/kinematics_plugin_loader/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/robot_model_loader/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/constraint_sampler_manager_loader/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/planning_pipeline/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/planning_request_adapter_plugins/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/planning_scene_monitor/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/planning_components_tools/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/trajectory_execution_manager/cmake_install.cmake")
  INCLUDE("/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_ros/planning/plan_execution/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

