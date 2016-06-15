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

int PriorityQueue::top(void){
	return top();
}
