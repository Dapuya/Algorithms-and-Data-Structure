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
CMAKE_SOURCE_DIR = /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snake3.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/snake3.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snake3.cpp.dir/flags.make

CMakeFiles/snake3.cpp.dir/snake3.cpp.o: CMakeFiles/snake3.cpp.dir/flags.make
CMakeFiles/snake3.cpp.dir/snake3.cpp.o: ../snake3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snake3.cpp.dir/snake3.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snake3.cpp.dir/snake3.cpp.o -c /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/snake3.cpp

CMakeFiles/snake3.cpp.dir/snake3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake3.cpp.dir/snake3.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/snake3.cpp > CMakeFiles/snake3.cpp.dir/snake3.cpp.i

CMakeFiles/snake3.cpp.dir/snake3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake3.cpp.dir/snake3.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/snake3.cpp -o CMakeFiles/snake3.cpp.dir/snake3.cpp.s

# Object files for target snake3.cpp
snake3_cpp_OBJECTS = \
"CMakeFiles/snake3.cpp.dir/snake3.cpp.o"

# External object files for target snake3.cpp
snake3_cpp_EXTERNAL_OBJECTS =

snake3.cpp: CMakeFiles/snake3.cpp.dir/snake3.cpp.o
snake3.cpp: CMakeFiles/snake3.cpp.dir/build.make
snake3.cpp: CMakeFiles/snake3.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snake3.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snake3.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snake3.cpp.dir/build: snake3.cpp
.PHONY : CMakeFiles/snake3.cpp.dir/build

CMakeFiles/snake3.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snake3.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snake3.cpp.dir/clean

CMakeFiles/snake3.cpp.dir/depend:
	cd /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles/snake3.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snake3.cpp.dir/depend

