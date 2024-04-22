#include <iostream>
using namespace std;

int main() {
	cout << "Calculating the volume of parallelepiped.\n";
	cout << "Please, enter the following data:\n";
	float length;
	float width;
	float height;
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;
	float volume = length * width * height;
	cout << "Parallelepiped's volume = " << volume;
	return 0;
}