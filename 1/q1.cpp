#include<iostream>
#include<string>
using namespace std;

void  GenerateCode(int* (P1), int*(P2), char* (line));
void  Decoder(int* (P1), int*(P2), char* (line));

int main()
{
	int a = 4, b = 10;
	int *P1 = &a;
	int *P2 = &b;
	char ch[] = "Hello World!";
	char *line = ch;
	cout << "Orignal line: " << line << endl;
	GenerateCode(P1, P2, line);
	cout << "Encoded line: " << line << endl;
	Decoder(P1, P2, line);
	cout << "Decoded line: " << line << endl;
	system("pause>0");
	return 0;
}

void  GenerateCode(int* (P1), int*(P2), char* (line))
{

	for (int i = 0; line[i] != '\0'; i++)
	{
		if ((*(line + i) > 96) && (*(line + i) < 123))
		{
			if (*(line + i) < 114)
			{
				*(line + i) = *(line + i) + *P2;
			}
			else
			{
				*(line + i) = ((*(line + i) + *P2) - 122) + 96;
			}
		}
		else if ((*(line + i) > 64) && (*(line + i) < 91))
		{
			if (*(line + i) < 86)
			{
				*(line + i) = *(line + i) + *P1;
			}
			else
			{
				*(line + i) = ((*(line + i) + *P1) - 90) + 64;
			}
		}
		else
		{
			*(line + i) = *(line + i);
		}
	}
}
void  Decoder(int* P1, int*P2, char* line)
{

	for (int i = 0; line[i] != '\0'; i++)
	{
		if ((*(line + i) > 96) && (*(line + i) < 123))
		{
			if (*(line + i) > 106)
			{
				*(line + i) = *(line + i) - *P2;
			}
			else
			{
				*(line + i) = 123 - (*P2 - (*(line + i) - 97));
			}
		}
		else if ((*(line + i) > 64) && (*(line + i) < 91))
		{
			if (*(line + i) > 68)
			{
				*(line + i) = *(line + i) - *P1;
			}
			else
			{
				*(line + i) = 91 - (*P1 - (*(line + i) - 65));
			}
		}
		else
		{
			*(line + i) = *(line + i);
		}
	}
}