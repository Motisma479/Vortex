cmake_minimum_required (VERSION 3.8)
project(VortexExecutable)
set (CMAKE_CXX_STANDARD 17)

include_directories ("Headers")

set(SOURCES
"Sources/main.cpp"
)


#GLFW
include_directories( glfw )

add_executable (${PROJECT_NAME} "Sources/main.cpp")

# Vortex
target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/Vortex/Headers )
target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/Vortex)
target_link_libraries(${PROJECT_NAME} PUBLIC Vortex)

#
target_link_libraries(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/Launcher/glfw/glfw3.lib)
target_link_libraries(${PROJECT_NAME} PUBLIC OpenGL32)

# if(MSVC)
# set(CMAKE_EXE_LINKER_FLAGS
#       "${CMAKE_EXE_LINKER_FLAGS} /NODEFAULTLIB")
# endif()
################################################################################
# cmake_minimum_required( VERSION 3.1 )

# project( GLFW-CMake-starter )

# find_package( OpenGL REQUIRED )

# include_directories( ${OPENGL_INCLUDE_DIRS} )

# set( GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
# set( GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" )
# #Set( BUILD_SHARED_LIBS ON)

# add_subdirectory( glfw )

# if( MSVC )
#     SET( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup" )
# endif()

# set( GLFW-CMAKE-STARTER-SRC
#      Sources/main.cpp
#      )
     
# add_executable( GLFW-CMake-starter WIN32 ${GLFW-CMAKE-STARTER-SRC} )
# target_link_libraries( GLFW-CMake-starter ${OPENGL_LIBRARIES} glfw )
# if( MSVC )
#     if(${CMAKE_VERSION} VERSION_LESS "3.6.0") 
#         message( "\n\t[ WARNING ]\n\n\tCMake version lower than 3.6.\n\n\t - Please update CMake and rerun; OR\n\t - Manually set 'GLFW-CMake-starter' as StartUp Project in Visual Studio.\n" )
#     else()
#         set_property( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT GLFW-CMake-starter )
#     endif()
# endif()
