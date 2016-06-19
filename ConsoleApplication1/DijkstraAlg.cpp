#include "stdafx.h"
#include "DijkstraAlg.h"


DijkstraAlg::DijkstraAlg( WeightedEdgeGraph &weg):weg(weg)
{
	pathTo = new int[weg.get_num_vertex()];
	distTo = new double[weg.get_num_vertex()];
	for(int i = 0 ; i < weg.get_num_vertex() ; i++){
		pathTo[i] = 0;
		if (i == 0)
			distTo[i] = 0;
		else
			distTo[i] = 100000000.0;

		pq = new PriorityQueue();
	}
}

void DijkstraAlg::relax(WeightedEdge e){
	int v = e.from();
	int w = e.to();
	if (distTo[w] > distTo[v] + e.get_weight()){
		distTo[w] = distTo[v] + e.get_weight();
		pathTo[w] = v;
	}
}


DijkstraAlg::~DijkstraAlg(void)
{
}
