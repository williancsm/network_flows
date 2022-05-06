# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/runner/networkflows

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/networkflows/build

# Include any dependencies generated for this target.
include src/graph/CMakeFiles/Graph.dir/depend.make

# Include the progress variables for this target.
include src/graph/CMakeFiles/Graph.dir/progress.make

# Include the compile flags for this target's objects.
include src/graph/CMakeFiles/Graph.dir/flags.make

src/graph/CMakeFiles/Graph.dir/graph.cpp.o: src/graph/CMakeFiles/Graph.dir/flags.make
src/graph/CMakeFiles/Graph.dir/graph.cpp.o: ../src/graph/graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/runner/networkflows/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/graph/CMakeFiles/Graph.dir/graph.cpp.o"
	cd /home/runner/networkflows/build/src/graph && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Graph.dir/graph.cpp.o -c /home/runner/networkflows/src/graph/graph.cpp

src/graph/CMakeFiles/Graph.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Graph.dir/graph.cpp.i"
	cd /home/runner/networkflows/build/src/graph && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/runner/networkflows/src/graph/graph.cpp > CMakeFiles/Graph.dir/graph.cpp.i

src/graph/CMakeFiles/Graph.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Graph.dir/graph.cpp.s"
	cd /home/runner/networkflows/build/src/graph && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/runner/networkflows/src/graph/graph.cpp -o CMakeFiles/Graph.dir/graph.cpp.s

src/graph/CMakeFiles/Graph.dir/graph.cpp.o.requires:

.PHONY : src/graph/CMakeFiles/Graph.dir/graph.cpp.o.requires

src/graph/CMakeFiles/Graph.dir/graph.cpp.o.provides: src/graph/CMakeFiles/Graph.dir/graph.cpp.o.requires
	$(MAKE) -f src/graph/CMakeFiles/Graph.dir/build.make src/graph/CMakeFiles/Graph.dir/graph.cpp.o.provides.build
.PHONY : src/graph/CMakeFiles/Graph.dir/graph.cpp.o.provides

src/graph/CMakeFiles/Graph.dir/graph.cpp.o.provides.build: src/graph/CMakeFiles/Graph.dir/graph.cpp.o


# Object files for target Graph
Graph_OBJECTS = \
"CMakeFiles/Graph.dir/graph.cpp.o"

# External object files for target Graph
Graph_EXTERNAL_OBJECTS =

lib/libGraph.a: src/graph/CMakeFiles/Graph.dir/graph.cpp.o
lib/libGraph.a: src/graph/CMakeFiles/Graph.dir/build.make
lib/libGraph.a: src/graph/CMakeFiles/Graph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/runner/networkflows/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libGraph.a"
	cd /home/runner/networkflows/build/src/graph && $(CMAKE_COMMAND) -P CMakeFiles/Graph.dir/cmake_clean_target.cmake
	cd /home/runner/networkflows/build/src/graph && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Graph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/graph/CMakeFiles/Graph.dir/build: lib/libGraph.a

.PHONY : src/graph/CMakeFiles/Graph.dir/build

src/graph/CMakeFiles/Graph.dir/requires: src/graph/CMakeFiles/Graph.dir/graph.cpp.o.requires

.PHONY : src/graph/CMakeFiles/Graph.dir/requires

src/graph/CMakeFiles/Graph.dir/clean:
	cd /home/runner/networkflows/build/src/graph && $(CMAKE_COMMAND) -P CMakeFiles/Graph.dir/cmake_clean.cmake
.PHONY : src/graph/CMakeFiles/Graph.dir/clean

src/graph/CMakeFiles/Graph.dir/depend:
	cd /home/runner/networkflows/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/runner/networkflows /home/runner/networkflows/src/graph /home/runner/networkflows/build /home/runner/networkflows/build/src/graph /home/runner/networkflows/build/src/graph/CMakeFiles/Graph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/graph/CMakeFiles/Graph.dir/depend
