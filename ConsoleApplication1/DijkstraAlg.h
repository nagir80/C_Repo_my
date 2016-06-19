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
	void relax(WeightedEdge e);
	int* get_pathTo(void) {return pathTo;}
	double* get_distTo(void) {return distTo;}
	WeightedEdgeGraph& get_WEG(void){return weg;}
	~DijkstraAlg(void);

};

