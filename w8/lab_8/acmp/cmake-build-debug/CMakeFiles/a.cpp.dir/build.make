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
include CMakeFiles/a.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/a.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a.cpp.dir/flags.make

CMakeFiles/a.cpp.dir/a.cpp.o: CMakeFiles/a.cpp.dir/flags.make
CMakeFiles/a.cpp.dir/a.cpp.o: ../a.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a.cpp.dir/a.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a.cpp.dir/a.cpp.o -c /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/a.cpp

CMakeFiles/a.cpp.dir/a.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a.cpp.dir/a.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/a.cpp > CMakeFiles/a.cpp.dir/a.cpp.i

CMakeFiles/a.cpp.dir/a.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a.cpp.dir/a.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/a.cpp -o CMakeFiles/a.cpp.dir/a.cpp.s

# Object files for target a.cpp
a_cpp_OBJECTS = \
"CMakeFiles/a.cpp.dir/a.cpp.o"

# External object files for target a.cpp
a_cpp_EXTERNAL_OBJECTS =

a.cpp: CMakeFiles/a.cpp.dir/a.cpp.o
a.cpp: CMakeFiles/a.cpp.dir/build.make
a.cpp: CMakeFiles/a.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a.cpp.dir/build: a.cpp
.PHONY : CMakeFiles/a.cpp.dir/build

CMakeFiles/a.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a.cpp.dir/clean

CMakeFiles/a.cpp.dir/depend:
	cd /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles/a.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a.cpp.dir/depend

