#include <iostream>
using namespace std;

void Add(int * P1, int * P2);
void Sub(int * P1, int * P2);
void Pro(int * P1, int * P2);
void Div(int * P1, int * P2);

int main()
{
	int First = 0, Second = 0, Select;
	int * P1, *P2;
	P1 = &First;
	P2 = &Second;
	
		cout << "Enter First and Second Number = " << endl;
		cin >> First >> Second;
		cout << endl;
		cout << "Enter 1 for Addition" << endl;
		cout << "Enter 2 for Subtraction" << endl;
		cout << "Enter 3 for Multiplication" << endl;
		cout << "Enter 4 for Division" << endl;
		cout << "Anyother to Exit" << endl;
		cout << "Enter Operation Selection" << endl << endl;
		cin >> Select;
		if (Select == 1)
		{
			Add(P1, P2);
		}
		else if (Select == 2)
		{
			Sub(P1, P2);
		}
		else if (Select == 3)
		{
			Pro(P1, P2);
		}
		else if (Select == 4)
		{
			Div(P1, P2);
		}
		else
		{
			cout << "Exitted..." << endl;
		}


	system("pause>0");
	return 0;
}

void Add(int * P1, int * P2)
{
	cout << "Addition= " << *P1 + *P2 << endl;
}

void Sub(int * P1, int * P2)
{
	cout << "Subtraction= " << *P1 - *P2 << endl;
}

void Pro(int * P1, int * P2)
{
	cout << "Multiplication= " << *P1 * *P2 << endl;
}

void Div(int * P1, int * P2)
{
	if (&P1 != 0)
	{
		cout << "Division= " << *P1 / *P2 << endl;
	}
	else
	{
		cout << "Math Error" << endl;
	}
}
