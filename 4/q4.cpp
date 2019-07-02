#include <iostream>
#include <string>
using namespace std;

void swapp(int *P1, int *P2);

int main()
{
	int numb = 0;
	int *iPtr = &numb;
	char word;
	char *cPtr = &word;
	string str;
	string *sPtr = &str;
	float deci;
	float *fPtr = &deci;
	cout << "Enter Interger" << endl;
	cin >> numb;
	cout << "Enter Character" << endl;
	cin >> word;
	cout << "Enter String" << endl;
	cin >> str;
	cout << "Enter float" << endl;
	cin >> deci;


	cout << "Integer = " << *iPtr << endl;
	cout << "Character = " << *cPtr << endl;
	cout << "String = " << *sPtr << endl;
	cout << "Float = " << *fPtr << endl << endl;

	cout << "Size of Integer = " << sizeof( *iPtr) << endl;
	cout << "Size of Character = " << sizeof( *cPtr) << endl;
	cout << "Size of String = " << sizeof( *sPtr) << endl;
	cout << "Size of  Float = " << sizeof ( *fPtr) << endl;


	system("pause>0");
	return 0;
}
