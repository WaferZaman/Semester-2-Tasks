#include<iostream>
using namespace std;
int main()
{
	int ***arr = new int **[4];
	for (int i = 0;i < 4;i++)
	{
		arr[i] = new int*[5];
		for (int j = 0;j < 5;j++)
		{
			arr[i][j] = new int[10];
		}
	}
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			for (int k = 0;k < 10;k++)
			{
				cout << "arr [" << i << "]" << "[" << j << "]" << "[" << k << "] = ";
				cin >> arr[i][j][k];
			}
		}
	}
	cout << "Now the output is :\n";
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			for (int k = 0;k < 10;k++)
			{
				cout << "arr [" << i << "]" << "[" << j << "]" << "[" << k << "] = " << arr[i][j][k] << endl;
			}
		}
	}
	delete[]arr;
	system("pause>0");
}

