# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/85/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/85/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ej5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ej5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ej5.dir/flags.make

CMakeFiles/Ej5.dir/main.c.o: CMakeFiles/Ej5.dir/flags.make
CMakeFiles/Ej5.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ej5.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Ej5.dir/main.c.o   -c "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/main.c"

CMakeFiles/Ej5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ej5.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/main.c" > CMakeFiles/Ej5.dir/main.c.i

CMakeFiles/Ej5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ej5.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/main.c" -o CMakeFiles/Ej5.dir/main.c.s

# Object files for target Ej5
Ej5_OBJECTS = \
"CMakeFiles/Ej5.dir/main.c.o"

# External object files for target Ej5
Ej5_EXTERNAL_OBJECTS =

Ej5: CMakeFiles/Ej5.dir/main.c.o
Ej5: CMakeFiles/Ej5.dir/build.make
Ej5: CMakeFiles/Ej5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Ej5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ej5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ej5.dir/build: Ej5

.PHONY : CMakeFiles/Ej5.dir/build

CMakeFiles/Ej5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ej5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ej5.dir/clean

CMakeFiles/Ej5.dir/depend:
	cd "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5" "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5" "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug" "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug" "/home/joaquin/UDC/Programación 1/Clion/CLionProjects/Ej5/cmake-build-debug/CMakeFiles/Ej5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ej5.dir/depend

