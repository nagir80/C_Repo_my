#include "stdafx.h"
#include "PriorityQueue.h"




PriorityQueue::PriorityQueue(void)
{
}


PriorityQueue::~PriorityQueue(void)
{
}

inline void PriorityQueue::minPrioirty(void){
	pop();
}

inline void PriorityQueue::insert(int i){
	push(i);
}

inline int PriorityQueue::size(void){
	return size();
}

int PriorityQueue::top(void){
	return top();
}

bool PriorityQueue::contains(void){
	return empty();
}

