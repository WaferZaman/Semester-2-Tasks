#include <iostream>
using namespace std;

int main()
{
	int row = 0, column = 0;
	int temp = 0;
	do
	{
		cout << "Enter Positive Integer for Number of Rows: ";
		cin >> row;
	} while (row <= 0);
	do
	{
		cout << "Enter Positive Integer for Number of Columns: ";
		cin >> column;
	} while (column <= 0);
	int ** matrix = new int *[row];
	int ** ident = new int *[row];
	for (int i = 0;i < row;i++)
	{
		matrix[i] = new int[column];
		ident[i] = new int[column];
	}
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < column;i++)
		{
			cout << "Enter Values of Entry# " << i << " * " << j << endl;
			cin >> matrix[i][j];
			if ((column + 4) / 4 == 0)
			{
				ident[i][j] = 1;
			}
			else
			{
				ident[i][j] = 0;
			}
		}
	}
	temp = matrix[0][0];
	for (int i = 0;i < column;i++)
	{
		if (matrix[0][i] != 0)
		{
			matrix[0][i] = matrix[0][i] / temp;
			ident[0][i] = ident[0][i] / temp;
		}
		else
		{
			matrix[0][i] = 0;
			ident[0][i] = 0;
		}
	}
	for (int i = 1;i < row;i++)
	{
		temp = matrix[i][0];
		for (int j = 0;j < column;j++)
		{
			matrix[i][j] = matrix[i][j] - (temp*matrix[0][j]);
		}
	}
	for (int i = 0; i < row; i++)
	{
		temp = matrix[i][0];
		for (int j = 0;j < column;j++)
		{
			matrix[i][j] = matrix[i][j] - (temp*matrix[0][j]);
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0;j < column;j++)
		{
			cout << "Inverse=" << matrix[i][j] << " ";
		}
		cout << endl;
	}

	system("pause>0");
}