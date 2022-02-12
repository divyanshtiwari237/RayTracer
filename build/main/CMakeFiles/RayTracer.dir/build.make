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
include main/CMakeFiles/RayTracer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include main/CMakeFiles/RayTracer.dir/compiler_depend.make

# Include the progress variables for this target.
include main/CMakeFiles/RayTracer.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/RayTracer.dir/flags.make

main/CMakeFiles/RayTracer.dir/main.cpp.obj: main/CMakeFiles/RayTracer.dir/flags.make
main/CMakeFiles/RayTracer.dir/main.cpp.obj: main/CMakeFiles/RayTracer.dir/includes_CXX.rsp
main/CMakeFiles/RayTracer.dir/main.cpp.obj: ../main/main.cpp
main/CMakeFiles/RayTracer.dir/main.cpp.obj: main/CMakeFiles/RayTracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/projects/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main/CMakeFiles/RayTracer.dir/main.cpp.obj"
	cd C:/projects/RayTracer/build/main && C:/msys64/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT main/CMakeFiles/RayTracer.dir/main.cpp.obj -MF CMakeFiles/RayTracer.dir/main.cpp.obj.d -o CMakeFiles/RayTracer.dir/main.cpp.obj -c C:/projects/RayTracer/main/main.cpp

main/CMakeFiles/RayTracer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RayTracer.dir/main.cpp.i"
	cd C:/projects/RayTracer/build/main && C:/msys64/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/projects/RayTracer/main/main.cpp > CMakeFiles/RayTracer.dir/main.cpp.i

main/CMakeFiles/RayTracer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RayTracer.dir/main.cpp.s"
	cd C:/projects/RayTracer/build/main && C:/msys64/mingw64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/projects/RayTracer/main/main.cpp -o CMakeFiles/RayTracer.dir/main.cpp.s

# Object files for target RayTracer
RayTracer_OBJECTS = \
"CMakeFiles/RayTracer.dir/main.cpp.obj"

# External object files for target RayTracer
RayTracer_EXTERNAL_OBJECTS =

main/RayTracer.exe: main/CMakeFiles/RayTracer.dir/main.cpp.obj
main/RayTracer.exe: main/CMakeFiles/RayTracer.dir/build.make
main/RayTracer.exe: utilities/libvector.a
main/RayTracer.exe: utilities/libcolor.a
main/RayTracer.exe: utilities/libray.a
main/RayTracer.exe: utilities/libvector.a
main/RayTracer.exe: main/CMakeFiles/RayTracer.dir/linklibs.rsp
main/RayTracer.exe: main/CMakeFiles/RayTracer.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/projects/RayTracer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable RayTracer.exe"
	cd C:/projects/RayTracer/build/main && D:/cmake-3.20.0-windows-x86_64/bin/cmake.exe -E rm -f CMakeFiles/RayTracer.dir/objects.a
	cd C:/projects/RayTracer/build/main && C:/msys64/mingw64/bin/ar.exe cr CMakeFiles/RayTracer.dir/objects.a @CMakeFiles/RayTracer.dir/objects1.rsp
	cd C:/projects/RayTracer/build/main && C:/msys64/mingw64/bin/c++.exe -Wl,--whole-archive CMakeFiles/RayTracer.dir/objects.a -Wl,--no-whole-archive -o RayTracer.exe -Wl,--out-implib,libRayTracer.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/RayTracer.dir/linklibs.rsp

# Rule to build all files generated by this target.
main/CMakeFiles/RayTracer.dir/build: main/RayTracer.exe
.PHONY : main/CMakeFiles/RayTracer.dir/build

main/CMakeFiles/RayTracer.dir/clean:
	cd C:/projects/RayTracer/build/main && $(CMAKE_COMMAND) -P CMakeFiles/RayTracer.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/RayTracer.dir/clean

main/CMakeFiles/RayTracer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/projects/RayTracer C:/projects/RayTracer/main C:/projects/RayTracer/build C:/projects/RayTracer/build/main C:/projects/RayTracer/build/main/CMakeFiles/RayTracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/RayTracer.dir/depend

