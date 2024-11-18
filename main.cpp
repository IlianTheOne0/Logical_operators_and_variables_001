#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int uah;
	int kopecks;

	cout << "Hryvnia: ";
	cin >> uah;
	cout << "Kopecks: ";
	cin >> kopecks;

	int all = (uah * 100) + kopecks;
	int result = all / 100;

	cout << "Result: " << result << " hryvnia " << all % 100 << " kopecks" << endl;

	_getch();
	return 0;
}