# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_SOURCE_DIR = /home/kevin/Github/Algorithm/pa1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kevin/Github/Algorithm/pa1/build

# Include any dependencies generated for this target.
include CMakeFiles/h.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/h.dir/flags.make

CMakeFiles/h.dir/src/main/heapMain.cpp.o: CMakeFiles/h.dir/flags.make
CMakeFiles/h.dir/src/main/heapMain.cpp.o: ../src/main/heapMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kevin/Github/Algorithm/pa1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/h.dir/src/main/heapMain.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/h.dir/src/main/heapMain.cpp.o -c /home/kevin/Github/Algorithm/pa1/src/main/heapMain.cpp

CMakeFiles/h.dir/src/main/heapMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/h.dir/src/main/heapMain.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kevin/Github/Algorithm/pa1/src/main/heapMain.cpp > CMakeFiles/h.dir/src/main/heapMain.cpp.i

CMakeFiles/h.dir/src/main/heapMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/h.dir/src/main/heapMain.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kevin/Github/Algorithm/pa1/src/main/heapMain.cpp -o CMakeFiles/h.dir/src/main/heapMain.cpp.s

CMakeFiles/h.dir/src/main/heapMain.cpp.o.requires:

.PHONY : CMakeFiles/h.dir/src/main/heapMain.cpp.o.requires

CMakeFiles/h.dir/src/main/heapMain.cpp.o.provides: CMakeFiles/h.dir/src/main/heapMain.cpp.o.requires
	$(MAKE) -f CMakeFiles/h.dir/build.make CMakeFiles/h.dir/src/main/heapMain.cpp.o.provides.build
.PHONY : CMakeFiles/h.dir/src/main/heapMain.cpp.o.provides

CMakeFiles/h.dir/src/main/heapMain.cpp.o.provides.build: CMakeFiles/h.dir/src/main/heapMain.cpp.o


# Object files for target h
h_OBJECTS = \
"CMakeFiles/h.dir/src/main/heapMain.cpp.o"

# External object files for target h
h_EXTERNAL_OBJECTS =

../heapSort: CMakeFiles/h.dir/src/main/heapMain.cpp.o
../heapSort: CMakeFiles/h.dir/build.make
../heapSort: ../lib/libLIB.a
../heapSort: CMakeFiles/h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kevin/Github/Algorithm/pa1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../heapSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/h.dir/build: ../heapSort

.PHONY : CMakeFiles/h.dir/build

CMakeFiles/h.dir/requires: CMakeFiles/h.dir/src/main/heapMain.cpp.o.requires

.PHONY : CMakeFiles/h.dir/requires

CMakeFiles/h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/h.dir/clean

CMakeFiles/h.dir/depend:
	cd /home/kevin/Github/Algorithm/pa1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kevin/Github/Algorithm/pa1 /home/kevin/Github/Algorithm/pa1 /home/kevin/Github/Algorithm/pa1/build /home/kevin/Github/Algorithm/pa1/build /home/kevin/Github/Algorithm/pa1/build/CMakeFiles/h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/h.dir/depend

