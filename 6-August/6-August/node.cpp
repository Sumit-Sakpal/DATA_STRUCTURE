#include "node.h"

Node::Node()
{
	Prev = NULL;
	Data = 0;
	Next = NULL;
}

Node::Node(int no)
{
	Prev = NULL;
	Data = no;
	Next = NULL;
}
