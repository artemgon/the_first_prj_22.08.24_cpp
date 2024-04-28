#include <iostream>
using namespace std;

int main() {
	int days;
	cout << "Please, type the quantity of days: ";
	cin >> days;
	int days_2 = days % 7;
	int weeks = (days - days_2) / 7;
	cout << "The result is: " << weeks << " weeks and " << days_2 << " days";
	return 0;
}