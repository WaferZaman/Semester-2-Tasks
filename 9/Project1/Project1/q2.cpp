#include <iosteam>
using namespace std;


class Matrix
{
private:
	int row, column;
	int * ptr;
public:
	void input()
	{
		cout << "Enter Number of Rows: " << endl;
		cin >> row;
		cout << "Enter Number of Columns: " << endl;
		cin >> column;
		int ** ptr = new int[row];
		for (int i = 0;i < row;i++)
		{
			ptr[i] = new *int[column];
		}
	}

};



int main()
{
	Matrix A;
	A.input();


	system("pause>0");
	return 0;
}