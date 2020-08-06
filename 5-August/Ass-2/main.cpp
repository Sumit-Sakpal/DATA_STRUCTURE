#include"Linked_list.h"
#include"node.h"

int main()
{
	SLL obj1;

	PNODE even = NULL;
	PNODE odd = NULL;

	int cnt=0, data;

	cout << "\nHow many nodes you want to create : ";
	cin >> cnt;
	for (int i = 1; i <= cnt; i++)
	{
		cout << "\nEnter Data : ";
		cin >> data;
		obj1.create_list(data);
	}
	

	obj1.Display();
	
	obj1.Split(obj1, even, odd);

	cout << "\n\nEven Numbered Linked  List :";
	obj1.Display(even);
	cout << "\n\nOdd Numbered Linked  List :";
	obj1.Display(odd);
	cout << "\n\n";
	return 0;
}
