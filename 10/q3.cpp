#include<iostream>
#include<fstream>
#include<string>
using namespace std;


class User
{
public:
	string
		Name,
		ID,
		Password;
};


class Student :public User
{
private:
	int Total_Subjects,Total_Credits, Total_Credits_Earned,ss,sp;
	string *Subjects_Studying, *Subjects_Passed;
	float CGPA;
public:
	void Reg()
	{
		string
			command,
			name, password,
			inName, inPassword,
			registerName, registerPassword;
		ofstream g("registration.txt");
		if (!g.is_open())
		{
			cout << "could not open file\n";
			return 0;
		}
		cout << "\n\n\n"
			<< "New Username: ";
		getline(cin, registerName);
		cout << "New Password: ";
		getline(cin, registerPassword);
		g << registerName;
		g << '\n';
		g << registerPassword;
		g.close();
	}
	void get()
	{
		do
		{
			cout << "Enter Total Number of Subjects You are Studying: ";
			cin >> Total_Subjects;
		} while (Total_Subjects <= 0);
		do
		{
			cout << "Enter Number of Subjects You are Currently Studying: ";
			cin >> ss;
		} while (ss <= 0);
		do
		{
			cout << "Enter Number of Subjects You have Passed: ";
			cin >> sp;
		} while(sp <= 0);

		Subjects_Studying = new string[ss];
		Subjects_Passed = new string[sp];

		for (int i = 0;i < ss;i++)
		{
			cout << "Enter Subjects Number " << i + 1 << " Which You are Currently Studying";
			cin >> Subjects_Studying[i];
		}

		for (int i = 0;i < ss;i++)
		{
			cout << "Enter Subjects Number " << i + 1 << " Which You have passed";
			cin >> Subjects_Passed[i];
		}

		do
		{
			cout << "Enter Total Credit Hours: ";
			cin >> Total_Credits;
		} while (Total_Credits <= 0);

		do
		{
			cout << "Enter Attempted Credit Hours: ";
			cin >> Total_Credits_Earned;
		} while (Total_Credits_Earned <= 0);

		do
		{
			cout << "Enter CGPA: ";
			cin >> CGPA;
		} while (CGPA < 0||CGPA > 4);
	}
};

class Teacher :public User
{
private:
	int Total_Subs;
	string * Sub_Teach;
	int * Studs;
public:
	void get()
	{
		do
		{
			cout << "Enter Total number of Subjects Teaching: "
			cin >> Total_Subs;
		} while (Total_Subs <= 0);

		Sub_Teach = new int[Total_Subs];

		for (int i = 0;i < ss;i++)
		{
			cout << "Enter Name of Subjects Number " << i + 1 <<;
			cin >> Sub_Teach[i];
		}
	}
};