#include"node.h"

node::node()
{
	Data = 0;
	next = NULL;
}

node::node(int n)
{
	Data = n;
	next = NULL;
}
