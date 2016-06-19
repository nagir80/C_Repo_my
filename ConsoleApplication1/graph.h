#pragma once
#include <iostream>
#include <list>
#include "WeightedEdge.h"

class Graph{
private:
	bool ** table;
// number of vertices
	int size;
public:
// constructor for type Graph
	Graph(unsigned int size = 10, unsigned int p = 20);
// overloaded operator<< for printing table of graph
	friend std::ostream& operator<<(std::ostream& out,  Graph const & gr);
//return number of vertices
	int v(void) const {return size;}
	bool** get_table(void) const{return table;}
//return number of edges
	int e(void);
// check if edge is between x and y 
	bool adjacent(int x, int y) const {return table[x][y];}
};


class WeightedEdgeGraph{
	std::list<std::list<WeightedEdge>> *listEdges;
	std::list<double> *vert_values;
public:
	WeightedEdgeGraph(Graph *graph);
	friend std::ostream& operator<<(std::ostream& out,  WeightedEdgeGraph const & gr);
	std::list<std::list<WeightedEdge>>& get(void) const {return *listEdges;}
	std::list<WeightedEdge> edges(int num_vertex);
	int get_num_vertex(void) {return vert_values->size();}
};

