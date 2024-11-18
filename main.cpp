#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int in_day = 60 * 60 * 8;
	int number;
	int left[3]; // seconds minutes hours

	cout << "Enter the time spent at work (in seconds): ";
	cin >> number;

	if (number > in_day || number < 0) {
		cout << "Invalid values entered" << endl;
		break;
	}

	int second_number = in_day - number;

	left[0] = second_number % 60;
	left[1] = (second_number % 3600) / 60;
	left[2] = second_number / 3600;

	cout << "Time until the end of the working day: " << left[2] << " hours, " << left[1] << " minutes, " << left[0] << " seconds" << endl;

	_getch();
	return 0;
}