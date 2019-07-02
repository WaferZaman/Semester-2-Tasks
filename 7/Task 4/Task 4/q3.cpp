#include <iostream>
using namespace std;

int Min(int[], int S);

void main()
{
	int Size = 0;
	do
	{
		cout << "Enter A Positive Number As Size of Array:" << endl;
		cin >> Size;
	} while (Size <= 0);

	int *Arr = new int[Size];
	for (int i = 0;i < Size;i++)
	{
		cout << "Enter Value Number " << i + 1 << ": " << endl;
		cin >> Arr[i];
	}
	cout << endl << endl;
	cout << "Minimum Element of Array is " << Min(Arr, Size);

	system("pause>0");
}

int Min(int Arr[], int S)
{
	if (S == 0)
	{
		return Arr[0];
	}
	else
	{
		if (Arr[S - 1] < Min(Arr, S - 1))
		{
			return Arr[S - 1];
		}
		else
		{
			return Min(Arr, S - 1);
		}
	}
}