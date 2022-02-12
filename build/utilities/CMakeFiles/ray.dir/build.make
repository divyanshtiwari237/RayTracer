# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = D:/cmake-3.20.0-windows-x86_64/bin/cmake.exe

# The command to remove a file.
RM = D:/cmake-3.20.0-windows-x86_64/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/projects/RayTracer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/projects/RayTracer/build

# Include any dependencies generated for this target.
include utilities/CMakeFiles/ray.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include utilities/CMakeFiles/ray.dir/compiler_depend.make

# Include the progress variables for this target.
include utilities/CMakeFiles/ray.dir/progress.make

# Include the compile flags for this target's objects.
include utilities/CMakeFiles/ray.dir/flags.make

utilities/CMakeFiles/ray.dir/src/ray.cpp.obj: utilities/CMakeFiles/ray.dir/flags.make
utilities/CMakeFiles/ray.dir/src/ray.cpp.obj: utilities/CMakeFiles/ray.dir/includes_CXX.rsp
utilities/CMakeFiles/ray.dir/src/ray.cpp.obj: ../utilities/src/ray.cpp
utilities/CMakeFiles/ray.dir/src/ray.cpp.obj: utilities/CMakeFiles/ray.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/projects/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object utilities/CMakeFiles/ray.dir/src/ray.cpp.obj"
	cd C:/projects/RayTracer/build/utilities && C:/msys64/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT utilities/CMakeFiles/ray.dir/src/ray.cpp.obj -MF CMakeFiles/ray.dir/src/ray.cpp.obj.d -o CMakeFiles/ray.dir/src/ray.cpp.obj -c C:/projects/RayTracer/utilities/src/ray.cpp

utilities/CMakeFiles/ray.dir/src/ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray.dir/src/ray.cpp.i"
	cd C:/projects/RayTracer/build/utilities && C:/msys64/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/projects/RayTracer/utilities/src/ray.cpp > CMakeFiles/ray.dir/src/ray.cpp.i

utilities/CMakeFiles/ray.dir/src/ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray.dir/src/ray.cpp.s"
	cd C:/projects/RayTracer/build/utilities && C:/msys64/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/projects/RayTracer/utilities/src/ray.cpp -o CMakeFiles/ray.dir/src/ray.cpp.s

# Object files for target ray
ray_OBJECTS = \
"CMakeFiles/ray.dir/src/ray.cpp.obj"

# External object files for target ray
ray_EXTERNAL_OBJECTS =

utilities/libray.a: utilities/CMakeFiles/ray.dir/src/ray.cpp.obj
utilities/libray.a: utilities/CMakeFiles/ray.dir/build.make
utilities/libray.a: utilities/CMakeFiles/ray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/projects/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libray.a"
	cd C:/projects/RayTracer/build/utilities && $(CMAKE_COMMAND) -P CMakeFiles/ray.dir/cmake_clean_target.cmake
	cd C:/projects/RayTracer/build/utilities && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ray.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utilities/CMakeFiles/ray.dir/build: utilities/libray.a
.PHONY : utilities/CMakeFiles/ray.dir/build

utilities/CMakeFiles/ray.dir/clean:
	cd C:/projects/RayTracer/build/utilities && $(CMAKE_COMMAND) -P CMakeFiles/ray.dir/cmake_clean.cmake
.PHONY : utilities/CMakeFiles/ray.dir/clean

utilities/CMakeFiles/ray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/projects/RayTracer C:/projects/RayTracer/utilities C:/projects/RayTracer/build C:/projects/RayTracer/build/utilities C:/projects/RayTracer/build/utilities/CMakeFiles/ray.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utilities/CMakeFiles/ray.dir/depend

