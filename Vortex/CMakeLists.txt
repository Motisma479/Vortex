cmake_minimum_required(VERSION 3.8)
project(Vortex)
set(CMAKE_CXX_STANDARD 17)

include_directories ("Headers")

set(SOURCES
    "Sources/Vortex.cpp"
)

add_library (${PROJECT_NAME} STATIC ${SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME ${PROJECT_NAME}
    ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin"
    PUBLIC_HEADER "${HEADERS}"
)