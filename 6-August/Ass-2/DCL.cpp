#include "DCL.h"

DCL::DCL()
{
	Head = NULL;
	Tail = NULL;
	cnt = 0;
}

DCL::~DCL()
{
	PNODE temp = Head, navigate = NULL;

	while (temp != NULL)
	{
		navigate = temp;
		temp = temp->Next;
		delete navigate;
	}

}

void DCL::InsertFirst(int no)
{
	PNODE newn = new NODE;

	newn->Data = no;
	newn->Next = NULL;
	newn->Prev = NULL;

	if (Head == NULL)
	{
		Head =Tail= newn;
	}
	else
	{
		newn->Next = Head;
		Head->Prev = newn;
		Head = newn;
	}
	Tail->Next = Head;
	Head->Prev = Tail;
	
	cnt++;
}

void DCL::InsertLast(int no)
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
		Tail->Next = newn;
		newn->Prev = Tail;
		Tail = newn;
	}
	Tail->Next = Head;
	Head->Prev = Tail;

	cnt++;
}

void DCL::Insert_At_Pos(int no, int iPos)
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

void DCL::DeleteFirst()
{
	if (Head == NULL)
	{
		return;
	}
	
	if (Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		PNODE temp = Head;
		Head = Head->Next;

		delete temp;
	}

	Tail->Next = Head;
	Head->Prev = Tail;
	cnt--;
}

void DCL::DeleteLast()
{
	if (Head == NULL)
	{
		return;
	}

	if (Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Tail = Tail->Prev;
		delete(Tail->Next);
	}
	Tail->Next = Head;
	Head->Prev = Tail;

	cnt--;
}

void DCL::Delete_At_Pos(int iPos)
{
	int Size = Count();

	if (iPos<1 || iPos> Size)
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

int DCL::Count()
{
	return cnt;
}

void DCL::Display()
{
	PNODE temp = Head;

	while (temp != NULL)
	{
		cout << temp->Data << "\t";
		temp = temp->Next;
	}
}

void DCL::Display_Reverse()
{
	PNODE temp = Head;
	while (temp->Next != NULL)
	{
		temp = temp->Next;
	}

	while (temp != NULL)
	{
		cout << temp->Data << "\t";
		temp = temp->Prev;
	}

}

void DCL::SortRecords()
{
	PNODE temp1 = Head, temp2 = NULL;
	int temp = 0;

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

		temp1 = temp1->Next;
	}

}

void DCL::Modify(int no, int iPos)
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
