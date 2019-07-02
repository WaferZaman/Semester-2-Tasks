#include <iostream>
using namespace std;


class Matrix
{
private:
	int size;
	int *ptr;
public:
	void get(int a)
	{
		size = a;
		ptr = new int[a];
		for (int i = 0;i < a;i++)
		{
			ptr[i] = i;
		}
	}

	void Disp()
	{
		for (int i = 0;i < size;i++)
		{
			cout << ptr[i] << " ";
		}
		cout << endl;
	}

	void operator[](int index)
	{
		
		if (index >= size)
		{
			cout << "Array Out of Bound";
		}
		else
		{
			cout << "Value= " << ptr[index];
		}
		cout << endl << endl;
	}
};



int main()
{
	int s = 0, i = 0;
	int Exit = 0;
	Matrix Arr;
	
	do
	{
		cout << "Enter Positive Integer for Size of Array:" << endl;
		cin >> s;
	} while (s <= 0);

	Arr.get(s);
	Arr.Disp();
	do
	{
		do
		{
			cout << "Enter A positive Index Number to Check: " << endl;
			cin >> i;
		} while (i <= 0);
			Arr[i];

		cout << "If You donot Want to Continue, Enter 0 to Exit!!!" << endl << endl;
		cin >> Exit;
	} while (Exit != 0);

	cout << "You Exitted!" << endl;

	system("pause>0");
	return 0;
}