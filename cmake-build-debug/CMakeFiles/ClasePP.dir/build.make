# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /home/sebi/CLion-2024.1/clion-2024.1/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/sebi/CLion-2024.1/clion-2024.1/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sebi/CLionProjects/PP_CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebi/CLionProjects/PP_CPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ClasePP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ClasePP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ClasePP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ClasePP.dir/flags.make

CMakeFiles/ClasePP.dir/src/main.cpp.o: CMakeFiles/ClasePP.dir/flags.make
CMakeFiles/ClasePP.dir/src/main.cpp.o: /home/sebi/CLionProjects/PP_CPP/src/main.cpp
CMakeFiles/ClasePP.dir/src/main.cpp.o: CMakeFiles/ClasePP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sebi/CLionProjects/PP_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ClasePP.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ClasePP.dir/src/main.cpp.o -MF CMakeFiles/ClasePP.dir/src/main.cpp.o.d -o CMakeFiles/ClasePP.dir/src/main.cpp.o -c /home/sebi/CLionProjects/PP_CPP/src/main.cpp

CMakeFiles/ClasePP.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ClasePP.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebi/CLionProjects/PP_CPP/src/main.cpp > CMakeFiles/ClasePP.dir/src/main.cpp.i

CMakeFiles/ClasePP.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ClasePP.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebi/CLionProjects/PP_CPP/src/main.cpp -o CMakeFiles/ClasePP.dir/src/main.cpp.s

CMakeFiles/ClasePP.dir/src/intrare.cpp.o: CMakeFiles/ClasePP.dir/flags.make
CMakeFiles/ClasePP.dir/src/intrare.cpp.o: /home/sebi/CLionProjects/PP_CPP/src/intrare.cpp
CMakeFiles/ClasePP.dir/src/intrare.cpp.o: CMakeFiles/ClasePP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sebi/CLionProjects/PP_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ClasePP.dir/src/intrare.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ClasePP.dir/src/intrare.cpp.o -MF CMakeFiles/ClasePP.dir/src/intrare.cpp.o.d -o CMakeFiles/ClasePP.dir/src/intrare.cpp.o -c /home/sebi/CLionProjects/PP_CPP/src/intrare.cpp

CMakeFiles/ClasePP.dir/src/intrare.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ClasePP.dir/src/intrare.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebi/CLionProjects/PP_CPP/src/intrare.cpp > CMakeFiles/ClasePP.dir/src/intrare.cpp.i

CMakeFiles/ClasePP.dir/src/intrare.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ClasePP.dir/src/intrare.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebi/CLionProjects/PP_CPP/src/intrare.cpp -o CMakeFiles/ClasePP.dir/src/intrare.cpp.s

CMakeFiles/ClasePP.dir/src/user.cpp.o: CMakeFiles/ClasePP.dir/flags.make
CMakeFiles/ClasePP.dir/src/user.cpp.o: /home/sebi/CLionProjects/PP_CPP/src/user.cpp
CMakeFiles/ClasePP.dir/src/user.cpp.o: CMakeFiles/ClasePP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sebi/CLionProjects/PP_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ClasePP.dir/src/user.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ClasePP.dir/src/user.cpp.o -MF CMakeFiles/ClasePP.dir/src/user.cpp.o.d -o CMakeFiles/ClasePP.dir/src/user.cpp.o -c /home/sebi/CLionProjects/PP_CPP/src/user.cpp

CMakeFiles/ClasePP.dir/src/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ClasePP.dir/src/user.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebi/CLionProjects/PP_CPP/src/user.cpp > CMakeFiles/ClasePP.dir/src/user.cpp.i

CMakeFiles/ClasePP.dir/src/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ClasePP.dir/src/user.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebi/CLionProjects/PP_CPP/src/user.cpp -o CMakeFiles/ClasePP.dir/src/user.cpp.s

CMakeFiles/ClasePP.dir/src/util.cpp.o: CMakeFiles/ClasePP.dir/flags.make
CMakeFiles/ClasePP.dir/src/util.cpp.o: /home/sebi/CLionProjects/PP_CPP/src/util.cpp
CMakeFiles/ClasePP.dir/src/util.cpp.o: CMakeFiles/ClasePP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/sebi/CLionProjects/PP_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ClasePP.dir/src/util.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ClasePP.dir/src/util.cpp.o -MF CMakeFiles/ClasePP.dir/src/util.cpp.o.d -o CMakeFiles/ClasePP.dir/src/util.cpp.o -c /home/sebi/CLionProjects/PP_CPP/src/util.cpp

CMakeFiles/ClasePP.dir/src/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ClasePP.dir/src/util.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebi/CLionProjects/PP_CPP/src/util.cpp > CMakeFiles/ClasePP.dir/src/util.cpp.i

CMakeFiles/ClasePP.dir/src/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ClasePP.dir/src/util.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebi/CLionProjects/PP_CPP/src/util.cpp -o CMakeFiles/ClasePP.dir/src/util.cpp.s

# Object files for target ClasePP
ClasePP_OBJECTS = \
"CMakeFiles/ClasePP.dir/src/main.cpp.o" \
"CMakeFiles/ClasePP.dir/src/intrare.cpp.o" \
"CMakeFiles/ClasePP.dir/src/user.cpp.o" \
"CMakeFiles/ClasePP.dir/src/util.cpp.o"

# External object files for target ClasePP
ClasePP_EXTERNAL_OBJECTS =

ClasePP: CMakeFiles/ClasePP.dir/src/main.cpp.o
ClasePP: CMakeFiles/ClasePP.dir/src/intrare.cpp.o
ClasePP: CMakeFiles/ClasePP.dir/src/user.cpp.o
ClasePP: CMakeFiles/ClasePP.dir/src/util.cpp.o
ClasePP: CMakeFiles/ClasePP.dir/build.make
ClasePP: CMakeFiles/ClasePP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/sebi/CLionProjects/PP_CPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ClasePP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ClasePP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ClasePP.dir/build: ClasePP
.PHONY : CMakeFiles/ClasePP.dir/build

CMakeFiles/ClasePP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ClasePP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ClasePP.dir/clean

CMakeFiles/ClasePP.dir/depend:
	cd /home/sebi/CLionProjects/PP_CPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebi/CLionProjects/PP_CPP /home/sebi/CLionProjects/PP_CPP /home/sebi/CLionProjects/PP_CPP/cmake-build-debug /home/sebi/CLionProjects/PP_CPP/cmake-build-debug /home/sebi/CLionProjects/PP_CPP/cmake-build-debug/CMakeFiles/ClasePP.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ClasePP.dir/depend

