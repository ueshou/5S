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
CMAKE_SOURCE_DIR = /home/shota/5S/cognitive

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shota/5S/cognitive

# Include any dependencies generated for this target.
include CMakeFiles/file.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/file.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/file.dir/flags.make

CMakeFiles/file.dir/dp.cpp.o: CMakeFiles/file.dir/flags.make
CMakeFiles/file.dir/dp.cpp.o: dp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shota/5S/cognitive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/file.dir/dp.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/file.dir/dp.cpp.o -c /home/shota/5S/cognitive/dp.cpp

CMakeFiles/file.dir/dp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/file.dir/dp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shota/5S/cognitive/dp.cpp > CMakeFiles/file.dir/dp.cpp.i

CMakeFiles/file.dir/dp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/file.dir/dp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shota/5S/cognitive/dp.cpp -o CMakeFiles/file.dir/dp.cpp.s

CMakeFiles/file.dir/dp.cpp.o.requires:

.PHONY : CMakeFiles/file.dir/dp.cpp.o.requires

CMakeFiles/file.dir/dp.cpp.o.provides: CMakeFiles/file.dir/dp.cpp.o.requires
	$(MAKE) -f CMakeFiles/file.dir/build.make CMakeFiles/file.dir/dp.cpp.o.provides.build
.PHONY : CMakeFiles/file.dir/dp.cpp.o.provides

CMakeFiles/file.dir/dp.cpp.o.provides.build: CMakeFiles/file.dir/dp.cpp.o


# Object files for target file
file_OBJECTS = \
"CMakeFiles/file.dir/dp.cpp.o"

# External object files for target file
file_EXTERNAL_OBJECTS =

file: CMakeFiles/file.dir/dp.cpp.o
file: CMakeFiles/file.dir/build.make
file: CMakeFiles/file.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shota/5S/cognitive/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable file"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/file.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/file.dir/build: file

.PHONY : CMakeFiles/file.dir/build

CMakeFiles/file.dir/requires: CMakeFiles/file.dir/dp.cpp.o.requires

.PHONY : CMakeFiles/file.dir/requires

CMakeFiles/file.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/file.dir/cmake_clean.cmake
.PHONY : CMakeFiles/file.dir/clean

CMakeFiles/file.dir/depend:
	cd /home/shota/5S/cognitive && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shota/5S/cognitive /home/shota/5S/cognitive /home/shota/5S/cognitive /home/shota/5S/cognitive /home/shota/5S/cognitive/CMakeFiles/file.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/file.dir/depend

