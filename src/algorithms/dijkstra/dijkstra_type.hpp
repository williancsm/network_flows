/*
*
*
*
*
*/


#ifndef DIJKSTRA_TYPE
#define DIJKSTRA_TYPE

#include <cmath>

namespace Algorithms {
namespace Dijkstra {
namespace Dijkstra_Type {

namespace Vertex_Status {
enum Enum {
Unvisited,
Visited
};
} //Vertex_Status

struct Vertex_Data {
 double Weight;
 Graph::Graph_Type::Vertex Predecessor; 
};



const Vertex_Data Default_Data = {INFINITY, -1};

} //Algorithms
} //Dijkstra
} //Dijkstra_Type

#endif //DIJKSTRA_TYPE