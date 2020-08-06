
#include<iostream>
using namespace std;

#ifndef N_
#define N_

typedef class node
{
	
public:
	int Data;
	node* next;

	node();
	node(int);
	friend class SLL;
}NODE, *PNODE;
#endif

