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
include CMakeFiles/e.cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/e.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/e.cpp.dir/flags.make

CMakeFiles/e.cpp.dir/e.cpp.o: CMakeFiles/e.cpp.dir/flags.make
CMakeFiles/e.cpp.dir/e.cpp.o: ../e.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/e.cpp.dir/e.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/e.cpp.dir/e.cpp.o -c /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/e.cpp

CMakeFiles/e.cpp.dir/e.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e.cpp.dir/e.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/e.cpp > CMakeFiles/e.cpp.dir/e.cpp.i

CMakeFiles/e.cpp.dir/e.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e.cpp.dir/e.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/e.cpp -o CMakeFiles/e.cpp.dir/e.cpp.s

# Object files for target e.cpp
e_cpp_OBJECTS = \
"CMakeFiles/e.cpp.dir/e.cpp.o"

# External object files for target e.cpp
e_cpp_EXTERNAL_OBJECTS =

e.cpp: CMakeFiles/e.cpp.dir/e.cpp.o
e.cpp: CMakeFiles/e.cpp.dir/build.make
e.cpp: CMakeFiles/e.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable e.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/e.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/e.cpp.dir/build: e.cpp
.PHONY : CMakeFiles/e.cpp.dir/build

CMakeFiles/e.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/e.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/e.cpp.dir/clean

CMakeFiles/e.cpp.dir/depend:
	cd /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug /Users/dariya/Documents/GitHub/ADS/w8/lab_8/acmp/cmake-build-debug/CMakeFiles/e.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/e.cpp.dir/depend
