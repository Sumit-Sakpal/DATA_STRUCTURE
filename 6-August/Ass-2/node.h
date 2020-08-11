#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef N_
#define N_

typedef class Node
{
	Node *Prev;
	int Data;
	Node *Next;
public:
	Node();
	Node(int);
	friend class DCL;
}NODE, *PNODE;
#endif // !N_
