#include<iostream>
using namespace std;

void OddOrEven(int);

int main()
{
	cout << endl;

	int number;

	cout << "Enter a Five-Digit Number only: ";
	cin >> number;

	OddOrEven(number);

	cout << endl;
	return 0;
}

void OddOrEven(int number)
{
	int remainder;

	remainder = number % 2;
	if (remainder == 0)
	{
		cout << "The Number is Even." << endl;
	}
	if (remainder == 1)
	{
		cout << "The Number is Odd." << endl;
	}
}