# CMakeLists.txt - CMake configuration file

cmake_minimum_required (VERSION 2.8.8)

# Name of the project
project(Network_Flows)

add_compile_options("-lm")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

list(APPEND INCLUDES ${PROJECT_SOURCE_DIR}/src/graph)
list(APPEND INCLUDES ${PROJECT_SOURCE_DIR}/src/algorithms/dijkstra)
list(APPEND INCLUDES ${PROJECT_SOURCE_DIR}/include)

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)


SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

add_subdirectory(src/graph)
add_subdirectory(src/algorithms)
add_executable(main ${PROJECT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main PUBLIC graph dijkstra ortools)
target_include_directories(main PUBLIC
                           ${INCLUDES})







