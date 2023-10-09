cmake_minimum_required (VERSION 3.8)
project(VortexExecutable)
set (CMAKE_CXX_STANDARD 17)

include_directories ("Headers")

add_executable (${PROJECT_NAME} "Sources/main.cpp")

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/Vortex/Headers )

target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/Vortex)

target_link_libraries(${PROJECT_NAME} PUBLIC Vortex)