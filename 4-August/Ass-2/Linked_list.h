#include"node.h"

#ifndef E_
#define E_
class SLL
{
	PNODE Head;
public:
	SLL();

	void Create(int);
	void Display();

	const char *Empty()
	{
		return "\n\t Linked-list is empty";
	}
};
#endif
