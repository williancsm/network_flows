/*
*
*
*
*
*/

#include <iostream>

#include "graph.hpp"
#include "dijkstra.hpp"

#include "ortools/linear_solver/linear_solver.h"

using namespace std;

int main(void) {	

std::unique_ptr<operations_research::MPSolver> solver(operations_research::MPSolver::CreateSolver("SCIP"));
if (!solver) {
  LOG(WARNING) << "SCIP solver unavailable.";
  return 0;
}
	
	//https://www.geeksforgeeks.org/wp-content/uploads/Fig-11.jpg
	int V = 9;
	Graph::Graph My_Graph(V);

	My_Graph.Add_Edge(0, 1, 4.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(0, 7, 8.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(1, 7, 11.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(1, 2, 8.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(2, 8, 2.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(7, 8, 7.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(7, 6, 1.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(8, 6, 6.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(6, 5, 2.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(2, 5, 4.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(2, 3, 7.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(3, 5, 14.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(3, 4, 9.0, Graph::Graph_Type::Edge_Type::Undirected);
	My_Graph.Add_Edge(4, 5, 10.0, Graph::Graph_Type::Edge_Type::Undirected);


	cout << "Vertices: " << My_Graph.Get_Number_Of_Vertices() << endl;
	cout << "Edges: " << My_Graph.Get_Number_Of_Edges() << endl;
  cout << "Adjacent List: " << endl;
	My_Graph.Print_Adjacent_List();

	Algorithms::Dijkstra::Dijkstra My_Dijkstra(My_Graph, 4, 0);
	My_Dijkstra.Start();
	My_Dijkstra.Print_Path();


	

	return 0;
}

