#pragma once
#include <queue>
#include <functional>   // std::greater
#include <algorithm>
#include "Node.h"

class PriorityQueue : public std::priority_queue<int, std::vector<int>, std::greater<int>>
{
public:
	void insert(int i);
	int top(void);
	void minPrioirty(void);
	int size(void);
	bool contains(void);
	PriorityQueue(void);
	~PriorityQueue(void);
};

