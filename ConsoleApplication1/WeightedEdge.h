#pragma once
class WeightedEdge
{   int v;
    int w;
	double weight;
public:
	WeightedEdge(int v, int w, double weight):v(v), w(w), weight(weight){};
	double get_weight(void){ return weight;}
	int from(void) {return v;}
	int to(void) {return w;}
	~WeightedEdge(void);
};

