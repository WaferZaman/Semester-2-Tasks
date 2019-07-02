/*#include<iostream>
#include<math.h>
using namespace std;

void selection_S(int arr1[], int size)
{
	int Temp;
	cout << "Enter elements of the array to sort=" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0;i < size;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arr1[i] > arr1[j])
			{
				Temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = Temp;
			}
		}
	}
	cout << "Array after selection sort is=" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr1[i];
		cout << " ";
	}
	cout << endl;
}
void bubble_S(int arr1[], int size)
{
	int Temp;
	cout << "Enter elements of the array to sort=" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size - 1;j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				Temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = Temp;
			}
		}
	}
	cout << "Array after bubble sorting is=" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr1[i];
		cout << " ";
	}
	cout << endl;
}
void insertion_S(int arr1[], int size)
{
	int Temp;
	int j;
	cout << "Enter elements of the array to sort=" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0;i < size;i++)
	{
		Temp = arr1[i];
		j = i - 1;
		while (j >= 0 && arr1[j] > Temp)
		{
			arr1[j + 1] = arr1[j];
			j = j - 1;
		}
		arr1[j + 1] = Temp;
	}
	cout << "Array after insertion sort is=" << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr1[i];
		cout << " ";
	}
	cout << endl;
}
int main()
{
	int s;
	cout << "Please enter size of array=" << endl;
	cin >> s;
	int arr2[20];
	selection_S(arr2, s);
	bubble_S(arr2, s);
	insertion_S(arr2, s);
	system("pause>0");
}*/