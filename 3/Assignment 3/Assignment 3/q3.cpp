#include <iostream>
using namespace std;



class Polynomial
{
private:
	int * ptr;
	int n;
public:
	void create(int n)
	{
		ptr = new int[n];
	}

	void set()
	{
		do
		{
			cout << "Enter the Degree of Polynomial: ";
			cin >> n;
		} while (n <= 0);
		ptr = new int[n];
		for (int i = 0;i < n;i++)
		{
			cout << "Enter Coefficients of Polynomials: x^" << n - i << " ";
			cin >> ptr[i];
		}
	}

	void get()
	{
		for (int i = 0;i < n;i++)
		{
			if (i != (n - 1))
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
			}
			else
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ")";

			}
		}
		cout << endl;
	}

	Polynomial operator+(Polynomial c)
	{
		int l;
		if (n > c.n)
		{
			l = n;
		}
		else
		{
			l = c.n;
		}
		Polynomial temp;
		temp.create(l);
		int count = 0, count1 = 0;
		while (count == l);
		{
			if ((n - count) == (c.n - count1))
			{
				temp.ptr[count] = ptr[count] + c.ptr[count1];
				count++;
				count1++;
			}
			else if (n > c.n)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}

		return temp;
	}
	Polynomial operator-(Polynomial c)
	{
		int l;
		if (n > c.n)
		{
			l = n;
		}
		else
		{
			l = c.n;
		}
		Polynomial temp;
		temp.create(l);
		int count = 0, count1 = 0;
		while (count == l);
		{
			if ((n - count) == (c.n - count1))
			{
				temp.ptr[count] = ptr[count] - c.ptr[count1];
				count++;
				count1++;
			}
			else if (n > c.n)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}

		return temp;
	}

	Polynomial operator*(Polynomial c)
	{
		int l;
		if (n > c.n)
		{
			l = n;
		}
		else
		{
			l = c.n;
		}
		Polynomial temp;
		temp.create(l);
		int count = 0, count1 = 0;
		while (count == l);
		{
			if ((n - count) == (c.n - count1))
			{
				temp.ptr[count] = ptr[count] * c.ptr[count1];
				count++;
				count1++;
			}
			else if (n > c.n)
			{
				count++;
			}
			else
			{
				count1++;
			}
		}

		return temp;
	}

	void operator=(Polynomial c)
	{
		if (n > c.n)
		{
			for (int i = n;i = 0;i++)
			{
				ptr[i + 1] = c.ptr[i];
			}
			for (int i = 0;i < n;i++)
			{
				if (i != (n - 1))
				{
					cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
				}
				else
				{
					cout << " ( " << ptr[i] << "x^" << n - i << ")";

				}
			}
		}
		else if (n == c.n)
		{
			for (int i = n;i = 0;i++)
			{
				ptr[i] = c.ptr[i];
			}
			for (int i = 0;i < n;i++)
			{
				if (i != (n - 1))
				{
					cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
				}
				else
				{
					cout << " ( " << ptr[i] << "x^" << n - i << ")";

				}
			}
		}
		else
		{
			for (int i = n;i = 0;i++)
			{
				c.ptr[i + 1] = ptr[i];
			}
			for (int i = 0;i < n;i++)
			{
				if (i != (n - 1))
				{
					cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
				}
				else
				{
					cout << " ( " << ptr[i] << "x^" << n - i << ")";

				}
			}
		}

	}

	void operator+=(int n)
	{
		for (int i = 0;i < n;i++)
		{
			ptr[i] = ptr[i] + n;
		}
		for (int i = 0;i < n;i++)
		{
			if (i != (n - 1))
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
			}
			else
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ")";

			}
		}
	}

	void operator*=(int n)
	{
		for (int i = 0;i < n;i++)
		{
			ptr[i] = ptr[i] * n;
		}
		for (int i = 0;i < n;i++)
		{
			if (i != (n - 1))
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
			}
			else
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ")";

			}
		}
	}

	void operator-=(int n)
	{
		for (int i = 0;i < n;i++)
		{
			ptr[i] = ptr[i] - n;
		}
		for (int i = 0;i < n;i++)
		{
			if (i != (n - 1))
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ") + ";
			}
			else
			{
				cout << " ( " << ptr[i] << "x^" << n - i << ")";

			}
		}
	}
};


int main()
{
	Polynomial m1, m2;
	m1.set();
	m2.set();
	m1.get();
	m2.get();

	Polynomial m3 = m1 + m2;
	m3.get();
	Polynomial m4 = m1 - m2;
	m4.get();
	Polynomial m5 = m1 * m2;
	m5.get();
	m1 += 1;
	m1 -= 1;
	m1 *= 2;
	m1 = m2;

	system("pause>0");
	return 0;
}
