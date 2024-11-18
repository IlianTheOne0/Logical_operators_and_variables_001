#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <math.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int radius;

	cout << "Calculating the volume of a sphere" << endl << "Enter the initial data:" << endl;

	cout << "Sphere radius (m) -> ";
	cin >> radius;
	
	// Formula: (4/3) * pi * R^3
	cout << "The volume of the sphere is " << (4.0 / 3.0) * M_PI * pow(radius, 3) << " m^3" << endl;

	_getch();
	return 0;
}