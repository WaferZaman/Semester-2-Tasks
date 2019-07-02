#include <iostream>
using namespace std;

int Sum(int n);

void main()
{
	int numb = 0;
	do
	{
		cout << "Enter a Positive Natural Number Greater than 0: " << endl;
		cin >> numb;
	} while (numb <= 0);

	cout << "Sum of Natural Numbers upto "<< numb <<" is: " << Sum(numb) << endl;

	system("pause>0");
}

int Sum(int n)
{
	if (n > 0)
	{
		return n + Sum(n - 1);
	}
	else
	{
		return 0;
	}
}