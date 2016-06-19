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



WeightedEdgeGraph::WeightedEdgeGraph(Graph *graph){
	listEdges =  new std::list<std::list<WeightedEdge>>();
	vert_values = new std::list<double>();
			srand(time(0));
	for(int i=0 ; i < graph->v() ; i ++){

		std::list<WeightedEdge> *hlp_list = new std::list<WeightedEdge>();
		if (i == 0) vert_values->push_back(0);
		else vert_values->push_back(100000000.0);

		for (int j=0 ; j < graph->v() ; j++){
			if (graph->adjacent(i,j)){
				WeightedEdge *wEdge = new WeightedEdge(i, j, static_cast<double>((rand()%100))/100);
				hlp_list->push_back(*wEdge);
				delete wEdge;
			}
		}
		listEdges->push_back(*hlp_list);
	}
}

std::list<WeightedEdge> WeightedEdgeGraph::edges(int num_vertex){
	std::list<std::list<WeightedEdge>>::iterator it = listEdges->begin();
	int i = num_vertex;
	while (i >0){
		it++;
		i--;
	}
	return *it;

}

std::ostream& operator<<(std::ostream& out,  WeightedEdgeGraph const & grl){
	for (std::list<std::list<WeightedEdge>>::iterator it = grl.get().begin() ; it != grl.get().end() ; ++it){
		static int num = 0;
		 out << num <<":";
		for (std::list<WeightedEdge>::iterator it_hlp = it->begin() ; it_hlp != it->end() ; ++it_hlp){
			out << "(" << it_hlp->from() << " " << it_hlp->to() << " " << it_hlp->get_weight() << ")";
		}
		out << "\r\n";
		num++;
	}
	return out;
}