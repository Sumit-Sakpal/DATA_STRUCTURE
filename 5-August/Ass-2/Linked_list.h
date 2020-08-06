#include"Node.h"
#ifndef L_
#define L_
class SLL
{
	node* Head;
	int cnt;
public:
	SLL();
	void create_list(int);
	void Split(SLL&, PNODE&, PNODE&);
	void Display();
	void Display(PNODE);
};
#endif