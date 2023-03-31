#include <iostream>

using namespace std;

int main()
{
	//Write a C++ program to print number of values > 10 of a series of 10 numbers entered by the user.

	int tens = 0, n;
	cout << "Enter the numbers: " << endl;
	
	for (int i = 1; i <= 10; i++)
	{
		cin >> n;
		if (n > 10)
		{
			tens += 1;
		}
	}
	cout << "Numbers that are greater than 10 :" << tens << "  ";


	return 0;
}