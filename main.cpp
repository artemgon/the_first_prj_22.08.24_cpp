#include <iostream>
using namespace std;

int main() {
	int banknotes;
	cout << "Please, enter the quantity of banknotes: ";
	cin >> banknotes;
	int coins;
	cout << "Please, enter the quantity of coins: ";
	cin >> coins;
	banknotes += (coins / 100);
	coins = (coins / 10 % 10) * 10 + coins % 10;
	cout << banknotes << " hryven" << " " << coins << " kopiyok ";
	return 0;
}