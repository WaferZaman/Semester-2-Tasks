#include <iostream>
using namespace std;

void sum(cordinateA var1, cordinateB var2)
{
	cout << var1.x + var2.y;
}

class cordinateA
{
private:
	int x, y;

public:
	cordinateA(int x = 0, int y = 0)
	{
		x = x;
		y = y;
		this->x = x;
		this->y = y;
	}
	friend void sum(cordinateA, cordinateB);
};

class cordinateB
{
private:
	int x, y;

public:
	cordinateA(int x = 0, int y = 0)
	{
		x = a;
		y = b;
	}
	friend void sum(cordinateA, cordinateB);
};

void main()
{
	cordinateA a;
	cordinateB b;
	sum(a, b);


	_getch();
}