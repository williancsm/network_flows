file(GLOB ALGORITHMS_LIBRARY *.cpp)

add_library(algorithms ${ALGORITHMS_LIBRARY})

target_link_libraries(algorithms PUBLIC graph)
target_include_directories(algorithms PUBLIC
                           ${INCLUDES})