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
CMAKE_SOURCE_DIR = /home/huigang39/workspace/auto_change_wallpaper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/huigang39/workspace/auto_change_wallpaper/build

# Include any dependencies generated for this target.
include CMakeFiles/auto_change_wallpaper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/auto_change_wallpaper.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/auto_change_wallpaper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/auto_change_wallpaper.dir/flags.make

CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o: CMakeFiles/auto_change_wallpaper.dir/flags.make
CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o: CMakeFiles/auto_change_wallpaper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/huigang39/workspace/auto_change_wallpaper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o -MF CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o.d -o CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o -c /home/huigang39/workspace/auto_change_wallpaper/src/main.cpp

CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/huigang39/workspace/auto_change_wallpaper/src/main.cpp > CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.i

CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/huigang39/workspace/auto_change_wallpaper/src/main.cpp -o CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.s

# Object files for target auto_change_wallpaper
auto_change_wallpaper_OBJECTS = \
"CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o"

# External object files for target auto_change_wallpaper
auto_change_wallpaper_EXTERNAL_OBJECTS =

auto_change_wallpaper: CMakeFiles/auto_change_wallpaper.dir/src/main.cpp.o
auto_change_wallpaper: CMakeFiles/auto_change_wallpaper.dir/build.make
auto_change_wallpaper: /usr/local/lib/libgflags.a
auto_change_wallpaper: /usr/lib/x86_64-linux-gnu/libcurl.so
auto_change_wallpaper: CMakeFiles/auto_change_wallpaper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/huigang39/workspace/auto_change_wallpaper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable auto_change_wallpaper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/auto_change_wallpaper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/auto_change_wallpaper.dir/build: auto_change_wallpaper
.PHONY : CMakeFiles/auto_change_wallpaper.dir/build

CMakeFiles/auto_change_wallpaper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/auto_change_wallpaper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/auto_change_wallpaper.dir/clean

CMakeFiles/auto_change_wallpaper.dir/depend:
	cd /home/huigang39/workspace/auto_change_wallpaper/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/huigang39/workspace/auto_change_wallpaper /home/huigang39/workspace/auto_change_wallpaper /home/huigang39/workspace/auto_change_wallpaper/build /home/huigang39/workspace/auto_change_wallpaper/build /home/huigang39/workspace/auto_change_wallpaper/build/CMakeFiles/auto_change_wallpaper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/auto_change_wallpaper.dir/depend
