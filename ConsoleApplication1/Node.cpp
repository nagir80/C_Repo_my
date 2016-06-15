#include "stdafx.h"
#include "Node.h"





Node::~Node(void)
{
}


bool operator==(const Node &lf, const Node &rf){
	if (lf.priority == rf.priority)
		return true;
	else
		return false;
}
bool operator>(const Node &lf, const Node &rf){
	if (lf.priority > rf.priority)
		return true;
	else
		return false;
}