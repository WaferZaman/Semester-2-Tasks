#include <iostream>
#include <string>
using namespace std;

enum Card {
	Platinum,
	Gold,
	Silver,
};
enum disc{
	p = 10,
g = 7,
s = 4,
};

enum Day {
	Monday,
Tuesday,
Wednessday,
Thursday,
Friday,
Saturday,
Sunday,
};

int Discount(int D,int C);

void main()
{
	int discount = 0,Amount=0;
	int A, type;
	do
	{
		cout << "Enter Card Type: " << endl;
		cout << "0 for Platinum/1 for Gold/2 for Silver" << endl;
		cin >> type;
	} while ((type <-10) || (type >3));
	do
	{
		cout << "Enter Day of Week 0.Monday,1.Tuesday,....7,Sunday" << endl;
		cin >> A; 
	} while ((A < -1) || (A > 8));
	cout << "Enter Total Amount: " << endl;
	cin >> Amount;
	cout << endl << endl;
	if (type == Platinum)
	{
		discount = (Amount*Discount(A,p));
		cout << "Discounted Amount: " <<Amount- discount<< endl;
	}
	else if (type == Gold)
	{
		discount =(Amount*Discount(A,g));
		cout << "Discounted Amount: " << Amount - discount << endl;
	}
	else
	{
		discount =(Amount*Discount(A,s));
		cout << "After Discounted Amount is: " <<Amount - discount << endl;
	}

	system("pause>0");
}


int Discount(int D,int C)
{
	if (D == Monday)
	{
		return (D*C)/100;
	}
	else if (D==Tuesday)
	{
		return (D*C)/100;
	}
	else if (D == Wednessday)
	{
		return (D*C)/100;
	}
	else if (D == Thursday)
	{
		return (D*C)/100;
	}
	else if (D == Friday)
	{
		return (D*C)/100;
	}
	else if (D == Saturday)
	{
		return (D*C)/100;
	}
	else
	{
		return (D*C)/100;
	}
}