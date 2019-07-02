#include <iostream>
#include <string>
using namespace std;

template <class t>
class Student
{
private:
	t Roll, Name, Section, Course[5];
public:
	void setName(t a)
	{
		Name = a;
	}
	void setRoll(t a)
	{
		Roll = a;
	}
	void setCourse(t a[])
	{
		for (int i = 0;i < 5;i++)
		{
			cout << "Enter Course Number " << i + 1 << " : ";
			Course[i] = a[i];
		}
	}
	void setSection(t a)
	{
		Section = a;
	}
	t getName()
	{
		return Name;
	}
	t getSection()
	{
		return Section;
	}
	t getRoll()
	{
		return Roll;
	}
	t getCourse()
	{
		return Course;
	}
};


int main()
{
	string str;
	Student <string> name;
	cout << "Enter Name: " << endl;
	cin >> str;
	name.setName(str);
	Student <string> roll;
	cout << "Enter Roll Number: " << endl;
	cin >> str;
	roll.setRoll(str);
	Student <string> sec;
	cout << "Enter Section: ";
	cin >> str;
	sec.setName(str);
	cout << "Name: " << name.getName() << endl;
	cout << "Roll Number: " << roll.getRoll() << endl;
	cout << "Section: " << sec.getRoll() << endl;



	system("pause>0");
}
