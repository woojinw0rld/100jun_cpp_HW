#include <iostream>

using namespace std;

int main() {
	int num1, num2;

	do {
		cout << "입1력: ";
		cin >> num1;
	} while (num1 < 0);
	do {
		cout << "입2력: ";
		cin >> num2;
	} while (num2 > 10);

	cout << num1 + num2 << endl;
	return 0;
}