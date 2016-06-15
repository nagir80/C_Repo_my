#pragma once
#include <queue>
#include <functional>   // std::greater
#include <algorithm>
#include "Node.h"


class PriorityQueue : public std::priority_queue<typename Node, std::vector<typename Node>, std::greater<typename Node >>
{
public:
	void insert(Node i);
	Node top(void);
	void minPrioirty(void);
	int size(void);
	bool contains(void);
	PriorityQueue(void);
	~PriorityQueue(void);
};

