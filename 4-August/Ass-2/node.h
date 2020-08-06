#define _CRT_SECURE_NO_WARNINGS

#include"Employee.h"

#ifndef N_
#define N_

typedef class Node
{
	cEmployee Data;
	Node *next;

public:
	Node();
	Node(cEmployee e);
	friend class SLL;
}NODE,*PNODE;

#endif

