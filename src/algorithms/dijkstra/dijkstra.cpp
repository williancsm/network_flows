/*
*
*
*
*
*/

#include "dijkstra.hpp"

#include <queue>

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


void Dijkstra::Start_2() {
    int Number_Of_Vertices = Graph.Get_Number_Of_Vertices();
	
    using My_Data = std::pair<double, Graph::Graph_Type::Vertex>;
    std::priority_queue<My_Data, std::vector<My_Data>, std::greater<My_Data>> S_Bar;
	Graph::Graph_Type::Vertex V = this->Initial_Vertex;	
    S_Bar.push({0.0, V});
    while (!S_Bar.empty()) {
        V = S_Bar.top().second;
        double Distance = S_Bar.top().first;
        S_Bar.pop();
        if (Distance != Vertex_Data[V].Weight)
            continue;

				const std::vector<Graph::Graph_Type::Vertex>& List = Graph.Get_Adjacent_List_Of_Vertex(V);		

		for (int Idx = 0; Idx < List.size(); Idx++) {					
			
			const Graph::Graph_Type::Vertex& W = List[Idx];

			const double& Weight = Graph.Get_Adjacent_Maxtrix_Of_Edge(V, W);	

			const double Total_Weight = (Vertex_Data[V].Weight + Weight);				
			if (Total_Weight < Vertex_Data[W].Weight) {
				Vertex_Data[W].Weight = Total_Weight;		
				Vertex_Data[W].Predecessor = V;
				S_Bar.push({Vertex_Data[W].Weight, W});
			}				
			}	

    }
}




void Dijkstra::Start() {
	int Number_Of_Vertices = Graph.Get_Number_Of_Vertices();
	int Number_Of_Visited_Vertices = 0;
	
	std::vector<Graph::Graph_Type::Vertex> S_Bar;	
	for (int Idx = 0; Idx < Number_Of_Vertices; Idx++) S_Bar.push_back(Idx);
	Graph::Graph_Type::Vertex V = 0;	
	
	while (Number_Of_Visited_Vertices < Number_Of_Vertices) {

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
		Number_Of_Visited_Vertices++;

		const std::vector<Graph::Graph_Type::Vertex>& List = Graph.Get_Adjacent_List_Of_Vertex(V);		

		for (int Idx = 0; Idx < List.size(); Idx++) {					
			
			const Graph::Graph_Type::Vertex& W = List[Idx];

			const double& Weight = Graph.Get_Adjacent_Maxtrix_Of_Edge(V, W);	

			const double Total_Weight = (Vertex_Data[V].Weight + Weight);				
			if (Total_Weight < Vertex_Data[W].Weight) {
				Vertex_Data[W].Weight = Total_Weight;		
				Vertex_Data[W].Predecessor = V;
			}				
			}	
		}
} //Start

void Dijkstra::Print_Dijkstra_Data() const {
	std::cout << "Dijkstra Data" << std::endl;
for (int Idx = 0; Idx < Vertex_Data.size(); Idx++)
	std::cout << Vertex_Data[Idx].Status << " " << Vertex_Data[Idx].Weight << " " << Vertex_Data[Idx].Next << std::endl;
	} //Print_Dijkstra_Data

void Dijkstra::Print_Path() const {
	std::cout << "Dijkstra Path" << std::endl;
	Graph::Graph_Type::Vertex V = this->End_Vertex;
	std::string Output;
	std::string Tmp;
	
	
 while (V != this->Initial_Vertex) {
	Tmp = " -> " + std::to_string(V) + " [" + std::to_string(Vertex_Data[V].Weight) + "]";
Output.insert(0, Tmp);
	V = Vertex_Data[V].Predecessor;
	} 

	std::cout  << V << " [" << Vertex_Data[V].Weight << "]";
	std::cout << Output << std::endl;

	
} //Print_Path

} //Dijkstra
} //Algorithms