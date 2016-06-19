#include "stdafx.h"
#include "PriorityQueue.h"



PriorityQueue::PriorityQueue(void)
{
}


PriorityQueue::~PriorityQueue(void)
{
}


void PriorityQueue::minPrioirty(void){
	std::priority_queue<int, std::vector<int>, std::greater<int>>::pop();
}


void PriorityQueue::insert(int i){
	std::priority_queue<int, std::vector<int>, std::greater<int>>::push(i);
}


int PriorityQueue::size(void){
	return std::priority_queue<int, std::vector<int>, std::greater<int>>::size();
}


int PriorityQueue::top(void){
	return std::priority_queue<int, std::vector<int>, std::greater<int>>::top();
}


bool PriorityQueue::contains(void){
	return std::priority_queue<int, std::vector<int>, std::greater<int>>::empty();
}

