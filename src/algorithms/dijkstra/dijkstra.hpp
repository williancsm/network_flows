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


	void Start_2();


	void Print_Dijkstra_Data() const;
	void Print_Path() const;


	class Node {
public:
 Node(const unsigned int& Index, const double& Weight);
	
friend bool operator<(const Node& p1, const Node& p2);


 double Weight;
 unsigned int Index;

private: 

Node();

	};


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