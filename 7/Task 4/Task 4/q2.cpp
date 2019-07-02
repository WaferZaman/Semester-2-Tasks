#include <iostream>
using namespace std;

int Greatest_common_divisor(int x, int y);

void main()
{
	int Numb1 = 0,Numb2 = 0, HCF = 0;
	do
	{
		cout << "Enter First Non-Zero Positive Integer: " << endl;
		cin >> Numb1;
	} while (Numb1 <= 0);
	do
	{
		cout << "Enter Second Non-Zero Positive Integer: " << endl;
		cin >> Numb2;
	} while (Numb2 <= 0);

	HCF = Greatest_common_divisor(Numb1, Numb2);
	cout << "Greatest Common Divisor of " << Numb1 << " And " << Numb2 << " is (" << HCF << ")" << endl;

	system("pause>0");
}

int Greatest_common_divisor(int x, int y)
{
	if (y != 0)
	{
		return Greatest_common_divisor(y, x%y);
	}
	else
	{
		return x;
	}
}