#include<iostream>
using namespace std;

int main()
{
	int row = 0, column = 0;
	int **P = NULL;
	int **Transpose = NULL;

	cout << "\tEnter no of row :";
	cin >> row;
	cout << "\tEnter no of column :";
	cin >> column;
	cout <<"\tDimension :" << row << " " << column;

	//memory allocation for rows
	P = new int*[row];
	//memory allocation for columns
	
	for (int i = 0; i < row; i++)
	{
		P[i] = new int[column];
	}

	cout << "\n\tEnter the elements :";
	for (int i = 0; i < row; i++)
	{
		
		for (int j = 0; j < column; j++)
		{
			cin >> P[i][j];
			cout << "\t";
		}
	}

	cout << "\n\tArray elements :\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<<"\t" <<P[i][j];
		}
		cout << "\n";
	}

	//memory allocation for rows
	Transpose = new int*[row];
	//memory allocation for columns

	for (int i = 0; i < row; i++)
	{
		Transpose[i] = new int[column];
	}

	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++) 
		{
			Transpose[j][i] = P[i][j];
		}

	cout << "\n\tTranspose elements :\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "\t" << Transpose[i][j];
		}
		cout << "\n";
	}

	for (int i = 0; i < row; i++)
	{
		delete P[i];
	}
	delete P;

	for (int i = 0; i < row; i++)
	{
		delete Transpose[i];
	}
	delete Transpose;

	cout << "\n\n";
	return 0;
}