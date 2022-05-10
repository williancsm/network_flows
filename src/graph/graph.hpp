/*
*
*
*
*
*/

#ifndef GPRAH
#define GPRAH

#include "graph_types.hpp"
#include <cassert>

namespace Graph {

class Graph {

public:
	//Constructor
	Graph(const int &V);

	//Method
	int Get_Number_Of_Vertices() const;
	int Get_Number_Of_Edges() const;
	const Graph_Type::Edge& Get_Edge(int Index) const;

	void Add_Edge(const Graph_Type::Vertex& V, const Graph_Type::Vertex& W, const double& Weight = 0.0, const Graph_Type::Edge_Type::Enum& Edge_Type = Graph_Type::Edge_Type::Directed);

	void Add_Edge(const Graph_Type::Edge& Edge, const double& Weight = 0.0, const Graph_Type::Edge_Type::Enum& Edge_Type = Graph_Type::Edge_Type::Directed);

	void Print_Adjacent_List() const;

	

private:

	unsigned int Number_Of_Vertices;
	unsigned int Number_Of_Edges;


	Graph_Type::Matrix<double> Adjacent_Matrix;
	Graph_Type::Matrix<Graph_Type::Vertex> Adjacent_List;

	Graph_Type::Array<Graph_Type::Edge> Edges;

	void Increment_Number_Of_Edges();

	void Update_Adjacent_Matrix(const Graph_Type::Vertex& V, const Graph_Type::Vertex& W, const double& Weight);
	void Update_Adjacent_List(const Graph_Type::Edge& Edge);

	Graph();

};

} //Graph

#endif //GPRAH
