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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/smsh1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/smsh1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/smsh1.dir/flags.make

CMakeFiles/smsh1.dir/smsh1.c.o: CMakeFiles/smsh1.dir/flags.make
CMakeFiles/smsh1.dir/smsh1.c.o: ../smsh1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/smsh1.dir/smsh1.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/smsh1.dir/smsh1.c.o   -c /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/smsh1.c

CMakeFiles/smsh1.dir/smsh1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/smsh1.dir/smsh1.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/smsh1.c > CMakeFiles/smsh1.dir/smsh1.c.i

CMakeFiles/smsh1.dir/smsh1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/smsh1.dir/smsh1.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/smsh1.c -o CMakeFiles/smsh1.dir/smsh1.c.s

CMakeFiles/smsh1.dir/smsh1.c.o.requires:

.PHONY : CMakeFiles/smsh1.dir/smsh1.c.o.requires

CMakeFiles/smsh1.dir/smsh1.c.o.provides: CMakeFiles/smsh1.dir/smsh1.c.o.requires
	$(MAKE) -f CMakeFiles/smsh1.dir/build.make CMakeFiles/smsh1.dir/smsh1.c.o.provides.build
.PHONY : CMakeFiles/smsh1.dir/smsh1.c.o.provides

CMakeFiles/smsh1.dir/smsh1.c.o.provides.build: CMakeFiles/smsh1.dir/smsh1.c.o


CMakeFiles/smsh1.dir/splitline.c.o: CMakeFiles/smsh1.dir/flags.make
CMakeFiles/smsh1.dir/splitline.c.o: ../splitline.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/smsh1.dir/splitline.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/smsh1.dir/splitline.c.o   -c /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/splitline.c

CMakeFiles/smsh1.dir/splitline.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/smsh1.dir/splitline.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/splitline.c > CMakeFiles/smsh1.dir/splitline.c.i

CMakeFiles/smsh1.dir/splitline.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/smsh1.dir/splitline.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/splitline.c -o CMakeFiles/smsh1.dir/splitline.c.s

CMakeFiles/smsh1.dir/splitline.c.o.requires:

.PHONY : CMakeFiles/smsh1.dir/splitline.c.o.requires

CMakeFiles/smsh1.dir/splitline.c.o.provides: CMakeFiles/smsh1.dir/splitline.c.o.requires
	$(MAKE) -f CMakeFiles/smsh1.dir/build.make CMakeFiles/smsh1.dir/splitline.c.o.provides.build
.PHONY : CMakeFiles/smsh1.dir/splitline.c.o.provides

CMakeFiles/smsh1.dir/splitline.c.o.provides.build: CMakeFiles/smsh1.dir/splitline.c.o


CMakeFiles/smsh1.dir/execute.c.o: CMakeFiles/smsh1.dir/flags.make
CMakeFiles/smsh1.dir/execute.c.o: ../execute.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/smsh1.dir/execute.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/smsh1.dir/execute.c.o   -c /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/execute.c

CMakeFiles/smsh1.dir/execute.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/smsh1.dir/execute.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/execute.c > CMakeFiles/smsh1.dir/execute.c.i

CMakeFiles/smsh1.dir/execute.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/smsh1.dir/execute.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/execute.c -o CMakeFiles/smsh1.dir/execute.c.s

CMakeFiles/smsh1.dir/execute.c.o.requires:

.PHONY : CMakeFiles/smsh1.dir/execute.c.o.requires

CMakeFiles/smsh1.dir/execute.c.o.provides: CMakeFiles/smsh1.dir/execute.c.o.requires
	$(MAKE) -f CMakeFiles/smsh1.dir/build.make CMakeFiles/smsh1.dir/execute.c.o.provides.build
.PHONY : CMakeFiles/smsh1.dir/execute.c.o.provides

CMakeFiles/smsh1.dir/execute.c.o.provides.build: CMakeFiles/smsh1.dir/execute.c.o


# Object files for target smsh1
smsh1_OBJECTS = \
"CMakeFiles/smsh1.dir/smsh1.c.o" \
"CMakeFiles/smsh1.dir/splitline.c.o" \
"CMakeFiles/smsh1.dir/execute.c.o"

# External object files for target smsh1
smsh1_EXTERNAL_OBJECTS =

smsh1: CMakeFiles/smsh1.dir/smsh1.c.o
smsh1: CMakeFiles/smsh1.dir/splitline.c.o
smsh1: CMakeFiles/smsh1.dir/execute.c.o
smsh1: CMakeFiles/smsh1.dir/build.make
smsh1: CMakeFiles/smsh1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable smsh1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/smsh1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/smsh1.dir/build: smsh1

.PHONY : CMakeFiles/smsh1.dir/build

CMakeFiles/smsh1.dir/requires: CMakeFiles/smsh1.dir/smsh1.c.o.requires
CMakeFiles/smsh1.dir/requires: CMakeFiles/smsh1.dir/splitline.c.o.requires
CMakeFiles/smsh1.dir/requires: CMakeFiles/smsh1.dir/execute.c.o.requires

.PHONY : CMakeFiles/smsh1.dir/requires

CMakeFiles/smsh1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/smsh1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/smsh1.dir/clean

CMakeFiles/smsh1.dir/depend:
	cd /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug /Users/zazu/Documents/homework/cs648/final/smsh_from_benjamin/cmake-build-debug/CMakeFiles/smsh1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/smsh1.dir/depend

