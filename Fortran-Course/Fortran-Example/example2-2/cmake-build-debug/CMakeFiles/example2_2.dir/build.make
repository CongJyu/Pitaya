# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/example2_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/example2_2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/example2_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example2_2.dir/flags.make

CMakeFiles/example2_2.dir/main.f90.o: CMakeFiles/example2_2.dir/flags.make
CMakeFiles/example2_2.dir/main.f90.o: /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/main.f90
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building Fortran object CMakeFiles/example2_2.dir/main.f90.o"
	/opt/homebrew/bin/gfortran $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -c /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/main.f90 -o CMakeFiles/example2_2.dir/main.f90.o

CMakeFiles/example2_2.dir/main.f90.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing Fortran source to CMakeFiles/example2_2.dir/main.f90.i"
	/opt/homebrew/bin/gfortran $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -E /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/main.f90 > CMakeFiles/example2_2.dir/main.f90.i

CMakeFiles/example2_2.dir/main.f90.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling Fortran source to assembly CMakeFiles/example2_2.dir/main.f90.s"
	/opt/homebrew/bin/gfortran $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -S /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/main.f90 -o CMakeFiles/example2_2.dir/main.f90.s

# Object files for target example2_2
example2_2_OBJECTS = \
"CMakeFiles/example2_2.dir/main.f90.o"

# External object files for target example2_2
example2_2_EXTERNAL_OBJECTS =

example2_2: CMakeFiles/example2_2.dir/main.f90.o
example2_2: CMakeFiles/example2_2.dir/build.make
example2_2: CMakeFiles/example2_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking Fortran executable example2_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example2_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example2_2.dir/build: example2_2
.PHONY : CMakeFiles/example2_2.dir/build

CMakeFiles/example2_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example2_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example2_2.dir/clean

CMakeFiles/example2_2.dir/depend:
	cd /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2 /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2 /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug /Users/rainchen/CodingArea/Pitaya/Fortran-Course/Fortran-Example/example2-2/cmake-build-debug/CMakeFiles/example2_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example2_2.dir/depend

