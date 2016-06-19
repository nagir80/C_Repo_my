// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Node.h"
#include "graph.h"
//#include "DFS.h"
#include "PriorityQueue.h"
#include "DijkstraAlg.h"

// this define is used for clause compilation delete the next line if you want work with large graphes
//  or large numbers of iterations in MonteCarlo simulation
//#define TEST

int _tmain(int argc, _TCHAR* argv[])
{
	int nIt;
	double mcAverage = 0;
	std::cout << "Input num iteration for Monte-Carlo simulation: "; 
	std::cin >> nIt;
	srand(time(0));
	for (int i = 0 ; i < nIt ; i++){
	//Creating a new graph with num points and probability in percent (0..100)
		Graph *gra = new Graph(100,30);
	//Creating weighted directed graph based on table in Graph
		WeightedEdgeGraph * weg = new WeightedEdgeGraph(gra);
	//Creating object of algorithm
		DijkstraAlg * my_alg = new DijkstraAlg(*weg);
	// Test output
#ifdef TEST
		std::cout << *gra;
		std::cout << *weg;
#endif
	//Starting od Dijakstra algorithm
		my_alg->get_pq()->insert(0,0.0);
		while (!my_alg->get_pq()->empty()){
			int s = my_alg->get_pq()->top();
			my_alg->relax(s);
		}

	//Test output
#ifdef TEST
		std::cout << "\r\n";
		for (int i = 0; i< my_alg->get_WEG().get_num_vertex(); i++){
			std::cout << my_alg->get_pathTo()[i] << " " << my_alg->get_distTo()[i]  << "\r\n";
		}
#endif
		double av = my_alg->average();
		mcAverage += av;
		std::cout << av << "\r\n";


		delete gra;
		delete my_alg;
		delete weg;
	}

	std::cout << "Average Shortest path: "<< mcAverage/nIt << "\r\n";
	int y;
	   std::cin >> y;

	return 0;
}

