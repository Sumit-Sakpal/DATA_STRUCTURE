#include"DLL.h"

int main()
{
	DLL l1;
	l1.InsertFirst(30);
	l1.InsertFirst(20);
	l1.InsertFirst(10);
	l1.Display();
	l1.Display_Reverse();
	
	l1.InsertLast(50);
	l1.Insert_At_Pos(40, 4);
	l1.Display();
	l1.Display_Reverse();

	l1.DeleteFirst();
	l1.DeleteLast();
	l1.Delete_At_Pos(2);
	l1.Display();
	l1.Display_Reverse();

}