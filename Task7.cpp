#include<iostream>
using namespace std;

int main()
{
	float filled = 0;
	int contribute1;
	int contribute2;
	float overflow;
	int x = 1;

	int V;
	int P1;
	int P2;
	float H;

	cout << "Enter the Volume of the Pool (1-10,000): ";
	cin >> V;
	cout << "Enter the Flow Rate of First Pipe (1-5000): ";
	cin >> P1;
	cout << "Enter the Flow Rate of Second Pipe (1-5000): ";
	cin >> P2;
	cout << "Enter the absent hours of the Worker (1-24): ";
	cin >> H;

	filled = (filled + P1 + P2) * H;

	contribute1 = ((P1 * H) * 100.0) / filled;
	contribute2 = ((P2 * H) * 100.0) / filled;

	if (filled < V)
	{
		cout << "The Worker was Absent for " << H << " hours." << endl;
		cout << "The pool is " << (filled * 100.0) / V << "% full. " << endl;
		cout << "The Fisrt Pipe Contributed " << contribute1 << "%" << endl;
		cout << "The Second Pipe Contributed " << contribute2 << "%" << endl;
	}
	if (filled > V)
	{
		overflow = (filled - V);
		cout << "For " << H << " hours the pool overflows with " << overflow << " litres. " << endl;
	}


}