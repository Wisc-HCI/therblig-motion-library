# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build

# Include any dependencies generated for this target.
include jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/depend.make

# Include the progress variables for this target.
include jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/progress.make

# Include the compile flags for this target's objects.
include jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/flags.make

# Object files for target Kinova.API.CommLayerUbuntu
Kinova_API_CommLayerUbuntu_OBJECTS =

# External object files for target Kinova.API.CommLayerUbuntu
Kinova_API_CommLayerUbuntu_EXTERNAL_OBJECTS =

/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/libKinova.API.CommLayerUbuntu.so: jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/build.make
/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/libKinova.API.CommLayerUbuntu.so: jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/libKinova.API.CommLayerUbuntu.so"
	cd /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/jaco_sdk && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Kinova.API.CommLayerUbuntu.dir/link.txt --verbose=$(VERBOSE)
	cd /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/jaco_sdk && cp /home/hcilab/drakita/ros/legibilityStudy/devel/lib/libKinova.API.CommLayerUbuntu.so /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/

# Rule to build all files generated by this target.
jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/build: /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/lib/libKinova.API.CommLayerUbuntu.so
.PHONY : jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/build

jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/requires:
.PHONY : jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/requires

jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/clean:
	cd /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/jaco_sdk && $(CMAKE_COMMAND) -P CMakeFiles/Kinova.API.CommLayerUbuntu.dir/cmake_clean.cmake
.PHONY : jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/clean

jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/depend:
	cd /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/jaco_sdk /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/jaco_sdk /home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jaco_sdk/CMakeFiles/Kinova.API.CommLayerUbuntu.dir/depend

