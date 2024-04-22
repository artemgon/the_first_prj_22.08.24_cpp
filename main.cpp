#include <iostream>
using namespace std;

int main() {
	cout << "Calculating the length between two towns" << "\nPlease, enter the following data;\n";
	int map_scale;
	cout << "Map scale: ";
	cin >> map_scale;
	float length;
	cout << "The length between two towns on your map (cm): ";
	cin >> length;
	cout << "The length between two towns is: " << map_scale * length;
	return 0;
}