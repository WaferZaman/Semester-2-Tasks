#include <iostream>
using namespace std;

void swapp(int *P1, int *P2);

int main()
{
	int *P1, *P2;
	int arr[2] = { 0 };
	cout << "Enter Roll number in Format 18F-XXYY" << endl;
	cout << "Enter XX" << endl;
	do
	{
		cin >> arr[0];
		if (arr[0] > 100)
		{
			cout << "Enter again.." << endl;
		}
	} while (arr[0] >= 100);
	cout << "Enter YY" << endl;
	P1 = &arr[0];
	do
	{
		cin >> arr[1];
		if (arr[1] > 100)
		{
			cout << "Enter again.." << endl;
		}
	} while (arr[1] >= 100);
	P2 = &arr[1];
	if (*P1 < 10)
	{
		cout << "Roll Number: 18F-0" << *P1 << *P2 << endl;
	}
	else if (*P2 < 10)
	{
		cout << "Roll Number: 18F-" << *P1 <<"0"<< *P2 << endl;
	}
	else if ((*P1 < 10)&&(*P2<10))
	{
		cout << "Roll Number: 18F-0" << *P1 <<"0"<< *P2 << endl;
	}
	else
	{
		cout << "Roll Number: 18F-" << *P1 << *P2 << endl;
	}
	swapp(P1, P2);

	system("pause>0");
	return 0;
}

void swapp(int *P1, int *P2)
{
	cout << "P1: " << *P1 << " P2: " << *P2 << endl << endl;
	*P2 = *P1 + *P2;
	*P1 = *P2 - *P1;
	*P2 = *P2 - *P1;
	cout << "P1: " << *P1 << " P2: " << *P2 << endl;
	
}
