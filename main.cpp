#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int scale;
	double distance;

	cout << "Calculate the distance between settlements" << endl << "Enter the initial data:" << endl;

	cout << "Map scale (number of kilometers in one centimeter) -> ";
	cin >> scale;
	cout << "Distance between points representing settlements (cm) -> ";
	cin >> distance;

	cout << "The distance between the settlements is " << (scale * distance) << " km" << endl;

	_getch();
	return 0;
}