# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6

# Include any dependencies generated for this target.
include CMakeFiles/farao.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/farao.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/farao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/farao.dir/flags.make

CMakeFiles/farao.dir/farao.cpp.o: CMakeFiles/farao.dir/flags.make
CMakeFiles/farao.dir/farao.cpp.o: farao.cpp
CMakeFiles/farao.dir/farao.cpp.o: CMakeFiles/farao.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/farao.dir/farao.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/farao.dir/farao.cpp.o -MF CMakeFiles/farao.dir/farao.cpp.o.d -o CMakeFiles/farao.dir/farao.cpp.o -c /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6/farao.cpp

CMakeFiles/farao.dir/farao.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/farao.dir/farao.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6/farao.cpp > CMakeFiles/farao.dir/farao.cpp.i

CMakeFiles/farao.dir/farao.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/farao.dir/farao.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6/farao.cpp -o CMakeFiles/farao.dir/farao.cpp.s

# Object files for target farao
farao_OBJECTS = \
"CMakeFiles/farao.dir/farao.cpp.o"

# External object files for target farao
farao_EXTERNAL_OBJECTS =

farao: CMakeFiles/farao.dir/farao.cpp.o
farao: CMakeFiles/farao.dir/build.make
farao: CMakeFiles/farao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable farao"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/farao.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/farao.dir/build: farao
.PHONY : CMakeFiles/farao.dir/build

CMakeFiles/farao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/farao.dir/cmake_clean.cmake
.PHONY : CMakeFiles/farao.dir/clean

CMakeFiles/farao.dir/depend:
	cd /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6 /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6 /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6 /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6 /home/alunos/tei/2024/tei26610/hpc2/my-repo/aula6/CMakeFiles/farao.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/farao.dir/depend

