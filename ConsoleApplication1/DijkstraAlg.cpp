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
	}

	pq = new PriorityQueue();
}

void DijkstraAlg::relax(int s){
	for (WeightedEdge we: weg.edges(s)){
		int w = we.to();	
		if (distTo[w] > distTo[s] + we.get_weight()){
			distTo[w] = distTo[s] + we.get_weight();
			pathTo[w] = s;
			get_pq()->insert(w, distTo[w]);
		}

	}
	get_pq()->minPrioirty();
//	int v = e.from();
//	int w = e.to();
//	if (distTo[w] > distTo[v] + e.get_weight()){
//		distTo[w] = distTo[v] + e.get_weight();
//		pathTo[w] = v;
//	}
}


DijkstraAlg::~DijkstraAlg(void)
{
}
