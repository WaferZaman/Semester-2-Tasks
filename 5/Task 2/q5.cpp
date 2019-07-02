#include <iostream>
#include<cstdlib>
using namespace std;

int diagonal(int* (ptr), int col);

int main()
{
	srand(time_t(NULL));
	int arr[3][3] = { 0 };
	int *ptr = &arr[0][0];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				*(ptr + i * 3 + j) = rand() % 16;
			}
		}
		cout << "The is the 2D 3x3 Array generated by the Computer" << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << *(ptr + i * 3 + j) << "\t";
			}
			cout << endl;
		}
		cout << "Diagonals are: ";
			for (int i = 0; i < 3; i++)
			{
				cout << diagonal(ptr, i) << " , ";
			}
	system("pause>0");
	return 0;
}

int diagonal(int* (ptr), int col)
{
	int x = 0;
	for (int i = 0; i <= col; i++)
	{
		x = *(ptr + i * 3 + i);
	}
	return x;
}