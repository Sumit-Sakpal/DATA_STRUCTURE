#include"Employee.h"

int main()
{
	int iNO = 0;
	Employee obj;

	cout << "\n\t Enter no of nodes you want to create : ";
	cin >> iNO;

	obj.Create(iNO);
	obj.Display();
	cout << "\n\n";
	return 0;
}