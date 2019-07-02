#include <iostream>
using namespace std;

template <class T>
T isPrime(T num) {

	int i = 2;

	while (i <= num / 2) {
		if (num%i == 0)
			return 0;
		else
			i++;
	}

	return 1;
}


int main() {
	int a;
	cout << "Enter the Range to which you want to check prime Numbers: ";
	cin >> a;
	cout << "Prime Numbers: ";
	for (int i = 1;i <= a;i++)
	{
		if (isPrime<int>(i) == 1)
		{
				cout << i << " ";
		}
		
	}
	system("pause>0");
	return 0;
}