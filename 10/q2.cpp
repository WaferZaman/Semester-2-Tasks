#include <iostream>
using namespace std;


class Time
{
private:
	int Hour;
	int Minutes;
	int Seconds;
public:
	void get()
	{
		do
		{
			cout << "Enter Hours: " << endl;
			cin >> Hour;
		} while (Hour <= 0 || Hour >= 24);
		do
		{
			cout << "Enter Minutes: " << endl;
			cin >> Minutes;
		} while ((Minutes <= 0 || Minutes >= 59));
		do
		{
			cout << "Enter Seconds: " << endl;
			cin >> Seconds;
		} while ((Seconds <= 0 || Seconds >= 59));
	}

	void Disp()
	{
		if (Hour < 10)
		{
			cout << "0" << Hour << " : ";
		}
		else if (Hour>=23)
		{
				cout << "Next Day	" << Hour << " : ";
		}
		else if (Hour < 0)
		{
				cout << "Previous Day	" << Hour<< " : ";
		}
		else
		{
			cout << Hour << " : ";
		}
		if (Minutes < 10)
		{
			cout << "0" << Minutes << " : ";
		}
		else
		{
			cout << Minutes << " : ";
		}
		if (Seconds < 10)
		{
			cout << "0" << Seconds << endl;
		}
		else
		{
			cout << Seconds << endl;
		}
		
	}

	Time operator+(Time t2)
	{
		Time t;
		t.Hour = Hour + t2.Hour;
		t.Minutes = Minutes + t2.Minutes;
		t.Seconds = Seconds + t2.Seconds;
		if (t.Seconds >= 60)
		{
			t.Seconds = t.Seconds - 60;
			t.Minutes = t.Minutes + 1;
		}
		if (t.Minutes >= 60)
		{
			t.Minutes = t.Minutes - 60;
			t.Hour = t.Hour + 1;
		}
		return t;
	}

	Time operator-(Time t2)
	{
		Time t;
		t.Hour = Hour - t2.Hour;
		t.Minutes = Minutes - t2.Minutes;
		t.Seconds = Seconds - t2.Seconds;
		if (t.Seconds <= 0)
		{
			t.Seconds = 60 - t.Seconds;
			t.Minutes = t.Minutes - 1;
		}
		if (t.Minutes <= 0)
		{
			t.Minutes = 60 - t.Minutes;
			t.Hour = t.Hour - 1;
		}
		return t;
	}

	Time operator*(Time t2)
	{
		Time t;
		t.Hour = Hour * t2.Hour;
		t.Minutes = Minutes * t2.Minutes;
		t.Seconds = Seconds * t2.Seconds;
		return t;
	}
	
	Time operator/(Time t2)
	{
		Time t;
		t.Hour = Hour / t2.Hour;
		t.Minutes = Minutes / t2.Minutes;
		t.Seconds = Seconds / t2.Seconds;
		return t;
	}

	Time operator--()
	{
		Time t;
		t.Hour = --Hour;
		t.Minutes = --Minutes;
		t.Seconds = --Seconds;
		return t;
	}

	Time operator--(int)
	{
		Time t;
		t.Hour = Hour--;
		t.Minutes = Minutes--;
		t.Seconds = Seconds--;
		return t;
	}

	Time operator++()
	{
		Time t;
		t.Hour = ++Hour;
		t.Minutes = Minutes;
		t.Seconds = Seconds;
		return t;
	}

	Time operator++(int)
	{
		Time t;
		t.Hour = Hour++;
		t.Minutes =	Minutes++;
		t.Seconds = Seconds++;
		return t;
	}
};



int main()
{
	Time T1,T2;
	T1.get();
	T1.Disp();
	T2.get();
	T2.Disp();

	Time T3 = T1 + T2;
	T3.Disp();
	Time T4 = T1 - T2;
	T4.Disp();
	Time T5 = T1 * T2;
	T5.Disp();
	Time T6 = T1 / T2;
	T6.Disp();
	Time T7 = ++T1;
	T7.Disp();
	Time T8 = T1++;
	T8.Disp();
	Time T9 = --T1;
	T9.Disp();
	Time T10 = T1--;
	T10.Disp();



	system("pause>0");
	return 0;
}