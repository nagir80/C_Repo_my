// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Node.h"
#include "graph.h"
//#include "DFS.h"
#include "PriorityQueue.h"
#include "DijkstraAlg.h"



int _tmain(int argc, _TCHAR* argv[])
{	Graph *gra = new Graph(4,50);
	WeightedEdgeGraph * weg = new WeightedEdgeGraph(gra);
	DijkstraAlg * my_alg = new DijkstraAlg(*weg);
    std::cout << *gra;
	std::cout << *weg;

	my_alg->get_pq()->insert(0,0.0);
	while (!my_alg->get_pq()->empty()){
		int s = my_alg->get_pq()->top();
		my_alg->relax(s);
	}
	 std::cout << "\r\n";
	for (int i = 0; i< my_alg->get_WEG().get_num_vertex(); i++){
		std::cout << my_alg->get_pathTo()[i] << " " << my_alg->get_distTo()[i]  << "\r\n";
	}
	int y;
	   std::cin >> y;
	return 0;
}

