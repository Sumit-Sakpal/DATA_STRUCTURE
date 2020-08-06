#include"Linked_list.h"

int main()
{
	int iNO = 0;
	SLL obj;
	

	cout << "\n\t Enter no of nodes you want to create : ";
	cin >> iNO;

	obj.Create(iNO);
	obj.Display();

	cout << "\n\n";
	return 0;
}