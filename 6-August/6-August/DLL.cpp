#include "DLL.h"

DLL::DLL()
{
	Head=NULL;
	 cnt=0;
}

DLL::~DLL()
{
	PNODE temp = Head, navigate = NULL;

	while (temp != NULL)
	{
		navigate = temp;
		temp = temp->Next;
		delete navigate;
	}

}

void DLL::InsertFirst( int no)
{
	PNODE newn = new NODE;

	newn->Data = no;
	newn->Next = NULL;
	newn->Prev = NULL;

	if (Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn->Next = Head;
		Head->Prev = newn;
		Head = newn;
	}
	cnt++;
}

void DLL::InsertLast( int no)
{
	PNODE newn = new NODE;

	newn->Data = no;
	newn->Next = NULL;
	newn->Prev = NULL;

	if (Head == NULL)
	{
		Head = newn;
	}
	else
	{
		PNODE temp = Head;

		while (temp->Next != NULL)
		{
			temp = temp->Next;
		}
		
		temp->Next = newn;
		newn->Prev = temp;
	}
	cnt++;
}

void DLL::Insert_At_Pos( int no, int iPos)
{
	int Size = Count();

	if (iPos<1 || iPos>(Size + 1))
	{
		return;
	}

	if (iPos == 1)
	{
		InsertFirst(no);
	}
	else if (iPos == (Size + 1))
	{
		InsertLast(no);
	}
	else
	{
		PNODE temp = Head;

		for (int i = 1; i < iPos - 1; i++)
		{
			temp = temp->Next;
		}

		PNODE newn = new NODE;
		newn->Data = no;
		newn->Next = temp->Next;
		temp->Next = newn;
		temp->Next->Prev = temp;

		cnt++;
	}
}

void DLL::DeleteFirst()
{
	if (Head == NULL)
	{
		return;
	}


	if (Head->Next = NULL)
	{
		delete Head;
		Head = NULL;
	}
	else
	{
		PNODE temp = Head;
		Head = Head->Next;
		Head->Prev = NULL;
		delete temp;
	}
	cnt--;
}

void DLL::DeleteLast()
{
	if (Head == NULL)
	{
		return;
	}

	if (Head->Next=NULL)
	{
		delete Head;
		Head = NULL;
	}
	else
	{
		PNODE temp = Head;

		while (temp->Next->Next != NULL)
		{
			temp = temp->Next;
		}

		delete(temp->Next);
		temp->Next = NULL;
	}
	cnt--;
}

void DLL::Delete_At_Pos( int iPos)
{
	int Size = Count();

	if (iPos<1 || iPos> Size )
	{
		return;
	}

	if (iPos == 1)
	{
		DeleteFirst();
	}
	else if (iPos == Size)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = Head;
		PNODE target = NULL;

		for (int i = 1; i < iPos - 1; i++)
		{
			temp = temp->Next;
		}

		target = temp->Next;
		temp->Next = target->Next;
		target->Next->Prev = temp;
		cnt--;
	}
}

int DLL::Count()
{
	return cnt;
}

void DLL::Display()
{
	PNODE temp = Head;

	while (temp != NULL)
	{
		cout << temp->Data << "\t";
		temp = temp->Next;
	}
}

void DLL::Display_Reverse()
{
	PNODE temp = Head;
	while (temp->Next != NULL)
	{
		temp = temp->Next;
	}

	while (temp != NULL)
	{
		cout << temp->Data<<"\t";
		temp = temp->Prev;
	}

}

void DLL::SortRecords()
{
	PNODE temp1 = Head, temp2 = NULL;
	int temp=0;
	
		while (temp1 != NULL)
		{
			temp2 = temp1->Next;

			while (temp2 != NULL)
			{
				if ((temp1->Data) > (temp2->Data))
				{
					temp = temp1->Data;
					temp1->Data = temp2->Data;
					temp2->Data = temp;
				}
				temp2 = temp2->Next;
			}

			temp1=temp1->Next;
		}
	
}

void DLL::Modify( int no, int iPos)
{
	PNODE temp = Head;

	int Size = Count();

	if (iPos<1 || iPos> Size)
	{
		return;
	}

	for (int i = 1; i < iPos; i++)
	{
		temp = temp->Next;
	}

	temp->Data = no;

}
