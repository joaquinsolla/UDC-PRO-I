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
CMAKE_COMMAND = "/cygdrive/c/Users/Joaquin Windows/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/Joaquin Windows/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ej3_18.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ej3_18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ej3_18.dir/flags.make

CMakeFiles/Ej3_18.dir/main.c.o: CMakeFiles/Ej3_18.dir/flags.make
CMakeFiles/Ej3_18.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ej3_18.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Ej3_18.dir/main.c.o   -c "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/main.c"

CMakeFiles/Ej3_18.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ej3_18.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/main.c" > CMakeFiles/Ej3_18.dir/main.c.i

CMakeFiles/Ej3_18.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ej3_18.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/main.c" -o CMakeFiles/Ej3_18.dir/main.c.s

# Object files for target Ej3_18
Ej3_18_OBJECTS = \
"CMakeFiles/Ej3_18.dir/main.c.o"

# External object files for target Ej3_18
Ej3_18_EXTERNAL_OBJECTS =

Ej3_18.exe: CMakeFiles/Ej3_18.dir/main.c.o
Ej3_18.exe: CMakeFiles/Ej3_18.dir/build.make
Ej3_18.exe: CMakeFiles/Ej3_18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Ej3_18.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ej3_18.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ej3_18.dir/build: Ej3_18.exe

.PHONY : CMakeFiles/Ej3_18.dir/build

CMakeFiles/Ej3_18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ej3_18.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ej3_18.dir/clean

CMakeFiles/Ej3_18.dir/depend:
	cd "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18" "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18" "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug" "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug" "/cygdrive/c/Users/Joaquin Windows/Desktop/UDC/Programacion 1/Clion/CLionProjects/Ej3.18/cmake-build-debug/CMakeFiles/Ej3_18.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ej3_18.dir/depend

