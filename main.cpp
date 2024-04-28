#include <iostream>
using namespace std;

int main() {
	cout << "Calculating the run velocity";
	int length;
	cout << "\nPlease, enter the distance length(m):";
	cin >> length;
	float time;
	cout << "Please, enter the time(min.s):";
	cin >> time;
	cout << "Distance: " << length;
	float seconds = int(time) * 60 + (time - int(time)) * 100;
	cout << "\nTime: " << seconds;
	cout << "\nThe velocity is: " << (length/seconds) * 3.6 << " km/h";
	return 0;
}