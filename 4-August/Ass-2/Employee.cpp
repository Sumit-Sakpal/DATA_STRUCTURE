#include "Employee.h"

Employee::Employee()
{
	Head = NULL;
}

void Employee::Create(int no)
{
	int iCNT = 0;
	int NO = 0;
	char nm[10];

	for (iCNT = 1; iCNT <= no; iCNT++)
	{
		cout << "\t Enter Emp ID : ";
		cin >> NO;

		cout << "\t Enter Emp Name : ";
		cin >> nm;

		PNODE newn = new NODE;
		newn->Data = NO;
		strcpy(newn->Name, nm);
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

void Employee::Display()
{
	try
	{
		if (Head == NULL)
			throw 'E';

		Node *Temp = Head;
		cout << "\n\t EMPLOYEE :  \n\n\t";
		while (Temp != NULL)
		{
			cout <<" Emp_ID :"<<Temp->Data<<"\t" ;
			cout <<" Emp_Name :" << Temp->Name << "\n\t";
			Temp = Temp->next;

		}

	}
	catch (char ch)
	{
		cout << Empty();
	}
}
