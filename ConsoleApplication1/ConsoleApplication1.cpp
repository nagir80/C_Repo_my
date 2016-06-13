// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "graph.h"
#include "DFS.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{   Graph *gra = new Graph(10,4);
    Graph_list *graph_list = new Graph_list(gra);
    std::cout << *gra;
	std::cout << *graph_list;

	DFS *dfs = new DFS(graph_list,0);
	std::cout << "\r\n";
	std::cout << dfs->is_connected();

	std::cout << "\r\n";
	std::cout << "vert: " << gra->v() << "\r\n";
	std::cout << "edges: " << gra->e() << "\r\n";
	std::cout << "percentage: " << (100*(float)gra->e()/(gra->v()*gra->v()));
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

