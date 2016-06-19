#pragma once
class WeightedEdge
{   int v;
    int w;
	double weight;
public:
	WeightedEdge(int v, int w, double weight):v(v), w(w), weight(weight){};
	double get_weight(void) const { return weight;}
	int from(void) const {return v;}
	int to(void) const {return w;}
	friend std::ostream& operator<< (std::ostream& out, const WeightedEdge& we); 
	~WeightedEdge(void);
};

