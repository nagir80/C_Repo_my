#include "stdafx.h"
#include "Node.h"


Node::Node(void)
{
}


Node::~Node(void)
{
}


bool Node::operator==(const Node &rf){
	if (this->priority == rf.priority)
		return true;
	else
		return false;
}
bool Node::operator>(const Node &rf){
	if (this->priority > rf.priority)
		return true;
	else
		return false;
}