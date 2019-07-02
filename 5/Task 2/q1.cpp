#include <iostream>
using namespace std;
int * input();
int main()
{
	int *ptr1, *ptr2;
	int arr[3][3];
	int sm = 0;
	ptr1 = input();
	ptr2 = input();
	for (int i = 0;i < 3;i++)
	{

		for (int k = 0;k < 3;k++)
		{
			sm = 0;
			for (int j = 0;j < 3;j++)
			{
				sm += (*(ptr1 + (i * 3) + j))*(*(ptr2 + (j * 3) + k));
			}
			arr[i][k] = sm;
		}

	}
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	system("pause>0");
	return 0;
}
int * input()
{
	int *ptr;
	cout << "Enter a 3 x 3 Matrix:\n ";
	ptr = new int[9];
	for (int i = 0;i < 9;i++)
		cin >> *(ptr + i);
	return ptr;
}