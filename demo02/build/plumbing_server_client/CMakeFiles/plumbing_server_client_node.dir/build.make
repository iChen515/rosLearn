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
CMAKE_SOURCE_DIR = /home/user/rosLearn/demo02/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/rosLearn/demo02/build

# Include any dependencies generated for this target.
include plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/depend.make

# Include the progress variables for this target.
include plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/progress.make

# Include the compile flags for this target's objects.
include plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/flags.make

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/flags.make
plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o: /home/user/rosLearn/demo02/src/plumbing_server_client/src/main_server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/rosLearn/demo02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o"
	cd /home/user/rosLearn/demo02/build/plumbing_server_client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o -c /home/user/rosLearn/demo02/src/plumbing_server_client/src/main_server.cpp

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.i"
	cd /home/user/rosLearn/demo02/build/plumbing_server_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/rosLearn/demo02/src/plumbing_server_client/src/main_server.cpp > CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.i

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.s"
	cd /home/user/rosLearn/demo02/build/plumbing_server_client && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/rosLearn/demo02/src/plumbing_server_client/src/main_server.cpp -o CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.s

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.requires:

.PHONY : plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.requires

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.provides: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.requires
	$(MAKE) -f plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/build.make plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.provides.build
.PHONY : plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.provides

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.provides.build: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o


# Object files for target plumbing_server_client_node
plumbing_server_client_node_OBJECTS = \
"CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o"

# External object files for target plumbing_server_client_node
plumbing_server_client_node_EXTERNAL_OBJECTS =

/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/build.make
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/libroscpp.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/librosconsole.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/librostime.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /opt/ros/melodic/lib/libcpp_common.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/rosLearn/demo02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node"
	cd /home/user/rosLearn/demo02/build/plumbing_server_client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/plumbing_server_client_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/build: /home/user/rosLearn/demo02/devel/lib/plumbing_server_client/plumbing_server_client_node

.PHONY : plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/build

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/requires: plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/src/main_server.cpp.o.requires

.PHONY : plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/requires

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/clean:
	cd /home/user/rosLearn/demo02/build/plumbing_server_client && $(CMAKE_COMMAND) -P CMakeFiles/plumbing_server_client_node.dir/cmake_clean.cmake
.PHONY : plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/clean

plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/depend:
	cd /home/user/rosLearn/demo02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/rosLearn/demo02/src /home/user/rosLearn/demo02/src/plumbing_server_client /home/user/rosLearn/demo02/build /home/user/rosLearn/demo02/build/plumbing_server_client /home/user/rosLearn/demo02/build/plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plumbing_server_client/CMakeFiles/plumbing_server_client_node.dir/depend

