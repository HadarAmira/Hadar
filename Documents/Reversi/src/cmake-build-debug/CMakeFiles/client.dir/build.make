# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/hadar/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/hadar/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hadar/Documents/Reversi/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hadar/Documents/Reversi/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/client.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client.dir/flags.make

CMakeFiles/client.dir/client/AIPlayer.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/AIPlayer.cpp.o: ../client/AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/client.dir/client/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/AIPlayer.cpp.o -c /home/hadar/Documents/Reversi/src/client/AIPlayer.cpp

CMakeFiles/client.dir/client/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/AIPlayer.cpp > CMakeFiles/client.dir/client/AIPlayer.cpp.i

CMakeFiles/client.dir/client/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/AIPlayer.cpp -o CMakeFiles/client.dir/client/AIPlayer.cpp.s

CMakeFiles/client.dir/client/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/AIPlayer.cpp.o.requires

CMakeFiles/client.dir/client/AIPlayer.cpp.o.provides: CMakeFiles/client.dir/client/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/AIPlayer.cpp.o.provides

CMakeFiles/client.dir/client/AIPlayer.cpp.o.provides.build: CMakeFiles/client.dir/client/AIPlayer.cpp.o


CMakeFiles/client.dir/client/Board.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/Board.cpp.o: ../client/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/client.dir/client/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/Board.cpp.o -c /home/hadar/Documents/Reversi/src/client/Board.cpp

CMakeFiles/client.dir/client/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Board.cpp > CMakeFiles/client.dir/client/Board.cpp.i

CMakeFiles/client.dir/client/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Board.cpp -o CMakeFiles/client.dir/client/Board.cpp.s

CMakeFiles/client.dir/client/Board.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/Board.cpp.o.requires

CMakeFiles/client.dir/client/Board.cpp.o.provides: CMakeFiles/client.dir/client/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/Board.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/Board.cpp.o.provides

CMakeFiles/client.dir/client/Board.cpp.o.provides.build: CMakeFiles/client.dir/client/Board.cpp.o


CMakeFiles/client.dir/client/Client.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/Client.cpp.o: ../client/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/client.dir/client/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/Client.cpp.o -c /home/hadar/Documents/Reversi/src/client/Client.cpp

CMakeFiles/client.dir/client/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Client.cpp > CMakeFiles/client.dir/client/Client.cpp.i

CMakeFiles/client.dir/client/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Client.cpp -o CMakeFiles/client.dir/client/Client.cpp.s

CMakeFiles/client.dir/client/Client.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/Client.cpp.o.requires

CMakeFiles/client.dir/client/Client.cpp.o.provides: CMakeFiles/client.dir/client/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/Client.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/Client.cpp.o.provides

CMakeFiles/client.dir/client/Client.cpp.o.provides.build: CMakeFiles/client.dir/client/Client.cpp.o


CMakeFiles/client.dir/client/ClientPlayer.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/ClientPlayer.cpp.o: ../client/ClientPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/client.dir/client/ClientPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/ClientPlayer.cpp.o -c /home/hadar/Documents/Reversi/src/client/ClientPlayer.cpp

CMakeFiles/client.dir/client/ClientPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/ClientPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/ClientPlayer.cpp > CMakeFiles/client.dir/client/ClientPlayer.cpp.i

CMakeFiles/client.dir/client/ClientPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/ClientPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/ClientPlayer.cpp -o CMakeFiles/client.dir/client/ClientPlayer.cpp.s

CMakeFiles/client.dir/client/ClientPlayer.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/ClientPlayer.cpp.o.requires

CMakeFiles/client.dir/client/ClientPlayer.cpp.o.provides: CMakeFiles/client.dir/client/ClientPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/ClientPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/ClientPlayer.cpp.o.provides

CMakeFiles/client.dir/client/ClientPlayer.cpp.o.provides.build: CMakeFiles/client.dir/client/ClientPlayer.cpp.o


CMakeFiles/client.dir/client/Console.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/Console.cpp.o: ../client/Console.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/client.dir/client/Console.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/Console.cpp.o -c /home/hadar/Documents/Reversi/src/client/Console.cpp

CMakeFiles/client.dir/client/Console.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/Console.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Console.cpp > CMakeFiles/client.dir/client/Console.cpp.i

CMakeFiles/client.dir/client/Console.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/Console.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Console.cpp -o CMakeFiles/client.dir/client/Console.cpp.s

CMakeFiles/client.dir/client/Console.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/Console.cpp.o.requires

CMakeFiles/client.dir/client/Console.cpp.o.provides: CMakeFiles/client.dir/client/Console.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/Console.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/Console.cpp.o.provides

CMakeFiles/client.dir/client/Console.cpp.o.provides.build: CMakeFiles/client.dir/client/Console.cpp.o


CMakeFiles/client.dir/client/FlipRule.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/FlipRule.cpp.o: ../client/FlipRule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/client.dir/client/FlipRule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/FlipRule.cpp.o -c /home/hadar/Documents/Reversi/src/client/FlipRule.cpp

CMakeFiles/client.dir/client/FlipRule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/FlipRule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/FlipRule.cpp > CMakeFiles/client.dir/client/FlipRule.cpp.i

CMakeFiles/client.dir/client/FlipRule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/FlipRule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/FlipRule.cpp -o CMakeFiles/client.dir/client/FlipRule.cpp.s

CMakeFiles/client.dir/client/FlipRule.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/FlipRule.cpp.o.requires

CMakeFiles/client.dir/client/FlipRule.cpp.o.provides: CMakeFiles/client.dir/client/FlipRule.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/FlipRule.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/FlipRule.cpp.o.provides

CMakeFiles/client.dir/client/FlipRule.cpp.o.provides.build: CMakeFiles/client.dir/client/FlipRule.cpp.o


CMakeFiles/client.dir/client/Game.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/Game.cpp.o: ../client/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/client.dir/client/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/Game.cpp.o -c /home/hadar/Documents/Reversi/src/client/Game.cpp

CMakeFiles/client.dir/client/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Game.cpp > CMakeFiles/client.dir/client/Game.cpp.i

CMakeFiles/client.dir/client/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Game.cpp -o CMakeFiles/client.dir/client/Game.cpp.s

CMakeFiles/client.dir/client/Game.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/Game.cpp.o.requires

CMakeFiles/client.dir/client/Game.cpp.o.provides: CMakeFiles/client.dir/client/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/Game.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/Game.cpp.o.provides

CMakeFiles/client.dir/client/Game.cpp.o.provides.build: CMakeFiles/client.dir/client/Game.cpp.o


CMakeFiles/client.dir/client/main.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/main.cpp.o: ../client/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/client.dir/client/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/main.cpp.o -c /home/hadar/Documents/Reversi/src/client/main.cpp

CMakeFiles/client.dir/client/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/main.cpp > CMakeFiles/client.dir/client/main.cpp.i

CMakeFiles/client.dir/client/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/main.cpp -o CMakeFiles/client.dir/client/main.cpp.s

CMakeFiles/client.dir/client/main.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/main.cpp.o.requires

CMakeFiles/client.dir/client/main.cpp.o.provides: CMakeFiles/client.dir/client/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/main.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/main.cpp.o.provides

CMakeFiles/client.dir/client/main.cpp.o.provides.build: CMakeFiles/client.dir/client/main.cpp.o


CMakeFiles/client.dir/client/PcPlayer.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/PcPlayer.cpp.o: ../client/PcPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/client.dir/client/PcPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/PcPlayer.cpp.o -c /home/hadar/Documents/Reversi/src/client/PcPlayer.cpp

CMakeFiles/client.dir/client/PcPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/PcPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/PcPlayer.cpp > CMakeFiles/client.dir/client/PcPlayer.cpp.i

CMakeFiles/client.dir/client/PcPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/PcPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/PcPlayer.cpp -o CMakeFiles/client.dir/client/PcPlayer.cpp.s

CMakeFiles/client.dir/client/PcPlayer.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/PcPlayer.cpp.o.requires

CMakeFiles/client.dir/client/PcPlayer.cpp.o.provides: CMakeFiles/client.dir/client/PcPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/PcPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/PcPlayer.cpp.o.provides

CMakeFiles/client.dir/client/PcPlayer.cpp.o.provides.build: CMakeFiles/client.dir/client/PcPlayer.cpp.o


CMakeFiles/client.dir/client/Point.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/Point.cpp.o: ../client/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/client.dir/client/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client.dir/client/Point.cpp.o -c /home/hadar/Documents/Reversi/src/client/Point.cpp

CMakeFiles/client.dir/client/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Point.cpp > CMakeFiles/client.dir/client/Point.cpp.i

CMakeFiles/client.dir/client/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Point.cpp -o CMakeFiles/client.dir/client/Point.cpp.s

CMakeFiles/client.dir/client/Point.cpp.o.requires:

.PHONY : CMakeFiles/client.dir/client/Point.cpp.o.requires

CMakeFiles/client.dir/client/Point.cpp.o.provides: CMakeFiles/client.dir/client/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/client.dir/build.make CMakeFiles/client.dir/client/Point.cpp.o.provides.build
.PHONY : CMakeFiles/client.dir/client/Point.cpp.o.provides

CMakeFiles/client.dir/client/Point.cpp.o.provides.build: CMakeFiles/client.dir/client/Point.cpp.o


# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/client/AIPlayer.cpp.o" \
"CMakeFiles/client.dir/client/Board.cpp.o" \
"CMakeFiles/client.dir/client/Client.cpp.o" \
"CMakeFiles/client.dir/client/ClientPlayer.cpp.o" \
"CMakeFiles/client.dir/client/Console.cpp.o" \
"CMakeFiles/client.dir/client/FlipRule.cpp.o" \
"CMakeFiles/client.dir/client/Game.cpp.o" \
"CMakeFiles/client.dir/client/main.cpp.o" \
"CMakeFiles/client.dir/client/PcPlayer.cpp.o" \
"CMakeFiles/client.dir/client/Point.cpp.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

client: CMakeFiles/client.dir/client/AIPlayer.cpp.o
client: CMakeFiles/client.dir/client/Board.cpp.o
client: CMakeFiles/client.dir/client/Client.cpp.o
client: CMakeFiles/client.dir/client/ClientPlayer.cpp.o
client: CMakeFiles/client.dir/client/Console.cpp.o
client: CMakeFiles/client.dir/client/FlipRule.cpp.o
client: CMakeFiles/client.dir/client/Game.cpp.o
client: CMakeFiles/client.dir/client/main.cpp.o
client: CMakeFiles/client.dir/client/PcPlayer.cpp.o
client: CMakeFiles/client.dir/client/Point.cpp.o
client: CMakeFiles/client.dir/build.make
client: CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client.dir/build: client

.PHONY : CMakeFiles/client.dir/build

CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/AIPlayer.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/Board.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/Client.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/ClientPlayer.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/Console.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/FlipRule.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/Game.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/main.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/PcPlayer.cpp.o.requires
CMakeFiles/client.dir/requires: CMakeFiles/client.dir/client/Point.cpp.o.requires

.PHONY : CMakeFiles/client.dir/requires

CMakeFiles/client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client.dir/clean

CMakeFiles/client.dir/depend:
	cd /home/hadar/Documents/Reversi/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hadar/Documents/Reversi/src /home/hadar/Documents/Reversi/src /home/hadar/Documents/Reversi/src/cmake-build-debug /home/hadar/Documents/Reversi/src/cmake-build-debug /home/hadar/Documents/Reversi/src/cmake-build-debug/CMakeFiles/client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client.dir/depend

