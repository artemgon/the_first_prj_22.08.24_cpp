#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float sphere_radius;
	cout << "Please, enter the sphere radius:";
	cin >> sphere_radius;
	float sphere_volume = 4 / 3 * M_PI * sphere_radius;
	cout << "Sphere_volume is: " << sphere_volume;
	return 0;
}