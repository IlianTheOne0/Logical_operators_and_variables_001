#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int in_day = 60 * 60 * 24;
	int number;
	int passed[3]; // seconds minutes hours
	int left[3]; // seconds minutes hours

	cout << "Enter the time elapsed since the beginning of the day (in seconds): ";
	cin >> number;

	if (number > in_day || number < 0) {
		cout << "Invalid values entered" << endl;
	}

	passed[0] = number % 60;
	passed[1] = (number % 3600) / 60;
	passed[2] = number / 3600;

	int second_number = in_day - number;

	left[0] = second_number % 60;
	left[1] = (second_number % 3600) / 60;
	left[2] = second_number / 3600;

	cout << "Current time: " << passed[2] << " hours, " << passed[1] << " minutes, " << passed[0] << " seconds" << endl;
	cout << "Time left until midnight: " << left[2] << " hours, " << left[1] << " minutes, " << left[0] << " seconds" << endl;

	_getch();
	return 0;
}
