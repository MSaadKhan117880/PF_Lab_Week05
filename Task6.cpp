#include<iostream>
using namespace std;

void Convert(int);

int main()
{
	int number;

	cout << "Enter a Number: ";
	cin >> number;

	Convert(number);

	return 0;
}

void Convert(int number)
{
	int mod;
	int div;
	mod = number % 10;
	div = number / 10;
	if (number <= 10)
	{
		if (number == 1)
		{
			cout << "One" << endl;
		}
		if (number == 2)
		{
			cout << "Two" << endl;
		}
		if (number == 3)
		{
			cout << "Three" << endl;
		}
		if (number == 4)
		{
			cout << "Four" << endl;
		}
		if (number == 5)
		{
			cout << "Five" << endl;
		}
		if (number == 6)
		{
			cout << "Six" << endl;
		}
		if (number == 7)
		{
			cout << "Seven" << endl;
		}
		if (number == 8)
		{
			cout << "Eight" << endl;
		}
		if (number == 9)
		{
			cout << "Nine" << endl;
		}
		if (number == 10)
		{
			cout << "Ten" << endl;
		}
	}

	if (number >= 20)
	{
		if (div == 2)
		{
			cout << "Twenty ";
		}
		if (div == 3)
		{
			cout << "Thirty ";
		}
		if (div == 4)
		{
			cout << "Forty ";
		}
		if (div == 5)
		{
			cout << "Fifty ";
		}
		if (div == 6)
		{
			cout << "Sixty ";
		}
		if (div == 7)
		{
			cout << "Seventy ";
		}
		if (div == 8)
		{
			cout << "Eighty ";
		}
		if (div == 9)
		{
			cout << "Ninty ";
		}
		if (mod == 1)
		{
			cout << "One" << endl;
		}
		if (mod == 2)
		{
			cout << "Two" << endl;
		}
		if (mod == 3)
		{
			cout << "Three" << endl;
		}
		if (mod == 4)
		{
			cout << "Four" << endl;
		}
		if (mod == 5)
		{
			cout << "Five" << endl;
		}
		if (mod == 6)
		{
			cout << "Six" << endl;
		}
		if (mod == 7)
		{
			cout << "Seven" << endl;
		}
		if (mod == 8)
		{
			cout << "Eight" << endl;
		}
		if (mod == 9)
		{
			cout << "Nine" << endl;
		}
	}

	if (number >= 11)

	{
		if (number == 11)
		{
			cout << "Eleven" << endl;
		}
		if (number == 12)
		{
			cout << "Twelve" << endl;
		}
		if (number == 13)
		{
			cout << "Thirteen" << endl;
		}
		if (number == 14)
		{
			cout << "Fourteen" << endl;
		}
		if (number == 15)
		{
			cout << "Fifteen" << endl;
		}
		if (number == 16)
		{
			cout << "Sixteen" << endl;
		}
		if (number == 17)
		{
			cout << "Seventeen" << endl;
		}
		if (number == 18)
		{
			cout << "Eighteen" << endl;
		}
		if (number == 19)
		{
			cout << "Nineteen" << endl;
		}
	}
}