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
CMAKE_SOURCE_DIR = /home/hadar/Documents/Reversi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hadar/Documents/Reversi/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/maintesting.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/maintesting.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/maintesting.dir/flags.make

src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o: ../src/test/gtest_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/test/gtest_main.cpp.o -c /home/hadar/Documents/Reversi/src/test/gtest_main.cpp

src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/test/gtest_main.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/test/gtest_main.cpp > CMakeFiles/maintesting.dir/test/gtest_main.cpp.i

src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/test/gtest_main.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/test/gtest_main.cpp -o CMakeFiles/maintesting.dir/test/gtest_main.cpp.s

src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.requires

src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.provides: src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.provides

src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o


src/CMakeFiles/maintesting.dir/test/test.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/test/test.cpp.o: ../src/test/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/maintesting.dir/test/test.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/test/test.cpp.o -c /home/hadar/Documents/Reversi/src/test/test.cpp

src/CMakeFiles/maintesting.dir/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/test/test.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/test/test.cpp > CMakeFiles/maintesting.dir/test/test.cpp.i

src/CMakeFiles/maintesting.dir/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/test/test.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/test/test.cpp -o CMakeFiles/maintesting.dir/test/test.cpp.s

src/CMakeFiles/maintesting.dir/test/test.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/test/test.cpp.o.requires

src/CMakeFiles/maintesting.dir/test/test.cpp.o.provides: src/CMakeFiles/maintesting.dir/test/test.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/test/test.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/test/test.cpp.o.provides

src/CMakeFiles/maintesting.dir/test/test.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/test/test.cpp.o


src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o: ../src/client/AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o -c /home/hadar/Documents/Reversi/src/client/AIPlayer.cpp

src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/AIPlayer.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/AIPlayer.cpp > CMakeFiles/maintesting.dir/client/AIPlayer.cpp.i

src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/AIPlayer.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/AIPlayer.cpp -o CMakeFiles/maintesting.dir/client/AIPlayer.cpp.s

src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o


src/CMakeFiles/maintesting.dir/client/Board.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/Board.cpp.o: ../src/client/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/maintesting.dir/client/Board.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/Board.cpp.o -c /home/hadar/Documents/Reversi/src/client/Board.cpp

src/CMakeFiles/maintesting.dir/client/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/Board.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Board.cpp > CMakeFiles/maintesting.dir/client/Board.cpp.i

src/CMakeFiles/maintesting.dir/client/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/Board.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Board.cpp -o CMakeFiles/maintesting.dir/client/Board.cpp.s

src/CMakeFiles/maintesting.dir/client/Board.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/Board.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/Board.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/Board.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/Board.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/Board.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/Board.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/Board.cpp.o


src/CMakeFiles/maintesting.dir/client/Client.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/Client.cpp.o: ../src/client/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/maintesting.dir/client/Client.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/Client.cpp.o -c /home/hadar/Documents/Reversi/src/client/Client.cpp

src/CMakeFiles/maintesting.dir/client/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/Client.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Client.cpp > CMakeFiles/maintesting.dir/client/Client.cpp.i

src/CMakeFiles/maintesting.dir/client/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/Client.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Client.cpp -o CMakeFiles/maintesting.dir/client/Client.cpp.s

src/CMakeFiles/maintesting.dir/client/Client.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/Client.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/Client.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/Client.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/Client.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/Client.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/Client.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/Client.cpp.o


src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o: ../src/client/ClientPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o -c /home/hadar/Documents/Reversi/src/client/ClientPlayer.cpp

src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/ClientPlayer.cpp > CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.i

src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/ClientPlayer.cpp -o CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.s

src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o


src/CMakeFiles/maintesting.dir/client/Console.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/Console.cpp.o: ../src/client/Console.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/maintesting.dir/client/Console.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/Console.cpp.o -c /home/hadar/Documents/Reversi/src/client/Console.cpp

src/CMakeFiles/maintesting.dir/client/Console.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/Console.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Console.cpp > CMakeFiles/maintesting.dir/client/Console.cpp.i

src/CMakeFiles/maintesting.dir/client/Console.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/Console.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Console.cpp -o CMakeFiles/maintesting.dir/client/Console.cpp.s

src/CMakeFiles/maintesting.dir/client/Console.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/Console.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/Console.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/Console.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/Console.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/Console.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/Console.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/Console.cpp.o


src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o: ../src/client/FlipRule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/FlipRule.cpp.o -c /home/hadar/Documents/Reversi/src/client/FlipRule.cpp

src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/FlipRule.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/FlipRule.cpp > CMakeFiles/maintesting.dir/client/FlipRule.cpp.i

src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/FlipRule.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/FlipRule.cpp -o CMakeFiles/maintesting.dir/client/FlipRule.cpp.s

src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o


src/CMakeFiles/maintesting.dir/client/Game.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/Game.cpp.o: ../src/client/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/maintesting.dir/client/Game.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/Game.cpp.o -c /home/hadar/Documents/Reversi/src/client/Game.cpp

src/CMakeFiles/maintesting.dir/client/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/Game.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Game.cpp > CMakeFiles/maintesting.dir/client/Game.cpp.i

src/CMakeFiles/maintesting.dir/client/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/Game.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Game.cpp -o CMakeFiles/maintesting.dir/client/Game.cpp.s

src/CMakeFiles/maintesting.dir/client/Game.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/Game.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/Game.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/Game.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/Game.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/Game.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/Game.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/Game.cpp.o


src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o: ../src/client/PcPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o -c /home/hadar/Documents/Reversi/src/client/PcPlayer.cpp

src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/PcPlayer.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/PcPlayer.cpp > CMakeFiles/maintesting.dir/client/PcPlayer.cpp.i

src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/PcPlayer.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/PcPlayer.cpp -o CMakeFiles/maintesting.dir/client/PcPlayer.cpp.s

src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o


src/CMakeFiles/maintesting.dir/client/Point.cpp.o: src/CMakeFiles/maintesting.dir/flags.make
src/CMakeFiles/maintesting.dir/client/Point.cpp.o: ../src/client/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/maintesting.dir/client/Point.cpp.o"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/maintesting.dir/client/Point.cpp.o -c /home/hadar/Documents/Reversi/src/client/Point.cpp

src/CMakeFiles/maintesting.dir/client/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/maintesting.dir/client/Point.cpp.i"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hadar/Documents/Reversi/src/client/Point.cpp > CMakeFiles/maintesting.dir/client/Point.cpp.i

src/CMakeFiles/maintesting.dir/client/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/maintesting.dir/client/Point.cpp.s"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hadar/Documents/Reversi/src/client/Point.cpp -o CMakeFiles/maintesting.dir/client/Point.cpp.s

src/CMakeFiles/maintesting.dir/client/Point.cpp.o.requires:

.PHONY : src/CMakeFiles/maintesting.dir/client/Point.cpp.o.requires

src/CMakeFiles/maintesting.dir/client/Point.cpp.o.provides: src/CMakeFiles/maintesting.dir/client/Point.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/maintesting.dir/build.make src/CMakeFiles/maintesting.dir/client/Point.cpp.o.provides.build
.PHONY : src/CMakeFiles/maintesting.dir/client/Point.cpp.o.provides

src/CMakeFiles/maintesting.dir/client/Point.cpp.o.provides.build: src/CMakeFiles/maintesting.dir/client/Point.cpp.o


# Object files for target maintesting
maintesting_OBJECTS = \
"CMakeFiles/maintesting.dir/test/gtest_main.cpp.o" \
"CMakeFiles/maintesting.dir/test/test.cpp.o" \
"CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o" \
"CMakeFiles/maintesting.dir/client/Board.cpp.o" \
"CMakeFiles/maintesting.dir/client/Client.cpp.o" \
"CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o" \
"CMakeFiles/maintesting.dir/client/Console.cpp.o" \
"CMakeFiles/maintesting.dir/client/FlipRule.cpp.o" \
"CMakeFiles/maintesting.dir/client/Game.cpp.o" \
"CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o" \
"CMakeFiles/maintesting.dir/client/Point.cpp.o"

# External object files for target maintesting
maintesting_EXTERNAL_OBJECTS =

src/maintesting: src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/test/test.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/Board.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/Client.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/Console.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/Game.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/client/Point.cpp.o
src/maintesting: src/CMakeFiles/maintesting.dir/build.make
src/maintesting: src/lib/googletest-release-1.8.0/googlemock/gtest/libgtest.a
src/maintesting: src/lib/googletest-release-1.8.0/googlemock/gtest/libgtest_main.a
src/maintesting: src/lib/googletest-release-1.8.0/googlemock/gtest/libgtest.a
src/maintesting: src/CMakeFiles/maintesting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hadar/Documents/Reversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable maintesting"
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maintesting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/maintesting.dir/build: src/maintesting

.PHONY : src/CMakeFiles/maintesting.dir/build

src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/test/gtest_main.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/test/test.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/AIPlayer.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/Board.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/Client.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/ClientPlayer.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/Console.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/FlipRule.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/Game.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/PcPlayer.cpp.o.requires
src/CMakeFiles/maintesting.dir/requires: src/CMakeFiles/maintesting.dir/client/Point.cpp.o.requires

.PHONY : src/CMakeFiles/maintesting.dir/requires

src/CMakeFiles/maintesting.dir/clean:
	cd /home/hadar/Documents/Reversi/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/maintesting.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/maintesting.dir/clean

src/CMakeFiles/maintesting.dir/depend:
	cd /home/hadar/Documents/Reversi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hadar/Documents/Reversi /home/hadar/Documents/Reversi/src /home/hadar/Documents/Reversi/cmake-build-debug /home/hadar/Documents/Reversi/cmake-build-debug/src /home/hadar/Documents/Reversi/cmake-build-debug/src/CMakeFiles/maintesting.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/maintesting.dir/depend

