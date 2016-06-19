#include "stdafx.h"
#include "WeightedEdge.h"


WeightedEdge::~WeightedEdge(void)
{
}

std::ostream& operator<< (std::ostream& out, const WeightedEdge& we){
	out << "(" << we.from() << "," << we.to() << "," << we.get_weight() << ")";
	return out;
}