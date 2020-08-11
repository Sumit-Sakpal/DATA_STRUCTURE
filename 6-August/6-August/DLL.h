#include"node.h"


#ifndef D_
#define D_
class DLL
{
	PNODE Head;
	int cnt;
public:
	DLL();
	~DLL();

	void InsertFirst( int);
	void InsertLast( int);
	void Insert_At_Pos( int,int);

	void DeleteFirst();
	void DeleteLast();
	void Delete_At_Pos(int);

	int Count();
	void Display();
	void Display_Reverse();
	
	void SortRecords();
	void Modify( int, int);
};
#endif