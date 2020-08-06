#include"node.h"

#ifndef L_
#define L_
class Linked_list
{
	Node *Head;
public:
	Linked_list();
	void Create(int);
	void Display();
	const char *Empty()
	{
		return "\n\t Linked-list is empty";
	}
};
#endif