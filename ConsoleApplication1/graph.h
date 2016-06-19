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

class Graph_list{
private:
	
	std::list<std::list<int>> *list_adj;
	std::list<int> vert_values;
	int** edge_values;
public:
	Graph_list(const Graph *graph);
	friend std::ostream& operator<<(std::ostream& out,  Graph_list const & gr);
	std::list<std::list<int>>& get(void) const {return *list_adj;}
	void set_vert_value(int line, int val);
	int get_vert_value(int line);
	std::list<int> adj(int i);
};

class WeightedEdgeGraph{
	std::list<std::list<WeightedEdge>> *listEdges;
	std::list<double> *vert_values;
public:
	WeightedEdgeGraph(Graph *graph);
	friend std::ostream& operator<<(std::ostream& out,  WeightedEdgeGraph const & gr);
	std::list<std::list<WeightedEdge>>& get(void) const {return *listEdges;}
};

