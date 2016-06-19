#pragma once
#include <queue>
#include <functional>   // std::greater
#include <algorithm>
#include <map>


//This PriorityQueue is based on std::map<> from STL

class PriorityQueue : public std::map<int, double>
{
public:
// This function insert pair of number of the point and distanñe to this point from the start
	void insert(int w, double i);
// getting point with the shortest path
	int top(void);
// deleting point with the shortest path
	void minPrioirty(void);
//size of the std::map, containing points
	int size(void);
	PriorityQueue(void);
	~PriorityQueue(void);
};

