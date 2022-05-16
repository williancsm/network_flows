/*
*
*
*
*
*/

#include "dijkstra.hpp"

#include <stdio.h>
#include <set>

#include <sstream>



namespace Algorithms {
namespace Dijkstra {

Dijkstra::Dijkstra(const Graph::Graph& Graph, const Graph::Graph_Type::Vertex& Init, const Graph::Graph_Type::Vertex& End) : 
	Graph(Graph)
, Vertex_Data(Graph.Get_Number_Of_Vertices(), Dijkstra_Type::Default_Data)
, Initial_Vertex(Init) 
, End_Vertex(End) {
		Vertex_Data[Init].Weight = 0.0;
		Vertex_Data[Init].Predecessor = Init;
} //Dijkstra

void Dijkstra::Start() {
	int Number_Of_Vertices = Graph.Get_Number_Of_Vertices();
	
	std::vector<Graph::Graph_Type::Vertex> S_Bar;
	for (int Idx = 0; Idx < Number_Of_Vertices; Idx++) S_Bar.push_back(Idx);
	
	std::vector<Graph::Graph_Type::Vertex> S;	
	Graph::Graph_Type::Vertex V = 0;	

	
		
	while (S.size() < Number_Of_Vertices) {

		double Min_Weight = INFINITY;
		std::vector<Graph::Graph_Type::Vertex>::iterator V_It = S_Bar.begin();
  	for (std::vector<Graph::Graph_Type::Vertex>::iterator It = S_Bar.begin(); It != S_Bar.end(); ++It) {
			Graph::Graph_Type::Vertex V_Bar = *It;
			if (Vertex_Data[V_Bar].Weight < Min_Weight) {
				V = V_Bar;
				V_It = It;
				Min_Weight = Vertex_Data[V_Bar].Weight;
			}
		}
		S_Bar.erase(V_It);
		S.push_back(V);

		const std::vector<Graph::Graph_Type::Vertex>& List = Graph.Get_Adjacent_List_Of_Vertex(V);		

		for (int Idx = 0; Idx < List.size(); Idx++) {					
			
			const Graph::Graph_Type::Vertex& W = List[Idx];

			const double& Weight = Graph.Get_Adjacent_Maxtrix_Of_Edge(V, W);	

			const double Total_Weight = (Vertex_Data[V].Weight + Weight);				
			if (Total_Weight < Vertex_Data[W].Weight) {
				Vertex_Data[W].Weight = Total_Weight;		
				Vertex_Data[W].Predecessor = V;
			}				
			

			
				//	getchar();				
		//std::cout << "From: " << V << " " << " To: " << W << " Precessor " << Vertex_Data[W].Predecessor << " [" << Vertex_Data[W].Weight << "] "<< std::endl;
			}	
		
			
		}
		//std::cout << "] " << " Next: " << Next_Vertex << " ";

	
} //Start

void Dijkstra::Print_Dijkstra_Data() const {
	std::cout << "Dijkstra Data" << std::endl;
for (int Idx = 0; Idx < Vertex_Data.size(); Idx++)
	std::cout << Vertex_Data[Idx].Status << " " << Vertex_Data[Idx].Weight << " " << Vertex_Data[Idx].Next << std::endl;
	} //Print_Dijkstra_Data

void Dijkstra::Print_Path() const {
	std::cout << "Dijkstra Path" << std::endl;
	Graph::Graph_Type::Vertex V = this->End_Vertex;
	std::string Output = "";
	std::stringstream Tmp("", std::ios_base::app | std::ios_base::out);


	
 while (V != this->Initial_Vertex) {
	Tmp << " -> " << V << " [" << Vertex_Data[V].Weight << "]";
Output.insert(0, Tmp.str());
	Tmp.str(std::string());
	V = Vertex_Data[V].Predecessor;
	} 

	std::cout  << V << " [" << Vertex_Data[V].Weight << "]";
	std::cout << Output << std::endl;

	
}//Print_Path

} //Dijkstra
} //Algorithms