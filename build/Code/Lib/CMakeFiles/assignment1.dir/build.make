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
CMAKE_SOURCE_DIR = /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build

# Include any dependencies generated for this target.
include Code/Lib/CMakeFiles/assignment1.dir/depend.make

# Include the progress variables for this target.
include Code/Lib/CMakeFiles/assignment1.dir/progress.make

# Include the compile flags for this target's objects.
include Code/Lib/CMakeFiles/assignment1.dir/flags.make

Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o: Code/Lib/CMakeFiles/assignment1.dir/flags.make
Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o: ../Code/Lib/lrgBasicTypes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o -c /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgBasicTypes.cpp

Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.i"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgBasicTypes.cpp > CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.i

Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.s"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgBasicTypes.cpp -o CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.s

Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.requires:

.PHONY : Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.requires

Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.provides: Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.requires
	$(MAKE) -f Code/Lib/CMakeFiles/assignment1.dir/build.make Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.provides.build
.PHONY : Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.provides

Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.provides.build: Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o


Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o: Code/Lib/CMakeFiles/assignment1.dir/flags.make
Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o: ../Code/Lib/lrgMyFunctions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o -c /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgMyFunctions.cpp

Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.i"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgMyFunctions.cpp > CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.i

Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.s"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgMyFunctions.cpp -o CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.s

Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.requires:

.PHONY : Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.requires

Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.provides: Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.requires
	$(MAKE) -f Code/Lib/CMakeFiles/assignment1.dir/build.make Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.provides.build
.PHONY : Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.provides

Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.provides.build: Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o


Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o: Code/Lib/CMakeFiles/assignment1.dir/flags.make
Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o: ../Code/Lib/lrgException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assignment1.dir/lrgException.cpp.o -c /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgException.cpp

Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment1.dir/lrgException.cpp.i"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgException.cpp > CMakeFiles/assignment1.dir/lrgException.cpp.i

Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment1.dir/lrgException.cpp.s"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib/lrgException.cpp -o CMakeFiles/assignment1.dir/lrgException.cpp.s

Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.requires:

.PHONY : Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.requires

Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.provides: Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.requires
	$(MAKE) -f Code/Lib/CMakeFiles/assignment1.dir/build.make Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.provides.build
.PHONY : Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.provides

Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.provides.build: Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o


# Object files for target assignment1
assignment1_OBJECTS = \
"CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o" \
"CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o" \
"CMakeFiles/assignment1.dir/lrgException.cpp.o"

# External object files for target assignment1
assignment1_EXTERNAL_OBJECTS =

bin/libassignment1.a: Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o
bin/libassignment1.a: Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o
bin/libassignment1.a: Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o
bin/libassignment1.a: Code/Lib/CMakeFiles/assignment1.dir/build.make
bin/libassignment1.a: Code/Lib/CMakeFiles/assignment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../bin/libassignment1.a"
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && $(CMAKE_COMMAND) -P CMakeFiles/assignment1.dir/cmake_clean_target.cmake
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Code/Lib/CMakeFiles/assignment1.dir/build: bin/libassignment1.a

.PHONY : Code/Lib/CMakeFiles/assignment1.dir/build

Code/Lib/CMakeFiles/assignment1.dir/requires: Code/Lib/CMakeFiles/assignment1.dir/lrgBasicTypes.cpp.o.requires
Code/Lib/CMakeFiles/assignment1.dir/requires: Code/Lib/CMakeFiles/assignment1.dir/lrgMyFunctions.cpp.o.requires
Code/Lib/CMakeFiles/assignment1.dir/requires: Code/Lib/CMakeFiles/assignment1.dir/lrgException.cpp.o.requires

.PHONY : Code/Lib/CMakeFiles/assignment1.dir/requires

Code/Lib/CMakeFiles/assignment1.dir/clean:
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib && $(CMAKE_COMMAND) -P CMakeFiles/assignment1.dir/cmake_clean.cmake
.PHONY : Code/Lib/CMakeFiles/assignment1.dir/clean

Code/Lib/CMakeFiles/assignment1.dir/depend:
	cd /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1 /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/Code/Lib /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib /home/seanbray/UCL/C++/PHAS0100Assignment1/Assignment1/build/Code/Lib/CMakeFiles/assignment1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Code/Lib/CMakeFiles/assignment1.dir/depend

