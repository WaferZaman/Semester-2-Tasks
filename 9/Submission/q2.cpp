#include <iostream>
using namespace std;

class instance
{
private:
	static int count;

public:
	instance()
	{
		count++;
	}
	void show()
	{
		cout << "Class is Called total " << count << " times!" << endl;
	}
};
int instance :: count = 0;



int main()
{
	instance x, y, z;

	z.show();
	system("pause>0");
	return 0;
}