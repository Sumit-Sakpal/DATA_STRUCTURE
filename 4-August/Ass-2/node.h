#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>
using namespace std;

#ifndef N_
#define N_
typedef class Node
{
public:
	int Data;
	char Name[10];
	Node *next;
	Node();
}NODE,*PNODE;
#endif

