# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /nfs/2016/m/mponomar/project/git/Lem_in

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/main.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/main.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/main.c

CMakeFiles/push_swap.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/main.c > CMakeFiles/push_swap.dir/main.c.i

CMakeFiles/push_swap.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/main.c -o CMakeFiles/push_swap.dir/main.c.s

CMakeFiles/push_swap.dir/main.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/main.c.o.requires

CMakeFiles/push_swap.dir/main.c.o.provides: CMakeFiles/push_swap.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/main.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/main.c.o.provides

CMakeFiles/push_swap.dir/main.c.o.provides.build: CMakeFiles/push_swap.dir/main.c.o


CMakeFiles/push_swap.dir/lemin_valid.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/lemin_valid.c.o: ../lemin_valid.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/lemin_valid.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/lemin_valid.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/lemin_valid.c

CMakeFiles/push_swap.dir/lemin_valid.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/lemin_valid.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/lemin_valid.c > CMakeFiles/push_swap.dir/lemin_valid.c.i

CMakeFiles/push_swap.dir/lemin_valid.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/lemin_valid.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/lemin_valid.c -o CMakeFiles/push_swap.dir/lemin_valid.c.s

CMakeFiles/push_swap.dir/lemin_valid.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/lemin_valid.c.o.requires

CMakeFiles/push_swap.dir/lemin_valid.c.o.provides: CMakeFiles/push_swap.dir/lemin_valid.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/lemin_valid.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/lemin_valid.c.o.provides

CMakeFiles/push_swap.dir/lemin_valid.c.o.provides.build: CMakeFiles/push_swap.dir/lemin_valid.c.o


CMakeFiles/push_swap.dir/check_maxint.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/check_maxint.c.o: ../check_maxint.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/check_maxint.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/check_maxint.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/check_maxint.c

CMakeFiles/push_swap.dir/check_maxint.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/check_maxint.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/check_maxint.c > CMakeFiles/push_swap.dir/check_maxint.c.i

CMakeFiles/push_swap.dir/check_maxint.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/check_maxint.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/check_maxint.c -o CMakeFiles/push_swap.dir/check_maxint.c.s

CMakeFiles/push_swap.dir/check_maxint.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/check_maxint.c.o.requires

CMakeFiles/push_swap.dir/check_maxint.c.o.provides: CMakeFiles/push_swap.dir/check_maxint.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/check_maxint.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/check_maxint.c.o.provides

CMakeFiles/push_swap.dir/check_maxint.c.o.provides.build: CMakeFiles/push_swap.dir/check_maxint.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o: ../libft/libft/ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strlen.c

CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strlen.c > CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strlen.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o: ../libft/libft/ft_strcmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcmp.c

CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcmp.c > CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcmp.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o


CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o: ../libft/get_next_line/get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/get_next_line/get_next_line.c

CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/get_next_line/get_next_line.c > CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.i

CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/get_next_line/get_next_line.c -o CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.s

CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.requires

CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.provides: CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.provides

CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.provides.build: CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o: ../libft/libft/ft_atoi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_atoi.c

CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_atoi.c > CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_atoi.c -o CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o: ../libft/libft/ft_strjoin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strjoin.c

CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strjoin.c > CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strjoin.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o: ../libft/libft/ft_strnew.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strnew.c

CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strnew.c > CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strnew.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o: ../libft/libft/ft_strclr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strclr.c

CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strclr.c > CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strclr.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o: ../libft/libft/ft_strcat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcat.c

CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcat.c > CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcat.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o: ../libft/libft/ft_strcpy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcpy.c

CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcpy.c > CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strcpy.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o: ../libft/libft/ft_bzero.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_bzero.c

CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_bzero.c > CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_bzero.c -o CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o: ../libft/libft/ft_strchr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strchr.c

CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strchr.c > CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_strchr.c -o CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o


CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o: ../libft/libft/ft_memset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_memset.c

CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_memset.c > CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.i

CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/libft/libft/ft_memset.c -o CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.s

CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.requires

CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.provides: CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.provides

CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.provides.build: CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o


CMakeFiles/push_swap.dir/create_func.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/create_func.c.o: ../create_func.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/push_swap.dir/create_func.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap.dir/create_func.c.o   -c /nfs/2016/m/mponomar/project/git/Lem_in/create_func.c

CMakeFiles/push_swap.dir/create_func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/create_func.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/m/mponomar/project/git/Lem_in/create_func.c > CMakeFiles/push_swap.dir/create_func.c.i

CMakeFiles/push_swap.dir/create_func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/create_func.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/m/mponomar/project/git/Lem_in/create_func.c -o CMakeFiles/push_swap.dir/create_func.c.s

CMakeFiles/push_swap.dir/create_func.c.o.requires:

.PHONY : CMakeFiles/push_swap.dir/create_func.c.o.requires

CMakeFiles/push_swap.dir/create_func.c.o.provides: CMakeFiles/push_swap.dir/create_func.c.o.requires
	$(MAKE) -f CMakeFiles/push_swap.dir/build.make CMakeFiles/push_swap.dir/create_func.c.o.provides.build
.PHONY : CMakeFiles/push_swap.dir/create_func.c.o.provides

CMakeFiles/push_swap.dir/create_func.c.o.provides.build: CMakeFiles/push_swap.dir/create_func.c.o


# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/main.c.o" \
"CMakeFiles/push_swap.dir/lemin_valid.c.o" \
"CMakeFiles/push_swap.dir/check_maxint.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o" \
"CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o" \
"CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o" \
"CMakeFiles/push_swap.dir/create_func.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/main.c.o
push_swap: CMakeFiles/push_swap.dir/lemin_valid.c.o
push_swap: CMakeFiles/push_swap.dir/check_maxint.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o
push_swap: CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o
push_swap: CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o
push_swap: CMakeFiles/push_swap.dir/create_func.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap

.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/main.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/lemin_valid.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/check_maxint.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strlen.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strcmp.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/get_next_line/get_next_line.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_atoi.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strjoin.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strnew.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strclr.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strcat.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strcpy.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_bzero.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_strchr.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/libft/libft/ft_memset.c.o.requires
CMakeFiles/push_swap.dir/requires: CMakeFiles/push_swap.dir/create_func.c.o.requires

.PHONY : CMakeFiles/push_swap.dir/requires

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2016/m/mponomar/project/git/Lem_in /nfs/2016/m/mponomar/project/git/Lem_in /nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug /nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug /nfs/2016/m/mponomar/project/git/Lem_in/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

