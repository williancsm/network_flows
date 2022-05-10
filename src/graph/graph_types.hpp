/*
*
*
*
*
*/

#ifndef GPRAH_TYPES
#define GPRAH_TYPES

#include <vector>

namespace Graph {
namespace Graph_Type {

namespace Edge_Type {
enum Enum {
Undirected,
Directed,
};
} //Edge_Type

typedef int Vertex;

//V->W
struct Edge {
	Vertex V;
	Vertex W;
	double Weight;
	unsigned int Index;
};

template <class T>
using Matrix = std::vector<std::vector<T>>;

template <class T>
using Array = std::vector<T>;


} //Graph
} //Types




#endif //GPRAH_TYPES