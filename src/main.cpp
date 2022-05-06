/*
*
*
*
*
*/

#include <iostream>

#include "graph.hpp"

using namespace std;

int main(void) {
	Graph_Library::Graph My_Graph;

	cout << My_Graph.Get_Number_Of_Vertices() << endl;
	cout << My_Graph.Get_Number_Of_Edges() << endl;

	return 0;
}

