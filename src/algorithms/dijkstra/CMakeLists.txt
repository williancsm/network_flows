file(GLOB DIJKSTRA_LIBRARY *.cpp)

add_library(dijkstra ${DIJKSTRA_LIBRARY})

target_link_libraries(dijkstra PUBLIC graph)
target_include_directories(dijkstra PUBLIC
                           ${INCLUDES})