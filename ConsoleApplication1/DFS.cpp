#include "stdafx.h"
#include "DFS.h"


DFS::DFS(Graph_list *graph, int s):count(0)
{   marked = new bool[graph->get().size()];
    for (int i = 0 ; i < graph->get().size() ; i++ )
		marked[i] = false;
    dfs(graph, s);
}

void DFS::dfs(Graph_list *graph, int v){
	marked[v] = true;

	std::cout << "marked " << v << "\r\n"; 
	count++;
	for (int w: graph->adj(v))
		if (!marked[w]) dfs(graph,w);
}

bool DFS::is_connected(void){
	for (int i = 0 ; i < sizeof(marked) ; i++){
	   if (!marked[i])
		   return false;
	}
	return true;
}

DFS::~DFS(void)
{
}
