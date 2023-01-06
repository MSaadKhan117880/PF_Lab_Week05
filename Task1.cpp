#include<iostream>
#include<cmath>
using namespace std;

float FindHeight (float, float);

int main()
{
	float height;
	float base;
	float angle;

	cout << "Enter value of base: ";
	cin >> base;
	cout << "Enter value of angle in degrees: ";
	cin >> angle;

	height = FindHeight(base, angle);
	cout << "The Height is " << height << endl;
	
	return 0;
}

float FindHeight (float base, float angle)
{
	float height;
	float radian;
	
	radian = angle/57.2958;

	height = tan(radian) * base;
	return height;
}