/*
*
*
*
*
*/

#include <iostream>

#include "graph.hpp"

namespace Graph {

Graph::Graph(const Graph_Type::Vertex &V): Number_Of_Vertices(V), 
															 Number_Of_Edges(0),
															 Adjacent_Matrix(V, std::vector<double>(V, 0.0)), 
															 Adjacent_List(V) {
}

int Graph::Get_Number_Of_Vertices() const {
	return this->Number_Of_Vertices;
} //Get_Number_Of_Vertices

int Graph::Get_Number_Of_Edges() const {
	return this->Number_Of_Edges;
} //Get_Number_Of_Edges

void Graph::Add_Edge(const Graph_Type::Edge& Edge, const double& Weight, const Graph_Type::Edge_Type::Enum& Edge_Type) {	
	this->Add_Edge(Edge.V, Edge.W, Weight, Edge_Type);
} //Add_Edge


void Graph::Add_Edge(const Graph_Type::Vertex& V, const Graph_Type::Vertex& W, const double& Weight, const Graph_Type::Edge_Type::Enum& Edge_Type) { 
	assert(V < Number_Of_Vertices);
  assert(W < Number_Of_Vertices);
	
	Graph_Type::Edge Tmp = {V, W, Weight, this->Number_Of_Edges++};
	this->Edges.push_back(Tmp);
	this->Update_Adjacent_Matrix(V, W, Weight);
	this->Update_Adjacent_List(Tmp);
	
	if (Edge_Type == Graph_Type::Edge_Type::Undirected) {
		Tmp = {W, V, Weight, this->Number_Of_Edges++};
		this->Edges.push_back(Tmp);
		this->Update_Adjacent_Matrix(W, V, Weight);
		this->Update_Adjacent_List(Tmp);		
	}
} //Add_Edge

const Graph_Type::Edge& Graph::Get_Edge(int Index) const {
	assert(Index < this->Number_Of_Edges);
	return this->Edges[Index];
} //Get_Edge

// private
void Graph::Increment_Number_Of_Edges() {
	this->Number_Of_Edges++;
} //Increment_Number_Of_Edges

void Graph::Update_Adjacent_Matrix(const Graph_Type::Vertex& V, const Graph_Type::Vertex& W, const double& Weight) {
	this->Adjacent_Matrix[V][W] = Weight;
} //Update_Adjacent_Matrix

void Graph::Update_Adjacent_List(const Graph_Type::Edge& Edge) {
	this->Adjacent_List[Edge.V].push_back(Edge.W);
} //Update_Adjacent_List

void Graph::Print_Adjacent_List() const {
	for (int Vertex_V = 0; Vertex_V < this->Adjacent_List.size(); Vertex_V++) {
		std::cout << Vertex_V;
		for (int Vertex_W = 0; Vertex_W < this->Adjacent_List[Vertex_V].size(); Vertex_W++) {
			Graph_Type::Vertex V = this->Adjacent_List[Vertex_V][Vertex_W];
			
		std::cout << " - [" << this->Adjacent_Matrix[Vertex_V][this->Adjacent_List[Vertex_V][Vertex_W]] << "] -> " << this->Adjacent_List[Vertex_V][Vertex_W];		 
		}	
		std::cout << std::endl;
	}	
} //Print_Adjacent_List

const std::vector<Graph_Type::Vertex>& Graph::Get_Adjacent_List_Of_Vertex(const Graph_Type::Vertex& Vertex) const {
	for (int i = 0; i < Adjacent_List[Vertex].size(); i++)
	return this->Adjacent_List[Vertex];
} //Get_Adjacent_List_Of_Vertex

const double& Graph::Get_Adjacent_Maxtrix_Of_Edge(const Graph_Type::Vertex& V, const Graph_Type::Vertex& W) const {
	return this->Adjacent_Matrix[V][W];
} //Get_Adjacent_Maxtrix_Of_Edge

} //Graph