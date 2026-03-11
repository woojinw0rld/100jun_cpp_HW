#include <iostream>

using namespace std;

int main(){
	int num1, num2;
	int fst, scen, ther;
	cin >> num1 >> num2;
	fst = num2 / 100;
	scen = (num2 / 10)%10;
	ther = num2 % 10;
	cout << num1 * ther << endl << num1 * scen << endl << num1 * fst << endl << num1 * num2 << endl;
	
	return 0;
}
