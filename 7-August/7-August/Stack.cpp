#include"Stack.h"

Stack::Stack()
{
	size = 5;
	top = -1;
	arr = new int[size];
}

Stack::Stack( int sz)
{
	size = sz;
	top = -1;
	arr = new int[size];
}

int Stack::IsFull()
{
	if (top == size - 1)
		return 1;
	else
		return 0;
}

int Stack::IsEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

void Stack::Push(int no)
{
	int res;
	res = IsFull();
	if (res == 0)
	{
		top++;
		arr[top] = no;
	}
	else
	{
		cout << "\n\n\t Stack is Full !!!";
	}
}

int Stack::Pop()
{
	int res, ele;
	res = IsEmpty();
	if (res == 0)
	{
		ele = arr[top];
		top--;
	}
	return ele;
}

void Stack::Display()
{
	cout << "\n\n\t******* Stack is *******";
	for (int i = 0; i < size; i++)
	{
		cout <<arr[i] ;
	}
}