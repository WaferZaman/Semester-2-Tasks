#include <iostream>
using namespace std;

int find(int [],int , int );

int main()
{
	int Size = 0,Number=0;
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
	do
	{
		cout << "Enter The Number Which You Want To Find: " << endl;
		cin >> Number;
	} while (Number <= 0);

	cout << endl;
	if (find(Arr, Size, Number) != -1)
	{
		cout << "Number " << Number << " is at " << find(Arr, Size, Number) << endl;
	}
	else
	{
		cout << "Number  "<<Number<<" = " << find(Arr, Size, Number) << " So number not found..." << endl;
	}

	system("pause>0");
}

int find(int Arr[],int S, int T)
{
	if (S == 0)
	{
		return -1;
	}

	int middle = S / 2;

	if (Arr[middle] == T)
	{
		return middle;
	}
	bool lower = T < Arr[middle];
	int n = lower ? find(Arr, S, middle)
		: find(Arr + middle + 1, S - middle - 1,T);

	return n != -1 && !lower ? n + middle + 1 : n;
}
