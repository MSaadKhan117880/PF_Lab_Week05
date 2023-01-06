#include<iostream>
using namespace std;

void time(int, int);

int main()
{
	int hours;
	int minutes;

	cout << "Enter Hours: ";
	cin >> hours;
	cout << "Enter Minutes: ";
	cin >> minutes;

	time(hours, minutes);

	cout << endl;
	return 0;
}

void time(int hrs, int min)
{
	int Min;
	Min = min;
	if (min >= 45)
	{
		hrs = hrs + 1;
		if (hrs >= 23)
		{
			hrs = 0;
		}
		min = min + 15;
		Min = min - 60;
		cout << hrs << " : " << Min << endl;
	}
	if (min < 45)
	{
		min = min + 15;
		cout << hrs << " : " << min << endl;
	}

}