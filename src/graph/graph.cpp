/*
*
*
*
*
*/

#include "graph.hpp"

namespace Graph_Library {

Graph::Graph() {
	Number_Of_Vertices = 5;
	Number_Of_Edges = 10;
}

int Graph::Get_Number_Of_Vertices() {
	return this->Number_Of_Vertices;
}

int Graph::Get_Number_Of_Edges() {
	return this->Number_Of_Edges;
}

} //Graph_Library