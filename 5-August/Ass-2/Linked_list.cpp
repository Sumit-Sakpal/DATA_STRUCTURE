#include"Linked_list.h"

SLL::SLL()
{
	Head = NULL;
	cnt = 0;
}
void SLL::create_list(int data)
{
	PNODE newn = new NODE;
	newn->Data = data;
	newn->next = NULL;

	if (Head == NULL)
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
	cnt++;
}
void SLL::Split(SLL&obj, PNODE&Even, PNODE&Odd)
{
	PNODE temp = Head;
	PNODE Hold = NULL;
	int iCnt = 0;
	while (temp != NULL)
	{
		iCnt++;
		if (iCnt %2!=0)
		{
			if (Odd == NULL)
			{
				Odd = temp;
				Hold = Odd->next;
				Odd->next = NULL;
			}
			else
			{
				PNODE T = Odd;

				while (T->next != NULL)
				{
					T = T->next;
				}

				T->next = temp;
				Hold = T->next->next;
				T->next->next = NULL;

			}
			temp = Hold;
		}
		else
		{
			if (Even == NULL)
			{
				Even = temp;
				Hold = Even->next;
				Even->next = NULL;
			}
			else
			{
				PNODE T = Even;

				while (T->next != NULL)
				{
					T = T->next;
				}

				T->next = temp;
				Hold = T->next->next;
				T->next->next = NULL;

			}
			temp = Hold;
		}

	}
	Head = NULL;
}

void SLL::Display()
{
	PNODE temp = Head;

	while (temp != NULL)
	{
		cout << temp->Data<<"\t";
		temp=temp->next;
	}
}

void SLL::Display(PNODE ptr)
{
	PNODE temp = ptr;
	cout << "\n";
	while (temp != NULL)
	{
		cout << temp->Data << "\t";
		temp = temp->next;
	}

}