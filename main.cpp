#define _USE_MATH_DEFINES 
#include <iostream>
using namespace std;

int main() {
	float sphere_radius;
	cout << "Please, enter the sphere radius:";
	cin >> sphere_radius;
	float sphere_volume = (4 * M_PI * sphere_radius * sphere_radius * sphere_radius) / 3;
	cout << "Sphere_volume is: " << sphere_volume;
	return 0;
}