#include "stdafx.h"
#include "graph.h"

Graph::Graph(unsigned int size, unsigned int p):size(size){
	srand(time(0));
	table = new bool*[size];
	for(unsigned int i = 0 ; i < size ; i++){
		table[i] = new bool[size];
	}

	for (int i = 0; i < size ; i++){
		for (int j = 0 ; j < size ; j++){
			if (i == j )table [i][j] = false;
			else
				table [i][j] = (rand() % 100 < p );
		}
	}
}

int Graph::e(void){
	int edges = 0;
	for (int i = 0; i < size ; i++){
		for (int j = 0 ; j < size ; j++){
			if (table[i][j] != 0)
				edges++;
		}
	}
	return edges;
}



std::ostream& operator<<(std::ostream& out,  Graph const & gr){
	for (int i = 0 ; i < gr.size ; i++){
		for (int j = 0 ; j < gr.size ; j++){
			out << gr.table[i][j] << " ";
		}
		out << "\r\n";
	}
	return out;
}

Graph_list::Graph_list(const Graph *graph){
	list_adj = new std::list<std::list<int>>();
	edge_values = new int*[graph->v()];
	for (int i = 0 ; i < graph->v() ; i++){
		std::list<int> *hlp_list = new std::list<int>();
		vert_values.push_back(0);
		edge_values[i] = new int[graph->v()];

		for (int j = 0 ; j < graph->v() ; j++){
			edge_values[i][j] = graph->get_table()[i][j] * rand()%10;	
			if (graph->adjacent(i,j))
				hlp_list->push_back(j);
		}
		list_adj->push_back(*hlp_list);
	}
}



std::ostream& operator<<(std::ostream& out,  Graph_list const & grl){
	for (std::list<std::list<int>>::iterator it = grl.get().begin() ; it != grl.get().end() ; ++it){
		static int num = 0;
		 out << num <<":";
		for (std::list<int>::iterator it_hlp = it->begin() ; it_hlp != it->end() ; ++it_hlp){
	 	   out <<  *it_hlp << " ";
		}
		out << "\r\n";
		num++;
	}
	return out;
}

std::list<int> Graph_list::adj(int i){
	std::list<std::list<int>>::iterator it = list_adj->begin();
	while (i > 0){
		it++;
		i--;
	}
	return *it;
}

void Graph_list::set_vert_value(int line, int val){
	std::list<int>::iterator it = vert_values.begin();

	while (line >0){
	   it++;
	   line--;
	}
	*it = val;
}
int Graph_list::get_vert_value(int line){
	std::list<int>::iterator it = vert_values.begin();

	while (line >0){
	   it++;
	   line--;
	}
	return *it;
}