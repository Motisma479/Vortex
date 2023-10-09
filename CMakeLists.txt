#CMakeLists.txt

cmake_minimum_required(VERSION 3.8)

project(VortexExecutable)
 
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(VDEBUG=1)
else()
    add_compile_definitions(VDEBUG=0)
endif()

if (WIN32)
    add_compile_definitions(WINDOWS)
elseif (APPLE)
    add_compile_definitions(MACOS)
else()
    add_compile_definitions(LINUX)
endif()

add_subdirectory("Vortex")
add_subdirectory("Launcher")