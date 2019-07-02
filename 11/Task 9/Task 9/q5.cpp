#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	bool done = false;

	do
	{
		cout << "Enter First Number: ";
		cin >> a;

		cout << "Enter Second Number :";
		cin >> b;

		try
		{
			if (b == 0)
			{
				throw "Math Error! Division by Zero is not Possible! Try Again";
			}
			c = a / b;
			cout << "Answer= " << c << endl;
			done = true;
		}
		catch (char const* msg)
		{
			cout << msg << endl << endl;
		}
	} while (!done);
	system("pause>0");
}