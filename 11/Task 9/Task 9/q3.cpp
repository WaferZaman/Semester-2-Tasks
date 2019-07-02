#include <iostream>
#include <string>
using namespace std;

template <class t, class f>
class Baseball
{
private:
	t Name;
	f HomeRuns;
public:
	void setName(t T)
	{
		Name = T;
	}
	void setRuns(f T)
	{
		HomeRuns = T;
	}

	t getName()
	{
		return Name;
	}
	f getHR()
	{
		return HomeRuns;
	}
};


int main()
{
	Baseball<string, int>*b;
	int size;
	int run;
	string name;
	cout << "Enter Number of Players You wanna Enter:";
	cin >> size;
	b = new Baseball< string, int>[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Name of Player "<<i+1<<" : ";
		cin >> name;
		b[i].setName(name);
		cout << "Enter Number of Home Runs Hitted : ";
		cin >> run;
		b[i].setRuns(run);
	}
	
	for (int i = 0; i < size; i++)
	{
		cout << "For Player " << i + 1 << " : " << endl;
		cout << "Name: " << b[i].getName() << endl;
		cout << "Number of HomeRuns: " << b[i].getHR() << endl;
	}


	system("pause>0");
}
