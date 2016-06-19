#pragma once
#include <queue>
#include <functional>   // std::greater
#include <algorithm>
#include <map>



class PriorityQueue : public std::map<int, double>
{
public:
	void insert(int w, double i);
	int top(void);
	void minPrioirty(void);
	int size(void);
	bool contains(void);
	PriorityQueue(void);
	~PriorityQueue(void);
};

