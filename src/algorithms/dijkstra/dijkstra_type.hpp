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
 Vertex_Status::Enum Status;
 double Weight;
 Graph::Graph_Type::Vertex Next;
 Graph::Graph_Type::Vertex Predecessor; 
 unsigned int Index; 

};



const Vertex_Data Default_Data = {Vertex_Status::Unvisited, INFINITY, 0, 0};

} //Algorithms
} //Dijkstra
} //Dijkstra_Type

#endif //DIJKSTRA_TYPE