#include"node.h"

#ifndef E_
#define E_
class Employee
{
	PNODE Head;
public:
	Employee();
	void Create(int);
	void Display();

	const char *Empty()
	{
		return "\n\t Linked-list is empty";
	}
};
#endif
