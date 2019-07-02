#include <iostream>
using namespace std;

void ROLL_DICE(int * Ptr);


int main()
{
	int arr[4] = { 0 };
	int * iPtr=arr;
	cout << "Enter Roll Number in format 18F-WXYZ" << endl;
	for (int i = 0;i < 4;i++)
	{
		cin >> iPtr[i];
	}
	cout << "Roll Number: 18F-";
	for (int i = 0;i < 4;i++)
	{
		cout << *(iPtr++);
	}
	cout << endl;
	*iPtr = arr[0] + arr[1] + arr[2] + arr[3];
	cout << "P1 : " << *iPtr << endl;
	for (int i = 1;i <= *iPtr;i++)
	{
		cout << "Value " << i <<" : ";
		ROLL_DICE(iPtr);
	}
	
	system("pause>0");
	return 0;
}


void ROLL_DICE(int * iPtr)
{
	cout << rand() % 6 + 1 << endl;
}