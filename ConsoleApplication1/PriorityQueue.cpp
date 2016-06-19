#include "stdafx.h"
#include "PriorityQueue.h"



PriorityQueue::PriorityQueue(void)
{
}


PriorityQueue::~PriorityQueue(void)
{
}


void PriorityQueue::minPrioirty(void){
	//std::priority_queue<double, std::vector<double>, std::greater<double>>::pop();
	double min = 100000000.0;
	int it_pos = -1;
	for (auto it = this->begin() ; it != this->end() ; ++it){
		if (it->second < min){
			min = it->second;
			it_pos = it->first;
		}
	}
		this->erase(it_pos);
}


void PriorityQueue::insert(int w, double i){
	//std::priority_queue<double, std::vector<double>, std::greater<double>>::push(i);
	std::map<int, double>::insert(std::pair<int, double>(w,i));
}


int PriorityQueue::size(void){
	//return std::priority_queue<double, std::vector<double>, std::greater<double>>::size();
	return std::map<int, double>::size();
}


int PriorityQueue::top(void){
	//return std::priority_queue<double, std::vector<double>, std::greater<double>>::top();
	double min = 100000000.0;
	int it_pos = -1;
	int ctr = 0;
	for (auto it = this->begin() ; it != this->end() ; ++it){
		if (it->second < min){
			min = it->second;
			it_pos = it->first;
			ctr++;
		}
	}
		
	return it_pos;
}




