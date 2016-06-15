#pragma once
class Node
{
	int num;
	int priority;
public:
	Node(int num, int priority):num(num), priority(priority){};
	~Node(void);

friend bool operator==(const Node &lf, const Node &rf);
friend bool operator>(const Node &lf, const Node &rf);
};

