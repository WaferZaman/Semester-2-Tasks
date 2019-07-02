#include <iostream>
#include <string>
using namespace std;

enum Gender {
	Male,
	Female,
};

struct Student {
	int Roll_Number;
	string First_Name;
	string Last_Name;
	Gender Student_Gender;
};


void main()
{
	int Gen;
	int max_studs;
	cout << "Enter Number of Students You Want to Enter!" << endl;
	do
	{
		cin >> max_studs;
		cout << endl << endl;
	} while ((max_studs <= 1) && (max_studs >= 1000));
	Student*S = new Student[max_studs];

	for (int i = 0; i < max_studs; i++)
	{
		cout << "Student Number " << i + 1 << endl;
		cout << "First Name:";
		cin >> S[i].First_Name;
		cout << "Last Name:";
		cin >> S[i].Last_Name;
		do
		{
			cout << "Roll Number# 18F-XXXX" << endl << "18F-";
			cin >> S[i].Roll_Number;
		} while ((S[i].Roll_Number < 0)||(S[i].Roll_Number > 9999));
		do
		{
			cout << "Gender: (0 for male or 1 for female)";
			cin >> Gen;
		} while ((Gen != 0) && (Gen != 1));
		cout << endl << endl;
	}
	for (int i = 0; i < max_studs; i++)
	{
		if (Gen == 0)
		{
			S[i].Student_Gender = Male;
		}
		else
		{
			S[i].Student_Gender = Female;
		}
	}
	for (int i = 0; i < max_studs; i++)
	{
		cout << "Student Number " << i + 1 << endl;
		cout << "First Name:";
		cout << S[i].First_Name << endl;
		cout << "Last Name:";
		cout << S[i].Last_Name << endl;
		if (S[i].Roll_Number < 1000)
		{
			cout << "Roll Number# 18F-0";
			cout << S[i].Roll_Number << endl;
		}
		else
		{
			cout << "Roll Number# 18F- ";
			cout << S[i].Roll_Number << endl;
		}
			cout << "Gender:";
		if (S[i].Student_Gender = Male)
		{
			cout << "Male" << endl;
		}
		else
		{
			cout << "Female" << endl;
		}
		cout << endl << endl;
	}

	system("pause");
}