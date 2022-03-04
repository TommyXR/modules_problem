cmake_minimum_required(VERSION 3.21)

project(Global)

set(CMAKE_CXX_STANDARD 23)


# WORKAROUND
# This is added so that CMake can recognize the .ixx extension as a module interface.
set(CMAKE_CXX_SYSROOT_FLAG_CODE "list(APPEND CMAKE_CXX_SOURCE_FILE_EXTENSIONS ixx)")


add_subdirectory(A)
add_subdirectory(B)
