
#include"linked_list.h"
int main()
{
	clinkList<char> l1;
	//Insert element
	l1.addBegin('A');
	l1.addEnd('B');
	l1.addEnd('C');
	l1.addEnd('D');
	l1.addMid('a', 2);
	l1.addMid('b', 3);
	l1.addMid('c', 5);

	//l1.Display();
	cout << l1 << endl;
	//Delete First & last element
	l1.deletefirst();
	l1.deletelast();

	//l1.Display();
	cout << l1 << endl;
	//Delete at specified position
	l1.deleteMid(2);
	l1.deleteMid(4);

	//l1.Display();
	cout << l1 << endl;
	l1.reverse();
	//l1.Display();
	cout << l1 << endl;
}