// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Node.h"
#include "graph.h"
#include "DFS.h"
#include "PriorityQueue.h"
#include "DijkstraAlg.h"



int _tmain(int argc, _TCHAR* argv[])
{

/*	PriorityQueue *pq = new PriorityQueue();
	pq->insert(*(new Node(0, 2)));
	pq->insert(*(new Node(1, 6)));
	pq->insert(*(new Node(2, 5)));
	pq->insert(*(new Node(3, 1)));
	pq->insert(*(new Node(4, 3)));
		std::vector<Node> *vecNode = new std::vector<Node>();
	vecNode->push_back(pq->top());
	pq->pop();
	vecNode->push_back(pq->top());
	pq->pop();
	vecNode->push_back(pq->top());
	pq->pop();
	vecNode->push_back(pq->top());
	pq->pop();
	vecNode->push_back(pq->top());
	pq->pop();

*/



	Graph *gra = new Graph(10,40);
    Graph_list *graph_list = new Graph_list(gra);
	WeightedEdgeGraph * weg = new WeightedEdgeGraph(gra);

	DijkstraAlg * my_alg = new DijkstraAlg(*weg);

    std::cout << *gra;
	std::cout << *weg;

	for (WeightedEdge we: weg->edges(0)){
		std::cout << we;
	}
	 std::cout << "\r\n";
	for (int i = 0; i< my_alg->get_WEG().get_num_vertex(); i++){
		std::cout << my_alg->get_pathTo()[i] << " " << my_alg->get_distTo()[i]  << "\r\n";
	}

	for (WeightedEdge we: weg->edges(0)){
		my_alg->relax(we);
	}

	for (int i = 0; i< my_alg->get_WEG().get_num_vertex(); i++){
		std::cout << my_alg->get_pathTo()[i] << " " << my_alg->get_distTo()[i]  << "\r\n";
	}

/*
	DFS *dfs = new DFS(graph_list,0);
	std::cout << "\r\n";
	std::cout << dfs->is_connected();

	std::cout << "\r\n";
	std::cout << "vert: " << gra->v() << "\r\n";
	std::cout << "edges: " << gra->e() << "\r\n";
	std::cout << "percentage: " << (100*(float)gra->e()/(gra->v()*gra->v()));
*/
/*
	int x,y;
	while (1){
	   std::cout << "x:";
	   std::cin >> x;
	   std::cout << "y:";
	   std::cin >> y;

	   if(x != y)
		   std::cout <<gra->adjacent(x,y);
	   else
		   break;
	}
		*/
	int y;
	   std::cin >> y;
	return 0;
}

