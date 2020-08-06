#include "Linked_list.h"

SLL::SLL()
{
	Head = NULL;
}

void SLL::Create(int no)
{
	int iCNT = 0;
	int NO = 0;
	char nm[10];

	cEmployee e;

	for (iCNT = 1; iCNT <= no; iCNT++)
	{
		PNODE newn = new NODE;
		cin >> e;
		newn->Data = e;
		newn->next = NULL;

		if (iCNT == 1)
		{
			Head = newn;
		}
		else
		{
			PNODE temp = Head;

			while (temp->next != NULL)
			{
				temp = temp->next;
			}

			temp->next = newn;
		}
	}
}

void SLL::Display()
{
	try
	{
		if (Head == NULL)
			throw 'E';

		Node *Temp = Head;
		cout << "\n\t EMPLOYEE :  \n\n\t";
		while (Temp != NULL)
		{
			cout << Temp->Data;
			Temp = Temp->next;

		}

	}
	catch (char ch)
	{
		cout << Empty();
	}
}
