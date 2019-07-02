#include <iostream>
using namespace std;


class Matrix
{
private:
	int row, column;
	int ** ptr;
public:
	Matrix(int a,int b)
	{
		row = a;
		column = b;
		ptr = new int*[row];
		for (int i = 0;i < row;i++)
		{
			ptr[i] = new int[column];
		}
		for(int i=0;i<row;i++)
		{
			for (int j = 0;j < column;j++)
			{
				ptr[i][j] = 0;
			}
		}

	}
//	Matrix()
//	{
//
//	};
	void input()
	{
		cout << "Enter Values:" << endl;
		for (int i = 0;i < row;i++)
		{
			for (int j = 0;j < column;j++)
			{
				cin >> ptr[i][j];
			}
		}
	}
	 int operator==(Matrix S)
	{
		if ((row == S.row) && (column == S.column))
		{
			return 1;
		}
		return 0;
	}

	Matrix operator+(Matrix S)
	{
		Matrix temp(S.row,S.column);
		for (int i = 0;i < row;i++)
		{
			for (int j = 0;j < column;j++)
			{
				temp.ptr[i][j] = ptr[i][j] + S.ptr[i][j];
			}
		}
		return temp;
	}

	Matrix operator-(Matrix S)
	{
		Matrix temp(S.row, S.column);
		for (int i = 0;i < row;i++)
		{
			for (int j = 0;j < column;j++)
			{
				temp.ptr[i][j] = ptr[i][j] - S.ptr[i][j];
			}
			temp.row = row;
			temp.column = column;
		}
		return temp;
	}

	Matrix operator*(Matrix S)
	{
		Matrix temp(S.row,S.column);
		for (int i = 0;i < row;i++)
		{
			for (int j = 0;j < column;j++)
			{
				for (int k = 0;k < column;k++)
				{
					temp.ptr[i][j] = temp.ptr[i][j] + ptr[i][k] * S.ptr[k][j];
				}
			}
		}
		return temp;

	}
	void show()
	{
		for (int i = 0;i < row;i++)
		{
			for (int j = 0;j < column;j++)
			{
				cout << ptr[i][j] << " ";
			}
			cout << endl;
		}
	}
};



int main()
{
	int x = 0, y = 0;
	cout << "Enter number of Rows:";
	cin >> x;
	cout << "Enter number of Columns:";
	cin >> y;
	Matrix m1(x,y), m2(x, y), m3(x, y), m4(x, y), m5(x, y);
	m1.input();
	m2.input();

	if (m1 == m2)
	{
		m3 = m1 + m2;
		m4 = m1 - m2;
		m5 = m1 * m2;
		cout << "Addition of matrices: " << endl;
		m3.show();
		cout << "Subtraction of matrices: " << endl;
		m4.show();
		cout << "Multiplication of matrices: " << endl;
		m5.show();
	}
	else
	{
		cout << "Order of the input matrices is not identical" << endl;
	}

	system("pause>0");
	return 0;
}