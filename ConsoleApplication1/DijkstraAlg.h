#pragma once
#include "graph.h"
#include "PriorityQueue.h"
#include "WeightedEdge.h"
class DijkstraAlg
{   WeightedEdgeGraph &weg;
	int* pathTo;
	double* distTo;
	PriorityQueue *pq;
public:
//	DijkstraAlg(){weg = nullptr;};
	DijkstraAlg( WeightedEdgeGraph &weg);
//Function for counting of relaxation of vertices
	void relax(int s);
//Getter for array of pathes
	int* get_pathTo(void) {return pathTo;}
//Getter for array of distances
	double* get_distTo(void) {return distTo;}
	WeightedEdgeGraph& get_WEG(void){return weg;}
	PriorityQueue* get_pq(void) {return pq;}
	double average(void);
	~DijkstraAlg(void);

};

