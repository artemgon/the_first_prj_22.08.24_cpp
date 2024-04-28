#include <iostream>
using namespace std;

int main() {
	float fraction;
	cout << "Please, enter some fraction(float type):";
	cin >> fraction;
	int hryven = int(fraction);
	cout << "It's " << hryven << " hryven and " << (fraction - hryven) * 100 << " kopiyok";
	return 0;
}