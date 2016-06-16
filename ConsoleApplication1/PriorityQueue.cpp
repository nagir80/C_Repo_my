#include "stdafx.h"
#include "PriorityQueue.h"




PriorityQueue::PriorityQueue(void)
{
}


PriorityQueue::~PriorityQueue(void)
{
}

void PriorityQueue::minPrioirty(void){
	std::priority_queue<typename Node, std::vector<typename Node>, std::greater<typename Node >>::pop();
}

void PriorityQueue::insert(Node i){
	std::priority_queue<typename Node, std::vector<typename Node>, std::greater<typename Node >>::push(i);
}

int PriorityQueue::size(void){
	return std::priority_queue<typename Node, std::vector<typename Node>, std::greater<typename Node >>::size();
}

Node PriorityQueue::top(void){
	return std::priority_queue<typename Node, std::vector<typename Node>, std::greater<typename Node >>::top();
}

bool PriorityQueue::contains(void){
	return std::priority_queue<typename Node, std::vector<typename Node>, std::greater<typename Node >>::empty();
}

