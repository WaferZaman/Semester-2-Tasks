#include <iostream>
using namespace std;

void Star(int num, int size);

int main()
{
	int Numb = 0;
	cout << "Enter A Positive Number: ";
	cin >> Numb;
	Star(1, Numb);
	system("pause>0");
}








void Star(int num,int size)
{
	if (num > size)
	{
		return;
	}
	else 
	{
		for (int q = 0; q < num; q++)
		{
			cout << "*";
		}
		cout << endl;

		Star(num+1, size);
		for (int q = 1; q < num; q++)
		{
			cout << "*";
		}

		cout << endl;
	}
}
