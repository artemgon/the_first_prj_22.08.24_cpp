#include <iostream>
using namespace std;

int main() {
	int seconds;
	cout << "Please, enter the time in seconds:";
	cin >> seconds;
	cout << "It's " << seconds / 3600 << " hours\n";
	cout << "It's " << seconds / 60 << " minutes\n";
	cout << "It's " << seconds << " seconds\n";
	return 0;
}