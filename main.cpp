#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int year;
	
	cout << "Enter the year: ";
	cin >> year;

	int days = 365 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
	cout << "The number of days in the year " << year << " is " << days << endl;

	_getch();
	return 0;
}