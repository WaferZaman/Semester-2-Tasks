#include <iostream>
#include <string>
using namespace std;

bool Pallindrom(string);

int main()
{
	string word;
	cout << "Enter Word : " << endl;
	cin >> word;

	if (Pallindrom(word) == true)
	{
		cout << word << " is a Pallindrom" << endl;
	}
	else
	{
		cout << word << " is not a Pallindrom" << endl;
	}

	system("pause>0");
}

bool Pallindrom(string s)
{
	int len = s.length();
	char start = s.at(0);
	char last = s.at(len-1);

	if (len > 1)
	{
		last = s.at(len-1);
	}

	if (start == last && len <= 2)
	{
		return true;
	}
	else if (start != last)
	{
		return false;
	}
	else
	{
		s = s.substr(1, s.size() - 2);
		return Pallindrom(s);
	}
}