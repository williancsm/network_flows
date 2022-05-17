/*
*
*
*
*
*/

#ifndef DIJKSTRA
#define DIJKSTRA

#include "graph.hpp"
#include "dijkstra_type.hpp"

#include <iostream>

namespace Algorithms {
namespace Dijkstra {

class Dijkstra {
public:
	Dijkstra(const Graph::Graph& Graph, const Graph::Graph_Type::Vertex& Init, const Graph::Graph_Type::Vertex& End);
	
	void Start();

	void Print_Path() const;


private:

	const Graph::Graph& Graph;
	std::vector<Dijkstra_Type::Vertex_Data> Vertex_Data;


  const Graph::Graph_Type::Vertex& Initial_Vertex;
  const Graph::Graph_Type::Vertex& End_Vertex;

	Dijkstra();

};

} //Algorithms
} //Dijkstra

#endif //DIJKSTRA