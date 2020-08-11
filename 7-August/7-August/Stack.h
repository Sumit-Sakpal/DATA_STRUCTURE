#define _CRT_SECURE_NO_WARNINGS_

#include<iostream>
using namespace std;

class Stack
{
	int size, top, *arr;
public:
	Stack();
	Stack(int);
	int IsFull();
	int IsEmpty();
	void Push(int);
	int Pop();
	void Display();
};
