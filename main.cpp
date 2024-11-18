#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double length;
	double width;
	double height;

	cout << "Calculating the volume of a pralelepiped" << endl << "Enter the initial data:" << endl;
	
	cout << "Length (cm) -> ";
	cin >> length;
	cout << "Width (cm) -> ";
	cin >> width;
	cout << "Height (cm) -> ";
	cin >> height;

	// Formula: V = a * b * h
	cout << "Volume: " << (length * width * height) << " cubic centimeters" << endl;

	_getch();
	return 0;
}