#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Please, enter the year: ";
	cin >> year;
	bool condition = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	int days = 365 + condition;
	cout << "In " << year << " year = " << days << " days";
	return 0;
}