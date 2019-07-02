#include <iostream>
using namespace std;



class Rational_Numbers
{
private:
	int Num;
	int Denom;
	int N;
	int D;
public:
	void Input()
	{
		cout << "Enter Value of Numerator: ";
		cin >> Num;
		do
		{
			cout << "Enter Value of Denominator: ";
			cin >> Denom;
		} while (Denom <= 0);
		cout << "Rational Number= " << Num << "/" << Denom << endl;
		int i = 1;
		while ((Num / i == 0) && (Denom / i == 0))
		{
			if ((Num / i == 0) && (Denom / i == 0))
			{
				N = Num / i;
				D = Denom / i;
				cout << "Reduced form= " << N << "/" << D;
			}
			else
			{
				i++;
			}
		}
	}

	Rational_Numbers operator+(Rational_Numbers obj)
	{
		Rational_Numbers temp;
		temp.N = (((((D * obj.D)/D)*N) + (D * obj.D) / obj.D)*obj.N);
		temp.N = D * obj.D;
		return temp;
	}

	Rational_Numbers operator-(Rational_Numbers obj)
	{
		Rational_Numbers temp;
		temp.N = (((((D * obj.D) / D)*N) + (D * obj.D) / obj.D)*obj.N);
		temp.N = D * obj.D;
		return temp;
	}

	Rational_Numbers operator/(Rational_Numbers obj)
	{
		Rational_Numbers temp;
		temp.N = N * obj.D;
		temp.N = D * obj.N;
		return temp;
	}

	Rational_Numbers operator *(Rational_Numbers obj)
	{
		Rational_Numbers temp;
		temp.N = N * obj.N;
		temp.N = D * obj.D;
		return temp;
	}

	Rational_Numbers operator<(Rational_Numbers obj)
	{
		Rational_Numbers temp;
		if (N / D < obj.N / obj.D)
		{
			temp.N = N;
			temp.D = D;
		}
		else
		{
			temp.N = obj.N;
			temp.D = obj.D;
		}
		return temp;
	}

	Rational_Numbers operator>(Rational_Numbers obj)
	{
		Rational_Numbers temp;
		if (N / D > obj.N / obj.D)
		{
			temp.N = N;
			temp.D = D;
		}
		else
		{
			temp.N = obj.N;
			temp.D = obj.D;
		}
		return temp;
	}

	void show()
	{
		cout << "Answer= " << N << " / " << D << endl;
	}

};



int main()
{
	Rational_Numbers m1, m2;
	m1.Input();
	m2.Input();
	Rational_Numbers m3 = m1 + m2;
	m3.show();
	Rational_Numbers m4 = m1 - m2;
	m4.show();
	Rational_Numbers m5 = m1 / m2;
	m3.show();
	Rational_Numbers m4 = m1 * m2;
	m4.show();
	Rational_Numbers m6 = m1 < m2;
	m6.show();

	system("pause>0");
	return 0;
}