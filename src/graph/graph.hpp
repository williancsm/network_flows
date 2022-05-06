/*
*
*
*
*
*/

#ifndef GPRAH_LIBRARY
#define GPRAH_LIBRARY

#include <iostream>

namespace Graph_Library {

class Graph {

public:
	//Constructor
	Graph();

	//Method
	int Get_Number_Of_Vertices();
	int Get_Number_Of_Edges();

private:
	int Number_Of_Vertices;
	int Number_Of_Edges;

};

} //Graph_Library

#endif //GPRAH_LIBRARY