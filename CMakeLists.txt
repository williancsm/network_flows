# CMakeLists.txt - CMake configuration file

cmake_minimum_required (VERSION 2.8.8)

# Name of the project
project(Network_Flows)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

list(APPEND INCLUDES ${PROJECT_SOURCE_DIR}/src/graph)
list(APPEND INCLUDES ${PROJECT_SOURCE_DIR}/src/algorithms/dijkstra)

add_subdirectory(src/graph)
add_subdirectory(src/algorithms)
add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main PUBLIC graph dijkstra)
target_include_directories(main PUBLIC
                           ${INCLUDES})







