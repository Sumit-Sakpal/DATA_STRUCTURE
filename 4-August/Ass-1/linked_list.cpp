#include "linked_list.h"

Linked_list::Linked_list()
{
	Head = NULL;
}

void Linked_list::Create(int no)
{
	int iCNT = 0;
	int NO = 0;

	for (iCNT = 1; iCNT <= no; iCNT++)
	{
		cout << "\t Enter the data :";
		cin >> NO;

		Node *newn = new Node;
		newn->Data = NO;
		newn->next = NULL;

		if (iCNT == 1)
		{
			Head = newn;
		}
		else
		{
			newn->next = Head;
			Head = newn;
		}
	}
}

void Linked_list::Display()
{
	try
	{
		if (Head == NULL)
			throw 'E';

			Node *Temp = Head;
			cout << "\n\t LINKED LIST :  ";
			while (Temp != NULL)
			{
				cout << Temp->Data<<"\t";
				Temp = Temp->next;
			}

	}
	catch (char ch)
	{
		cout << Empty();
	}
}
