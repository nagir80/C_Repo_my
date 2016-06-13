#pragma once
#include "graph.h"
class DFS
{	bool *marked;
	int count;
public:
	DFS(Graph_list *graph, int s);
	void dfs(Graph_list *graph, int v);
	bool is_connected(void);
	~DFS(void);
};

