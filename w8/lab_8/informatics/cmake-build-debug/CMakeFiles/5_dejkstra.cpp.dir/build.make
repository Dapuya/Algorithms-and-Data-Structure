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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/5_dejkstra.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/5_dejkstra.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5_dejkstra.cpp.dir/flags.make

CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.o: CMakeFiles/5_dejkstra.cpp.dir/flags.make
CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.o: ../5_dejkstra.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.o -c /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/5_dejkstra.cpp

CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/5_dejkstra.cpp > CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.i

CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/5_dejkstra.cpp -o CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.s

# Object files for target 5_dejkstra.cpp
5_dejkstra_cpp_OBJECTS = \
"CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.o"

# External object files for target 5_dejkstra.cpp
5_dejkstra_cpp_EXTERNAL_OBJECTS =

5_dejkstra.cpp: CMakeFiles/5_dejkstra.cpp.dir/5_dejkstra.cpp.o
5_dejkstra.cpp: CMakeFiles/5_dejkstra.cpp.dir/build.make
5_dejkstra.cpp: CMakeFiles/5_dejkstra.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5_dejkstra.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/5_dejkstra.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5_dejkstra.cpp.dir/build: 5_dejkstra.cpp
.PHONY : CMakeFiles/5_dejkstra.cpp.dir/build

CMakeFiles/5_dejkstra.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/5_dejkstra.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/5_dejkstra.cpp.dir/clean

CMakeFiles/5_dejkstra.cpp.dir/depend:
	cd /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/informatics/cmake-build-debug/CMakeFiles/5_dejkstra.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/5_dejkstra.cpp.dir/depend

