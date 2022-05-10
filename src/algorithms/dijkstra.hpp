/*
*
*
*
*
*/

#ifndef DIJKSTRA
#define DIJKSTRA

#include "graph.hpp"

namespace Algorithms {
namespace Dijkstra {

class Dijkstra {
public:
	Dijkstra(const Graph::Graph &Graph);


private:
	const Graph::Graph &Graph;

	Dijkstra();

};

} //Algorithms
} //Dijkstra

#endif //DIJKSTRA