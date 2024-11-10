#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

void PrintLatterPattern(int Number)
{
	for (int i = 65; i <= 65+(Number - 1); i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(i);
		}
		cout << endl;	
	}
}

int main()
{
	PrintLatterPattern(ReadPositiveNumber("Eneter a Positive Number: "));

	return 0;
}