# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /snap/clion/73/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/73/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Hechizos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Hechizos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Hechizos.dir/flags.make

CMakeFiles/Hechizos.dir/main.cpp.o: CMakeFiles/Hechizos.dir/flags.make
CMakeFiles/Hechizos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Hechizos.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hechizos.dir/main.cpp.o -c "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/main.cpp"

CMakeFiles/Hechizos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hechizos.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/main.cpp" > CMakeFiles/Hechizos.dir/main.cpp.i

CMakeFiles/Hechizos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hechizos.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/main.cpp" -o CMakeFiles/Hechizos.dir/main.cpp.s

CMakeFiles/Hechizos.dir/Hechizos.cpp.o: CMakeFiles/Hechizos.dir/flags.make
CMakeFiles/Hechizos.dir/Hechizos.cpp.o: ../Hechizos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Hechizos.dir/Hechizos.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Hechizos.dir/Hechizos.cpp.o -c "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/Hechizos.cpp"

CMakeFiles/Hechizos.dir/Hechizos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Hechizos.dir/Hechizos.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/Hechizos.cpp" > CMakeFiles/Hechizos.dir/Hechizos.cpp.i

CMakeFiles/Hechizos.dir/Hechizos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Hechizos.dir/Hechizos.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/Hechizos.cpp" -o CMakeFiles/Hechizos.dir/Hechizos.cpp.s

# Object files for target Hechizos
Hechizos_OBJECTS = \
"CMakeFiles/Hechizos.dir/main.cpp.o" \
"CMakeFiles/Hechizos.dir/Hechizos.cpp.o"

# External object files for target Hechizos
Hechizos_EXTERNAL_OBJECTS =

Hechizos: CMakeFiles/Hechizos.dir/main.cpp.o
Hechizos: CMakeFiles/Hechizos.dir/Hechizos.cpp.o
Hechizos: CMakeFiles/Hechizos.dir/build.make
Hechizos: CMakeFiles/Hechizos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Hechizos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Hechizos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Hechizos.dir/build: Hechizos

.PHONY : CMakeFiles/Hechizos.dir/build

CMakeFiles/Hechizos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Hechizos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Hechizos.dir/clean

CMakeFiles/Hechizos.dir/depend:
	cd "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos" "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos" "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug" "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug" "/home/ariana/UTEC/POO 2/CLASES/Proyecto/Hechizos/cmake-build-debug/CMakeFiles/Hechizos.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Hechizos.dir/depend

