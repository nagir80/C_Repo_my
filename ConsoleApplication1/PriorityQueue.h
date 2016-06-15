#pragma once
#include <queue>
#include <functional>   // std::greater
#include <algorithm>

class PriorityQueue : public std::priority_queue<int, std::vector<int>, std::greater<typename int >>
{
public:
	void insert(int i);
	int top(void);
	void minPrioirty(void);
	PriorityQueue(void);
	~PriorityQueue(void);
};

