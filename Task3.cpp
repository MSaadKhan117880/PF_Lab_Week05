#include<iostream>
using namespace std;

bool IsSymmetrical (int);

int main()
{
	int number;
      bool symmetrical;

	cout << "Enter a Three-Digit Number: ";
	cin >> number;
	
	symmetrical = IsSymmetrical (number);
	if (symmetrical == 1)
	{
	    cout << "The Number is Symmetrical." << endl;
	}
	if (symmetrical == 0)
	{
	    cout << "The Number is Not Symmetrical." << endl;
	}	

	return 0;
}

bool IsSymmetrical (int number)
{
      bool symmetry = true;
	int num1 = number/100;
	int num2 = (number%100)/10;
	int num3 = (number%100)%10;

	if ( num1 == num3)
	{
 	    return symmetry;
	}
	if ( num1 != num3)
	{
	    symmetry = false;
	    return symmetry;
	}
}

