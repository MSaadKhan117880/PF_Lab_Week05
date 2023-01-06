#include<iostream>
#include<cmath>
using namespace std;

float quadraticFormulaPlus ( float, float, float);
float quadraticFormulaMinus ( float, float, float);

int main()
{
	float a;
	float b;
	float c;
	float x1;
	float x2;

	cout << "Enter value of a: ";
	cin >> a;
	cout << "Enter value of b: ";
	cin >> b;
	cout << "Enter value of c: ";
	cin >> c;

	x1 = quadraticFormulaPlus (a, b, c);
	x2 = quadraticFormulaMinus (a, b, c);

	cout << "x = " << x1 <<endl;
	cout << "x = " << x2 <<endl;
	return 0;
}

float quadraticFormulaPlus ( float a, float b, float c)
{
	float x;
	float square_root;
	
	square_root = pow(b, 2) - 4*a*c;
	square_root = sqrt(square_root);
	x = (-b + square_root)/(2*a);
	return x;
}

float quadraticFormulaMinus ( float a, float b, float c)
{
	float x;
	float square_root;
	
	square_root = pow(b, 2) - 4*a*c;
	square_root = sqrt(square_root);
	x = (-b - square_root)/(2*a);
	return x;
}	
	
