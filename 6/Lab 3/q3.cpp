#include <iostream>
using namespace std;

enum Dish {
	Rice,
	Gravy,
	Sweet
};

struct Order {
	int Dish_No;
	int Servings;
};

int Calculate_Bill(Order S);

void main()
{
	char Again;
	int size = 0, Total_Bill=0;
	do
	{
		cout << "Enter Max number of Customers you want to Enter: ";
		cin >> size;
	} while ((size < 0)||(size>101));
	Order * S = new Order[size];
	int * Bill = new int [size];
	for (int i = 0, Total_Bill=0; i < size; i++)
	{
		cout << "Order Number" << i + 1 << endl << endl;
		do {
			do
			{
				cout << "Enter Dish Number: 0 for Rice, 1 for Gravy, 2 For Sweet" << endl;
				cin >> S[i].Dish_No;
			} while ((S[i].Dish_No < 0) || (S[i].Dish_No > 2) );
			do
			{
				cout << "Enter Servings" << endl;
				cin >> S[i].Servings;
			} while (S[i].Servings < 0);
			Total_Bill = Total_Bill + Calculate_Bill(S[i]);
			cout << "Do You Want to Order More? Y/N" << endl;
				cin >> Again;
		} while (Again == 'Y' || Again == 'y');
		cout << "Total Bill of Customer No" << i + 1 << " is Rs." << Total_Bill << endl << endl;
		Total_Bill = Bill[i];
	}

	system("pause>0");
}

int Calculate_Bill(Order S)
{
	if (S.Dish_No == Rice)
	{
		return 100 *S.Servings;
	}
	else if (S.Dish_No == Gravy)
	{
		return 70 * S.Servings;
	}
	else
	{
		return 50 * S.Servings;
	}
}
